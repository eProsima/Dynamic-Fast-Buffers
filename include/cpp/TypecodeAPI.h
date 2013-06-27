#ifndef _TYPECODE_API_
#define _TYPECODE_API_

#include "cpp/DFB_dll.h"
#include <array>
#include "cpp/CommonData.h"
#include "cpp/exceptions/NotEnoughParamsException.h"
#include "cpp/exceptions/WrongTypeException.h"
#include "cpp/exceptions/WrongParamException.h"

namespace DynamicFastBuffers
{
	/*!
     * @brief This static class offers an interface to create a typecode for data type definitions.
     * @ingroup TYPECODEAPIMODULE
     */
	class DFB_DllAPI TypecodeAPI
	{
	private:
		//No private atributes or functions
	public:

		/*!
         * @brief This function creates a Typecode which represents an integer data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createInteger();

		/*!
         * @brief This function creates a Typecode which represents a short data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createShort();

		/*!
         * @brief This function creates a Typecode which represents a long data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createLong();

		/*!
         * @brief This function creates a Typecode which represents a float data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createFloat();

		/*!
         * @brief This function creates a Typecode which represents double precision number data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createDouble();

		/*!
         * @brief This function creates a Typecode which represents a string data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createString();

		/*!
         * @brief This function creates a Typecode which represents a character data type.
		 * @return A pointer to the Typecode object created.
	     */
		static Typecode* createCharacter();

		/*!
         * @brief This function creates a Typecode which represents a boolean data type.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createBoolean();

		/*!
         * @brief This function creates a Typecode which represents a struct data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param init A variable number of Typecode objects to be added as members of the structure. At least one has to be specified.
		 * @return A pointer to the Typecode object created.
		 */
		static Typecode* createStruct(Typecode *init, ...);

		/*!
         * @brief This function creates a Typecode which represents an array of any data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param type A Typecode object which specifies the kind of data that will be stored inside the array.
		 * @param nDims Number of dimensions of the array.
		 * @param dim1 Variable number of integers specifying the lenght of each array dimension.
		 * @return A pointer to the Typecode object created.
		 * @exception WrongParamException This exception is thrown when any of the numbers indicating a dimension length is not greater than zero.
		 * @exception NotEnoughParamsException This exception is thrown when nDims parameter is not greater than zero, or when user provides a number of dimensions 
		 * not equal to nDims parameter.
		 */
		static Typecode* createArray(Typecode *type, int nDims, int dim1, ...);

		/*!
         * @brief This function creates a Typecode which represents a sequence of any data type. The new Typecode will be created inside the function, and returned
		 * when the execution is finished.
		 * @param type A Typecode object which specifies the kind of data that will be stored inside the sequence.
		 * @param maxLength Maximun length of the sequence. This means the maximun number of objects that can be added.
		 * @return A pointer to the Typecode object created.
		 * @exception WrongParamException This exception is thrown when maximum length specified for creating the sequence is not greater than zero.
		 */
		static Typecode* createSequence(Typecode *type, int maxLength);

		/*!
         * @brief This function adds inner members to the Typecode object proportioned as parameter. If no members are specified, an exception will be thrown.
		 * @param dest A Typecode in which members will be added, and a variable number of Typecode objects to add.
		 * @exception WrongParamException This exception is thrown when destination Typecode is NULL.
		 * @exception NotEnoughParamsException This exception is thrown when no inner Typecode objects were specified.
		 * @exception WrongTypeException This exception is thrown when trying to add Typecode objects into a Typecode that is not a structure description.
		 */
		static void addMembers(Typecode *dest, ...);

		/*!
         * @brief This function deletes a Typecode object by calling its default destructor.
		 * @param tc A Typecode to be deleted.
		 * @exception WrongParamException This exception is thrown when given Typecode is NULL.
		 */
		static void deleteTypecode(Typecode *tc);
	};
};

#endif _TYPECODE_API_