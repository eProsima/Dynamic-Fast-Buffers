#ifndef _test_H_
#define _test_H_

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

#if defined(WIN32)
#if defined(USER_CPP_DLL_EXPORT)
#define user_cpp_DllExport __declspec( dllexport )
#else
#define user_cpp_DllExport
#endif
#else
#define user_cpp_DllExport
#endif

/*!
 * @brief This class represents the structure simpleFastBuffers_10_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport simpleFastBuffers_10_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    simpleFastBuffers_10_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~simpleFastBuffers_10_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object simpleFastBuffers_10_Class that will be copied.
     */
    simpleFastBuffers_10_Class(const simpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object simpleFastBuffers_10_Class that will be copied.
     */
    simpleFastBuffers_10_Class(simpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object simpleFastBuffers_10_Class that will be copied.
     */
    simpleFastBuffers_10_Class& operator=(const simpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object simpleFastBuffers_10_Class that will be copied.
     */
    simpleFastBuffers_10_Class& operator=(simpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int64_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int64_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int64_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_10_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 80;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_10_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 80;}
    
private:
    int64_t m_att1;
    int64_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
};
/*!
 * @brief This class represents the structure simpleFastBuffers_20_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport simpleFastBuffers_20_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    simpleFastBuffers_20_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~simpleFastBuffers_20_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object simpleFastBuffers_20_Class that will be copied.
     */
    simpleFastBuffers_20_Class(const simpleFastBuffers_20_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object simpleFastBuffers_20_Class that will be copied.
     */
    simpleFastBuffers_20_Class(simpleFastBuffers_20_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object simpleFastBuffers_20_Class that will be copied.
     */
    simpleFastBuffers_20_Class& operator=(const simpleFastBuffers_20_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object simpleFastBuffers_20_Class that will be copied.
     */
    simpleFastBuffers_20_Class& operator=(simpleFastBuffers_20_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int64_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int64_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int64_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(int64_t _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline int64_t att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline int64_t& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(int64_t _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline int64_t att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline int64_t& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(int64_t _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline int64_t att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline int64_t& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(int64_t _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline int64_t att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline int64_t& att20()
    {
        return m_att20;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_20_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 160;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_20_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 160;}
    
private:
    int64_t m_att1;
    int64_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    int64_t m_att17;
    int64_t m_att18;
    int64_t m_att19;
    int64_t m_att20;
};
/*!
 * @brief This class represents the structure simpleFastBuffers_30_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport simpleFastBuffers_30_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    simpleFastBuffers_30_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~simpleFastBuffers_30_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object simpleFastBuffers_30_Class that will be copied.
     */
    simpleFastBuffers_30_Class(const simpleFastBuffers_30_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object simpleFastBuffers_30_Class that will be copied.
     */
    simpleFastBuffers_30_Class(simpleFastBuffers_30_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object simpleFastBuffers_30_Class that will be copied.
     */
    simpleFastBuffers_30_Class& operator=(const simpleFastBuffers_30_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object simpleFastBuffers_30_Class that will be copied.
     */
    simpleFastBuffers_30_Class& operator=(simpleFastBuffers_30_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int64_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int64_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int64_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(int64_t _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline int64_t att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline int64_t& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(int64_t _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline int64_t att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline int64_t& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(int64_t _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline int64_t att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline int64_t& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(int64_t _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline int64_t att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline int64_t& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(int64_t _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline int64_t att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline int64_t& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(int64_t _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline int64_t att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline int64_t& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(int64_t _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline int64_t att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline int64_t& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(int64_t _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline int64_t att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline int64_t& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(int64_t _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline int64_t att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline int64_t& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(int64_t _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline int64_t att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline int64_t& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(int64_t _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline int64_t att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline int64_t& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(int64_t _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline int64_t att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline int64_t& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(int64_t _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline int64_t att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline int64_t& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(int64_t _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline int64_t att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline int64_t& att30()
    {
        return m_att30;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_30_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 240;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_30_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 240;}
    
private:
    int64_t m_att1;
    int64_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    int64_t m_att17;
    int64_t m_att18;
    int64_t m_att19;
    int64_t m_att20;
    int64_t m_att21;
    int64_t m_att22;
    int64_t m_att23;
    int64_t m_att24;
    int64_t m_att25;
    int64_t m_att26;
    int64_t m_att27;
    int64_t m_att28;
    int64_t m_att29;
    int64_t m_att30;
};
/*!
 * @brief This class represents the structure simpleFastBuffers_40_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport simpleFastBuffers_40_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    simpleFastBuffers_40_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~simpleFastBuffers_40_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object simpleFastBuffers_40_Class that will be copied.
     */
    simpleFastBuffers_40_Class(const simpleFastBuffers_40_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object simpleFastBuffers_40_Class that will be copied.
     */
    simpleFastBuffers_40_Class(simpleFastBuffers_40_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object simpleFastBuffers_40_Class that will be copied.
     */
    simpleFastBuffers_40_Class& operator=(const simpleFastBuffers_40_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object simpleFastBuffers_40_Class that will be copied.
     */
    simpleFastBuffers_40_Class& operator=(simpleFastBuffers_40_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int64_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int64_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int64_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(int64_t _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline int64_t att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline int64_t& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(int64_t _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline int64_t att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline int64_t& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(int64_t _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline int64_t att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline int64_t& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(int64_t _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline int64_t att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline int64_t& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(int64_t _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline int64_t att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline int64_t& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(int64_t _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline int64_t att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline int64_t& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(int64_t _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline int64_t att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline int64_t& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(int64_t _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline int64_t att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline int64_t& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(int64_t _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline int64_t att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline int64_t& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(int64_t _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline int64_t att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline int64_t& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(int64_t _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline int64_t att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline int64_t& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(int64_t _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline int64_t att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline int64_t& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(int64_t _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline int64_t att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline int64_t& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(int64_t _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline int64_t att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline int64_t& att30()
    {
        return m_att30;
    }
    /*!
     * @brief This function sets a value in member att31
     * @param _att31 New value for member att31
     */
    inline void att31(int64_t _att31)
    {
        m_att31 = _att31;
    }

    /*!
     * @brief This function returns the value of member att31
     * @return Value of member att31
     */
    inline int64_t att31() const
    {
        return m_att31;
    }

    /*!
     * @brief This function returns a reference to member att31
     * @return Reference to member att31
     */
    inline int64_t& att31()
    {
        return m_att31;
    }
    /*!
     * @brief This function sets a value in member att32
     * @param _att32 New value for member att32
     */
    inline void att32(int64_t _att32)
    {
        m_att32 = _att32;
    }

    /*!
     * @brief This function returns the value of member att32
     * @return Value of member att32
     */
    inline int64_t att32() const
    {
        return m_att32;
    }

    /*!
     * @brief This function returns a reference to member att32
     * @return Reference to member att32
     */
    inline int64_t& att32()
    {
        return m_att32;
    }
    /*!
     * @brief This function sets a value in member att33
     * @param _att33 New value for member att33
     */
    inline void att33(int64_t _att33)
    {
        m_att33 = _att33;
    }

    /*!
     * @brief This function returns the value of member att33
     * @return Value of member att33
     */
    inline int64_t att33() const
    {
        return m_att33;
    }

    /*!
     * @brief This function returns a reference to member att33
     * @return Reference to member att33
     */
    inline int64_t& att33()
    {
        return m_att33;
    }
    /*!
     * @brief This function sets a value in member att34
     * @param _att34 New value for member att34
     */
    inline void att34(int64_t _att34)
    {
        m_att34 = _att34;
    }

    /*!
     * @brief This function returns the value of member att34
     * @return Value of member att34
     */
    inline int64_t att34() const
    {
        return m_att34;
    }

    /*!
     * @brief This function returns a reference to member att34
     * @return Reference to member att34
     */
    inline int64_t& att34()
    {
        return m_att34;
    }
    /*!
     * @brief This function sets a value in member att35
     * @param _att35 New value for member att35
     */
    inline void att35(int64_t _att35)
    {
        m_att35 = _att35;
    }

    /*!
     * @brief This function returns the value of member att35
     * @return Value of member att35
     */
    inline int64_t att35() const
    {
        return m_att35;
    }

    /*!
     * @brief This function returns a reference to member att35
     * @return Reference to member att35
     */
    inline int64_t& att35()
    {
        return m_att35;
    }
    /*!
     * @brief This function sets a value in member att36
     * @param _att36 New value for member att36
     */
    inline void att36(int64_t _att36)
    {
        m_att36 = _att36;
    }

    /*!
     * @brief This function returns the value of member att36
     * @return Value of member att36
     */
    inline int64_t att36() const
    {
        return m_att36;
    }

    /*!
     * @brief This function returns a reference to member att36
     * @return Reference to member att36
     */
    inline int64_t& att36()
    {
        return m_att36;
    }
    /*!
     * @brief This function sets a value in member att37
     * @param _att37 New value for member att37
     */
    inline void att37(int64_t _att37)
    {
        m_att37 = _att37;
    }

    /*!
     * @brief This function returns the value of member att37
     * @return Value of member att37
     */
    inline int64_t att37() const
    {
        return m_att37;
    }

    /*!
     * @brief This function returns a reference to member att37
     * @return Reference to member att37
     */
    inline int64_t& att37()
    {
        return m_att37;
    }
    /*!
     * @brief This function sets a value in member att38
     * @param _att38 New value for member att38
     */
    inline void att38(int64_t _att38)
    {
        m_att38 = _att38;
    }

    /*!
     * @brief This function returns the value of member att38
     * @return Value of member att38
     */
    inline int64_t att38() const
    {
        return m_att38;
    }

    /*!
     * @brief This function returns a reference to member att38
     * @return Reference to member att38
     */
    inline int64_t& att38()
    {
        return m_att38;
    }
    /*!
     * @brief This function sets a value in member att39
     * @param _att39 New value for member att39
     */
    inline void att39(int64_t _att39)
    {
        m_att39 = _att39;
    }

    /*!
     * @brief This function returns the value of member att39
     * @return Value of member att39
     */
    inline int64_t att39() const
    {
        return m_att39;
    }

    /*!
     * @brief This function returns a reference to member att39
     * @return Reference to member att39
     */
    inline int64_t& att39()
    {
        return m_att39;
    }
    /*!
     * @brief This function sets a value in member att40
     * @param _att40 New value for member att40
     */
    inline void att40(int64_t _att40)
    {
        m_att40 = _att40;
    }

    /*!
     * @brief This function returns the value of member att40
     * @return Value of member att40
     */
    inline int64_t att40() const
    {
        return m_att40;
    }

    /*!
     * @brief This function returns a reference to member att40
     * @return Reference to member att40
     */
    inline int64_t& att40()
    {
        return m_att40;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_40_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 320;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_40_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 320;}
    
private:
    int64_t m_att1;
    int64_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    int64_t m_att17;
    int64_t m_att18;
    int64_t m_att19;
    int64_t m_att20;
    int64_t m_att21;
    int64_t m_att22;
    int64_t m_att23;
    int64_t m_att24;
    int64_t m_att25;
    int64_t m_att26;
    int64_t m_att27;
    int64_t m_att28;
    int64_t m_att29;
    int64_t m_att30;
    int64_t m_att31;
    int64_t m_att32;
    int64_t m_att33;
    int64_t m_att34;
    int64_t m_att35;
    int64_t m_att36;
    int64_t m_att37;
    int64_t m_att38;
    int64_t m_att39;
    int64_t m_att40;
};
/*!
 * @brief This class represents the structure simpleFastBuffers_50_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport simpleFastBuffers_50_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    simpleFastBuffers_50_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~simpleFastBuffers_50_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object simpleFastBuffers_50_Class that will be copied.
     */
    simpleFastBuffers_50_Class(const simpleFastBuffers_50_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object simpleFastBuffers_50_Class that will be copied.
     */
    simpleFastBuffers_50_Class(simpleFastBuffers_50_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object simpleFastBuffers_50_Class that will be copied.
     */
    simpleFastBuffers_50_Class& operator=(const simpleFastBuffers_50_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object simpleFastBuffers_50_Class that will be copied.
     */
    simpleFastBuffers_50_Class& operator=(simpleFastBuffers_50_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int64_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int64_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int64_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(int64_t _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline int64_t att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline int64_t& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(int64_t _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline int64_t att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline int64_t& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(int64_t _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline int64_t att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline int64_t& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(int64_t _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline int64_t att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline int64_t& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(int64_t _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline int64_t att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline int64_t& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(int64_t _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline int64_t att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline int64_t& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(int64_t _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline int64_t att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline int64_t& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(int64_t _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline int64_t att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline int64_t& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(int64_t _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline int64_t att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline int64_t& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(int64_t _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline int64_t att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline int64_t& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(int64_t _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline int64_t att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline int64_t& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(int64_t _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline int64_t att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline int64_t& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(int64_t _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline int64_t att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline int64_t& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(int64_t _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline int64_t att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline int64_t& att30()
    {
        return m_att30;
    }
    /*!
     * @brief This function sets a value in member att31
     * @param _att31 New value for member att31
     */
    inline void att31(int64_t _att31)
    {
        m_att31 = _att31;
    }

    /*!
     * @brief This function returns the value of member att31
     * @return Value of member att31
     */
    inline int64_t att31() const
    {
        return m_att31;
    }

    /*!
     * @brief This function returns a reference to member att31
     * @return Reference to member att31
     */
    inline int64_t& att31()
    {
        return m_att31;
    }
    /*!
     * @brief This function sets a value in member att32
     * @param _att32 New value for member att32
     */
    inline void att32(int64_t _att32)
    {
        m_att32 = _att32;
    }

    /*!
     * @brief This function returns the value of member att32
     * @return Value of member att32
     */
    inline int64_t att32() const
    {
        return m_att32;
    }

    /*!
     * @brief This function returns a reference to member att32
     * @return Reference to member att32
     */
    inline int64_t& att32()
    {
        return m_att32;
    }
    /*!
     * @brief This function sets a value in member att33
     * @param _att33 New value for member att33
     */
    inline void att33(int64_t _att33)
    {
        m_att33 = _att33;
    }

    /*!
     * @brief This function returns the value of member att33
     * @return Value of member att33
     */
    inline int64_t att33() const
    {
        return m_att33;
    }

    /*!
     * @brief This function returns a reference to member att33
     * @return Reference to member att33
     */
    inline int64_t& att33()
    {
        return m_att33;
    }
    /*!
     * @brief This function sets a value in member att34
     * @param _att34 New value for member att34
     */
    inline void att34(int64_t _att34)
    {
        m_att34 = _att34;
    }

    /*!
     * @brief This function returns the value of member att34
     * @return Value of member att34
     */
    inline int64_t att34() const
    {
        return m_att34;
    }

    /*!
     * @brief This function returns a reference to member att34
     * @return Reference to member att34
     */
    inline int64_t& att34()
    {
        return m_att34;
    }
    /*!
     * @brief This function sets a value in member att35
     * @param _att35 New value for member att35
     */
    inline void att35(int64_t _att35)
    {
        m_att35 = _att35;
    }

    /*!
     * @brief This function returns the value of member att35
     * @return Value of member att35
     */
    inline int64_t att35() const
    {
        return m_att35;
    }

    /*!
     * @brief This function returns a reference to member att35
     * @return Reference to member att35
     */
    inline int64_t& att35()
    {
        return m_att35;
    }
    /*!
     * @brief This function sets a value in member att36
     * @param _att36 New value for member att36
     */
    inline void att36(int64_t _att36)
    {
        m_att36 = _att36;
    }

    /*!
     * @brief This function returns the value of member att36
     * @return Value of member att36
     */
    inline int64_t att36() const
    {
        return m_att36;
    }

    /*!
     * @brief This function returns a reference to member att36
     * @return Reference to member att36
     */
    inline int64_t& att36()
    {
        return m_att36;
    }
    /*!
     * @brief This function sets a value in member att37
     * @param _att37 New value for member att37
     */
    inline void att37(int64_t _att37)
    {
        m_att37 = _att37;
    }

    /*!
     * @brief This function returns the value of member att37
     * @return Value of member att37
     */
    inline int64_t att37() const
    {
        return m_att37;
    }

    /*!
     * @brief This function returns a reference to member att37
     * @return Reference to member att37
     */
    inline int64_t& att37()
    {
        return m_att37;
    }
    /*!
     * @brief This function sets a value in member att38
     * @param _att38 New value for member att38
     */
    inline void att38(int64_t _att38)
    {
        m_att38 = _att38;
    }

    /*!
     * @brief This function returns the value of member att38
     * @return Value of member att38
     */
    inline int64_t att38() const
    {
        return m_att38;
    }

    /*!
     * @brief This function returns a reference to member att38
     * @return Reference to member att38
     */
    inline int64_t& att38()
    {
        return m_att38;
    }
    /*!
     * @brief This function sets a value in member att39
     * @param _att39 New value for member att39
     */
    inline void att39(int64_t _att39)
    {
        m_att39 = _att39;
    }

    /*!
     * @brief This function returns the value of member att39
     * @return Value of member att39
     */
    inline int64_t att39() const
    {
        return m_att39;
    }

    /*!
     * @brief This function returns a reference to member att39
     * @return Reference to member att39
     */
    inline int64_t& att39()
    {
        return m_att39;
    }
    /*!
     * @brief This function sets a value in member att40
     * @param _att40 New value for member att40
     */
    inline void att40(int64_t _att40)
    {
        m_att40 = _att40;
    }

    /*!
     * @brief This function returns the value of member att40
     * @return Value of member att40
     */
    inline int64_t att40() const
    {
        return m_att40;
    }

    /*!
     * @brief This function returns a reference to member att40
     * @return Reference to member att40
     */
    inline int64_t& att40()
    {
        return m_att40;
    }
    /*!
     * @brief This function sets a value in member att41
     * @param _att41 New value for member att41
     */
    inline void att41(int64_t _att41)
    {
        m_att41 = _att41;
    }

    /*!
     * @brief This function returns the value of member att41
     * @return Value of member att41
     */
    inline int64_t att41() const
    {
        return m_att41;
    }

    /*!
     * @brief This function returns a reference to member att41
     * @return Reference to member att41
     */
    inline int64_t& att41()
    {
        return m_att41;
    }
    /*!
     * @brief This function sets a value in member att42
     * @param _att42 New value for member att42
     */
    inline void att42(int64_t _att42)
    {
        m_att42 = _att42;
    }

    /*!
     * @brief This function returns the value of member att42
     * @return Value of member att42
     */
    inline int64_t att42() const
    {
        return m_att42;
    }

    /*!
     * @brief This function returns a reference to member att42
     * @return Reference to member att42
     */
    inline int64_t& att42()
    {
        return m_att42;
    }
    /*!
     * @brief This function sets a value in member att43
     * @param _att43 New value for member att43
     */
    inline void att43(int64_t _att43)
    {
        m_att43 = _att43;
    }

    /*!
     * @brief This function returns the value of member att43
     * @return Value of member att43
     */
    inline int64_t att43() const
    {
        return m_att43;
    }

    /*!
     * @brief This function returns a reference to member att43
     * @return Reference to member att43
     */
    inline int64_t& att43()
    {
        return m_att43;
    }
    /*!
     * @brief This function sets a value in member att44
     * @param _att44 New value for member att44
     */
    inline void att44(int64_t _att44)
    {
        m_att44 = _att44;
    }

    /*!
     * @brief This function returns the value of member att44
     * @return Value of member att44
     */
    inline int64_t att44() const
    {
        return m_att44;
    }

    /*!
     * @brief This function returns a reference to member att44
     * @return Reference to member att44
     */
    inline int64_t& att44()
    {
        return m_att44;
    }
    /*!
     * @brief This function sets a value in member att45
     * @param _att45 New value for member att45
     */
    inline void att45(int64_t _att45)
    {
        m_att45 = _att45;
    }

    /*!
     * @brief This function returns the value of member att45
     * @return Value of member att45
     */
    inline int64_t att45() const
    {
        return m_att45;
    }

    /*!
     * @brief This function returns a reference to member att45
     * @return Reference to member att45
     */
    inline int64_t& att45()
    {
        return m_att45;
    }
    /*!
     * @brief This function sets a value in member att46
     * @param _att46 New value for member att46
     */
    inline void att46(int64_t _att46)
    {
        m_att46 = _att46;
    }

    /*!
     * @brief This function returns the value of member att46
     * @return Value of member att46
     */
    inline int64_t att46() const
    {
        return m_att46;
    }

    /*!
     * @brief This function returns a reference to member att46
     * @return Reference to member att46
     */
    inline int64_t& att46()
    {
        return m_att46;
    }
    /*!
     * @brief This function sets a value in member att47
     * @param _att47 New value for member att47
     */
    inline void att47(int64_t _att47)
    {
        m_att47 = _att47;
    }

    /*!
     * @brief This function returns the value of member att47
     * @return Value of member att47
     */
    inline int64_t att47() const
    {
        return m_att47;
    }

    /*!
     * @brief This function returns a reference to member att47
     * @return Reference to member att47
     */
    inline int64_t& att47()
    {
        return m_att47;
    }
    /*!
     * @brief This function sets a value in member att48
     * @param _att48 New value for member att48
     */
    inline void att48(int64_t _att48)
    {
        m_att48 = _att48;
    }

    /*!
     * @brief This function returns the value of member att48
     * @return Value of member att48
     */
    inline int64_t att48() const
    {
        return m_att48;
    }

    /*!
     * @brief This function returns a reference to member att48
     * @return Reference to member att48
     */
    inline int64_t& att48()
    {
        return m_att48;
    }
    /*!
     * @brief This function sets a value in member att49
     * @param _att49 New value for member att49
     */
    inline void att49(int64_t _att49)
    {
        m_att49 = _att49;
    }

    /*!
     * @brief This function returns the value of member att49
     * @return Value of member att49
     */
    inline int64_t att49() const
    {
        return m_att49;
    }

    /*!
     * @brief This function returns a reference to member att49
     * @return Reference to member att49
     */
    inline int64_t& att49()
    {
        return m_att49;
    }
    /*!
     * @brief This function sets a value in member att50
     * @param _att50 New value for member att50
     */
    inline void att50(int64_t _att50)
    {
        m_att50 = _att50;
    }

    /*!
     * @brief This function returns the value of member att50
     * @return Value of member att50
     */
    inline int64_t att50() const
    {
        return m_att50;
    }

    /*!
     * @brief This function returns a reference to member att50
     * @return Reference to member att50
     */
    inline int64_t& att50()
    {
        return m_att50;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_50_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 400;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type simpleFastBuffers_50_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 400;}
    
private:
    int64_t m_att1;
    int64_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    int64_t m_att17;
    int64_t m_att18;
    int64_t m_att19;
    int64_t m_att20;
    int64_t m_att21;
    int64_t m_att22;
    int64_t m_att23;
    int64_t m_att24;
    int64_t m_att25;
    int64_t m_att26;
    int64_t m_att27;
    int64_t m_att28;
    int64_t m_att29;
    int64_t m_att30;
    int64_t m_att31;
    int64_t m_att32;
    int64_t m_att33;
    int64_t m_att34;
    int64_t m_att35;
    int64_t m_att36;
    int64_t m_att37;
    int64_t m_att38;
    int64_t m_att39;
    int64_t m_att40;
    int64_t m_att41;
    int64_t m_att42;
    int64_t m_att43;
    int64_t m_att44;
    int64_t m_att45;
    int64_t m_att46;
    int64_t m_att47;
    int64_t m_att48;
    int64_t m_att49;
    int64_t m_att50;
};
/*!
 * @brief This class represents the structure complexFastBuffers_2_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport complexFastBuffers_2_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    complexFastBuffers_2_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~complexFastBuffers_2_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object complexFastBuffers_2_Class that will be copied.
     */
    complexFastBuffers_2_Class(const complexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object complexFastBuffers_2_Class that will be copied.
     */
    complexFastBuffers_2_Class(complexFastBuffers_2_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object complexFastBuffers_2_Class that will be copied.
     */
    complexFastBuffers_2_Class& operator=(const complexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object complexFastBuffers_2_Class that will be copied.
     */
    complexFastBuffers_2_Class& operator=(complexFastBuffers_2_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function copies the value in member att5
     * @param _att5 New value to be copied in member att5
     */
    inline void att5(const std::string &_att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function moves the value in member att5
     * @param _att5 New value to be moved in member att5
     */
    inline void att5(std::string &&_att5)
    {
        m_att5 = std::move(_att5);
    }

    /*!
     * @brief This function returns a constant reference to member att5
     * @return Constant reference to member att5
     */
    inline const std::string& att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline std::string& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function copies the value in member att6
     * @param _att6 New value to be copied in member att6
     */
    inline void att6(const std::string &_att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function moves the value in member att6
     * @param _att6 New value to be moved in member att6
     */
    inline void att6(std::string &&_att6)
    {
        m_att6 = std::move(_att6);
    }

    /*!
     * @brief This function returns a constant reference to member att6
     * @return Constant reference to member att6
     */
    inline const std::string& att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline std::string& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(float _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline float att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline float& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(float _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline float att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline float& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(double _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline double att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline double& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(double _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline double att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline double& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(bool _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline bool att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline bool& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(bool _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline bool att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline bool& att12()
    {
        return m_att12;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_2_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 570;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_2_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 568;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    std::string m_att5;
    std::string m_att6;
    float m_att7;
    float m_att8;
    double m_att9;
    double m_att10;
    bool m_att11;
    bool m_att12;
};
/*!
 * @brief This class represents the structure complexFastBuffers_4_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport complexFastBuffers_4_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    complexFastBuffers_4_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~complexFastBuffers_4_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object complexFastBuffers_4_Class that will be copied.
     */
    complexFastBuffers_4_Class(const complexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object complexFastBuffers_4_Class that will be copied.
     */
    complexFastBuffers_4_Class(complexFastBuffers_4_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object complexFastBuffers_4_Class that will be copied.
     */
    complexFastBuffers_4_Class& operator=(const complexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object complexFastBuffers_4_Class that will be copied.
     */
    complexFastBuffers_4_Class& operator=(complexFastBuffers_4_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const std::string &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(std::string &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const std::string& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline std::string& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function copies the value in member att11
     * @param _att11 New value to be copied in member att11
     */
    inline void att11(const std::string &_att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function moves the value in member att11
     * @param _att11 New value to be moved in member att11
     */
    inline void att11(std::string &&_att11)
    {
        m_att11 = std::move(_att11);
    }

    /*!
     * @brief This function returns a constant reference to member att11
     * @return Constant reference to member att11
     */
    inline const std::string& att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline std::string& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function copies the value in member att12
     * @param _att12 New value to be copied in member att12
     */
    inline void att12(const std::string &_att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function moves the value in member att12
     * @param _att12 New value to be moved in member att12
     */
    inline void att12(std::string &&_att12)
    {
        m_att12 = std::move(_att12);
    }

    /*!
     * @brief This function returns a constant reference to member att12
     * @return Constant reference to member att12
     */
    inline const std::string& att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline std::string& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(float _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline float att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline float& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(float _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline float att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline float& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(float _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline float att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline float& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(double _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline double att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline double& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(double _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline double att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline double& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(double _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline double att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline double& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(double _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline double att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline double& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(bool _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline bool att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline bool& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(bool _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline bool att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline bool& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(bool _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline bool att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline bool& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(bool _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline bool att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline bool& att24()
    {
        return m_att24;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_4_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 1140;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_4_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 1136;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    std::string m_att9;
    std::string m_att10;
    std::string m_att11;
    std::string m_att12;
    float m_att13;
    float m_att14;
    float m_att15;
    float m_att16;
    double m_att17;
    double m_att18;
    double m_att19;
    double m_att20;
    bool m_att21;
    bool m_att22;
    bool m_att23;
    bool m_att24;
};
/*!
 * @brief This class represents the structure complexFastBuffers_6_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport complexFastBuffers_6_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    complexFastBuffers_6_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~complexFastBuffers_6_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object complexFastBuffers_6_Class that will be copied.
     */
    complexFastBuffers_6_Class(const complexFastBuffers_6_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object complexFastBuffers_6_Class that will be copied.
     */
    complexFastBuffers_6_Class(complexFastBuffers_6_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object complexFastBuffers_6_Class that will be copied.
     */
    complexFastBuffers_6_Class& operator=(const complexFastBuffers_6_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object complexFastBuffers_6_Class that will be copied.
     */
    complexFastBuffers_6_Class& operator=(complexFastBuffers_6_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function copies the value in member att13
     * @param _att13 New value to be copied in member att13
     */
    inline void att13(const std::string &_att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function moves the value in member att13
     * @param _att13 New value to be moved in member att13
     */
    inline void att13(std::string &&_att13)
    {
        m_att13 = std::move(_att13);
    }

    /*!
     * @brief This function returns a constant reference to member att13
     * @return Constant reference to member att13
     */
    inline const std::string& att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline std::string& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function copies the value in member att14
     * @param _att14 New value to be copied in member att14
     */
    inline void att14(const std::string &_att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function moves the value in member att14
     * @param _att14 New value to be moved in member att14
     */
    inline void att14(std::string &&_att14)
    {
        m_att14 = std::move(_att14);
    }

    /*!
     * @brief This function returns a constant reference to member att14
     * @return Constant reference to member att14
     */
    inline const std::string& att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline std::string& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function copies the value in member att15
     * @param _att15 New value to be copied in member att15
     */
    inline void att15(const std::string &_att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function moves the value in member att15
     * @param _att15 New value to be moved in member att15
     */
    inline void att15(std::string &&_att15)
    {
        m_att15 = std::move(_att15);
    }

    /*!
     * @brief This function returns a constant reference to member att15
     * @return Constant reference to member att15
     */
    inline const std::string& att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline std::string& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function copies the value in member att16
     * @param _att16 New value to be copied in member att16
     */
    inline void att16(const std::string &_att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function moves the value in member att16
     * @param _att16 New value to be moved in member att16
     */
    inline void att16(std::string &&_att16)
    {
        m_att16 = std::move(_att16);
    }

    /*!
     * @brief This function returns a constant reference to member att16
     * @return Constant reference to member att16
     */
    inline const std::string& att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline std::string& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function copies the value in member att17
     * @param _att17 New value to be copied in member att17
     */
    inline void att17(const std::string &_att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function moves the value in member att17
     * @param _att17 New value to be moved in member att17
     */
    inline void att17(std::string &&_att17)
    {
        m_att17 = std::move(_att17);
    }

    /*!
     * @brief This function returns a constant reference to member att17
     * @return Constant reference to member att17
     */
    inline const std::string& att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline std::string& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function copies the value in member att18
     * @param _att18 New value to be copied in member att18
     */
    inline void att18(const std::string &_att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function moves the value in member att18
     * @param _att18 New value to be moved in member att18
     */
    inline void att18(std::string &&_att18)
    {
        m_att18 = std::move(_att18);
    }

    /*!
     * @brief This function returns a constant reference to member att18
     * @return Constant reference to member att18
     */
    inline const std::string& att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline std::string& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(float _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline float att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline float& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(float _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline float att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline float& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(float _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline float att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline float& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(float _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline float att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline float& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(float _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline float att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline float& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(float _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline float att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline float& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(double _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline double att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline double& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(double _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline double att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline double& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(double _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline double att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline double& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(double _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline double att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline double& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(double _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline double att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline double& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(double _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline double att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline double& att30()
    {
        return m_att30;
    }
    /*!
     * @brief This function sets a value in member att31
     * @param _att31 New value for member att31
     */
    inline void att31(bool _att31)
    {
        m_att31 = _att31;
    }

    /*!
     * @brief This function returns the value of member att31
     * @return Value of member att31
     */
    inline bool att31() const
    {
        return m_att31;
    }

    /*!
     * @brief This function returns a reference to member att31
     * @return Reference to member att31
     */
    inline bool& att31()
    {
        return m_att31;
    }
    /*!
     * @brief This function sets a value in member att32
     * @param _att32 New value for member att32
     */
    inline void att32(bool _att32)
    {
        m_att32 = _att32;
    }

    /*!
     * @brief This function returns the value of member att32
     * @return Value of member att32
     */
    inline bool att32() const
    {
        return m_att32;
    }

    /*!
     * @brief This function returns a reference to member att32
     * @return Reference to member att32
     */
    inline bool& att32()
    {
        return m_att32;
    }
    /*!
     * @brief This function sets a value in member att33
     * @param _att33 New value for member att33
     */
    inline void att33(bool _att33)
    {
        m_att33 = _att33;
    }

    /*!
     * @brief This function returns the value of member att33
     * @return Value of member att33
     */
    inline bool att33() const
    {
        return m_att33;
    }

    /*!
     * @brief This function returns a reference to member att33
     * @return Reference to member att33
     */
    inline bool& att33()
    {
        return m_att33;
    }
    /*!
     * @brief This function sets a value in member att34
     * @param _att34 New value for member att34
     */
    inline void att34(bool _att34)
    {
        m_att34 = _att34;
    }

    /*!
     * @brief This function returns the value of member att34
     * @return Value of member att34
     */
    inline bool att34() const
    {
        return m_att34;
    }

    /*!
     * @brief This function returns a reference to member att34
     * @return Reference to member att34
     */
    inline bool& att34()
    {
        return m_att34;
    }
    /*!
     * @brief This function sets a value in member att35
     * @param _att35 New value for member att35
     */
    inline void att35(bool _att35)
    {
        m_att35 = _att35;
    }

    /*!
     * @brief This function returns the value of member att35
     * @return Value of member att35
     */
    inline bool att35() const
    {
        return m_att35;
    }

    /*!
     * @brief This function returns a reference to member att35
     * @return Reference to member att35
     */
    inline bool& att35()
    {
        return m_att35;
    }
    /*!
     * @brief This function sets a value in member att36
     * @param _att36 New value for member att36
     */
    inline void att36(bool _att36)
    {
        m_att36 = _att36;
    }

    /*!
     * @brief This function returns the value of member att36
     * @return Value of member att36
     */
    inline bool att36() const
    {
        return m_att36;
    }

    /*!
     * @brief This function returns a reference to member att36
     * @return Reference to member att36
     */
    inline bool& att36()
    {
        return m_att36;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_6_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 1710;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_6_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 1704;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    std::string m_att13;
    std::string m_att14;
    std::string m_att15;
    std::string m_att16;
    std::string m_att17;
    std::string m_att18;
    float m_att19;
    float m_att20;
    float m_att21;
    float m_att22;
    float m_att23;
    float m_att24;
    double m_att25;
    double m_att26;
    double m_att27;
    double m_att28;
    double m_att29;
    double m_att30;
    bool m_att31;
    bool m_att32;
    bool m_att33;
    bool m_att34;
    bool m_att35;
    bool m_att36;
};
/*!
 * @brief This class represents the structure complexFastBuffers_8_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport complexFastBuffers_8_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    complexFastBuffers_8_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~complexFastBuffers_8_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object complexFastBuffers_8_Class that will be copied.
     */
    complexFastBuffers_8_Class(const complexFastBuffers_8_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object complexFastBuffers_8_Class that will be copied.
     */
    complexFastBuffers_8_Class(complexFastBuffers_8_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object complexFastBuffers_8_Class that will be copied.
     */
    complexFastBuffers_8_Class& operator=(const complexFastBuffers_8_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object complexFastBuffers_8_Class that will be copied.
     */
    complexFastBuffers_8_Class& operator=(complexFastBuffers_8_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int32_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int32_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int32_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int32_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int32_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int32_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function copies the value in member att17
     * @param _att17 New value to be copied in member att17
     */
    inline void att17(const std::string &_att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function moves the value in member att17
     * @param _att17 New value to be moved in member att17
     */
    inline void att17(std::string &&_att17)
    {
        m_att17 = std::move(_att17);
    }

    /*!
     * @brief This function returns a constant reference to member att17
     * @return Constant reference to member att17
     */
    inline const std::string& att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline std::string& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function copies the value in member att18
     * @param _att18 New value to be copied in member att18
     */
    inline void att18(const std::string &_att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function moves the value in member att18
     * @param _att18 New value to be moved in member att18
     */
    inline void att18(std::string &&_att18)
    {
        m_att18 = std::move(_att18);
    }

    /*!
     * @brief This function returns a constant reference to member att18
     * @return Constant reference to member att18
     */
    inline const std::string& att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline std::string& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function copies the value in member att19
     * @param _att19 New value to be copied in member att19
     */
    inline void att19(const std::string &_att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function moves the value in member att19
     * @param _att19 New value to be moved in member att19
     */
    inline void att19(std::string &&_att19)
    {
        m_att19 = std::move(_att19);
    }

    /*!
     * @brief This function returns a constant reference to member att19
     * @return Constant reference to member att19
     */
    inline const std::string& att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline std::string& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function copies the value in member att20
     * @param _att20 New value to be copied in member att20
     */
    inline void att20(const std::string &_att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function moves the value in member att20
     * @param _att20 New value to be moved in member att20
     */
    inline void att20(std::string &&_att20)
    {
        m_att20 = std::move(_att20);
    }

    /*!
     * @brief This function returns a constant reference to member att20
     * @return Constant reference to member att20
     */
    inline const std::string& att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline std::string& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function copies the value in member att21
     * @param _att21 New value to be copied in member att21
     */
    inline void att21(const std::string &_att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function moves the value in member att21
     * @param _att21 New value to be moved in member att21
     */
    inline void att21(std::string &&_att21)
    {
        m_att21 = std::move(_att21);
    }

    /*!
     * @brief This function returns a constant reference to member att21
     * @return Constant reference to member att21
     */
    inline const std::string& att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline std::string& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function copies the value in member att22
     * @param _att22 New value to be copied in member att22
     */
    inline void att22(const std::string &_att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function moves the value in member att22
     * @param _att22 New value to be moved in member att22
     */
    inline void att22(std::string &&_att22)
    {
        m_att22 = std::move(_att22);
    }

    /*!
     * @brief This function returns a constant reference to member att22
     * @return Constant reference to member att22
     */
    inline const std::string& att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline std::string& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function copies the value in member att23
     * @param _att23 New value to be copied in member att23
     */
    inline void att23(const std::string &_att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function moves the value in member att23
     * @param _att23 New value to be moved in member att23
     */
    inline void att23(std::string &&_att23)
    {
        m_att23 = std::move(_att23);
    }

    /*!
     * @brief This function returns a constant reference to member att23
     * @return Constant reference to member att23
     */
    inline const std::string& att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline std::string& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function copies the value in member att24
     * @param _att24 New value to be copied in member att24
     */
    inline void att24(const std::string &_att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function moves the value in member att24
     * @param _att24 New value to be moved in member att24
     */
    inline void att24(std::string &&_att24)
    {
        m_att24 = std::move(_att24);
    }

    /*!
     * @brief This function returns a constant reference to member att24
     * @return Constant reference to member att24
     */
    inline const std::string& att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline std::string& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(float _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline float att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline float& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(float _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline float att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline float& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(float _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline float att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline float& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(float _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline float att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline float& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(float _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline float att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline float& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(float _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline float att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline float& att30()
    {
        return m_att30;
    }
    /*!
     * @brief This function sets a value in member att31
     * @param _att31 New value for member att31
     */
    inline void att31(float _att31)
    {
        m_att31 = _att31;
    }

    /*!
     * @brief This function returns the value of member att31
     * @return Value of member att31
     */
    inline float att31() const
    {
        return m_att31;
    }

    /*!
     * @brief This function returns a reference to member att31
     * @return Reference to member att31
     */
    inline float& att31()
    {
        return m_att31;
    }
    /*!
     * @brief This function sets a value in member att32
     * @param _att32 New value for member att32
     */
    inline void att32(float _att32)
    {
        m_att32 = _att32;
    }

    /*!
     * @brief This function returns the value of member att32
     * @return Value of member att32
     */
    inline float att32() const
    {
        return m_att32;
    }

    /*!
     * @brief This function returns a reference to member att32
     * @return Reference to member att32
     */
    inline float& att32()
    {
        return m_att32;
    }
    /*!
     * @brief This function sets a value in member att33
     * @param _att33 New value for member att33
     */
    inline void att33(double _att33)
    {
        m_att33 = _att33;
    }

    /*!
     * @brief This function returns the value of member att33
     * @return Value of member att33
     */
    inline double att33() const
    {
        return m_att33;
    }

    /*!
     * @brief This function returns a reference to member att33
     * @return Reference to member att33
     */
    inline double& att33()
    {
        return m_att33;
    }
    /*!
     * @brief This function sets a value in member att34
     * @param _att34 New value for member att34
     */
    inline void att34(double _att34)
    {
        m_att34 = _att34;
    }

    /*!
     * @brief This function returns the value of member att34
     * @return Value of member att34
     */
    inline double att34() const
    {
        return m_att34;
    }

    /*!
     * @brief This function returns a reference to member att34
     * @return Reference to member att34
     */
    inline double& att34()
    {
        return m_att34;
    }
    /*!
     * @brief This function sets a value in member att35
     * @param _att35 New value for member att35
     */
    inline void att35(double _att35)
    {
        m_att35 = _att35;
    }

    /*!
     * @brief This function returns the value of member att35
     * @return Value of member att35
     */
    inline double att35() const
    {
        return m_att35;
    }

    /*!
     * @brief This function returns a reference to member att35
     * @return Reference to member att35
     */
    inline double& att35()
    {
        return m_att35;
    }
    /*!
     * @brief This function sets a value in member att36
     * @param _att36 New value for member att36
     */
    inline void att36(double _att36)
    {
        m_att36 = _att36;
    }

    /*!
     * @brief This function returns the value of member att36
     * @return Value of member att36
     */
    inline double att36() const
    {
        return m_att36;
    }

    /*!
     * @brief This function returns a reference to member att36
     * @return Reference to member att36
     */
    inline double& att36()
    {
        return m_att36;
    }
    /*!
     * @brief This function sets a value in member att37
     * @param _att37 New value for member att37
     */
    inline void att37(double _att37)
    {
        m_att37 = _att37;
    }

    /*!
     * @brief This function returns the value of member att37
     * @return Value of member att37
     */
    inline double att37() const
    {
        return m_att37;
    }

    /*!
     * @brief This function returns a reference to member att37
     * @return Reference to member att37
     */
    inline double& att37()
    {
        return m_att37;
    }
    /*!
     * @brief This function sets a value in member att38
     * @param _att38 New value for member att38
     */
    inline void att38(double _att38)
    {
        m_att38 = _att38;
    }

    /*!
     * @brief This function returns the value of member att38
     * @return Value of member att38
     */
    inline double att38() const
    {
        return m_att38;
    }

    /*!
     * @brief This function returns a reference to member att38
     * @return Reference to member att38
     */
    inline double& att38()
    {
        return m_att38;
    }
    /*!
     * @brief This function sets a value in member att39
     * @param _att39 New value for member att39
     */
    inline void att39(double _att39)
    {
        m_att39 = _att39;
    }

    /*!
     * @brief This function returns the value of member att39
     * @return Value of member att39
     */
    inline double att39() const
    {
        return m_att39;
    }

    /*!
     * @brief This function returns a reference to member att39
     * @return Reference to member att39
     */
    inline double& att39()
    {
        return m_att39;
    }
    /*!
     * @brief This function sets a value in member att40
     * @param _att40 New value for member att40
     */
    inline void att40(double _att40)
    {
        m_att40 = _att40;
    }

    /*!
     * @brief This function returns the value of member att40
     * @return Value of member att40
     */
    inline double att40() const
    {
        return m_att40;
    }

    /*!
     * @brief This function returns a reference to member att40
     * @return Reference to member att40
     */
    inline double& att40()
    {
        return m_att40;
    }
    /*!
     * @brief This function sets a value in member att41
     * @param _att41 New value for member att41
     */
    inline void att41(bool _att41)
    {
        m_att41 = _att41;
    }

    /*!
     * @brief This function returns the value of member att41
     * @return Value of member att41
     */
    inline bool att41() const
    {
        return m_att41;
    }

    /*!
     * @brief This function returns a reference to member att41
     * @return Reference to member att41
     */
    inline bool& att41()
    {
        return m_att41;
    }
    /*!
     * @brief This function sets a value in member att42
     * @param _att42 New value for member att42
     */
    inline void att42(bool _att42)
    {
        m_att42 = _att42;
    }

    /*!
     * @brief This function returns the value of member att42
     * @return Value of member att42
     */
    inline bool att42() const
    {
        return m_att42;
    }

    /*!
     * @brief This function returns a reference to member att42
     * @return Reference to member att42
     */
    inline bool& att42()
    {
        return m_att42;
    }
    /*!
     * @brief This function sets a value in member att43
     * @param _att43 New value for member att43
     */
    inline void att43(bool _att43)
    {
        m_att43 = _att43;
    }

    /*!
     * @brief This function returns the value of member att43
     * @return Value of member att43
     */
    inline bool att43() const
    {
        return m_att43;
    }

    /*!
     * @brief This function returns a reference to member att43
     * @return Reference to member att43
     */
    inline bool& att43()
    {
        return m_att43;
    }
    /*!
     * @brief This function sets a value in member att44
     * @param _att44 New value for member att44
     */
    inline void att44(bool _att44)
    {
        m_att44 = _att44;
    }

    /*!
     * @brief This function returns the value of member att44
     * @return Value of member att44
     */
    inline bool att44() const
    {
        return m_att44;
    }

    /*!
     * @brief This function returns a reference to member att44
     * @return Reference to member att44
     */
    inline bool& att44()
    {
        return m_att44;
    }
    /*!
     * @brief This function sets a value in member att45
     * @param _att45 New value for member att45
     */
    inline void att45(bool _att45)
    {
        m_att45 = _att45;
    }

    /*!
     * @brief This function returns the value of member att45
     * @return Value of member att45
     */
    inline bool att45() const
    {
        return m_att45;
    }

    /*!
     * @brief This function returns a reference to member att45
     * @return Reference to member att45
     */
    inline bool& att45()
    {
        return m_att45;
    }
    /*!
     * @brief This function sets a value in member att46
     * @param _att46 New value for member att46
     */
    inline void att46(bool _att46)
    {
        m_att46 = _att46;
    }

    /*!
     * @brief This function returns the value of member att46
     * @return Value of member att46
     */
    inline bool att46() const
    {
        return m_att46;
    }

    /*!
     * @brief This function returns a reference to member att46
     * @return Reference to member att46
     */
    inline bool& att46()
    {
        return m_att46;
    }
    /*!
     * @brief This function sets a value in member att47
     * @param _att47 New value for member att47
     */
    inline void att47(bool _att47)
    {
        m_att47 = _att47;
    }

    /*!
     * @brief This function returns the value of member att47
     * @return Value of member att47
     */
    inline bool att47() const
    {
        return m_att47;
    }

    /*!
     * @brief This function returns a reference to member att47
     * @return Reference to member att47
     */
    inline bool& att47()
    {
        return m_att47;
    }
    /*!
     * @brief This function sets a value in member att48
     * @param _att48 New value for member att48
     */
    inline void att48(bool _att48)
    {
        m_att48 = _att48;
    }

    /*!
     * @brief This function returns the value of member att48
     * @return Value of member att48
     */
    inline bool att48() const
    {
        return m_att48;
    }

    /*!
     * @brief This function returns a reference to member att48
     * @return Reference to member att48
     */
    inline bool& att48()
    {
        return m_att48;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_8_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 2280;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_8_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 2272;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
    int32_t m_att7;
    int32_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    std::string m_att17;
    std::string m_att18;
    std::string m_att19;
    std::string m_att20;
    std::string m_att21;
    std::string m_att22;
    std::string m_att23;
    std::string m_att24;
    float m_att25;
    float m_att26;
    float m_att27;
    float m_att28;
    float m_att29;
    float m_att30;
    float m_att31;
    float m_att32;
    double m_att33;
    double m_att34;
    double m_att35;
    double m_att36;
    double m_att37;
    double m_att38;
    double m_att39;
    double m_att40;
    bool m_att41;
    bool m_att42;
    bool m_att43;
    bool m_att44;
    bool m_att45;
    bool m_att46;
    bool m_att47;
    bool m_att48;
};
/*!
 * @brief This class represents the structure complexFastBuffers_10_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport complexFastBuffers_10_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    complexFastBuffers_10_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~complexFastBuffers_10_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object complexFastBuffers_10_Class that will be copied.
     */
    complexFastBuffers_10_Class(const complexFastBuffers_10_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object complexFastBuffers_10_Class that will be copied.
     */
    complexFastBuffers_10_Class(complexFastBuffers_10_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object complexFastBuffers_10_Class that will be copied.
     */
    complexFastBuffers_10_Class& operator=(const complexFastBuffers_10_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object complexFastBuffers_10_Class that will be copied.
     */
    complexFastBuffers_10_Class& operator=(complexFastBuffers_10_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int32_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int32_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int32_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int32_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int32_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int32_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int32_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int32_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int32_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int32_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int32_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int32_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(int64_t _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline int64_t att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline int64_t& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(int64_t _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline int64_t att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline int64_t& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(int64_t _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline int64_t att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline int64_t& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(int64_t _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline int64_t att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline int64_t& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(int64_t _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline int64_t att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline int64_t& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(int64_t _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline int64_t att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline int64_t& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(int64_t _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline int64_t att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline int64_t& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(int64_t _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline int64_t att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline int64_t& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(int64_t _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline int64_t att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline int64_t& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(int64_t _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline int64_t att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline int64_t& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function copies the value in member att21
     * @param _att21 New value to be copied in member att21
     */
    inline void att21(const std::string &_att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function moves the value in member att21
     * @param _att21 New value to be moved in member att21
     */
    inline void att21(std::string &&_att21)
    {
        m_att21 = std::move(_att21);
    }

    /*!
     * @brief This function returns a constant reference to member att21
     * @return Constant reference to member att21
     */
    inline const std::string& att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline std::string& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function copies the value in member att22
     * @param _att22 New value to be copied in member att22
     */
    inline void att22(const std::string &_att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function moves the value in member att22
     * @param _att22 New value to be moved in member att22
     */
    inline void att22(std::string &&_att22)
    {
        m_att22 = std::move(_att22);
    }

    /*!
     * @brief This function returns a constant reference to member att22
     * @return Constant reference to member att22
     */
    inline const std::string& att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline std::string& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function copies the value in member att23
     * @param _att23 New value to be copied in member att23
     */
    inline void att23(const std::string &_att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function moves the value in member att23
     * @param _att23 New value to be moved in member att23
     */
    inline void att23(std::string &&_att23)
    {
        m_att23 = std::move(_att23);
    }

    /*!
     * @brief This function returns a constant reference to member att23
     * @return Constant reference to member att23
     */
    inline const std::string& att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline std::string& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function copies the value in member att24
     * @param _att24 New value to be copied in member att24
     */
    inline void att24(const std::string &_att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function moves the value in member att24
     * @param _att24 New value to be moved in member att24
     */
    inline void att24(std::string &&_att24)
    {
        m_att24 = std::move(_att24);
    }

    /*!
     * @brief This function returns a constant reference to member att24
     * @return Constant reference to member att24
     */
    inline const std::string& att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline std::string& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function copies the value in member att25
     * @param _att25 New value to be copied in member att25
     */
    inline void att25(const std::string &_att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function moves the value in member att25
     * @param _att25 New value to be moved in member att25
     */
    inline void att25(std::string &&_att25)
    {
        m_att25 = std::move(_att25);
    }

    /*!
     * @brief This function returns a constant reference to member att25
     * @return Constant reference to member att25
     */
    inline const std::string& att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline std::string& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function copies the value in member att26
     * @param _att26 New value to be copied in member att26
     */
    inline void att26(const std::string &_att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function moves the value in member att26
     * @param _att26 New value to be moved in member att26
     */
    inline void att26(std::string &&_att26)
    {
        m_att26 = std::move(_att26);
    }

    /*!
     * @brief This function returns a constant reference to member att26
     * @return Constant reference to member att26
     */
    inline const std::string& att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline std::string& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function copies the value in member att27
     * @param _att27 New value to be copied in member att27
     */
    inline void att27(const std::string &_att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function moves the value in member att27
     * @param _att27 New value to be moved in member att27
     */
    inline void att27(std::string &&_att27)
    {
        m_att27 = std::move(_att27);
    }

    /*!
     * @brief This function returns a constant reference to member att27
     * @return Constant reference to member att27
     */
    inline const std::string& att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline std::string& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function copies the value in member att28
     * @param _att28 New value to be copied in member att28
     */
    inline void att28(const std::string &_att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function moves the value in member att28
     * @param _att28 New value to be moved in member att28
     */
    inline void att28(std::string &&_att28)
    {
        m_att28 = std::move(_att28);
    }

    /*!
     * @brief This function returns a constant reference to member att28
     * @return Constant reference to member att28
     */
    inline const std::string& att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline std::string& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function copies the value in member att29
     * @param _att29 New value to be copied in member att29
     */
    inline void att29(const std::string &_att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function moves the value in member att29
     * @param _att29 New value to be moved in member att29
     */
    inline void att29(std::string &&_att29)
    {
        m_att29 = std::move(_att29);
    }

    /*!
     * @brief This function returns a constant reference to member att29
     * @return Constant reference to member att29
     */
    inline const std::string& att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline std::string& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function copies the value in member att30
     * @param _att30 New value to be copied in member att30
     */
    inline void att30(const std::string &_att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function moves the value in member att30
     * @param _att30 New value to be moved in member att30
     */
    inline void att30(std::string &&_att30)
    {
        m_att30 = std::move(_att30);
    }

    /*!
     * @brief This function returns a constant reference to member att30
     * @return Constant reference to member att30
     */
    inline const std::string& att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline std::string& att30()
    {
        return m_att30;
    }
    /*!
     * @brief This function sets a value in member att31
     * @param _att31 New value for member att31
     */
    inline void att31(float _att31)
    {
        m_att31 = _att31;
    }

    /*!
     * @brief This function returns the value of member att31
     * @return Value of member att31
     */
    inline float att31() const
    {
        return m_att31;
    }

    /*!
     * @brief This function returns a reference to member att31
     * @return Reference to member att31
     */
    inline float& att31()
    {
        return m_att31;
    }
    /*!
     * @brief This function sets a value in member att32
     * @param _att32 New value for member att32
     */
    inline void att32(float _att32)
    {
        m_att32 = _att32;
    }

    /*!
     * @brief This function returns the value of member att32
     * @return Value of member att32
     */
    inline float att32() const
    {
        return m_att32;
    }

    /*!
     * @brief This function returns a reference to member att32
     * @return Reference to member att32
     */
    inline float& att32()
    {
        return m_att32;
    }
    /*!
     * @brief This function sets a value in member att33
     * @param _att33 New value for member att33
     */
    inline void att33(float _att33)
    {
        m_att33 = _att33;
    }

    /*!
     * @brief This function returns the value of member att33
     * @return Value of member att33
     */
    inline float att33() const
    {
        return m_att33;
    }

    /*!
     * @brief This function returns a reference to member att33
     * @return Reference to member att33
     */
    inline float& att33()
    {
        return m_att33;
    }
    /*!
     * @brief This function sets a value in member att34
     * @param _att34 New value for member att34
     */
    inline void att34(float _att34)
    {
        m_att34 = _att34;
    }

    /*!
     * @brief This function returns the value of member att34
     * @return Value of member att34
     */
    inline float att34() const
    {
        return m_att34;
    }

    /*!
     * @brief This function returns a reference to member att34
     * @return Reference to member att34
     */
    inline float& att34()
    {
        return m_att34;
    }
    /*!
     * @brief This function sets a value in member att35
     * @param _att35 New value for member att35
     */
    inline void att35(float _att35)
    {
        m_att35 = _att35;
    }

    /*!
     * @brief This function returns the value of member att35
     * @return Value of member att35
     */
    inline float att35() const
    {
        return m_att35;
    }

    /*!
     * @brief This function returns a reference to member att35
     * @return Reference to member att35
     */
    inline float& att35()
    {
        return m_att35;
    }
    /*!
     * @brief This function sets a value in member att36
     * @param _att36 New value for member att36
     */
    inline void att36(float _att36)
    {
        m_att36 = _att36;
    }

    /*!
     * @brief This function returns the value of member att36
     * @return Value of member att36
     */
    inline float att36() const
    {
        return m_att36;
    }

    /*!
     * @brief This function returns a reference to member att36
     * @return Reference to member att36
     */
    inline float& att36()
    {
        return m_att36;
    }
    /*!
     * @brief This function sets a value in member att37
     * @param _att37 New value for member att37
     */
    inline void att37(float _att37)
    {
        m_att37 = _att37;
    }

    /*!
     * @brief This function returns the value of member att37
     * @return Value of member att37
     */
    inline float att37() const
    {
        return m_att37;
    }

    /*!
     * @brief This function returns a reference to member att37
     * @return Reference to member att37
     */
    inline float& att37()
    {
        return m_att37;
    }
    /*!
     * @brief This function sets a value in member att38
     * @param _att38 New value for member att38
     */
    inline void att38(float _att38)
    {
        m_att38 = _att38;
    }

    /*!
     * @brief This function returns the value of member att38
     * @return Value of member att38
     */
    inline float att38() const
    {
        return m_att38;
    }

    /*!
     * @brief This function returns a reference to member att38
     * @return Reference to member att38
     */
    inline float& att38()
    {
        return m_att38;
    }
    /*!
     * @brief This function sets a value in member att39
     * @param _att39 New value for member att39
     */
    inline void att39(float _att39)
    {
        m_att39 = _att39;
    }

    /*!
     * @brief This function returns the value of member att39
     * @return Value of member att39
     */
    inline float att39() const
    {
        return m_att39;
    }

    /*!
     * @brief This function returns a reference to member att39
     * @return Reference to member att39
     */
    inline float& att39()
    {
        return m_att39;
    }
    /*!
     * @brief This function sets a value in member att40
     * @param _att40 New value for member att40
     */
    inline void att40(float _att40)
    {
        m_att40 = _att40;
    }

    /*!
     * @brief This function returns the value of member att40
     * @return Value of member att40
     */
    inline float att40() const
    {
        return m_att40;
    }

    /*!
     * @brief This function returns a reference to member att40
     * @return Reference to member att40
     */
    inline float& att40()
    {
        return m_att40;
    }
    /*!
     * @brief This function sets a value in member att41
     * @param _att41 New value for member att41
     */
    inline void att41(double _att41)
    {
        m_att41 = _att41;
    }

    /*!
     * @brief This function returns the value of member att41
     * @return Value of member att41
     */
    inline double att41() const
    {
        return m_att41;
    }

    /*!
     * @brief This function returns a reference to member att41
     * @return Reference to member att41
     */
    inline double& att41()
    {
        return m_att41;
    }
    /*!
     * @brief This function sets a value in member att42
     * @param _att42 New value for member att42
     */
    inline void att42(double _att42)
    {
        m_att42 = _att42;
    }

    /*!
     * @brief This function returns the value of member att42
     * @return Value of member att42
     */
    inline double att42() const
    {
        return m_att42;
    }

    /*!
     * @brief This function returns a reference to member att42
     * @return Reference to member att42
     */
    inline double& att42()
    {
        return m_att42;
    }
    /*!
     * @brief This function sets a value in member att43
     * @param _att43 New value for member att43
     */
    inline void att43(double _att43)
    {
        m_att43 = _att43;
    }

    /*!
     * @brief This function returns the value of member att43
     * @return Value of member att43
     */
    inline double att43() const
    {
        return m_att43;
    }

    /*!
     * @brief This function returns a reference to member att43
     * @return Reference to member att43
     */
    inline double& att43()
    {
        return m_att43;
    }
    /*!
     * @brief This function sets a value in member att44
     * @param _att44 New value for member att44
     */
    inline void att44(double _att44)
    {
        m_att44 = _att44;
    }

    /*!
     * @brief This function returns the value of member att44
     * @return Value of member att44
     */
    inline double att44() const
    {
        return m_att44;
    }

    /*!
     * @brief This function returns a reference to member att44
     * @return Reference to member att44
     */
    inline double& att44()
    {
        return m_att44;
    }
    /*!
     * @brief This function sets a value in member att45
     * @param _att45 New value for member att45
     */
    inline void att45(double _att45)
    {
        m_att45 = _att45;
    }

    /*!
     * @brief This function returns the value of member att45
     * @return Value of member att45
     */
    inline double att45() const
    {
        return m_att45;
    }

    /*!
     * @brief This function returns a reference to member att45
     * @return Reference to member att45
     */
    inline double& att45()
    {
        return m_att45;
    }
    /*!
     * @brief This function sets a value in member att46
     * @param _att46 New value for member att46
     */
    inline void att46(double _att46)
    {
        m_att46 = _att46;
    }

    /*!
     * @brief This function returns the value of member att46
     * @return Value of member att46
     */
    inline double att46() const
    {
        return m_att46;
    }

    /*!
     * @brief This function returns a reference to member att46
     * @return Reference to member att46
     */
    inline double& att46()
    {
        return m_att46;
    }
    /*!
     * @brief This function sets a value in member att47
     * @param _att47 New value for member att47
     */
    inline void att47(double _att47)
    {
        m_att47 = _att47;
    }

    /*!
     * @brief This function returns the value of member att47
     * @return Value of member att47
     */
    inline double att47() const
    {
        return m_att47;
    }

    /*!
     * @brief This function returns a reference to member att47
     * @return Reference to member att47
     */
    inline double& att47()
    {
        return m_att47;
    }
    /*!
     * @brief This function sets a value in member att48
     * @param _att48 New value for member att48
     */
    inline void att48(double _att48)
    {
        m_att48 = _att48;
    }

    /*!
     * @brief This function returns the value of member att48
     * @return Value of member att48
     */
    inline double att48() const
    {
        return m_att48;
    }

    /*!
     * @brief This function returns a reference to member att48
     * @return Reference to member att48
     */
    inline double& att48()
    {
        return m_att48;
    }
    /*!
     * @brief This function sets a value in member att49
     * @param _att49 New value for member att49
     */
    inline void att49(double _att49)
    {
        m_att49 = _att49;
    }

    /*!
     * @brief This function returns the value of member att49
     * @return Value of member att49
     */
    inline double att49() const
    {
        return m_att49;
    }

    /*!
     * @brief This function returns a reference to member att49
     * @return Reference to member att49
     */
    inline double& att49()
    {
        return m_att49;
    }
    /*!
     * @brief This function sets a value in member att50
     * @param _att50 New value for member att50
     */
    inline void att50(double _att50)
    {
        m_att50 = _att50;
    }

    /*!
     * @brief This function returns the value of member att50
     * @return Value of member att50
     */
    inline double att50() const
    {
        return m_att50;
    }

    /*!
     * @brief This function returns a reference to member att50
     * @return Reference to member att50
     */
    inline double& att50()
    {
        return m_att50;
    }
    /*!
     * @brief This function sets a value in member att51
     * @param _att51 New value for member att51
     */
    inline void att51(bool _att51)
    {
        m_att51 = _att51;
    }

    /*!
     * @brief This function returns the value of member att51
     * @return Value of member att51
     */
    inline bool att51() const
    {
        return m_att51;
    }

    /*!
     * @brief This function returns a reference to member att51
     * @return Reference to member att51
     */
    inline bool& att51()
    {
        return m_att51;
    }
    /*!
     * @brief This function sets a value in member att52
     * @param _att52 New value for member att52
     */
    inline void att52(bool _att52)
    {
        m_att52 = _att52;
    }

    /*!
     * @brief This function returns the value of member att52
     * @return Value of member att52
     */
    inline bool att52() const
    {
        return m_att52;
    }

    /*!
     * @brief This function returns a reference to member att52
     * @return Reference to member att52
     */
    inline bool& att52()
    {
        return m_att52;
    }
    /*!
     * @brief This function sets a value in member att53
     * @param _att53 New value for member att53
     */
    inline void att53(bool _att53)
    {
        m_att53 = _att53;
    }

    /*!
     * @brief This function returns the value of member att53
     * @return Value of member att53
     */
    inline bool att53() const
    {
        return m_att53;
    }

    /*!
     * @brief This function returns a reference to member att53
     * @return Reference to member att53
     */
    inline bool& att53()
    {
        return m_att53;
    }
    /*!
     * @brief This function sets a value in member att54
     * @param _att54 New value for member att54
     */
    inline void att54(bool _att54)
    {
        m_att54 = _att54;
    }

    /*!
     * @brief This function returns the value of member att54
     * @return Value of member att54
     */
    inline bool att54() const
    {
        return m_att54;
    }

    /*!
     * @brief This function returns a reference to member att54
     * @return Reference to member att54
     */
    inline bool& att54()
    {
        return m_att54;
    }
    /*!
     * @brief This function sets a value in member att55
     * @param _att55 New value for member att55
     */
    inline void att55(bool _att55)
    {
        m_att55 = _att55;
    }

    /*!
     * @brief This function returns the value of member att55
     * @return Value of member att55
     */
    inline bool att55() const
    {
        return m_att55;
    }

    /*!
     * @brief This function returns a reference to member att55
     * @return Reference to member att55
     */
    inline bool& att55()
    {
        return m_att55;
    }
    /*!
     * @brief This function sets a value in member att56
     * @param _att56 New value for member att56
     */
    inline void att56(bool _att56)
    {
        m_att56 = _att56;
    }

    /*!
     * @brief This function returns the value of member att56
     * @return Value of member att56
     */
    inline bool att56() const
    {
        return m_att56;
    }

    /*!
     * @brief This function returns a reference to member att56
     * @return Reference to member att56
     */
    inline bool& att56()
    {
        return m_att56;
    }
    /*!
     * @brief This function sets a value in member att57
     * @param _att57 New value for member att57
     */
    inline void att57(bool _att57)
    {
        m_att57 = _att57;
    }

    /*!
     * @brief This function returns the value of member att57
     * @return Value of member att57
     */
    inline bool att57() const
    {
        return m_att57;
    }

    /*!
     * @brief This function returns a reference to member att57
     * @return Reference to member att57
     */
    inline bool& att57()
    {
        return m_att57;
    }
    /*!
     * @brief This function sets a value in member att58
     * @param _att58 New value for member att58
     */
    inline void att58(bool _att58)
    {
        m_att58 = _att58;
    }

    /*!
     * @brief This function returns the value of member att58
     * @return Value of member att58
     */
    inline bool att58() const
    {
        return m_att58;
    }

    /*!
     * @brief This function returns a reference to member att58
     * @return Reference to member att58
     */
    inline bool& att58()
    {
        return m_att58;
    }
    /*!
     * @brief This function sets a value in member att59
     * @param _att59 New value for member att59
     */
    inline void att59(bool _att59)
    {
        m_att59 = _att59;
    }

    /*!
     * @brief This function returns the value of member att59
     * @return Value of member att59
     */
    inline bool att59() const
    {
        return m_att59;
    }

    /*!
     * @brief This function returns a reference to member att59
     * @return Reference to member att59
     */
    inline bool& att59()
    {
        return m_att59;
    }
    /*!
     * @brief This function sets a value in member att60
     * @param _att60 New value for member att60
     */
    inline void att60(bool _att60)
    {
        m_att60 = _att60;
    }

    /*!
     * @brief This function returns the value of member att60
     * @return Value of member att60
     */
    inline bool att60() const
    {
        return m_att60;
    }

    /*!
     * @brief This function returns a reference to member att60
     * @return Reference to member att60
     */
    inline bool& att60()
    {
        return m_att60;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_10_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 2850;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type complexFastBuffers_10_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 2840;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
    int32_t m_att7;
    int32_t m_att8;
    int32_t m_att9;
    int32_t m_att10;
    int64_t m_att11;
    int64_t m_att12;
    int64_t m_att13;
    int64_t m_att14;
    int64_t m_att15;
    int64_t m_att16;
    int64_t m_att17;
    int64_t m_att18;
    int64_t m_att19;
    int64_t m_att20;
    std::string m_att21;
    std::string m_att22;
    std::string m_att23;
    std::string m_att24;
    std::string m_att25;
    std::string m_att26;
    std::string m_att27;
    std::string m_att28;
    std::string m_att29;
    std::string m_att30;
    float m_att31;
    float m_att32;
    float m_att33;
    float m_att34;
    float m_att35;
    float m_att36;
    float m_att37;
    float m_att38;
    float m_att39;
    float m_att40;
    double m_att41;
    double m_att42;
    double m_att43;
    double m_att44;
    double m_att45;
    double m_att46;
    double m_att47;
    double m_att48;
    double m_att49;
    double m_att50;
    bool m_att51;
    bool m_att52;
    bool m_att53;
    bool m_att54;
    bool m_att55;
    bool m_att56;
    bool m_att57;
    bool m_att58;
    bool m_att59;
    bool m_att60;
};
/*!
 * @brief This class represents the structure innersimpleFastBuffers_2_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innersimpleFastBuffers_2_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innersimpleFastBuffers_2_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innersimpleFastBuffers_2_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innersimpleFastBuffers_2_Class that will be copied.
     */
    innersimpleFastBuffers_2_Class(const innersimpleFastBuffers_2_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innersimpleFastBuffers_2_Class that will be copied.
     */
    innersimpleFastBuffers_2_Class(innersimpleFastBuffers_2_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innersimpleFastBuffers_2_Class that will be copied.
     */
    innersimpleFastBuffers_2_Class& operator=(const innersimpleFastBuffers_2_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innersimpleFastBuffers_2_Class that will be copied.
     */
    innersimpleFastBuffers_2_Class& operator=(innersimpleFastBuffers_2_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_2_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 8;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_2_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 8;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
};
/*!
 * @brief This class represents the structure outersimpleFastBuffers_2_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outersimpleFastBuffers_2_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outersimpleFastBuffers_2_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outersimpleFastBuffers_2_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outersimpleFastBuffers_2_Class that will be copied.
     */
    outersimpleFastBuffers_2_Class(const outersimpleFastBuffers_2_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outersimpleFastBuffers_2_Class that will be copied.
     */
    outersimpleFastBuffers_2_Class(outersimpleFastBuffers_2_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outersimpleFastBuffers_2_Class that will be copied.
     */
    outersimpleFastBuffers_2_Class& operator=(const outersimpleFastBuffers_2_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outersimpleFastBuffers_2_Class that will be copied.
     */
    outersimpleFastBuffers_2_Class& operator=(outersimpleFastBuffers_2_Class &&x);
    
    /*!
     * @brief This function copies the value in member att1
     * @param _att1 New value to be copied in member att1
     */
    inline void att1(const innersimpleFastBuffers_2_Class &_att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function moves the value in member att1
     * @param _att1 New value to be moved in member att1
     */
    inline void att1(innersimpleFastBuffers_2_Class &&_att1)
    {
        m_att1 = std::move(_att1);
    }

    /*!
     * @brief This function returns a constant reference to member att1
     * @return Constant reference to member att1
     */
    inline const innersimpleFastBuffers_2_Class& att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline innersimpleFastBuffers_2_Class& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function copies the value in member att2
     * @param _att2 New value to be copied in member att2
     */
    inline void att2(const innersimpleFastBuffers_2_Class &_att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function moves the value in member att2
     * @param _att2 New value to be moved in member att2
     */
    inline void att2(innersimpleFastBuffers_2_Class &&_att2)
    {
        m_att2 = std::move(_att2);
    }

    /*!
     * @brief This function returns a constant reference to member att2
     * @return Constant reference to member att2
     */
    inline const innersimpleFastBuffers_2_Class& att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline innersimpleFastBuffers_2_Class& att2()
    {
        return m_att2;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_2_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 16;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_2_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 16;}
    
private:
    innersimpleFastBuffers_2_Class m_att1;
    innersimpleFastBuffers_2_Class m_att2;
};
/*!
 * @brief This class represents the structure innersimpleFastBuffers_4_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innersimpleFastBuffers_4_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innersimpleFastBuffers_4_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innersimpleFastBuffers_4_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innersimpleFastBuffers_4_Class that will be copied.
     */
    innersimpleFastBuffers_4_Class(const innersimpleFastBuffers_4_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innersimpleFastBuffers_4_Class that will be copied.
     */
    innersimpleFastBuffers_4_Class(innersimpleFastBuffers_4_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innersimpleFastBuffers_4_Class that will be copied.
     */
    innersimpleFastBuffers_4_Class& operator=(const innersimpleFastBuffers_4_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innersimpleFastBuffers_4_Class that will be copied.
     */
    innersimpleFastBuffers_4_Class& operator=(innersimpleFastBuffers_4_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_4_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 16;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_4_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 16;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
};
/*!
 * @brief This class represents the structure outersimpleFastBuffers_4_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outersimpleFastBuffers_4_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outersimpleFastBuffers_4_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outersimpleFastBuffers_4_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outersimpleFastBuffers_4_Class that will be copied.
     */
    outersimpleFastBuffers_4_Class(const outersimpleFastBuffers_4_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outersimpleFastBuffers_4_Class that will be copied.
     */
    outersimpleFastBuffers_4_Class(outersimpleFastBuffers_4_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outersimpleFastBuffers_4_Class that will be copied.
     */
    outersimpleFastBuffers_4_Class& operator=(const outersimpleFastBuffers_4_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outersimpleFastBuffers_4_Class that will be copied.
     */
    outersimpleFastBuffers_4_Class& operator=(outersimpleFastBuffers_4_Class &&x);
    
    /*!
     * @brief This function copies the value in member att1
     * @param _att1 New value to be copied in member att1
     */
    inline void att1(const innersimpleFastBuffers_4_Class &_att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function moves the value in member att1
     * @param _att1 New value to be moved in member att1
     */
    inline void att1(innersimpleFastBuffers_4_Class &&_att1)
    {
        m_att1 = std::move(_att1);
    }

    /*!
     * @brief This function returns a constant reference to member att1
     * @return Constant reference to member att1
     */
    inline const innersimpleFastBuffers_4_Class& att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline innersimpleFastBuffers_4_Class& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function copies the value in member att2
     * @param _att2 New value to be copied in member att2
     */
    inline void att2(const innersimpleFastBuffers_4_Class &_att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function moves the value in member att2
     * @param _att2 New value to be moved in member att2
     */
    inline void att2(innersimpleFastBuffers_4_Class &&_att2)
    {
        m_att2 = std::move(_att2);
    }

    /*!
     * @brief This function returns a constant reference to member att2
     * @return Constant reference to member att2
     */
    inline const innersimpleFastBuffers_4_Class& att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline innersimpleFastBuffers_4_Class& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const innersimpleFastBuffers_4_Class &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(innersimpleFastBuffers_4_Class &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const innersimpleFastBuffers_4_Class& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline innersimpleFastBuffers_4_Class& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innersimpleFastBuffers_4_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innersimpleFastBuffers_4_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innersimpleFastBuffers_4_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innersimpleFastBuffers_4_Class& att4()
    {
        return m_att4;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_4_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 64;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_4_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 64;}
    
private:
    innersimpleFastBuffers_4_Class m_att1;
    innersimpleFastBuffers_4_Class m_att2;
    innersimpleFastBuffers_4_Class m_att3;
    innersimpleFastBuffers_4_Class m_att4;
};
/*!
 * @brief This class represents the structure innersimpleFastBuffers_6_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innersimpleFastBuffers_6_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innersimpleFastBuffers_6_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innersimpleFastBuffers_6_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innersimpleFastBuffers_6_Class that will be copied.
     */
    innersimpleFastBuffers_6_Class(const innersimpleFastBuffers_6_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innersimpleFastBuffers_6_Class that will be copied.
     */
    innersimpleFastBuffers_6_Class(innersimpleFastBuffers_6_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innersimpleFastBuffers_6_Class that will be copied.
     */
    innersimpleFastBuffers_6_Class& operator=(const innersimpleFastBuffers_6_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innersimpleFastBuffers_6_Class that will be copied.
     */
    innersimpleFastBuffers_6_Class& operator=(innersimpleFastBuffers_6_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_6_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 24;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_6_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 24;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
};
/*!
 * @brief This class represents the structure outersimpleFastBuffers_6_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outersimpleFastBuffers_6_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outersimpleFastBuffers_6_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outersimpleFastBuffers_6_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outersimpleFastBuffers_6_Class that will be copied.
     */
    outersimpleFastBuffers_6_Class(const outersimpleFastBuffers_6_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outersimpleFastBuffers_6_Class that will be copied.
     */
    outersimpleFastBuffers_6_Class(outersimpleFastBuffers_6_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outersimpleFastBuffers_6_Class that will be copied.
     */
    outersimpleFastBuffers_6_Class& operator=(const outersimpleFastBuffers_6_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outersimpleFastBuffers_6_Class that will be copied.
     */
    outersimpleFastBuffers_6_Class& operator=(outersimpleFastBuffers_6_Class &&x);
    
    /*!
     * @brief This function copies the value in member att1
     * @param _att1 New value to be copied in member att1
     */
    inline void att1(const innersimpleFastBuffers_6_Class &_att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function moves the value in member att1
     * @param _att1 New value to be moved in member att1
     */
    inline void att1(innersimpleFastBuffers_6_Class &&_att1)
    {
        m_att1 = std::move(_att1);
    }

    /*!
     * @brief This function returns a constant reference to member att1
     * @return Constant reference to member att1
     */
    inline const innersimpleFastBuffers_6_Class& att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline innersimpleFastBuffers_6_Class& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function copies the value in member att2
     * @param _att2 New value to be copied in member att2
     */
    inline void att2(const innersimpleFastBuffers_6_Class &_att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function moves the value in member att2
     * @param _att2 New value to be moved in member att2
     */
    inline void att2(innersimpleFastBuffers_6_Class &&_att2)
    {
        m_att2 = std::move(_att2);
    }

    /*!
     * @brief This function returns a constant reference to member att2
     * @return Constant reference to member att2
     */
    inline const innersimpleFastBuffers_6_Class& att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline innersimpleFastBuffers_6_Class& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const innersimpleFastBuffers_6_Class &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(innersimpleFastBuffers_6_Class &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const innersimpleFastBuffers_6_Class& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline innersimpleFastBuffers_6_Class& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innersimpleFastBuffers_6_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innersimpleFastBuffers_6_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innersimpleFastBuffers_6_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innersimpleFastBuffers_6_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function copies the value in member att5
     * @param _att5 New value to be copied in member att5
     */
    inline void att5(const innersimpleFastBuffers_6_Class &_att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function moves the value in member att5
     * @param _att5 New value to be moved in member att5
     */
    inline void att5(innersimpleFastBuffers_6_Class &&_att5)
    {
        m_att5 = std::move(_att5);
    }

    /*!
     * @brief This function returns a constant reference to member att5
     * @return Constant reference to member att5
     */
    inline const innersimpleFastBuffers_6_Class& att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline innersimpleFastBuffers_6_Class& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function copies the value in member att6
     * @param _att6 New value to be copied in member att6
     */
    inline void att6(const innersimpleFastBuffers_6_Class &_att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function moves the value in member att6
     * @param _att6 New value to be moved in member att6
     */
    inline void att6(innersimpleFastBuffers_6_Class &&_att6)
    {
        m_att6 = std::move(_att6);
    }

    /*!
     * @brief This function returns a constant reference to member att6
     * @return Constant reference to member att6
     */
    inline const innersimpleFastBuffers_6_Class& att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline innersimpleFastBuffers_6_Class& att6()
    {
        return m_att6;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_6_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 144;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_6_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 144;}
    
private:
    innersimpleFastBuffers_6_Class m_att1;
    innersimpleFastBuffers_6_Class m_att2;
    innersimpleFastBuffers_6_Class m_att3;
    innersimpleFastBuffers_6_Class m_att4;
    innersimpleFastBuffers_6_Class m_att5;
    innersimpleFastBuffers_6_Class m_att6;
};
/*!
 * @brief This class represents the structure innersimpleFastBuffers_8_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innersimpleFastBuffers_8_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innersimpleFastBuffers_8_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innersimpleFastBuffers_8_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innersimpleFastBuffers_8_Class that will be copied.
     */
    innersimpleFastBuffers_8_Class(const innersimpleFastBuffers_8_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innersimpleFastBuffers_8_Class that will be copied.
     */
    innersimpleFastBuffers_8_Class(innersimpleFastBuffers_8_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innersimpleFastBuffers_8_Class that will be copied.
     */
    innersimpleFastBuffers_8_Class& operator=(const innersimpleFastBuffers_8_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innersimpleFastBuffers_8_Class that will be copied.
     */
    innersimpleFastBuffers_8_Class& operator=(innersimpleFastBuffers_8_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int32_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int32_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int32_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int32_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int32_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int32_t& att8()
    {
        return m_att8;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_8_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 32;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_8_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 32;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
    int32_t m_att7;
    int32_t m_att8;
};
/*!
 * @brief This class represents the structure outersimpleFastBuffers_8_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outersimpleFastBuffers_8_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outersimpleFastBuffers_8_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outersimpleFastBuffers_8_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outersimpleFastBuffers_8_Class that will be copied.
     */
    outersimpleFastBuffers_8_Class(const outersimpleFastBuffers_8_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outersimpleFastBuffers_8_Class that will be copied.
     */
    outersimpleFastBuffers_8_Class(outersimpleFastBuffers_8_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outersimpleFastBuffers_8_Class that will be copied.
     */
    outersimpleFastBuffers_8_Class& operator=(const outersimpleFastBuffers_8_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outersimpleFastBuffers_8_Class that will be copied.
     */
    outersimpleFastBuffers_8_Class& operator=(outersimpleFastBuffers_8_Class &&x);
    
    /*!
     * @brief This function copies the value in member att1
     * @param _att1 New value to be copied in member att1
     */
    inline void att1(const innersimpleFastBuffers_8_Class &_att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function moves the value in member att1
     * @param _att1 New value to be moved in member att1
     */
    inline void att1(innersimpleFastBuffers_8_Class &&_att1)
    {
        m_att1 = std::move(_att1);
    }

    /*!
     * @brief This function returns a constant reference to member att1
     * @return Constant reference to member att1
     */
    inline const innersimpleFastBuffers_8_Class& att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline innersimpleFastBuffers_8_Class& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function copies the value in member att2
     * @param _att2 New value to be copied in member att2
     */
    inline void att2(const innersimpleFastBuffers_8_Class &_att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function moves the value in member att2
     * @param _att2 New value to be moved in member att2
     */
    inline void att2(innersimpleFastBuffers_8_Class &&_att2)
    {
        m_att2 = std::move(_att2);
    }

    /*!
     * @brief This function returns a constant reference to member att2
     * @return Constant reference to member att2
     */
    inline const innersimpleFastBuffers_8_Class& att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline innersimpleFastBuffers_8_Class& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const innersimpleFastBuffers_8_Class &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(innersimpleFastBuffers_8_Class &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const innersimpleFastBuffers_8_Class& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline innersimpleFastBuffers_8_Class& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innersimpleFastBuffers_8_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innersimpleFastBuffers_8_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innersimpleFastBuffers_8_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innersimpleFastBuffers_8_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function copies the value in member att5
     * @param _att5 New value to be copied in member att5
     */
    inline void att5(const innersimpleFastBuffers_8_Class &_att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function moves the value in member att5
     * @param _att5 New value to be moved in member att5
     */
    inline void att5(innersimpleFastBuffers_8_Class &&_att5)
    {
        m_att5 = std::move(_att5);
    }

    /*!
     * @brief This function returns a constant reference to member att5
     * @return Constant reference to member att5
     */
    inline const innersimpleFastBuffers_8_Class& att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline innersimpleFastBuffers_8_Class& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function copies the value in member att6
     * @param _att6 New value to be copied in member att6
     */
    inline void att6(const innersimpleFastBuffers_8_Class &_att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function moves the value in member att6
     * @param _att6 New value to be moved in member att6
     */
    inline void att6(innersimpleFastBuffers_8_Class &&_att6)
    {
        m_att6 = std::move(_att6);
    }

    /*!
     * @brief This function returns a constant reference to member att6
     * @return Constant reference to member att6
     */
    inline const innersimpleFastBuffers_8_Class& att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline innersimpleFastBuffers_8_Class& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function copies the value in member att7
     * @param _att7 New value to be copied in member att7
     */
    inline void att7(const innersimpleFastBuffers_8_Class &_att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function moves the value in member att7
     * @param _att7 New value to be moved in member att7
     */
    inline void att7(innersimpleFastBuffers_8_Class &&_att7)
    {
        m_att7 = std::move(_att7);
    }

    /*!
     * @brief This function returns a constant reference to member att7
     * @return Constant reference to member att7
     */
    inline const innersimpleFastBuffers_8_Class& att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline innersimpleFastBuffers_8_Class& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function copies the value in member att8
     * @param _att8 New value to be copied in member att8
     */
    inline void att8(const innersimpleFastBuffers_8_Class &_att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function moves the value in member att8
     * @param _att8 New value to be moved in member att8
     */
    inline void att8(innersimpleFastBuffers_8_Class &&_att8)
    {
        m_att8 = std::move(_att8);
    }

    /*!
     * @brief This function returns a constant reference to member att8
     * @return Constant reference to member att8
     */
    inline const innersimpleFastBuffers_8_Class& att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline innersimpleFastBuffers_8_Class& att8()
    {
        return m_att8;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_8_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 256;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_8_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 256;}
    
private:
    innersimpleFastBuffers_8_Class m_att1;
    innersimpleFastBuffers_8_Class m_att2;
    innersimpleFastBuffers_8_Class m_att3;
    innersimpleFastBuffers_8_Class m_att4;
    innersimpleFastBuffers_8_Class m_att5;
    innersimpleFastBuffers_8_Class m_att6;
    innersimpleFastBuffers_8_Class m_att7;
    innersimpleFastBuffers_8_Class m_att8;
};
/*!
 * @brief This class represents the structure innersimpleFastBuffers_10_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innersimpleFastBuffers_10_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innersimpleFastBuffers_10_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innersimpleFastBuffers_10_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innersimpleFastBuffers_10_Class that will be copied.
     */
    innersimpleFastBuffers_10_Class(const innersimpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innersimpleFastBuffers_10_Class that will be copied.
     */
    innersimpleFastBuffers_10_Class(innersimpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innersimpleFastBuffers_10_Class that will be copied.
     */
    innersimpleFastBuffers_10_Class& operator=(const innersimpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innersimpleFastBuffers_10_Class that will be copied.
     */
    innersimpleFastBuffers_10_Class& operator=(innersimpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int32_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int32_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int32_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int32_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int32_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int32_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int32_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int32_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int32_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int32_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int32_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int32_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int32_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int32_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int32_t& att10()
    {
        return m_att10;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_10_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 40;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innersimpleFastBuffers_10_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 40;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int32_t m_att6;
    int32_t m_att7;
    int32_t m_att8;
    int32_t m_att9;
    int32_t m_att10;
};
/*!
 * @brief This class represents the structure outersimpleFastBuffers_10_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outersimpleFastBuffers_10_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outersimpleFastBuffers_10_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outersimpleFastBuffers_10_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outersimpleFastBuffers_10_Class that will be copied.
     */
    outersimpleFastBuffers_10_Class(const outersimpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outersimpleFastBuffers_10_Class that will be copied.
     */
    outersimpleFastBuffers_10_Class(outersimpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outersimpleFastBuffers_10_Class that will be copied.
     */
    outersimpleFastBuffers_10_Class& operator=(const outersimpleFastBuffers_10_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outersimpleFastBuffers_10_Class that will be copied.
     */
    outersimpleFastBuffers_10_Class& operator=(outersimpleFastBuffers_10_Class &&x);
    
    /*!
     * @brief This function copies the value in member att1
     * @param _att1 New value to be copied in member att1
     */
    inline void att1(const innersimpleFastBuffers_10_Class &_att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function moves the value in member att1
     * @param _att1 New value to be moved in member att1
     */
    inline void att1(innersimpleFastBuffers_10_Class &&_att1)
    {
        m_att1 = std::move(_att1);
    }

    /*!
     * @brief This function returns a constant reference to member att1
     * @return Constant reference to member att1
     */
    inline const innersimpleFastBuffers_10_Class& att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline innersimpleFastBuffers_10_Class& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function copies the value in member att2
     * @param _att2 New value to be copied in member att2
     */
    inline void att2(const innersimpleFastBuffers_10_Class &_att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function moves the value in member att2
     * @param _att2 New value to be moved in member att2
     */
    inline void att2(innersimpleFastBuffers_10_Class &&_att2)
    {
        m_att2 = std::move(_att2);
    }

    /*!
     * @brief This function returns a constant reference to member att2
     * @return Constant reference to member att2
     */
    inline const innersimpleFastBuffers_10_Class& att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline innersimpleFastBuffers_10_Class& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const innersimpleFastBuffers_10_Class &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(innersimpleFastBuffers_10_Class &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const innersimpleFastBuffers_10_Class& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline innersimpleFastBuffers_10_Class& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innersimpleFastBuffers_10_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innersimpleFastBuffers_10_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innersimpleFastBuffers_10_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innersimpleFastBuffers_10_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function copies the value in member att5
     * @param _att5 New value to be copied in member att5
     */
    inline void att5(const innersimpleFastBuffers_10_Class &_att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function moves the value in member att5
     * @param _att5 New value to be moved in member att5
     */
    inline void att5(innersimpleFastBuffers_10_Class &&_att5)
    {
        m_att5 = std::move(_att5);
    }

    /*!
     * @brief This function returns a constant reference to member att5
     * @return Constant reference to member att5
     */
    inline const innersimpleFastBuffers_10_Class& att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline innersimpleFastBuffers_10_Class& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function copies the value in member att6
     * @param _att6 New value to be copied in member att6
     */
    inline void att6(const innersimpleFastBuffers_10_Class &_att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function moves the value in member att6
     * @param _att6 New value to be moved in member att6
     */
    inline void att6(innersimpleFastBuffers_10_Class &&_att6)
    {
        m_att6 = std::move(_att6);
    }

    /*!
     * @brief This function returns a constant reference to member att6
     * @return Constant reference to member att6
     */
    inline const innersimpleFastBuffers_10_Class& att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline innersimpleFastBuffers_10_Class& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function copies the value in member att7
     * @param _att7 New value to be copied in member att7
     */
    inline void att7(const innersimpleFastBuffers_10_Class &_att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function moves the value in member att7
     * @param _att7 New value to be moved in member att7
     */
    inline void att7(innersimpleFastBuffers_10_Class &&_att7)
    {
        m_att7 = std::move(_att7);
    }

    /*!
     * @brief This function returns a constant reference to member att7
     * @return Constant reference to member att7
     */
    inline const innersimpleFastBuffers_10_Class& att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline innersimpleFastBuffers_10_Class& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function copies the value in member att8
     * @param _att8 New value to be copied in member att8
     */
    inline void att8(const innersimpleFastBuffers_10_Class &_att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function moves the value in member att8
     * @param _att8 New value to be moved in member att8
     */
    inline void att8(innersimpleFastBuffers_10_Class &&_att8)
    {
        m_att8 = std::move(_att8);
    }

    /*!
     * @brief This function returns a constant reference to member att8
     * @return Constant reference to member att8
     */
    inline const innersimpleFastBuffers_10_Class& att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline innersimpleFastBuffers_10_Class& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const innersimpleFastBuffers_10_Class &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(innersimpleFastBuffers_10_Class &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const innersimpleFastBuffers_10_Class& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline innersimpleFastBuffers_10_Class& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const innersimpleFastBuffers_10_Class &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(innersimpleFastBuffers_10_Class &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const innersimpleFastBuffers_10_Class& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline innersimpleFastBuffers_10_Class& att10()
    {
        return m_att10;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_10_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 400;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outersimpleFastBuffers_10_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 400;}
    
private:
    innersimpleFastBuffers_10_Class m_att1;
    innersimpleFastBuffers_10_Class m_att2;
    innersimpleFastBuffers_10_Class m_att3;
    innersimpleFastBuffers_10_Class m_att4;
    innersimpleFastBuffers_10_Class m_att5;
    innersimpleFastBuffers_10_Class m_att6;
    innersimpleFastBuffers_10_Class m_att7;
    innersimpleFastBuffers_10_Class m_att8;
    innersimpleFastBuffers_10_Class m_att9;
    innersimpleFastBuffers_10_Class m_att10;
};
/*!
 * @brief This class represents the structure innercomplexFastBuffers_1_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innercomplexFastBuffers_1_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innercomplexFastBuffers_1_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innercomplexFastBuffers_1_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innercomplexFastBuffers_1_Class that will be copied.
     */
    innercomplexFastBuffers_1_Class(const innercomplexFastBuffers_1_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innercomplexFastBuffers_1_Class that will be copied.
     */
    innercomplexFastBuffers_1_Class(innercomplexFastBuffers_1_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innercomplexFastBuffers_1_Class that will be copied.
     */
    innercomplexFastBuffers_1_Class& operator=(const innercomplexFastBuffers_1_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innercomplexFastBuffers_1_Class that will be copied.
     */
    innercomplexFastBuffers_1_Class& operator=(innercomplexFastBuffers_1_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(float _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline float att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline float& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(double _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline double att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline double& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(bool _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline bool att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline bool& att6()
    {
        return m_att6;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_1_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 289;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_1_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 284;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    float m_att4;
    double m_att5;
    bool m_att6;
};
/*!
 * @brief This class represents the structure outercomplexFastBuffers_1_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outercomplexFastBuffers_1_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outercomplexFastBuffers_1_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outercomplexFastBuffers_1_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outercomplexFastBuffers_1_Class that will be copied.
     */
    outercomplexFastBuffers_1_Class(const outercomplexFastBuffers_1_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outercomplexFastBuffers_1_Class that will be copied.
     */
    outercomplexFastBuffers_1_Class(outercomplexFastBuffers_1_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outercomplexFastBuffers_1_Class that will be copied.
     */
    outercomplexFastBuffers_1_Class& operator=(const outercomplexFastBuffers_1_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outercomplexFastBuffers_1_Class that will be copied.
     */
    outercomplexFastBuffers_1_Class& operator=(outercomplexFastBuffers_1_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innercomplexFastBuffers_1_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innercomplexFastBuffers_1_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innercomplexFastBuffers_1_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innercomplexFastBuffers_1_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(float _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline float att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline float& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(double _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline double att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline double& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(bool _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline bool att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline bool& att7()
    {
        return m_att7;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_1_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 577;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_1_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 568;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    innercomplexFastBuffers_1_Class m_att4;
    float m_att5;
    double m_att6;
    bool m_att7;
};
/*!
 * @brief This class represents the structure innercomplexFastBuffers_2_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innercomplexFastBuffers_2_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innercomplexFastBuffers_2_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innercomplexFastBuffers_2_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innercomplexFastBuffers_2_Class that will be copied.
     */
    innercomplexFastBuffers_2_Class(const innercomplexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innercomplexFastBuffers_2_Class that will be copied.
     */
    innercomplexFastBuffers_2_Class(innercomplexFastBuffers_2_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innercomplexFastBuffers_2_Class that will be copied.
     */
    innercomplexFastBuffers_2_Class& operator=(const innercomplexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innercomplexFastBuffers_2_Class that will be copied.
     */
    innercomplexFastBuffers_2_Class& operator=(innercomplexFastBuffers_2_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int64_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int64_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int64_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function copies the value in member att5
     * @param _att5 New value to be copied in member att5
     */
    inline void att5(const std::string &_att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function moves the value in member att5
     * @param _att5 New value to be moved in member att5
     */
    inline void att5(std::string &&_att5)
    {
        m_att5 = std::move(_att5);
    }

    /*!
     * @brief This function returns a constant reference to member att5
     * @return Constant reference to member att5
     */
    inline const std::string& att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline std::string& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function copies the value in member att6
     * @param _att6 New value to be copied in member att6
     */
    inline void att6(const std::string &_att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function moves the value in member att6
     * @param _att6 New value to be moved in member att6
     */
    inline void att6(std::string &&_att6)
    {
        m_att6 = std::move(_att6);
    }

    /*!
     * @brief This function returns a constant reference to member att6
     * @return Constant reference to member att6
     */
    inline const std::string& att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline std::string& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(float _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline float att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline float& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(float _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline float att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline float& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(double _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline double att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline double& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(double _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline double att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline double& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(bool _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline bool att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline bool& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(bool _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline bool att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline bool& att12()
    {
        return m_att12;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_2_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 570;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_2_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 568;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int64_t m_att3;
    int64_t m_att4;
    std::string m_att5;
    std::string m_att6;
    float m_att7;
    float m_att8;
    double m_att9;
    double m_att10;
    bool m_att11;
    bool m_att12;
};
/*!
 * @brief This class represents the structure outercomplexFastBuffers_2_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outercomplexFastBuffers_2_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outercomplexFastBuffers_2_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outercomplexFastBuffers_2_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outercomplexFastBuffers_2_Class that will be copied.
     */
    outercomplexFastBuffers_2_Class(const outercomplexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outercomplexFastBuffers_2_Class that will be copied.
     */
    outercomplexFastBuffers_2_Class(outercomplexFastBuffers_2_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outercomplexFastBuffers_2_Class that will be copied.
     */
    outercomplexFastBuffers_2_Class& operator=(const outercomplexFastBuffers_2_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outercomplexFastBuffers_2_Class that will be copied.
     */
    outercomplexFastBuffers_2_Class& operator=(outercomplexFastBuffers_2_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innercomplexFastBuffers_2_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innercomplexFastBuffers_2_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innercomplexFastBuffers_2_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innercomplexFastBuffers_2_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(float _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline float att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline float& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(double _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline double att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline double& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(bool _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline bool att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline bool& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const innercomplexFastBuffers_2_Class &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(innercomplexFastBuffers_2_Class &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const innercomplexFastBuffers_2_Class& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline innercomplexFastBuffers_2_Class& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(float _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline float att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline float& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(double _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline double att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline double& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(bool _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline bool att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline bool& att13()
    {
        return m_att13;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_2_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 1729;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_2_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 1700;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    innercomplexFastBuffers_2_Class m_att4;
    float m_att5;
    double m_att6;
    bool m_att7;
    int64_t m_att8;
    std::string m_att9;
    innercomplexFastBuffers_2_Class m_att10;
    float m_att11;
    double m_att12;
    bool m_att13;
};
/*!
 * @brief This class represents the structure innercomplexFastBuffers_3_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innercomplexFastBuffers_3_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innercomplexFastBuffers_3_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innercomplexFastBuffers_3_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innercomplexFastBuffers_3_Class that will be copied.
     */
    innercomplexFastBuffers_3_Class(const innercomplexFastBuffers_3_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innercomplexFastBuffers_3_Class that will be copied.
     */
    innercomplexFastBuffers_3_Class(innercomplexFastBuffers_3_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innercomplexFastBuffers_3_Class that will be copied.
     */
    innercomplexFastBuffers_3_Class& operator=(const innercomplexFastBuffers_3_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innercomplexFastBuffers_3_Class that will be copied.
     */
    innercomplexFastBuffers_3_Class& operator=(innercomplexFastBuffers_3_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int64_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int64_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int64_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function copies the value in member att7
     * @param _att7 New value to be copied in member att7
     */
    inline void att7(const std::string &_att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function moves the value in member att7
     * @param _att7 New value to be moved in member att7
     */
    inline void att7(std::string &&_att7)
    {
        m_att7 = std::move(_att7);
    }

    /*!
     * @brief This function returns a constant reference to member att7
     * @return Constant reference to member att7
     */
    inline const std::string& att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline std::string& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function copies the value in member att8
     * @param _att8 New value to be copied in member att8
     */
    inline void att8(const std::string &_att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function moves the value in member att8
     * @param _att8 New value to be moved in member att8
     */
    inline void att8(std::string &&_att8)
    {
        m_att8 = std::move(_att8);
    }

    /*!
     * @brief This function returns a constant reference to member att8
     * @return Constant reference to member att8
     */
    inline const std::string& att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline std::string& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(float _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline float att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline float& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(float _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline float att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline float& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(float _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline float att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline float& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(double _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline double att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline double& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(double _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline double att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline double& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(double _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline double att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline double& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(bool _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline bool att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline bool& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(bool _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline bool att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline bool& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(bool _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline bool att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline bool& att18()
    {
        return m_att18;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_3_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 859;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_3_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 852;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int64_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    std::string m_att7;
    std::string m_att8;
    std::string m_att9;
    float m_att10;
    float m_att11;
    float m_att12;
    double m_att13;
    double m_att14;
    double m_att15;
    bool m_att16;
    bool m_att17;
    bool m_att18;
};
/*!
 * @brief This class represents the structure outercomplexFastBuffers_3_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outercomplexFastBuffers_3_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outercomplexFastBuffers_3_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outercomplexFastBuffers_3_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outercomplexFastBuffers_3_Class that will be copied.
     */
    outercomplexFastBuffers_3_Class(const outercomplexFastBuffers_3_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outercomplexFastBuffers_3_Class that will be copied.
     */
    outercomplexFastBuffers_3_Class(outercomplexFastBuffers_3_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outercomplexFastBuffers_3_Class that will be copied.
     */
    outercomplexFastBuffers_3_Class& operator=(const outercomplexFastBuffers_3_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outercomplexFastBuffers_3_Class that will be copied.
     */
    outercomplexFastBuffers_3_Class& operator=(outercomplexFastBuffers_3_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innercomplexFastBuffers_3_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innercomplexFastBuffers_3_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innercomplexFastBuffers_3_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innercomplexFastBuffers_3_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(float _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline float att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline float& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(double _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline double att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline double& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(bool _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline bool att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline bool& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const innercomplexFastBuffers_3_Class &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(innercomplexFastBuffers_3_Class &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const innercomplexFastBuffers_3_Class& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline innercomplexFastBuffers_3_Class& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(float _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline float att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline float& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(double _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline double att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline double& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(bool _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline bool att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline bool& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function copies the value in member att14
     * @param _att14 New value to be copied in member att14
     */
    inline void att14(const std::string &_att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function moves the value in member att14
     * @param _att14 New value to be moved in member att14
     */
    inline void att14(std::string &&_att14)
    {
        m_att14 = std::move(_att14);
    }

    /*!
     * @brief This function returns a constant reference to member att14
     * @return Constant reference to member att14
     */
    inline const std::string& att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline std::string& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function copies the value in member att15
     * @param _att15 New value to be copied in member att15
     */
    inline void att15(const innercomplexFastBuffers_3_Class &_att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function moves the value in member att15
     * @param _att15 New value to be moved in member att15
     */
    inline void att15(innercomplexFastBuffers_3_Class &&_att15)
    {
        m_att15 = std::move(_att15);
    }

    /*!
     * @brief This function returns a constant reference to member att15
     * @return Constant reference to member att15
     */
    inline const innercomplexFastBuffers_3_Class& att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline innercomplexFastBuffers_3_Class& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(double _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline double att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline double& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(bool _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline bool att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline bool& att18()
    {
        return m_att18;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_3_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 3425;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_3_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 3392;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    innercomplexFastBuffers_3_Class m_att4;
    float m_att5;
    double m_att6;
    bool m_att7;
    int64_t m_att8;
    std::string m_att9;
    innercomplexFastBuffers_3_Class m_att10;
    float m_att11;
    double m_att12;
    bool m_att13;
    std::string m_att14;
    innercomplexFastBuffers_3_Class m_att15;
    float m_att16;
    double m_att17;
    bool m_att18;
};
/*!
 * @brief This class represents the structure innercomplexFastBuffers_4_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innercomplexFastBuffers_4_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innercomplexFastBuffers_4_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innercomplexFastBuffers_4_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innercomplexFastBuffers_4_Class that will be copied.
     */
    innercomplexFastBuffers_4_Class(const innercomplexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innercomplexFastBuffers_4_Class that will be copied.
     */
    innercomplexFastBuffers_4_Class(innercomplexFastBuffers_4_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innercomplexFastBuffers_4_Class that will be copied.
     */
    innercomplexFastBuffers_4_Class& operator=(const innercomplexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innercomplexFastBuffers_4_Class that will be copied.
     */
    innercomplexFastBuffers_4_Class& operator=(innercomplexFastBuffers_4_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int64_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int64_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int64_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const std::string &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(std::string &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const std::string& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline std::string& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function copies the value in member att11
     * @param _att11 New value to be copied in member att11
     */
    inline void att11(const std::string &_att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function moves the value in member att11
     * @param _att11 New value to be moved in member att11
     */
    inline void att11(std::string &&_att11)
    {
        m_att11 = std::move(_att11);
    }

    /*!
     * @brief This function returns a constant reference to member att11
     * @return Constant reference to member att11
     */
    inline const std::string& att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline std::string& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function copies the value in member att12
     * @param _att12 New value to be copied in member att12
     */
    inline void att12(const std::string &_att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function moves the value in member att12
     * @param _att12 New value to be moved in member att12
     */
    inline void att12(std::string &&_att12)
    {
        m_att12 = std::move(_att12);
    }

    /*!
     * @brief This function returns a constant reference to member att12
     * @return Constant reference to member att12
     */
    inline const std::string& att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline std::string& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(float _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline float att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline float& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function sets a value in member att14
     * @param _att14 New value for member att14
     */
    inline void att14(float _att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function returns the value of member att14
     * @return Value of member att14
     */
    inline float att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline float& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function sets a value in member att15
     * @param _att15 New value for member att15
     */
    inline void att15(float _att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function returns the value of member att15
     * @return Value of member att15
     */
    inline float att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline float& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(double _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline double att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline double& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(double _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline double att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline double& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(double _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline double att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline double& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(double _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline double att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline double& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(bool _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline bool att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline bool& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(bool _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline bool att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline bool& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(bool _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline bool att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline bool& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(bool _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline bool att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline bool& att24()
    {
        return m_att24;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_4_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 1140;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_4_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 1136;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int64_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    std::string m_att9;
    std::string m_att10;
    std::string m_att11;
    std::string m_att12;
    float m_att13;
    float m_att14;
    float m_att15;
    float m_att16;
    double m_att17;
    double m_att18;
    double m_att19;
    double m_att20;
    bool m_att21;
    bool m_att22;
    bool m_att23;
    bool m_att24;
};
/*!
 * @brief This class represents the structure outercomplexFastBuffers_4_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outercomplexFastBuffers_4_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outercomplexFastBuffers_4_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outercomplexFastBuffers_4_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outercomplexFastBuffers_4_Class that will be copied.
     */
    outercomplexFastBuffers_4_Class(const outercomplexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outercomplexFastBuffers_4_Class that will be copied.
     */
    outercomplexFastBuffers_4_Class(outercomplexFastBuffers_4_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outercomplexFastBuffers_4_Class that will be copied.
     */
    outercomplexFastBuffers_4_Class& operator=(const outercomplexFastBuffers_4_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outercomplexFastBuffers_4_Class that will be copied.
     */
    outercomplexFastBuffers_4_Class& operator=(outercomplexFastBuffers_4_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innercomplexFastBuffers_4_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innercomplexFastBuffers_4_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innercomplexFastBuffers_4_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innercomplexFastBuffers_4_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(float _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline float att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline float& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(double _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline double att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline double& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(bool _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline bool att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline bool& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const innercomplexFastBuffers_4_Class &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(innercomplexFastBuffers_4_Class &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const innercomplexFastBuffers_4_Class& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline innercomplexFastBuffers_4_Class& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(float _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline float att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline float& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(double _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline double att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline double& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(bool _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline bool att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline bool& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function copies the value in member att14
     * @param _att14 New value to be copied in member att14
     */
    inline void att14(const std::string &_att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function moves the value in member att14
     * @param _att14 New value to be moved in member att14
     */
    inline void att14(std::string &&_att14)
    {
        m_att14 = std::move(_att14);
    }

    /*!
     * @brief This function returns a constant reference to member att14
     * @return Constant reference to member att14
     */
    inline const std::string& att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline std::string& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function copies the value in member att15
     * @param _att15 New value to be copied in member att15
     */
    inline void att15(const innercomplexFastBuffers_4_Class &_att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function moves the value in member att15
     * @param _att15 New value to be moved in member att15
     */
    inline void att15(innercomplexFastBuffers_4_Class &&_att15)
    {
        m_att15 = std::move(_att15);
    }

    /*!
     * @brief This function returns a constant reference to member att15
     * @return Constant reference to member att15
     */
    inline const innercomplexFastBuffers_4_Class& att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline innercomplexFastBuffers_4_Class& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(double _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline double att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline double& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(bool _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline bool att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline bool& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function copies the value in member att19
     * @param _att19 New value to be copied in member att19
     */
    inline void att19(const innercomplexFastBuffers_4_Class &_att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function moves the value in member att19
     * @param _att19 New value to be moved in member att19
     */
    inline void att19(innercomplexFastBuffers_4_Class &&_att19)
    {
        m_att19 = std::move(_att19);
    }

    /*!
     * @brief This function returns a constant reference to member att19
     * @return Constant reference to member att19
     */
    inline const innercomplexFastBuffers_4_Class& att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline innercomplexFastBuffers_4_Class& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(float _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline float att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline float& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(double _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline double att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline double& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(bool _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline bool att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline bool& att22()
    {
        return m_att22;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_4_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 5441;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_4_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 5393;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    innercomplexFastBuffers_4_Class m_att4;
    float m_att5;
    double m_att6;
    bool m_att7;
    int64_t m_att8;
    std::string m_att9;
    innercomplexFastBuffers_4_Class m_att10;
    float m_att11;
    double m_att12;
    bool m_att13;
    std::string m_att14;
    innercomplexFastBuffers_4_Class m_att15;
    float m_att16;
    double m_att17;
    bool m_att18;
    innercomplexFastBuffers_4_Class m_att19;
    float m_att20;
    double m_att21;
    bool m_att22;
};
/*!
 * @brief This class represents the structure innercomplexFastBuffers_5_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport innercomplexFastBuffers_5_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    innercomplexFastBuffers_5_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~innercomplexFastBuffers_5_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object innercomplexFastBuffers_5_Class that will be copied.
     */
    innercomplexFastBuffers_5_Class(const innercomplexFastBuffers_5_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object innercomplexFastBuffers_5_Class that will be copied.
     */
    innercomplexFastBuffers_5_Class(innercomplexFastBuffers_5_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object innercomplexFastBuffers_5_Class that will be copied.
     */
    innercomplexFastBuffers_5_Class& operator=(const innercomplexFastBuffers_5_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object innercomplexFastBuffers_5_Class that will be copied.
     */
    innercomplexFastBuffers_5_Class& operator=(innercomplexFastBuffers_5_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int32_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int32_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int32_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function sets a value in member att3
     * @param _att3 New value for member att3
     */
    inline void att3(int32_t _att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function returns the value of member att3
     * @return Value of member att3
     */
    inline int32_t att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline int32_t& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function sets a value in member att4
     * @param _att4 New value for member att4
     */
    inline void att4(int32_t _att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function returns the value of member att4
     * @return Value of member att4
     */
    inline int32_t att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline int32_t& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(int32_t _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline int32_t att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline int32_t& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(int64_t _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline int64_t att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline int64_t& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(int64_t _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline int64_t att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline int64_t& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function sets a value in member att9
     * @param _att9 New value for member att9
     */
    inline void att9(int64_t _att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function returns the value of member att9
     * @return Value of member att9
     */
    inline int64_t att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline int64_t& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function sets a value in member att10
     * @param _att10 New value for member att10
     */
    inline void att10(int64_t _att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function returns the value of member att10
     * @return Value of member att10
     */
    inline int64_t att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline int64_t& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function copies the value in member att11
     * @param _att11 New value to be copied in member att11
     */
    inline void att11(const std::string &_att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function moves the value in member att11
     * @param _att11 New value to be moved in member att11
     */
    inline void att11(std::string &&_att11)
    {
        m_att11 = std::move(_att11);
    }

    /*!
     * @brief This function returns a constant reference to member att11
     * @return Constant reference to member att11
     */
    inline const std::string& att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline std::string& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function copies the value in member att12
     * @param _att12 New value to be copied in member att12
     */
    inline void att12(const std::string &_att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function moves the value in member att12
     * @param _att12 New value to be moved in member att12
     */
    inline void att12(std::string &&_att12)
    {
        m_att12 = std::move(_att12);
    }

    /*!
     * @brief This function returns a constant reference to member att12
     * @return Constant reference to member att12
     */
    inline const std::string& att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline std::string& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function copies the value in member att13
     * @param _att13 New value to be copied in member att13
     */
    inline void att13(const std::string &_att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function moves the value in member att13
     * @param _att13 New value to be moved in member att13
     */
    inline void att13(std::string &&_att13)
    {
        m_att13 = std::move(_att13);
    }

    /*!
     * @brief This function returns a constant reference to member att13
     * @return Constant reference to member att13
     */
    inline const std::string& att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline std::string& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function copies the value in member att14
     * @param _att14 New value to be copied in member att14
     */
    inline void att14(const std::string &_att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function moves the value in member att14
     * @param _att14 New value to be moved in member att14
     */
    inline void att14(std::string &&_att14)
    {
        m_att14 = std::move(_att14);
    }

    /*!
     * @brief This function returns a constant reference to member att14
     * @return Constant reference to member att14
     */
    inline const std::string& att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline std::string& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function copies the value in member att15
     * @param _att15 New value to be copied in member att15
     */
    inline void att15(const std::string &_att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function moves the value in member att15
     * @param _att15 New value to be moved in member att15
     */
    inline void att15(std::string &&_att15)
    {
        m_att15 = std::move(_att15);
    }

    /*!
     * @brief This function returns a constant reference to member att15
     * @return Constant reference to member att15
     */
    inline const std::string& att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline std::string& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(float _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline float att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline float& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(float _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline float att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline float& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function sets a value in member att19
     * @param _att19 New value for member att19
     */
    inline void att19(float _att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function returns the value of member att19
     * @return Value of member att19
     */
    inline float att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline float& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(float _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline float att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline float& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(double _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline double att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline double& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(double _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline double att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline double& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(double _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline double att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline double& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(double _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline double att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline double& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(double _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline double att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline double& att25()
    {
        return m_att25;
    }
    /*!
     * @brief This function sets a value in member att26
     * @param _att26 New value for member att26
     */
    inline void att26(bool _att26)
    {
        m_att26 = _att26;
    }

    /*!
     * @brief This function returns the value of member att26
     * @return Value of member att26
     */
    inline bool att26() const
    {
        return m_att26;
    }

    /*!
     * @brief This function returns a reference to member att26
     * @return Reference to member att26
     */
    inline bool& att26()
    {
        return m_att26;
    }
    /*!
     * @brief This function sets a value in member att27
     * @param _att27 New value for member att27
     */
    inline void att27(bool _att27)
    {
        m_att27 = _att27;
    }

    /*!
     * @brief This function returns the value of member att27
     * @return Value of member att27
     */
    inline bool att27() const
    {
        return m_att27;
    }

    /*!
     * @brief This function returns a reference to member att27
     * @return Reference to member att27
     */
    inline bool& att27()
    {
        return m_att27;
    }
    /*!
     * @brief This function sets a value in member att28
     * @param _att28 New value for member att28
     */
    inline void att28(bool _att28)
    {
        m_att28 = _att28;
    }

    /*!
     * @brief This function returns the value of member att28
     * @return Value of member att28
     */
    inline bool att28() const
    {
        return m_att28;
    }

    /*!
     * @brief This function returns a reference to member att28
     * @return Reference to member att28
     */
    inline bool& att28()
    {
        return m_att28;
    }
    /*!
     * @brief This function sets a value in member att29
     * @param _att29 New value for member att29
     */
    inline void att29(bool _att29)
    {
        m_att29 = _att29;
    }

    /*!
     * @brief This function returns the value of member att29
     * @return Value of member att29
     */
    inline bool att29() const
    {
        return m_att29;
    }

    /*!
     * @brief This function returns a reference to member att29
     * @return Reference to member att29
     */
    inline bool& att29()
    {
        return m_att29;
    }
    /*!
     * @brief This function sets a value in member att30
     * @param _att30 New value for member att30
     */
    inline void att30(bool _att30)
    {
        m_att30 = _att30;
    }

    /*!
     * @brief This function returns the value of member att30
     * @return Value of member att30
     */
    inline bool att30() const
    {
        return m_att30;
    }

    /*!
     * @brief This function returns a reference to member att30
     * @return Reference to member att30
     */
    inline bool& att30()
    {
        return m_att30;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_5_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 1429;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type innercomplexFastBuffers_5_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 1420;}
    
private:
    int32_t m_att1;
    int32_t m_att2;
    int32_t m_att3;
    int32_t m_att4;
    int32_t m_att5;
    int64_t m_att6;
    int64_t m_att7;
    int64_t m_att8;
    int64_t m_att9;
    int64_t m_att10;
    std::string m_att11;
    std::string m_att12;
    std::string m_att13;
    std::string m_att14;
    std::string m_att15;
    float m_att16;
    float m_att17;
    float m_att18;
    float m_att19;
    float m_att20;
    double m_att21;
    double m_att22;
    double m_att23;
    double m_att24;
    double m_att25;
    bool m_att26;
    bool m_att27;
    bool m_att28;
    bool m_att29;
    bool m_att30;
};
/*!
 * @brief This class represents the structure outercomplexFastBuffers_5_Class defined by the user in the IDL file.
 * @ingroup TEST
 */
class user_cpp_DllExport outercomplexFastBuffers_5_Class
{
public:

    /*!
     * @brief Default constructor.
     */
    outercomplexFastBuffers_5_Class();
    
    /*!
     * @brief Default destructor.
     */
    ~outercomplexFastBuffers_5_Class();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object outercomplexFastBuffers_5_Class that will be copied.
     */
    outercomplexFastBuffers_5_Class(const outercomplexFastBuffers_5_Class &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object outercomplexFastBuffers_5_Class that will be copied.
     */
    outercomplexFastBuffers_5_Class(outercomplexFastBuffers_5_Class &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object outercomplexFastBuffers_5_Class that will be copied.
     */
    outercomplexFastBuffers_5_Class& operator=(const outercomplexFastBuffers_5_Class &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object outercomplexFastBuffers_5_Class that will be copied.
     */
    outercomplexFastBuffers_5_Class& operator=(outercomplexFastBuffers_5_Class &&x);
    
    /*!
     * @brief This function sets a value in member att1
     * @param _att1 New value for member att1
     */
    inline void att1(int32_t _att1)
    {
        m_att1 = _att1;
    }

    /*!
     * @brief This function returns the value of member att1
     * @return Value of member att1
     */
    inline int32_t att1() const
    {
        return m_att1;
    }

    /*!
     * @brief This function returns a reference to member att1
     * @return Reference to member att1
     */
    inline int32_t& att1()
    {
        return m_att1;
    }
    /*!
     * @brief This function sets a value in member att2
     * @param _att2 New value for member att2
     */
    inline void att2(int64_t _att2)
    {
        m_att2 = _att2;
    }

    /*!
     * @brief This function returns the value of member att2
     * @return Value of member att2
     */
    inline int64_t att2() const
    {
        return m_att2;
    }

    /*!
     * @brief This function returns a reference to member att2
     * @return Reference to member att2
     */
    inline int64_t& att2()
    {
        return m_att2;
    }
    /*!
     * @brief This function copies the value in member att3
     * @param _att3 New value to be copied in member att3
     */
    inline void att3(const std::string &_att3)
    {
        m_att3 = _att3;
    }

    /*!
     * @brief This function moves the value in member att3
     * @param _att3 New value to be moved in member att3
     */
    inline void att3(std::string &&_att3)
    {
        m_att3 = std::move(_att3);
    }

    /*!
     * @brief This function returns a constant reference to member att3
     * @return Constant reference to member att3
     */
    inline const std::string& att3() const
    {
        return m_att3;
    }

    /*!
     * @brief This function returns a reference to member att3
     * @return Reference to member att3
     */
    inline std::string& att3()
    {
        return m_att3;
    }
    /*!
     * @brief This function copies the value in member att4
     * @param _att4 New value to be copied in member att4
     */
    inline void att4(const innercomplexFastBuffers_5_Class &_att4)
    {
        m_att4 = _att4;
    }

    /*!
     * @brief This function moves the value in member att4
     * @param _att4 New value to be moved in member att4
     */
    inline void att4(innercomplexFastBuffers_5_Class &&_att4)
    {
        m_att4 = std::move(_att4);
    }

    /*!
     * @brief This function returns a constant reference to member att4
     * @return Constant reference to member att4
     */
    inline const innercomplexFastBuffers_5_Class& att4() const
    {
        return m_att4;
    }

    /*!
     * @brief This function returns a reference to member att4
     * @return Reference to member att4
     */
    inline innercomplexFastBuffers_5_Class& att4()
    {
        return m_att4;
    }
    /*!
     * @brief This function sets a value in member att5
     * @param _att5 New value for member att5
     */
    inline void att5(float _att5)
    {
        m_att5 = _att5;
    }

    /*!
     * @brief This function returns the value of member att5
     * @return Value of member att5
     */
    inline float att5() const
    {
        return m_att5;
    }

    /*!
     * @brief This function returns a reference to member att5
     * @return Reference to member att5
     */
    inline float& att5()
    {
        return m_att5;
    }
    /*!
     * @brief This function sets a value in member att6
     * @param _att6 New value for member att6
     */
    inline void att6(double _att6)
    {
        m_att6 = _att6;
    }

    /*!
     * @brief This function returns the value of member att6
     * @return Value of member att6
     */
    inline double att6() const
    {
        return m_att6;
    }

    /*!
     * @brief This function returns a reference to member att6
     * @return Reference to member att6
     */
    inline double& att6()
    {
        return m_att6;
    }
    /*!
     * @brief This function sets a value in member att7
     * @param _att7 New value for member att7
     */
    inline void att7(bool _att7)
    {
        m_att7 = _att7;
    }

    /*!
     * @brief This function returns the value of member att7
     * @return Value of member att7
     */
    inline bool att7() const
    {
        return m_att7;
    }

    /*!
     * @brief This function returns a reference to member att7
     * @return Reference to member att7
     */
    inline bool& att7()
    {
        return m_att7;
    }
    /*!
     * @brief This function sets a value in member att8
     * @param _att8 New value for member att8
     */
    inline void att8(int64_t _att8)
    {
        m_att8 = _att8;
    }

    /*!
     * @brief This function returns the value of member att8
     * @return Value of member att8
     */
    inline int64_t att8() const
    {
        return m_att8;
    }

    /*!
     * @brief This function returns a reference to member att8
     * @return Reference to member att8
     */
    inline int64_t& att8()
    {
        return m_att8;
    }
    /*!
     * @brief This function copies the value in member att9
     * @param _att9 New value to be copied in member att9
     */
    inline void att9(const std::string &_att9)
    {
        m_att9 = _att9;
    }

    /*!
     * @brief This function moves the value in member att9
     * @param _att9 New value to be moved in member att9
     */
    inline void att9(std::string &&_att9)
    {
        m_att9 = std::move(_att9);
    }

    /*!
     * @brief This function returns a constant reference to member att9
     * @return Constant reference to member att9
     */
    inline const std::string& att9() const
    {
        return m_att9;
    }

    /*!
     * @brief This function returns a reference to member att9
     * @return Reference to member att9
     */
    inline std::string& att9()
    {
        return m_att9;
    }
    /*!
     * @brief This function copies the value in member att10
     * @param _att10 New value to be copied in member att10
     */
    inline void att10(const innercomplexFastBuffers_5_Class &_att10)
    {
        m_att10 = _att10;
    }

    /*!
     * @brief This function moves the value in member att10
     * @param _att10 New value to be moved in member att10
     */
    inline void att10(innercomplexFastBuffers_5_Class &&_att10)
    {
        m_att10 = std::move(_att10);
    }

    /*!
     * @brief This function returns a constant reference to member att10
     * @return Constant reference to member att10
     */
    inline const innercomplexFastBuffers_5_Class& att10() const
    {
        return m_att10;
    }

    /*!
     * @brief This function returns a reference to member att10
     * @return Reference to member att10
     */
    inline innercomplexFastBuffers_5_Class& att10()
    {
        return m_att10;
    }
    /*!
     * @brief This function sets a value in member att11
     * @param _att11 New value for member att11
     */
    inline void att11(float _att11)
    {
        m_att11 = _att11;
    }

    /*!
     * @brief This function returns the value of member att11
     * @return Value of member att11
     */
    inline float att11() const
    {
        return m_att11;
    }

    /*!
     * @brief This function returns a reference to member att11
     * @return Reference to member att11
     */
    inline float& att11()
    {
        return m_att11;
    }
    /*!
     * @brief This function sets a value in member att12
     * @param _att12 New value for member att12
     */
    inline void att12(double _att12)
    {
        m_att12 = _att12;
    }

    /*!
     * @brief This function returns the value of member att12
     * @return Value of member att12
     */
    inline double att12() const
    {
        return m_att12;
    }

    /*!
     * @brief This function returns a reference to member att12
     * @return Reference to member att12
     */
    inline double& att12()
    {
        return m_att12;
    }
    /*!
     * @brief This function sets a value in member att13
     * @param _att13 New value for member att13
     */
    inline void att13(bool _att13)
    {
        m_att13 = _att13;
    }

    /*!
     * @brief This function returns the value of member att13
     * @return Value of member att13
     */
    inline bool att13() const
    {
        return m_att13;
    }

    /*!
     * @brief This function returns a reference to member att13
     * @return Reference to member att13
     */
    inline bool& att13()
    {
        return m_att13;
    }
    /*!
     * @brief This function copies the value in member att14
     * @param _att14 New value to be copied in member att14
     */
    inline void att14(const std::string &_att14)
    {
        m_att14 = _att14;
    }

    /*!
     * @brief This function moves the value in member att14
     * @param _att14 New value to be moved in member att14
     */
    inline void att14(std::string &&_att14)
    {
        m_att14 = std::move(_att14);
    }

    /*!
     * @brief This function returns a constant reference to member att14
     * @return Constant reference to member att14
     */
    inline const std::string& att14() const
    {
        return m_att14;
    }

    /*!
     * @brief This function returns a reference to member att14
     * @return Reference to member att14
     */
    inline std::string& att14()
    {
        return m_att14;
    }
    /*!
     * @brief This function copies the value in member att15
     * @param _att15 New value to be copied in member att15
     */
    inline void att15(const innercomplexFastBuffers_5_Class &_att15)
    {
        m_att15 = _att15;
    }

    /*!
     * @brief This function moves the value in member att15
     * @param _att15 New value to be moved in member att15
     */
    inline void att15(innercomplexFastBuffers_5_Class &&_att15)
    {
        m_att15 = std::move(_att15);
    }

    /*!
     * @brief This function returns a constant reference to member att15
     * @return Constant reference to member att15
     */
    inline const innercomplexFastBuffers_5_Class& att15() const
    {
        return m_att15;
    }

    /*!
     * @brief This function returns a reference to member att15
     * @return Reference to member att15
     */
    inline innercomplexFastBuffers_5_Class& att15()
    {
        return m_att15;
    }
    /*!
     * @brief This function sets a value in member att16
     * @param _att16 New value for member att16
     */
    inline void att16(float _att16)
    {
        m_att16 = _att16;
    }

    /*!
     * @brief This function returns the value of member att16
     * @return Value of member att16
     */
    inline float att16() const
    {
        return m_att16;
    }

    /*!
     * @brief This function returns a reference to member att16
     * @return Reference to member att16
     */
    inline float& att16()
    {
        return m_att16;
    }
    /*!
     * @brief This function sets a value in member att17
     * @param _att17 New value for member att17
     */
    inline void att17(double _att17)
    {
        m_att17 = _att17;
    }

    /*!
     * @brief This function returns the value of member att17
     * @return Value of member att17
     */
    inline double att17() const
    {
        return m_att17;
    }

    /*!
     * @brief This function returns a reference to member att17
     * @return Reference to member att17
     */
    inline double& att17()
    {
        return m_att17;
    }
    /*!
     * @brief This function sets a value in member att18
     * @param _att18 New value for member att18
     */
    inline void att18(bool _att18)
    {
        m_att18 = _att18;
    }

    /*!
     * @brief This function returns the value of member att18
     * @return Value of member att18
     */
    inline bool att18() const
    {
        return m_att18;
    }

    /*!
     * @brief This function returns a reference to member att18
     * @return Reference to member att18
     */
    inline bool& att18()
    {
        return m_att18;
    }
    /*!
     * @brief This function copies the value in member att19
     * @param _att19 New value to be copied in member att19
     */
    inline void att19(const innercomplexFastBuffers_5_Class &_att19)
    {
        m_att19 = _att19;
    }

    /*!
     * @brief This function moves the value in member att19
     * @param _att19 New value to be moved in member att19
     */
    inline void att19(innercomplexFastBuffers_5_Class &&_att19)
    {
        m_att19 = std::move(_att19);
    }

    /*!
     * @brief This function returns a constant reference to member att19
     * @return Constant reference to member att19
     */
    inline const innercomplexFastBuffers_5_Class& att19() const
    {
        return m_att19;
    }

    /*!
     * @brief This function returns a reference to member att19
     * @return Reference to member att19
     */
    inline innercomplexFastBuffers_5_Class& att19()
    {
        return m_att19;
    }
    /*!
     * @brief This function sets a value in member att20
     * @param _att20 New value for member att20
     */
    inline void att20(float _att20)
    {
        m_att20 = _att20;
    }

    /*!
     * @brief This function returns the value of member att20
     * @return Value of member att20
     */
    inline float att20() const
    {
        return m_att20;
    }

    /*!
     * @brief This function returns a reference to member att20
     * @return Reference to member att20
     */
    inline float& att20()
    {
        return m_att20;
    }
    /*!
     * @brief This function sets a value in member att21
     * @param _att21 New value for member att21
     */
    inline void att21(double _att21)
    {
        m_att21 = _att21;
    }

    /*!
     * @brief This function returns the value of member att21
     * @return Value of member att21
     */
    inline double att21() const
    {
        return m_att21;
    }

    /*!
     * @brief This function returns a reference to member att21
     * @return Reference to member att21
     */
    inline double& att21()
    {
        return m_att21;
    }
    /*!
     * @brief This function sets a value in member att22
     * @param _att22 New value for member att22
     */
    inline void att22(bool _att22)
    {
        m_att22 = _att22;
    }

    /*!
     * @brief This function returns the value of member att22
     * @return Value of member att22
     */
    inline bool att22() const
    {
        return m_att22;
    }

    /*!
     * @brief This function returns a reference to member att22
     * @return Reference to member att22
     */
    inline bool& att22()
    {
        return m_att22;
    }
    /*!
     * @brief This function sets a value in member att23
     * @param _att23 New value for member att23
     */
    inline void att23(float _att23)
    {
        m_att23 = _att23;
    }

    /*!
     * @brief This function returns the value of member att23
     * @return Value of member att23
     */
    inline float att23() const
    {
        return m_att23;
    }

    /*!
     * @brief This function returns a reference to member att23
     * @return Reference to member att23
     */
    inline float& att23()
    {
        return m_att23;
    }
    /*!
     * @brief This function sets a value in member att24
     * @param _att24 New value for member att24
     */
    inline void att24(double _att24)
    {
        m_att24 = _att24;
    }

    /*!
     * @brief This function returns the value of member att24
     * @return Value of member att24
     */
    inline double att24() const
    {
        return m_att24;
    }

    /*!
     * @brief This function returns a reference to member att24
     * @return Reference to member att24
     */
    inline double& att24()
    {
        return m_att24;
    }
    /*!
     * @brief This function sets a value in member att25
     * @param _att25 New value for member att25
     */
    inline void att25(bool _att25)
    {
        m_att25 = _att25;
    }

    /*!
     * @brief This function returns the value of member att25
     * @return Value of member att25
     */
    inline bool att25() const
    {
        return m_att25;
    }

    /*!
     * @brief This function returns a reference to member att25
     * @return Reference to member att25
     */
    inline bool& att25()
    {
        return m_att25;
    }
    
    /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_5_Class.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSize() { return 6617;}
     
     /*!
     * @brief This function calculates the space needed to serialize a type outercomplexFastBuffers_5_Class without alignment.
     *        For all types with a variable size (strings, sequences) and without a maximum limit, this function uses
     *        255 as maximum limit.
     */
     inline
     size_t getMaxSerializedSizeWithoutAlign(){ return 6542;}
    
private:
    int32_t m_att1;
    int64_t m_att2;
    std::string m_att3;
    innercomplexFastBuffers_5_Class m_att4;
    float m_att5;
    double m_att6;
    bool m_att7;
    int64_t m_att8;
    std::string m_att9;
    innercomplexFastBuffers_5_Class m_att10;
    float m_att11;
    double m_att12;
    bool m_att13;
    std::string m_att14;
    innercomplexFastBuffers_5_Class m_att15;
    float m_att16;
    double m_att17;
    bool m_att18;
    innercomplexFastBuffers_5_Class m_att19;
    float m_att20;
    double m_att21;
    bool m_att22;
    float m_att23;
    double m_att24;
    bool m_att25;
};

#endif // _test_H_