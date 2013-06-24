#ifndef _EPROSIMA_CPP_EPROSIMAQUEUE_H_
#define _EPROSIMA_CPP_EPROSIMAQUEUE_H_

#include "osapi/osapi_semaphore.h"

#ifdef __cplusplus

#include <queue>

namespace eProsima
{
    template<typename T>
    class eProsimaQueue
    {
        public:
            eProsimaQueue() : m_mutex(NULL)
            {
                m_mutex = RTIOsapiSemaphore_new(RTI_OSAPI_SEMAPHORE_KIND_MUTEX, NULL);
            }

            ~eProsimaQueue()
            {
				T *element;
				if(RTIOsapiSemaphore_take(m_mutex, NULL) == RTI_OSAPI_SEMAPHORE_STATUS_OK)
                {
                    while(m_queue.size() > 0)
                    {
                        element = m_queue.front();
                        m_queue.pop();
                        delete element;
                    }

                    RTIOsapiSemaphore_give(m_mutex);
                }
                RTIOsapiSemaphore_delete(m_mutex);
            }

            void put(T *element)
            {
                if(RTIOsapiSemaphore_take(m_mutex, NULL) == RTI_OSAPI_SEMAPHORE_STATUS_OK)
                {
                    m_queue.push(element);
                    RTIOsapiSemaphore_give(m_mutex);
                }
            }

            T* pop()
            {
                T *returnedValue = NULL;

                if(RTIOsapiSemaphore_take(m_mutex, NULL) == RTI_OSAPI_SEMAPHORE_STATUS_OK)
                {
                    if(m_queue.size() > 0)
                    {
                        returnedValue = m_queue.front();
                        m_queue.pop();
                    }

                    RTIOsapiSemaphore_give(m_mutex);
                }

                return returnedValue;
            }
        
        private:

            std::queue<T*> m_queue;

            struct RTIOsapiSemaphore *m_mutex;
    };

}; // eProsima

#endif // __cplusplus

#endif // _EPROSIMA_CPP_EPROSIMAQUEUE_H_
