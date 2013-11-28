#ifndef _testSER_H_
#define _testSER_H_

#include "test.h"
#include "fastcdr/FastCdr.h"

/*!
 * @brief This class offers an interface to serialize/deserialize the defined types in the user's IDL file  using a eprosima::FastBuffer.
 * @ingroup TEST
 */
class user_cpp_DllExport testSer : public eprosima::FastCdr
{ 
public:
    /*!
     * @brief This constructor creates a testSer object that could serialize/deserialize
     * the assigned buffer.
     *
     * @param buffer A reference to the buffer that contains or will contain the CDR representation.
     */
    testSer(eprosima::FastBuffer &buffer);
    
    /*!
     * @brief This function serialize a type simpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const simpleFastBuffers_10_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type simpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const simpleFastBuffers_10_Class &x);

    /*!
     * @brief This function deserialize a type simpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(simpleFastBuffers_10_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type simpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(simpleFastBuffers_10_Class &x);
    /*!
     * @brief This function serialize a type simpleFastBuffers_20_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const simpleFastBuffers_20_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type simpleFastBuffers_20_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const simpleFastBuffers_20_Class &x);

    /*!
     * @brief This function deserialize a type simpleFastBuffers_20_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_20_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(simpleFastBuffers_20_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type simpleFastBuffers_20_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_20_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(simpleFastBuffers_20_Class &x);
    /*!
     * @brief This function serialize a type simpleFastBuffers_30_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const simpleFastBuffers_30_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type simpleFastBuffers_30_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const simpleFastBuffers_30_Class &x);

    /*!
     * @brief This function deserialize a type simpleFastBuffers_30_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_30_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(simpleFastBuffers_30_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type simpleFastBuffers_30_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_30_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(simpleFastBuffers_30_Class &x);
    /*!
     * @brief This function serialize a type simpleFastBuffers_40_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const simpleFastBuffers_40_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type simpleFastBuffers_40_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const simpleFastBuffers_40_Class &x);

    /*!
     * @brief This function deserialize a type simpleFastBuffers_40_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_40_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(simpleFastBuffers_40_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type simpleFastBuffers_40_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_40_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(simpleFastBuffers_40_Class &x);
    /*!
     * @brief This function serialize a type simpleFastBuffers_50_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const simpleFastBuffers_50_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type simpleFastBuffers_50_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const simpleFastBuffers_50_Class &x);

    /*!
     * @brief This function deserialize a type simpleFastBuffers_50_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_50_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(simpleFastBuffers_50_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type simpleFastBuffers_50_Class.
     * @param x Reference to the variable that will store the simpleFastBuffers_50_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(simpleFastBuffers_50_Class &x);
    /*!
     * @brief This function serialize a type complexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const complexFastBuffers_2_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type complexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const complexFastBuffers_2_Class &x);

    /*!
     * @brief This function deserialize a type complexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(complexFastBuffers_2_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type complexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(complexFastBuffers_2_Class &x);
    /*!
     * @brief This function serialize a type complexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const complexFastBuffers_4_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type complexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const complexFastBuffers_4_Class &x);

    /*!
     * @brief This function deserialize a type complexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(complexFastBuffers_4_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type complexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(complexFastBuffers_4_Class &x);
    /*!
     * @brief This function serialize a type complexFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const complexFastBuffers_6_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type complexFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const complexFastBuffers_6_Class &x);

    /*!
     * @brief This function deserialize a type complexFastBuffers_6_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(complexFastBuffers_6_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type complexFastBuffers_6_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(complexFastBuffers_6_Class &x);
    /*!
     * @brief This function serialize a type complexFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const complexFastBuffers_8_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type complexFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const complexFastBuffers_8_Class &x);

    /*!
     * @brief This function deserialize a type complexFastBuffers_8_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(complexFastBuffers_8_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type complexFastBuffers_8_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(complexFastBuffers_8_Class &x);
    /*!
     * @brief This function serialize a type complexFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const complexFastBuffers_10_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type complexFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const complexFastBuffers_10_Class &x);

    /*!
     * @brief This function deserialize a type complexFastBuffers_10_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(complexFastBuffers_10_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type complexFastBuffers_10_Class.
     * @param x Reference to the variable that will store the complexFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(complexFastBuffers_10_Class &x);
    /*!
     * @brief This function serialize a type innersimpleFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innersimpleFastBuffers_2_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innersimpleFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innersimpleFastBuffers_2_Class &x);

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_2_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innersimpleFastBuffers_2_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_2_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innersimpleFastBuffers_2_Class &x);
    /*!
     * @brief This function serialize a type outersimpleFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outersimpleFastBuffers_2_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outersimpleFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outersimpleFastBuffers_2_Class &x);

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_2_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outersimpleFastBuffers_2_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_2_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outersimpleFastBuffers_2_Class &x);
    /*!
     * @brief This function serialize a type innersimpleFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innersimpleFastBuffers_4_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innersimpleFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innersimpleFastBuffers_4_Class &x);

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_4_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innersimpleFastBuffers_4_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_4_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innersimpleFastBuffers_4_Class &x);
    /*!
     * @brief This function serialize a type outersimpleFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outersimpleFastBuffers_4_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outersimpleFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outersimpleFastBuffers_4_Class &x);

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_4_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outersimpleFastBuffers_4_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_4_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outersimpleFastBuffers_4_Class &x);
    /*!
     * @brief This function serialize a type innersimpleFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innersimpleFastBuffers_6_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innersimpleFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innersimpleFastBuffers_6_Class &x);

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_6_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innersimpleFastBuffers_6_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_6_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innersimpleFastBuffers_6_Class &x);
    /*!
     * @brief This function serialize a type outersimpleFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outersimpleFastBuffers_6_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outersimpleFastBuffers_6_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outersimpleFastBuffers_6_Class &x);

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_6_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outersimpleFastBuffers_6_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_6_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_6_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outersimpleFastBuffers_6_Class &x);
    /*!
     * @brief This function serialize a type innersimpleFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innersimpleFastBuffers_8_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innersimpleFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innersimpleFastBuffers_8_Class &x);

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_8_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innersimpleFastBuffers_8_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_8_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innersimpleFastBuffers_8_Class &x);
    /*!
     * @brief This function serialize a type outersimpleFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outersimpleFastBuffers_8_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outersimpleFastBuffers_8_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outersimpleFastBuffers_8_Class &x);

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_8_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outersimpleFastBuffers_8_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_8_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_8_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outersimpleFastBuffers_8_Class &x);
    /*!
     * @brief This function serialize a type innersimpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innersimpleFastBuffers_10_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innersimpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innersimpleFastBuffers_10_Class &x);

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innersimpleFastBuffers_10_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innersimpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the innersimpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innersimpleFastBuffers_10_Class &x);
    /*!
     * @brief This function serialize a type outersimpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outersimpleFastBuffers_10_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outersimpleFastBuffers_10_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outersimpleFastBuffers_10_Class &x);

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outersimpleFastBuffers_10_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outersimpleFastBuffers_10_Class.
     * @param x Reference to the variable that will store the outersimpleFastBuffers_10_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outersimpleFastBuffers_10_Class &x);
    /*!
     * @brief This function serialize a type innercomplexFastBuffers_1_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innercomplexFastBuffers_1_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innercomplexFastBuffers_1_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innercomplexFastBuffers_1_Class &x);

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_1_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_1_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innercomplexFastBuffers_1_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_1_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_1_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innercomplexFastBuffers_1_Class &x);
    /*!
     * @brief This function serialize a type outercomplexFastBuffers_1_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outercomplexFastBuffers_1_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outercomplexFastBuffers_1_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outercomplexFastBuffers_1_Class &x);

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_1_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_1_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outercomplexFastBuffers_1_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_1_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_1_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outercomplexFastBuffers_1_Class &x);
    /*!
     * @brief This function serialize a type innercomplexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innercomplexFastBuffers_2_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innercomplexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innercomplexFastBuffers_2_Class &x);

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innercomplexFastBuffers_2_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innercomplexFastBuffers_2_Class &x);
    /*!
     * @brief This function serialize a type outercomplexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outercomplexFastBuffers_2_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outercomplexFastBuffers_2_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outercomplexFastBuffers_2_Class &x);

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outercomplexFastBuffers_2_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_2_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_2_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outercomplexFastBuffers_2_Class &x);
    /*!
     * @brief This function serialize a type innercomplexFastBuffers_3_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innercomplexFastBuffers_3_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innercomplexFastBuffers_3_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innercomplexFastBuffers_3_Class &x);

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_3_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_3_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innercomplexFastBuffers_3_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_3_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_3_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innercomplexFastBuffers_3_Class &x);
    /*!
     * @brief This function serialize a type outercomplexFastBuffers_3_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outercomplexFastBuffers_3_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outercomplexFastBuffers_3_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outercomplexFastBuffers_3_Class &x);

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_3_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_3_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outercomplexFastBuffers_3_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_3_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_3_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outercomplexFastBuffers_3_Class &x);
    /*!
     * @brief This function serialize a type innercomplexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innercomplexFastBuffers_4_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innercomplexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innercomplexFastBuffers_4_Class &x);

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innercomplexFastBuffers_4_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innercomplexFastBuffers_4_Class &x);
    /*!
     * @brief This function serialize a type outercomplexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outercomplexFastBuffers_4_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outercomplexFastBuffers_4_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outercomplexFastBuffers_4_Class &x);

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outercomplexFastBuffers_4_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_4_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_4_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outercomplexFastBuffers_4_Class &x);
    /*!
     * @brief This function serialize a type innercomplexFastBuffers_5_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const innercomplexFastBuffers_5_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type innercomplexFastBuffers_5_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const innercomplexFastBuffers_5_Class &x);

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_5_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_5_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(innercomplexFastBuffers_5_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type innercomplexFastBuffers_5_Class.
     * @param x Reference to the variable that will store the innercomplexFastBuffers_5_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(innercomplexFastBuffers_5_Class &x);
    /*!
     * @brief This function serialize a type outercomplexFastBuffers_5_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    inline testSer& operator<<(const outercomplexFastBuffers_5_Class &x){return serialize(x);}

    /*!
     * @brief This function serialize a type outercomplexFastBuffers_5_Class.
     * @param x Reference to a  that will be serialized in the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to serialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to serialize in an invalid value.
     */
    testSer& serialize(const outercomplexFastBuffers_5_Class &x);

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_5_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_5_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    inline testSer& operator>>(outercomplexFastBuffers_5_Class &x){return deserialize(x);}

    /*!
     * @brief This function deserialize a type outercomplexFastBuffers_5_Class.
     * @param x Reference to the variable that will store the outercomplexFastBuffers_5_Class read from the buffer.
     * @return Reference to the testSer object.
     * @exception NotEnoughMemoryException This exception is thrown trying to deserialize in a position that exceed the internal memory size.
     * @exception BadParamException This exception is thrown trying to deserialize in an invalid value.
     */
    testSer& deserialize(outercomplexFastBuffers_5_Class &x);
};

#endif // _testSER_H_