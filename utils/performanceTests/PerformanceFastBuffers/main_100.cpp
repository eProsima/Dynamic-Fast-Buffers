#include <stdio.h>
#include <malloc.h>

#include <boost/timer/timer.hpp>

#include "Definitions.h"
#include "testSer.h"

using namespace std;

inline void simpleFastBuffers_10()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	simpleFastBuffers_10_Class input;
	testSer cdr2(cdrbuffer);
	simpleFastBuffers_10_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void simpleFastBuffers_20()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	simpleFastBuffers_20_Class input;
	testSer cdr2(cdrbuffer);
	simpleFastBuffers_20_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17(17);
	input.att18(18);
	input.att19(19);
	input.att20(20);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void simpleFastBuffers_30()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	simpleFastBuffers_30_Class input;
	testSer cdr2(cdrbuffer);
	simpleFastBuffers_30_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17(17);
	input.att18(18);
	input.att19(19);
	input.att20(20);
	input.att21(21);
	input.att22(22);
	input.att23(23);
	input.att24(24);
	input.att25(25);
	input.att26(26);
	input.att27(27);
	input.att28(28);
	input.att29(29);
	input.att30(30);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void simpleFastBuffers_40()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	simpleFastBuffers_40_Class input;
	testSer cdr2(cdrbuffer);
	simpleFastBuffers_40_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17(17);
	input.att18(18);
	input.att19(19);
	input.att20(20);
	input.att21(21);
	input.att22(22);
	input.att23(23);
	input.att24(24);
	input.att25(25);
	input.att26(26);
	input.att27(27);
	input.att28(28);
	input.att29(29);
	input.att30(30);
	input.att31(31);
	input.att32(32);
	input.att33(33);
	input.att34(34);
	input.att35(35);
	input.att36(36);
	input.att37(37);
	input.att38(38);
	input.att39(39);
	input.att40(40);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void simpleFastBuffers_50()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	simpleFastBuffers_50_Class input;
	testSer cdr2(cdrbuffer);
	simpleFastBuffers_50_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17(17);
	input.att18(18);
	input.att19(19);
	input.att20(20);
	input.att21(21);
	input.att22(22);
	input.att23(23);
	input.att24(24);
	input.att25(25);
	input.att26(26);
	input.att27(27);
	input.att28(28);
	input.att29(29);
	input.att30(30);
	input.att31(31);
	input.att32(32);
	input.att33(33);
	input.att34(34);
	input.att35(35);
	input.att36(36);
	input.att37(37);
	input.att38(38);
	input.att39(39);
	input.att40(40);
	input.att41(41);
	input.att42(42);
	input.att43(43);
	input.att44(44);
	input.att45(45);
	input.att46(46);
	input.att47(47);
	input.att48(48);
	input.att49(49);
	input.att50(50);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void simpleTestFastBuffers()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleFastBuffers_10();
	}
	cout << endl << endl;

	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleFastBuffers_20();
	}
	cout << endl << endl;

	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleFastBuffers_30();
	}
	cout << endl << endl;

	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleFastBuffers_40();
	}
	cout << endl << endl;

	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleFastBuffers_50();
	}

	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void complexFastBuffers_2()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	complexFastBuffers_2_Class input;
	testSer cdr2(cdrbuffer);
	complexFastBuffers_2_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5("TEST 5");
	input.att6("TEST 6");
	input.att7(8.11);
	input.att8(9.12);
	input.att9(11.9);
	input.att10(12.10);
	input.att11(true);
	input.att12(true);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void complexFastBuffers_4()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	complexFastBuffers_4_Class input;
	testSer cdr2(cdrbuffer);
	complexFastBuffers_4_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9("TEST 9");
	input.att10("TEST 10");
	input.att11("TEST 11");
	input.att12("TEST 12");
	input.att13(14.17);
	input.att14(15.18);
	input.att15(16.19);
	input.att16(17.20);
	input.att17(19.17);
	input.att18(20.18);
	input.att19(21.19);
	input.att20(22.20);
	input.att21(true);
	input.att22(true);
	input.att23(true);
	input.att24(true);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void complexFastBuffers_6()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	complexFastBuffers_6_Class input;
	testSer cdr2(cdrbuffer);
	complexFastBuffers_6_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13("TEST 13");
	input.att14("TEST 14");
	input.att15("TEST 15");
	input.att16("TEST 16");
	input.att17("TEST 17");
	input.att18("TEST 18");
	input.att19(20.23);
	input.att20(21.24);
	input.att21(22.25);
	input.att22(23.26);
	input.att23(24.27);
	input.att24(25.28);
	input.att25(27.25);
	input.att26(28.26);
	input.att27(29.27);
	input.att28(30.28);
	input.att29(31.29);
	input.att30(32.30);
	input.att31(true);
	input.att32(true);
	input.att33(true);
	input.att34(true);
	input.att35(true);
	input.att36(true);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void complexFastBuffers_8()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	complexFastBuffers_8_Class input;
	testSer cdr2(cdrbuffer);
	complexFastBuffers_8_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17("TEST 17");
	input.att18("TEST 18");
	input.att19("TEST 19");
	input.att20("TEST 20");
	input.att21("TEST 21");
	input.att22("TEST 22");
	input.att23("TEST 23");
	input.att24("TEST 24");
	input.att25(26.29);
	input.att26(27.30);
	input.att27(28.31);
	input.att28(29.32);
	input.att29(30.33);
	input.att30(31.34);
	input.att31(32.35);
	input.att32(33.36);
	input.att33(35.33);
	input.att34(36.34);
	input.att35(37.35);
	input.att36(38.36);
	input.att37(39.37);
	input.att38(40.38);
	input.att39(41.39);
	input.att40(42.40);
	input.att41(true);
	input.att42(true);
	input.att43(true);
	input.att44(true);
	input.att45(true);
	input.att46(true);
	input.att47(true);
	input.att48(true);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void complexFastBuffers_10()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	complexFastBuffers_10_Class input;
	testSer cdr2(cdrbuffer);
	complexFastBuffers_10_Class output;

	input.att1(1);
	input.att2(2);
	input.att3(3);
	input.att4(4);
	input.att5(5);
	input.att6(6);
	input.att7(7);
	input.att8(8);
	input.att9(9);
	input.att10(10);
	input.att11(11);
	input.att12(12);
	input.att13(13);
	input.att14(14);
	input.att15(15);
	input.att16(16);
	input.att17(17);
	input.att18(18);
	input.att19(19);
	input.att20(20);
	input.att21("TEST 21");
	input.att22("TEST 22");
	input.att23("TEST 23");
	input.att24("TEST 24");
	input.att25("TEST 25");
	input.att26("TEST 26");
	input.att27("TEST 27");
	input.att28("TEST 28");
	input.att29("TEST 29");
	input.att30("TEST 30");
	input.att31(32.35);
	input.att32(33.36);
	input.att33(34.37);
	input.att34(35.38);
	input.att35(36.39);
	input.att36(37.40);
	input.att37(38.41);
	input.att38(39.42);
	input.att39(40.43);
	input.att40(41.44);
	input.att41(43.41);
	input.att42(44.42);
	input.att43(45.43);
	input.att44(46.44);
	input.att45(47.45);
	input.att46(48.46);
	input.att47(49.47);
	input.att48(50.48);
	input.att49(51.49);
	input.att50(52.50);
	input.att51(true);
	input.att52(true);
	input.att53(true);
	input.att54(true);
	input.att55(true);
	input.att56(true);
	input.att57(true);
	input.att58(true);
	input.att59(true);
	input.att60(true);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void complexTestFastBuffers()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexFastBuffers_2();
	}
	cout << endl << endl;

	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexFastBuffers_4();
	}
	cout << endl << endl;

	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexFastBuffers_6();
	}
	cout << endl << endl;

	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexFastBuffers_8();
	}
	cout << endl << endl;

	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexFastBuffers_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void innersimpleFastBuffers_2()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outersimpleFastBuffers_2_Class input;
	testSer cdr2(cdrbuffer);
	outersimpleFastBuffers_2_Class output;

	innersimpleFastBuffers_2_Class inner1;
	inner1.att1(1);
	inner1.att2(2);

	innersimpleFastBuffers_2_Class inner2;
	inner2.att1(1);
	inner2.att2(2);

	input.att1(inner1);
	input.att2(inner2);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innersimpleFastBuffers_4()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outersimpleFastBuffers_4_Class input;
	testSer cdr2(cdrbuffer);
	outersimpleFastBuffers_4_Class output;

	innersimpleFastBuffers_4_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);

	innersimpleFastBuffers_4_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);

	innersimpleFastBuffers_4_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);

	innersimpleFastBuffers_4_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);

	input.att1(inner1);
	input.att2(inner2);
	input.att3(inner3);
	input.att4(inner4);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innersimpleFastBuffers_6()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outersimpleFastBuffers_6_Class input;
	testSer cdr2(cdrbuffer);
	outersimpleFastBuffers_6_Class output;

	innersimpleFastBuffers_6_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);

	innersimpleFastBuffers_6_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);

	innersimpleFastBuffers_6_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);

	innersimpleFastBuffers_6_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);
	inner4.att5(5);
	inner4.att6(6);

	innersimpleFastBuffers_6_Class inner5;
	inner5.att1(1);
	inner5.att2(2);
	inner5.att3(3);
	inner5.att4(4);
	inner5.att5(5);
	inner5.att6(6);

	innersimpleFastBuffers_6_Class inner6;
	inner6.att1(1);
	inner6.att2(2);
	inner6.att3(3);
	inner6.att4(4);
	inner6.att5(5);
	inner6.att6(6);

	input.att1(inner1);
	input.att2(inner2);
	input.att3(inner3);
	input.att4(inner4);
	input.att5(inner5);
	input.att6(inner6);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innersimpleFastBuffers_8()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outersimpleFastBuffers_8_Class input;
	testSer cdr2(cdrbuffer);
	outersimpleFastBuffers_8_Class output;

	innersimpleFastBuffers_8_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);
	inner1.att7(7);
	inner1.att8(8);

	innersimpleFastBuffers_8_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);
	inner2.att7(7);
	inner2.att8(8);

	innersimpleFastBuffers_8_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);
	inner3.att7(7);
	inner3.att8(8);

	innersimpleFastBuffers_8_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);
	inner4.att5(5);
	inner4.att6(6);
	inner4.att7(7);
	inner4.att8(8);

	innersimpleFastBuffers_8_Class inner5;
	inner5.att1(1);
	inner5.att2(2);
	inner5.att3(3);
	inner5.att4(4);
	inner5.att5(5);
	inner5.att6(6);
	inner5.att7(7);
	inner5.att8(8);

	innersimpleFastBuffers_8_Class inner6;
	inner6.att1(1);
	inner6.att2(2);
	inner6.att3(3);
	inner6.att4(4);
	inner6.att5(5);
	inner6.att6(6);
	inner6.att7(7);
	inner6.att8(8);

	innersimpleFastBuffers_8_Class inner7;
	inner7.att1(1);
	inner7.att2(2);
	inner7.att3(3);
	inner7.att4(4);
	inner7.att5(5);
	inner7.att6(6);
	inner7.att7(7);
	inner7.att8(8);

	innersimpleFastBuffers_8_Class inner8;
	inner8.att1(1);
	inner8.att2(2);
	inner8.att3(3);
	inner8.att4(4);
	inner8.att5(5);
	inner8.att6(6);
	inner8.att7(7);
	inner8.att8(8);

	input.att1(inner1);
	input.att2(inner2);
	input.att3(inner3);
	input.att4(inner4);
	input.att5(inner5);
	input.att6(inner6);
	input.att7(inner7);
	input.att8(inner8);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innersimpleFastBuffers_10()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outersimpleFastBuffers_10_Class input;
	testSer cdr2(cdrbuffer);
	outersimpleFastBuffers_10_Class output;

	innersimpleFastBuffers_10_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);
	inner1.att7(7);
	inner1.att8(8);
	inner1.att9(9);
	inner1.att10(10);

	innersimpleFastBuffers_10_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);
	inner2.att7(7);
	inner2.att8(8);
	inner2.att9(9);
	inner2.att10(10);

	innersimpleFastBuffers_10_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);
	inner3.att7(7);
	inner3.att8(8);
	inner3.att9(9);
	inner3.att10(10);

	innersimpleFastBuffers_10_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);
	inner4.att5(5);
	inner4.att6(6);
	inner4.att7(7);
	inner4.att8(8);
	inner4.att9(9);
	inner4.att10(10);

	innersimpleFastBuffers_10_Class inner5;
	inner5.att1(1);
	inner5.att2(2);
	inner5.att3(3);
	inner5.att4(4);
	inner5.att5(5);
	inner5.att6(6);
	inner5.att7(7);
	inner5.att8(8);
	inner5.att9(9);
	inner5.att10(10);

	innersimpleFastBuffers_10_Class inner6;
	inner6.att1(1);
	inner6.att2(2);
	inner6.att3(3);
	inner6.att4(4);
	inner6.att5(5);
	inner6.att6(6);
	inner6.att7(7);
	inner6.att8(8);
	inner6.att9(9);
	inner6.att10(10);

	innersimpleFastBuffers_10_Class inner7;
	inner7.att1(1);
	inner7.att2(2);
	inner7.att3(3);
	inner7.att4(4);
	inner7.att5(5);
	inner7.att6(6);
	inner7.att7(7);
	inner7.att8(8);
	inner7.att9(9);
	inner7.att10(10);

	innersimpleFastBuffers_10_Class inner8;
	inner8.att1(1);
	inner8.att2(2);
	inner8.att3(3);
	inner8.att4(4);
	inner8.att5(5);
	inner8.att6(6);
	inner8.att7(7);
	inner8.att8(8);
	inner8.att9(9);
	inner8.att10(10);

	innersimpleFastBuffers_10_Class inner9;
	inner9.att1(1);
	inner9.att2(2);
	inner9.att3(3);
	inner9.att4(4);
	inner9.att5(5);
	inner9.att6(6);
	inner9.att7(7);
	inner9.att8(8);
	inner9.att9(9);
	inner9.att10(10);

	innersimpleFastBuffers_10_Class inner10;
	inner10.att1(1);
	inner10.att2(2);
	inner10.att3(3);
	inner10.att4(4);
	inner10.att5(5);
	inner10.att6(6);
	inner10.att7(7);
	inner10.att8(8);
	inner10.att9(9);
	inner10.att10(10);

	input.att1(inner1);
	input.att2(inner2);
	input.att3(inner3);
	input.att4(inner4);
	input.att5(inner5);
	input.att6(inner6);
	input.att7(inner7);
	input.att8(inner8);
	input.att9(inner9);
	input.att10(inner10);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innerSimpleTestFastBuffers()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleFastBuffers_2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleFastBuffers_4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleFastBuffers_6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleFastBuffers_8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleFastBuffers_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void innercomplexFastBuffers_1()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outercomplexFastBuffers_1_Class input;
	testSer cdr2(cdrbuffer);
	outercomplexFastBuffers_1_Class output;

	innercomplexFastBuffers_1_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3("TEST 3");
	inner1.att4(5.8);
	inner1.att5(7.5);
	inner1.att6(true);

	input.att1(1);
	input.att2(2);
	input.att3("TEST 1");
	input.att4(inner1);
	input.att5(2.10);
	input.att6(9.6);
	input.att7(false);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innercomplexFastBuffers_2()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outercomplexFastBuffers_2_Class input;
	testSer cdr2(cdrbuffer);
	outercomplexFastBuffers_2_Class output;

	innercomplexFastBuffers_2_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5("TEST 5");
	inner1.att6("TEST 6");
	inner1.att7(8.11);
	inner1.att8(9.12);
	inner1.att9(11.9);
	inner1.att10(12.10);
	inner1.att11(true);
	inner1.att12(true);

	innercomplexFastBuffers_2_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5("TEST 5");
	inner2.att6("TEST 6");
	inner2.att7(8.11);
	inner2.att8(9.12);
	inner2.att9(11.9);
	inner2.att10(12.10);
	inner2.att11(true);
	inner2.att12(true);

	input.att1(1);
	input.att2(2);
	input.att3("TEST 1");
	input.att4(inner1);
	input.att5(2.10);
	input.att6(9.6);
	input.att7(false);
	input.att8(8);
	input.att9("TEST 2");
	input.att10(inner2);
	input.att11(3.11);
	input.att12(10.12);
	input.att13(false);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innercomplexFastBuffers_3()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outercomplexFastBuffers_3_Class input;
	testSer cdr2(cdrbuffer);
	outercomplexFastBuffers_3_Class output;

	innercomplexFastBuffers_3_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);
	inner1.att7("TEST 7");
	inner1.att8("TEST 8");
	inner1.att9("TEST 9");
	inner1.att10(11.14);
	inner1.att11(12.15);
	inner1.att12(13.16);
	inner1.att13(15.13);
	inner1.att14(16.14);
	inner1.att15(17.15);
	inner1.att16(true);
	inner1.att17(true);
	inner1.att18(true);

	innercomplexFastBuffers_3_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);
	inner2.att7("TEST 7");
	inner2.att8("TEST 8");
	inner2.att9("TEST 9");
	inner2.att10(11.14);
	inner2.att11(12.15);
	inner2.att12(13.16);
	inner2.att13(15.13);
	inner2.att14(16.14);
	inner2.att15(17.15);
	inner2.att16(true);
	inner2.att17(true);
	inner2.att18(true);

	innercomplexFastBuffers_3_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);
	inner3.att7("TEST 7");
	inner3.att8("TEST 8");
	inner3.att9("TEST 9");
	inner3.att10(11.14);
	inner3.att11(12.15);
	inner3.att12(13.16);
	inner3.att13(15.13);
	inner3.att14(16.14);
	inner3.att15(17.15);
	inner3.att16(true);
	inner3.att17(true);
	inner3.att18(true);

	input.att1(1);
	input.att2(2);
	input.att3("TEST 1");
	input.att4(inner1);
	input.att5(2.10);
	input.att6(9.6);
	input.att7(false);
	input.att8(8);
	input.att9("TEST 2");
	input.att10(inner2);
	input.att11(3.11);
	input.att12(10.12);
	input.att13(false);
	input.att14("TEST 3");
	input.att15(inner3);
	input.att16(4.12);
	input.att17(11.17);
	input.att18(false);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innercomplexFastBuffers_4()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outercomplexFastBuffers_4_Class input;
	testSer cdr2(cdrbuffer);
	outercomplexFastBuffers_4_Class output;

	innercomplexFastBuffers_4_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);
	inner1.att7(7);
	inner1.att8(8);
	inner1.att9("TEST 9");
	inner1.att10("TEST 10");
	inner1.att11("TEST 11");
	inner1.att12("TEST 12");
	inner1.att13(14.17);
	inner1.att14(15.18);
	inner1.att15(16.19);
	inner1.att16(17.20);
	inner1.att17(19.17);
	inner1.att18(20.18);
	inner1.att19(21.19);
	inner1.att20(22.20);
	inner1.att21(true);
	inner1.att22(true);
	inner1.att23(true);
	inner1.att24(true);

	innercomplexFastBuffers_4_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);
	inner2.att7(7);
	inner2.att8(8);
	inner2.att9("TEST 9");
	inner2.att10("TEST 10");
	inner2.att11("TEST 11");
	inner2.att12("TEST 12");
	inner2.att13(14.17);
	inner2.att14(15.18);
	inner2.att15(16.19);
	inner2.att16(17.20);
	inner2.att17(19.17);
	inner2.att18(20.18);
	inner2.att19(21.19);
	inner2.att20(22.20);
	inner2.att21(true);
	inner2.att22(true);
	inner2.att23(true);
	inner2.att24(true);

	innercomplexFastBuffers_4_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);
	inner3.att7(7);
	inner3.att8(8);
	inner3.att9("TEST 9");
	inner3.att10("TEST 10");
	inner3.att11("TEST 11");
	inner3.att12("TEST 12");
	inner3.att13(14.17);
	inner3.att14(15.18);
	inner3.att15(16.19);
	inner3.att16(17.20);
	inner3.att17(19.17);
	inner3.att18(20.18);
	inner3.att19(21.19);
	inner3.att20(22.20);
	inner3.att21(true);
	inner3.att22(true);
	inner3.att23(true);
	inner3.att24(true);

	innercomplexFastBuffers_4_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);
	inner4.att5(5);
	inner4.att6(6);
	inner4.att7(7);
	inner4.att8(8);
	inner4.att9("TEST 9");
	inner4.att10("TEST 10");
	inner4.att11("TEST 11");
	inner4.att12("TEST 12");
	inner4.att13(14.17);
	inner4.att14(15.18);
	inner4.att15(16.19);
	inner4.att16(17.20);
	inner4.att17(19.17);
	inner4.att18(20.18);
	inner4.att19(21.19);
	inner4.att20(22.20);
	inner4.att21(true);
	inner4.att22(true);
	inner4.att23(true);
	inner4.att24(true);

	input.att1(1);
	input.att2(2);
	input.att3("TEST 1");
	input.att4(inner1);
	input.att5(2.10);
	input.att6(9.6);
	input.att7(false);
	input.att8(8);
	input.att9("TEST 2");
	input.att10(inner2);
	input.att11(3.11);
	input.att12(10.12);
	input.att13(false);
	input.att14("TEST 3");
	input.att15(inner3);
	input.att16(4.12);
	input.att17(11.17);
	input.att18(false);
	input.att19(inner4);
	input.att20(5.13);
	input.att21(12.21);
	input.att22(false);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innercomplexFastBuffers_5()
{
	char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

	eProsima::FastBuffer cdrbuffer(buffer, BUFFER_SIZE);
	testSer cdr(cdrbuffer);
	outercomplexFastBuffers_5_Class input;
	testSer cdr2(cdrbuffer);
	outercomplexFastBuffers_5_Class output;

	innercomplexFastBuffers_5_Class inner1;
	inner1.att1(1);
	inner1.att2(2);
	inner1.att3(3);
	inner1.att4(4);
	inner1.att5(5);
	inner1.att6(6);
	inner1.att7(7);
	inner1.att8(8);
	inner1.att9(9);
	inner1.att10(10);
	inner1.att11("TEST 11");
	inner1.att12("TEST 12");
	inner1.att13("TEST 13");
	inner1.att14("TEST 14");
	inner1.att15("TEST 15");
	inner1.att16(17.20);
	inner1.att17(18.21);
	inner1.att18(19.22);
	inner1.att19(20.23);
	inner1.att20(21.24);
	inner1.att21(23.21);
	inner1.att22(24.22);
	inner1.att23(25.23);
	inner1.att24(26.24);
	inner1.att25(27.25);
	inner1.att26(true);
	inner1.att27(true);
	inner1.att28(true);
	inner1.att29(true);
	inner1.att30(true);

	innercomplexFastBuffers_5_Class inner2;
	inner2.att1(1);
	inner2.att2(2);
	inner2.att3(3);
	inner2.att4(4);
	inner2.att5(5);
	inner2.att6(6);
	inner2.att7(7);
	inner2.att8(8);
	inner2.att9(9);
	inner2.att10(10);
	inner2.att11("TEST 11");
	inner2.att12("TEST 12");
	inner2.att13("TEST 13");
	inner2.att14("TEST 14");
	inner2.att15("TEST 15");
	inner2.att16(17.20);
	inner2.att17(18.21);
	inner2.att18(19.22);
	inner2.att19(20.23);
	inner2.att20(21.24);
	inner2.att21(23.21);
	inner2.att22(24.22);
	inner2.att23(25.23);
	inner2.att24(26.24);
	inner2.att25(27.25);
	inner2.att26(true);
	inner2.att27(true);
	inner2.att28(true);
	inner2.att29(true);
	inner2.att30(true);

	innercomplexFastBuffers_5_Class inner3;
	inner3.att1(1);
	inner3.att2(2);
	inner3.att3(3);
	inner3.att4(4);
	inner3.att5(5);
	inner3.att6(6);
	inner3.att7(7);
	inner3.att8(8);
	inner3.att9(9);
	inner3.att10(10);
	inner3.att11("TEST 11");
	inner3.att12("TEST 12");
	inner3.att13("TEST 13");
	inner3.att14("TEST 14");
	inner3.att15("TEST 15");
	inner3.att16(17.20);
	inner3.att17(18.21);
	inner3.att18(19.22);
	inner3.att19(20.23);
	inner3.att20(21.24);
	inner3.att21(23.21);
	inner3.att22(24.22);
	inner3.att23(25.23);
	inner3.att24(26.24);
	inner3.att25(27.25);
	inner3.att26(true);
	inner3.att27(true);
	inner3.att28(true);
	inner3.att29(true);
	inner3.att30(true);

	innercomplexFastBuffers_5_Class inner4;
	inner4.att1(1);
	inner4.att2(2);
	inner4.att3(3);
	inner4.att4(4);
	inner4.att5(5);
	inner4.att6(6);
	inner4.att7(7);
	inner4.att8(8);
	inner4.att9(9);
	inner4.att10(10);
	inner4.att11("TEST 11");
	inner4.att12("TEST 12");
	inner4.att13("TEST 13");
	inner4.att14("TEST 14");
	inner4.att15("TEST 15");
	inner4.att16(17.20);
	inner4.att17(18.21);
	inner4.att18(19.22);
	inner4.att19(20.23);
	inner4.att20(21.24);
	inner4.att21(23.21);
	inner4.att22(24.22);
	inner4.att23(25.23);
	inner4.att24(26.24);
	inner4.att25(27.25);
	inner4.att26(true);
	inner4.att27(true);
	inner4.att28(true);
	inner4.att29(true);
	inner4.att30(true);

	innercomplexFastBuffers_5_Class inner5;
	inner5.att1(1);
	inner5.att2(2);
	inner5.att3(3);
	inner5.att4(4);
	inner5.att5(5);
	inner5.att6(6);
	inner5.att7(7);
	inner5.att8(8);
	inner5.att9(9);
	inner5.att10(10);
	inner5.att11("TEST 11");
	inner5.att12("TEST 12");
	inner5.att13("TEST 13");
	inner5.att14("TEST 14");
	inner5.att15("TEST 15");
	inner5.att16(17.20);
	inner5.att17(18.21);
	inner5.att18(19.22);
	inner5.att19(20.23);
	inner5.att20(21.24);
	inner5.att21(23.21);
	inner5.att22(24.22);
	inner5.att23(25.23);
	inner5.att24(26.24);
	inner5.att25(27.25);
	inner5.att26(true);
	inner5.att27(true);
	inner5.att28(true);
	inner5.att29(true);
	inner5.att30(true);

	input.att1(1);
	input.att2(2);
	input.att3("TEST 1");
	input.att4(inner1);
	input.att5(2.10);
	input.att6(9.6);
	input.att7(false);
	input.att8(8);
	input.att9("TEST 2");
	input.att10(inner2);
	input.att11(3.11);
	input.att12(10.12);
	input.att13(false);
	input.att14("TEST 3");
	input.att15(inner3);
	input.att16(4.12);
	input.att17(11.17);
	input.att18(false);
	input.att19(inner4);
	input.att20(5.13);
	input.att21(12.21);
	input.att22(false);
	input.att23(6.14);
	input.att24(13.24);
	input.att25(false);

	boost::timer::auto_cpu_timer t;

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		try{
			cdr.serialize(input);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}
		try{
			cdr2.deserialize(output);
		}catch(eProsima::Exception &ex){
			std::cout << "ERROR: " << ex.what() << std::endl;
		}

		cdr.reset();
		cdr2.reset();
	}

	free(buffer);
}

inline void innerComplexTestFastBuffers()
{
	cout << "Estructura heterogénea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexFastBuffers_1();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexFastBuffers_2();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexFastBuffers_3();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexFastBuffers_4();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexFastBuffers_5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceFastBuffers()
{
	cout << "FAST BUFFERS:" << endl << endl;
	simpleTestFastBuffers();
	complexTestFastBuffers();
	innerSimpleTestFastBuffers();
	innerComplexTestFastBuffers();
	cout << "------------------------------------------------------------------------------------------" << endl;

}

int main()
{
    performanceFastBuffers();
    return 0;
}