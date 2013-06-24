#ifndef _EPROSIMA_CPP_EPROSIMATHREAD_H_
#define _EPROSIMA_CPP_EPROSIMATHREAD_H_

struct RTIOsapiThreadFactory;
struct RTIOsapiThread;
struct DDS_Duration_t;
struct RTINtpTime;

#define MAX_THREAD_IDENTIFIER_LENGTH 50
#define THREAD_STACK_SIZE 4096

#ifdef __cplusplus

namespace eProsima
{

    class eProsimaThread
    {
        public:

            eProsimaThread(const char *identifier, const struct RTIOsapiThreadFactory *threadFactory);

            virtual ~eProsimaThread();

        protected:

			bool m_ready;

			bool m_terminated;

            virtual void run() = 0;

            void sleep(int seconds);

            void usleep(int miliseconds);
			
			void sleep(struct RTINtpTime &time);

        private:

            char m_identifier[MAX_THREAD_IDENTIFIER_LENGTH];

            struct RTIOsapiThread *m_thread;

			const struct RTIOsapiThreadFactory *m_threadFactory;

            static void* execute(void *threadObject);
    };

} // FileDistributionUtils

#endif // __cplusplus

#endif // _EPROSIMA_CPP_EPROSIMATHREAD_H_
