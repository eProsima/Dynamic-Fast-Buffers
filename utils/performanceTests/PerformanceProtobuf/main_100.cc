#include <stdio.h>
#include <malloc.h>

#include <boost/timer/timer.hpp>

#include "Definitions.h"
//#include "Performance_100.pb.h"
#include "PerformanceTest.pb.h"

using namespace std;

inline void testSimpleStructProtobuf_10()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_simplePerformance_10 performance1 = performance::Performance_simplePerformance_10(), performance2 = performance::Performance_simplePerformance_10();
	boost::timer::auto_cpu_timer t;
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

		//cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testSimpleStructProtobuf_20()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_simplePerformance_20 performance1 = performance::Performance_simplePerformance_20(), performance2 = performance::Performance_simplePerformance_20();
	boost::timer::auto_cpu_timer t;
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17(17);
	performance1.set_att18(18);
	performance1.set_att19(19);
	performance1.set_att20(20);

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testSimpleStructProtobuf_30()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_simplePerformance_30 performance1 = performance::Performance_simplePerformance_30(), performance2 = performance::Performance_simplePerformance_30();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17(17);
	performance1.set_att18(18);
	performance1.set_att19(19);
	performance1.set_att20(20);
	performance1.set_att21(21);
	performance1.set_att22(22);
	performance1.set_att23(23);
	performance1.set_att24(24);
	performance1.set_att25(25);
	performance1.set_att26(26);
	performance1.set_att27(27);
	performance1.set_att28(28);
	performance1.set_att29(29);
	performance1.set_att30(30);

	boost::timer::auto_cpu_timer t;
	
	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testSimpleStructProtobuf_40()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_simplePerformance_40 performance1 = performance::Performance_simplePerformance_40(), performance2 = performance::Performance_simplePerformance_40();
	boost::timer::auto_cpu_timer t;
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17(17);
	performance1.set_att18(18);
	performance1.set_att19(19);
	performance1.set_att20(20);
	performance1.set_att21(21);
	performance1.set_att22(22);
	performance1.set_att23(23);
	performance1.set_att24(24);
	performance1.set_att25(25);
	performance1.set_att26(26);
	performance1.set_att27(27);
	performance1.set_att28(28);
	performance1.set_att29(29);
	performance1.set_att30(30);
	performance1.set_att31(31);
	performance1.set_att32(32);
	performance1.set_att33(33);
	performance1.set_att34(34);
	performance1.set_att35(35);
	performance1.set_att36(36);
	performance1.set_att37(37);
	performance1.set_att38(38);
	performance1.set_att39(39);
	performance1.set_att40(40);

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testSimpleStructProtobuf_50()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_simplePerformance_50 performance1 = performance::Performance_simplePerformance_50(), performance2 = performance::Performance_simplePerformance_50();
	boost::timer::auto_cpu_timer t;
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17(17);
	performance1.set_att18(18);
	performance1.set_att19(19);
	performance1.set_att20(20);
	performance1.set_att21(21);
	performance1.set_att22(22);
	performance1.set_att23(23);
	performance1.set_att24(24);
	performance1.set_att25(25);
	performance1.set_att26(26);
	performance1.set_att27(27);
	performance1.set_att28(28);
	performance1.set_att29(29);
	performance1.set_att30(30);
	performance1.set_att31(31);
	performance1.set_att32(32);
	performance1.set_att33(33);
	performance1.set_att34(34);
	performance1.set_att35(35);
	performance1.set_att36(36);
	performance1.set_att37(37);
	performance1.set_att38(38);
	performance1.set_att39(39);
	performance1.set_att40(40);
	performance1.set_att41(41);
	performance1.set_att42(42);
	performance1.set_att43(43);
	performance1.set_att44(44);
	performance1.set_att45(45);
	performance1.set_att46(46);
	performance1.set_att47(47);
	performance1.set_att48(48);
	performance1.set_att49(49);
	performance1.set_att50(50);

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void simpleTestProtobuf()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStructProtobuf_10();
	}
	cout << endl << endl;
	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStructProtobuf_20();
	}
	cout << endl << endl;
	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStructProtobuf_30();
	}
	cout << endl << endl;
	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStructProtobuf_40();
	}
	cout << endl << endl;
	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testSimpleStructProtobuf_50();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void testComplexStructProtobuf_2()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_complexPerformance_2 performance1 = performance::Performance_complexPerformance_2(), performance2 = performance::Performance_complexPerformance_2();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5("TEST 5");
	performance1.set_att6("TEST 6");
	performance1.set_att7(8.11);
	performance1.set_att8(9.12);
	performance1.set_att9(11.9);
	performance1.set_att10(12.10);
	performance1.set_att11(true);
	performance1.set_att12(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testComplexStructProtobuf_4()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_complexPerformance_4 performance1 = performance::Performance_complexPerformance_4(), performance2 = performance::Performance_complexPerformance_4();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9("TEST 9");
	performance1.set_att10("TEST 10");
	performance1.set_att11("TEST 11");
	performance1.set_att12("TEST 12");
	performance1.set_att13(14.17);
	performance1.set_att14(15.18);
	performance1.set_att15(16.19);
	performance1.set_att16(17.20);
	performance1.set_att17(19.17);
	performance1.set_att18(20.18);
	performance1.set_att19(21.19);
	performance1.set_att20(22.20);
	performance1.set_att21(true);
	performance1.set_att22(true);
	performance1.set_att23(true);
	performance1.set_att24(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testComplexStructProtobuf_6()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_complexPerformance_6 performance1 = performance::Performance_complexPerformance_6(), performance2 = performance::Performance_complexPerformance_6();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13("TEST 13");
	performance1.set_att14("TEST 14");
	performance1.set_att15("TEST 15");
	performance1.set_att16("TEST 16");
	performance1.set_att17("TEST 17");
	performance1.set_att18("TEST 18");
	performance1.set_att19(20.23);
	performance1.set_att20(21.24);
	performance1.set_att21(22.25);
	performance1.set_att22(23.26);
	performance1.set_att23(24.27);
	performance1.set_att24(25.28);
	performance1.set_att25(27.25);
	performance1.set_att26(28.26);
	performance1.set_att27(29.27);
	performance1.set_att28(30.28);
	performance1.set_att29(31.29);
	performance1.set_att30(32.30);
	performance1.set_att31(true);
	performance1.set_att32(true);
	performance1.set_att33(true);
	performance1.set_att34(true);
	performance1.set_att35(true);
	performance1.set_att36(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testComplexStructProtobuf_8()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_complexPerformance_8 performance1 = performance::Performance_complexPerformance_8(), performance2 = performance::Performance_complexPerformance_8();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17("TEST 17");
	performance1.set_att18("TEST 18");
	performance1.set_att19("TEST 19");
	performance1.set_att20("TEST 20");
	performance1.set_att21("TEST 21");
	performance1.set_att22("TEST 22");
	performance1.set_att23("TEST 23");
	performance1.set_att24("TEST 24");
	performance1.set_att25(26.29);
	performance1.set_att26(27.30);
	performance1.set_att27(28.31);
	performance1.set_att28(29.32);
	performance1.set_att29(30.33);
	performance1.set_att30(31.34);
	performance1.set_att31(32.35);
	performance1.set_att32(33.36);
	performance1.set_att33(35.33);
	performance1.set_att34(36.34);
	performance1.set_att35(37.35);
	performance1.set_att36(38.36);
	performance1.set_att37(39.37);
	performance1.set_att38(40.38);
	performance1.set_att39(41.39);
	performance1.set_att40(42.40);
	performance1.set_att41(true);
	performance1.set_att42(true);
	performance1.set_att43(true);
	performance1.set_att44(true);
	performance1.set_att45(true);
	performance1.set_att46(true);
	performance1.set_att47(true);
	performance1.set_att48(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void testComplexStructProtobuf_10()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));
	performance::Performance_complexPerformance_10 performance1 = performance::Performance_complexPerformance_10(), performance2 = performance::Performance_complexPerformance_10();
	
	performance1.set_att1(1);
	performance1.set_att2(2);
	performance1.set_att3(3);
	performance1.set_att4(4);
	performance1.set_att5(5);
	performance1.set_att6(6);
	performance1.set_att7(7);
	performance1.set_att8(8);
	performance1.set_att9(9);
	performance1.set_att10(10);
	performance1.set_att11(11);
	performance1.set_att12(12);
	performance1.set_att13(13);
	performance1.set_att14(14);
	performance1.set_att15(15);
	performance1.set_att16(16);
	performance1.set_att17(17);
	performance1.set_att18(18);
	performance1.set_att19(19);
	performance1.set_att20(20);
	performance1.set_att21("TEST 21");
	performance1.set_att22("TEST 22");
	performance1.set_att23("TEST 23");
	performance1.set_att24("TEST 24");
	performance1.set_att25("TEST 25");
	performance1.set_att26("TEST 26");
	performance1.set_att27("TEST 27");
	performance1.set_att28("TEST 28");
	performance1.set_att29("TEST 29");
	performance1.set_att30("TEST 30");
	performance1.set_att31(32.35);
	performance1.set_att32(33.36);
	performance1.set_att33(34.37);
	performance1.set_att34(35.38);
	performance1.set_att35(36.39);
	performance1.set_att36(37.40);
	performance1.set_att37(38.41);
	performance1.set_att38(39.42);
	performance1.set_att39(40.43);
	performance1.set_att40(41.44);
	performance1.set_att41(43.41);
	performance1.set_att42(44.42);
	performance1.set_att43(45.43);
	performance1.set_att44(46.44);
	performance1.set_att45(47.45);
	performance1.set_att46(48.46);
	performance1.set_att47(49.47);
	performance1.set_att48(50.48);
	performance1.set_att49(51.49);
	performance1.set_att50(52.50);
	performance1.set_att51(true);
	performance1.set_att52(true);
	performance1.set_att53(true);
	performance1.set_att54(true);
	performance1.set_att55(true);
	performance1.set_att56(true);
	performance1.set_att57(true);
	performance1.set_att58(true);
	performance1.set_att59(true);
	performance1.set_att60(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance2.Clear();
	performance1.Clear();

	free(buffer);
}

inline void complexTestProtobuf()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStructProtobuf_2();
	}
	cout << endl << endl;
	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStructProtobuf_4();
	}
	cout << endl << endl;
	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStructProtobuf_6();
	}
	cout << endl << endl;
	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStructProtobuf_8();
	}
	cout << endl << endl;
	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testComplexStructProtobuf_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void testInnerSimpleStructProtobuf_2()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outersimplePerformance_2 performance1 = performance::Performance_outersimplePerformance_2(), performance2 = performance::Performance_outersimplePerformance_2();
	
	performance::Performance_innersimplePerformance_2 *inner1 = new performance::Performance_innersimplePerformance_2();
	inner1->set_att1(1);
	inner1->set_att2(2);

	performance::Performance_innersimplePerformance_2 *inner2 = new performance::Performance_innersimplePerformance_2();
	inner2->set_att1(1);
	inner2->set_att2(2);

	performance1.set_allocated_att1(inner1);
	performance1.set_allocated_att2(inner2);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}
	performance1.clear_att1();
	performance1.clear_att2();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.Clear();

	free(buffer);
}

inline void testInnerSimpleStructProtobuf_4()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outersimplePerformance_4 performance1 = performance::Performance_outersimplePerformance_4(), performance2 = performance::Performance_outersimplePerformance_4();
	
	performance::Performance_innersimplePerformance_4 *inner1 = new performance::Performance_innersimplePerformance_4();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);

	performance::Performance_innersimplePerformance_4 *inner2 = new performance::Performance_innersimplePerformance_4();
	inner2->set_att1(1);
	inner2->set_att2(2);
	inner2->set_att3(3);
	inner2->set_att4(4);

	performance::Performance_innersimplePerformance_4 *inner3 = new performance::Performance_innersimplePerformance_4();
	inner3->set_att1(1);
	inner3->set_att2(2);
	inner3->set_att3(3);
	inner3->set_att4(4);

	performance::Performance_innersimplePerformance_4 *inner4 = new performance::Performance_innersimplePerformance_4();
	inner4->set_att1(1);
	inner4->set_att2(2);
	inner4->set_att3(3);
	inner4->set_att4(4);

	performance1.set_allocated_att1(inner1);
	performance1.set_allocated_att2(inner2);
	performance1.set_allocated_att3(inner3);
	performance1.set_allocated_att4(inner4);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}
	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.Clear();

	free(buffer);
}

inline void testInnerSimpleStructProtobuf_6()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outersimplePerformance_6 performance1 = performance::Performance_outersimplePerformance_6(), performance2 = performance::Performance_outersimplePerformance_6();
	
	performance::Performance_innersimplePerformance_6 *inner1 = new performance::Performance_innersimplePerformance_6();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);

	performance::Performance_innersimplePerformance_6 *inner2 = new performance::Performance_innersimplePerformance_6();
	inner2->set_att1(1);
	inner2->set_att2(2);
	inner2->set_att3(3);
	inner2->set_att4(4);
	inner2->set_att5(5);
	inner2->set_att6(6);

	performance::Performance_innersimplePerformance_6 *inner3 = new performance::Performance_innersimplePerformance_6();
	inner3->set_att1(1);
	inner3->set_att2(2);
	inner3->set_att3(3);
	inner3->set_att4(4);
	inner3->set_att5(5);
	inner3->set_att6(6);

	performance::Performance_innersimplePerformance_6 *inner4 = new performance::Performance_innersimplePerformance_6();
	inner4->set_att1(1);
	inner4->set_att2(2);
	inner4->set_att3(3);
	inner4->set_att4(4);
	inner4->set_att5(5);
	inner4->set_att6(6);

	performance::Performance_innersimplePerformance_6 *inner5 = new performance::Performance_innersimplePerformance_6();
	inner5->set_att1(1);
	inner5->set_att2(2);
	inner5->set_att3(3);
	inner5->set_att4(4);
	inner5->set_att5(5);
	inner5->set_att6(6);

	performance::Performance_innersimplePerformance_6 *inner6 = new performance::Performance_innersimplePerformance_6();
	inner6->set_att1(1);
	inner6->set_att2(2);
	inner6->set_att3(3);
	inner6->set_att4(4);
	inner6->set_att5(5);
	inner6->set_att6(6);

	performance1.set_allocated_att1(inner1);
	performance1.set_allocated_att2(inner2);
	performance1.set_allocated_att3(inner3);
	performance1.set_allocated_att4(inner4);
	performance1.set_allocated_att5(inner5);
	performance1.set_allocated_att6(inner6);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}
	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.Clear();

	free(buffer);
}

inline void testInnerSimpleStructProtobuf_8()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outersimplePerformance_8 performance1 = performance::Performance_outersimplePerformance_8(), performance2 = performance::Performance_outersimplePerformance_8();
	
	performance::Performance_innersimplePerformance_8 *inner1 = new performance::Performance_innersimplePerformance_8();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);
	inner1->set_att7(7);
	inner1->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner2 = new performance::Performance_innersimplePerformance_8();
	inner2->set_att1(1);
	inner2->set_att2(2);
	inner2->set_att3(3);
	inner2->set_att4(4);
	inner2->set_att5(5);
	inner2->set_att6(6);
	inner2->set_att7(7);
	inner2->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner3 = new performance::Performance_innersimplePerformance_8();
	inner3->set_att1(1);
	inner3->set_att2(2);
	inner3->set_att3(3);
	inner3->set_att4(4);
	inner3->set_att5(5);
	inner3->set_att6(6);
	inner3->set_att7(7);
	inner3->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner4 = new performance::Performance_innersimplePerformance_8();
	inner4->set_att1(1);
	inner4->set_att2(2);
	inner4->set_att3(3);
	inner4->set_att4(4);
	inner4->set_att5(5);
	inner4->set_att6(6);
	inner4->set_att7(7);
	inner4->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner5 = new performance::Performance_innersimplePerformance_8();
	inner5->set_att1(1);
	inner5->set_att2(2);
	inner5->set_att3(3);
	inner5->set_att4(4);
	inner5->set_att5(5);
	inner5->set_att6(6);
	inner5->set_att7(7);
	inner5->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner6 = new performance::Performance_innersimplePerformance_8();
	inner6->set_att1(1);
	inner6->set_att2(2);
	inner6->set_att3(3);
	inner6->set_att4(4);
	inner6->set_att5(5);
	inner6->set_att6(6);
	inner6->set_att7(7);
	inner6->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner7 = new performance::Performance_innersimplePerformance_8();
	inner7->set_att1(1);
	inner7->set_att2(2);
	inner7->set_att3(3);
	inner7->set_att4(4);
	inner7->set_att5(5);
	inner7->set_att6(6);
	inner7->set_att7(7);
	inner7->set_att8(8);

	performance::Performance_innersimplePerformance_8 *inner8 = new performance::Performance_innersimplePerformance_8();
	inner8->set_att1(1);
	inner8->set_att2(2);
	inner8->set_att3(3);
	inner8->set_att4(4);
	inner8->set_att5(5);
	inner8->set_att6(6);
	inner8->set_att7(7);
	inner8->set_att8(8);

	performance1.set_allocated_att1(inner1);
	performance1.set_allocated_att2(inner2);
	performance1.set_allocated_att3(inner3);
	performance1.set_allocated_att4(inner4);
	performance1.set_allocated_att5(inner5);
	performance1.set_allocated_att6(inner6);
	performance1.set_allocated_att7(inner7);
	performance1.set_allocated_att8(inner8);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}
	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.Clear();

	free(buffer);
}

inline void testInnerSimpleStructProtobuf_10()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outersimplePerformance_10 performance1 = performance::Performance_outersimplePerformance_10(), performance2 = performance::Performance_outersimplePerformance_10();
	
	performance::Performance_innersimplePerformance_10 *inner1 = new performance::Performance_innersimplePerformance_10();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);
	inner1->set_att7(7);
	inner1->set_att8(8);
	inner1->set_att9(9);
	inner1->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner2 = new performance::Performance_innersimplePerformance_10();
	inner2->set_att1(1);
	inner2->set_att2(2);
	inner2->set_att3(3);
	inner2->set_att4(4);
	inner2->set_att5(5);
	inner2->set_att6(6);
	inner2->set_att7(7);
	inner2->set_att8(8);
	inner2->set_att9(9);
	inner2->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner3 = new performance::Performance_innersimplePerformance_10();
	inner3->set_att1(1);
	inner3->set_att2(2);
	inner3->set_att3(3);
	inner3->set_att4(4);
	inner3->set_att5(5);
	inner3->set_att6(6);
	inner3->set_att7(7);
	inner3->set_att8(8);
	inner3->set_att9(9);
	inner3->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner4 = new performance::Performance_innersimplePerformance_10();
	inner4->set_att1(1);
	inner4->set_att2(2);
	inner4->set_att3(3);
	inner4->set_att4(4);
	inner4->set_att5(5);
	inner4->set_att6(6);
	inner4->set_att7(7);
	inner4->set_att8(8);
	inner4->set_att9(9);
	inner4->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner5 = new performance::Performance_innersimplePerformance_10();
	inner5->set_att1(1);
	inner5->set_att2(2);
	inner5->set_att3(3);
	inner5->set_att4(4);
	inner5->set_att5(5);
	inner5->set_att6(6);
	inner5->set_att7(7);
	inner5->set_att8(8);
	inner5->set_att9(9);
	inner5->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner6 = new performance::Performance_innersimplePerformance_10();
	inner6->set_att1(1);
	inner6->set_att2(2);
	inner6->set_att3(3);
	inner6->set_att4(4);
	inner6->set_att5(5);
	inner6->set_att6(6);
	inner6->set_att7(7);
	inner6->set_att8(8);
	inner6->set_att9(9);
	inner6->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner7 = new performance::Performance_innersimplePerformance_10();
	inner7->set_att1(1);
	inner7->set_att2(2);
	inner7->set_att3(3);
	inner7->set_att4(4);
	inner7->set_att5(5);
	inner7->set_att6(6);
	inner7->set_att7(7);
	inner7->set_att8(8);
	inner7->set_att9(9);
	inner7->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner8 = new performance::Performance_innersimplePerformance_10();
	inner8->set_att1(1);
	inner8->set_att2(2);
	inner8->set_att3(3);
	inner8->set_att4(4);
	inner8->set_att5(5);
	inner8->set_att6(6);
	inner8->set_att7(7);
	inner8->set_att8(8);
	inner8->set_att9(9);
	inner8->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner9 = new performance::Performance_innersimplePerformance_10();
	inner9->set_att1(1);
	inner9->set_att2(2);
	inner9->set_att3(3);
	inner9->set_att4(4);
	inner9->set_att5(5);
	inner9->set_att6(6);
	inner9->set_att7(7);
	inner9->set_att8(8);
	inner9->set_att9(9);
	inner9->set_att10(10);

	performance::Performance_innersimplePerformance_10 *inner10 = new performance::Performance_innersimplePerformance_10();
	inner10->set_att1(1);
	inner10->set_att2(2);
	inner10->set_att3(3);
	inner10->set_att4(4);
	inner10->set_att5(5);
	inner10->set_att6(6);
	inner10->set_att7(7);
	inner10->set_att8(8);
	inner10->set_att9(9);
	inner10->set_att10(10);

	performance1.set_allocated_att1(inner1);
	performance1.set_allocated_att2(inner2);
	performance1.set_allocated_att3(inner3);
	performance1.set_allocated_att4(inner4);
	performance1.set_allocated_att5(inner5);
	performance1.set_allocated_att6(inner6);
	performance1.set_allocated_att7(inner7);
	performance1.set_allocated_att8(inner8);
	performance1.set_allocated_att9(inner9);
	performance1.set_allocated_att10(inner10);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}
	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.clear_att9();
	performance1.clear_att10();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.clear_att9();
	performance2.clear_att10();
	performance2.Clear();

	free(buffer);
}

inline void innerSimpleTestProtobuf()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerSimpleStructProtobuf_2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerSimpleStructProtobuf_4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerSimpleStructProtobuf_6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerSimpleStructProtobuf_8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerSimpleStructProtobuf_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void testInnerComplexStructProtobuf_1()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outercomplexPerformance_1 performance1 = performance::Performance_outercomplexPerformance_1(), performance2 = performance::Performance_outercomplexPerformance_1();
	
	performance::Performance_innercomplexPerformance_1 *inner1 = new performance::Performance_innercomplexPerformance_1();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3("INNER TEST 3");
	inner1->set_att4(5.10);
	inner1->set_att5(5.9);
	inner1->set_att6(false);

	performance1.set_att1(101);
	performance1.set_att2(102);
	performance1.set_att3("OUTER TEST 3");
	performance1.set_allocated_att4(inner1);
	performance1.set_att5(105.10);
	performance1.set_att6(107.8);
	performance1.set_att7(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.Clear();

	free(buffer);
}

inline void testInnerComplexStructProtobuf_2()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outercomplexPerformance_2 performance1 = performance::Performance_outercomplexPerformance_2(), performance2 = performance::Performance_outercomplexPerformance_2();
	
	performance::Performance_innercomplexPerformance_2 *inner1 = new performance::Performance_innercomplexPerformance_2();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5("INNER TEST 5");
	inner1->set_att6("INNER TEST 6");
	inner1->set_att7(8.13);
	inner1->set_att8(9.14);
	inner1->set_att9(9.13);
	inner1->set_att10(10.14);
	inner1->set_att11(false);
	inner1->set_att12(false);

	performance::Performance_innercomplexPerformance_2 *inner2 = new performance::Performance_innercomplexPerformance_2();
	inner2->set_att1(13);
	inner2->set_att2(14);
	inner2->set_att3(15);
	inner2->set_att4(16);
	inner2->set_att5("INNER TEST 17");
	inner2->set_att6("INNER TEST 18");
	inner2->set_att7(20.25);
	inner2->set_att8(21.26);
	inner2->set_att9(21.25);
	inner2->set_att10(22.26);
	inner2->set_att11(false);
	inner2->set_att12(false);

	performance1.set_att1(101);
	performance1.set_att2(102);
	performance1.set_att3("OUTER TEST 3");
	performance1.set_allocated_att4(inner1);
	performance1.set_att5(105.10);
	performance1.set_att6(107.8);
	performance1.set_att7(true);
	performance1.set_att8(108);
	performance1.set_att9("OUTER TEST 9");
	performance1.set_allocated_att10(inner2);
	performance1.set_att11(1011.16);
	performance1.set_att12(1013.14);
	performance1.set_att13(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.clear_att9();
	performance1.clear_att10();
	performance1.clear_att11();
	performance1.clear_att12();
	performance1.clear_att13();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.clear_att9();
	performance2.clear_att10();
	performance2.clear_att11();
	performance2.clear_att12();
	performance2.clear_att13();
	performance2.Clear();

	free(buffer);
}

inline void testInnerComplexStructProtobuf_3()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outercomplexPerformance_3 performance1 = performance::Performance_outercomplexPerformance_3(), performance2 = performance::Performance_outercomplexPerformance_3();
	
	performance::Performance_innercomplexPerformance_3 *inner1 = new performance::Performance_innercomplexPerformance_3();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);
	inner1->set_att7("INNER TEST 7");
	inner1->set_att8("INNER TEST 8");
	inner1->set_att9("INNER TEST 9");
	inner1->set_att10(11.16);
	inner1->set_att11(12.17);
	inner1->set_att12(13.18);
	inner1->set_att13(13.17);
	inner1->set_att14(14.18);
	inner1->set_att15(15.19);
	inner1->set_att16(false);
	inner1->set_att17(false);
	inner1->set_att18(false);

	performance::Performance_innercomplexPerformance_3 *inner2 = new performance::Performance_innercomplexPerformance_3();
	inner2->set_att1(19);
	inner2->set_att2(20);
	inner2->set_att3(21);
	inner2->set_att4(22);
	inner2->set_att5(23);
	inner2->set_att6(24);
	inner2->set_att7("INNER TEST 25");
	inner2->set_att8("INNER TEST 26");
	inner2->set_att9("INNER TEST 27");
	inner2->set_att10(29.34);
	inner2->set_att11(30.35);
	inner2->set_att12(31.36);
	inner2->set_att13(31.35);
	inner2->set_att14(32.36);
	inner2->set_att15(33.37);
	inner2->set_att16(false);
	inner2->set_att17(false);
	inner2->set_att18(false);

	performance::Performance_innercomplexPerformance_3 *inner3 = new performance::Performance_innercomplexPerformance_3();
	inner3->set_att1(37);
	inner3->set_att2(38);
	inner3->set_att3(39);
	inner3->set_att4(40);
	inner3->set_att5(41);
	inner3->set_att6(42);
	inner3->set_att7("INNER TEST 43");
	inner3->set_att8("INNER TEST 44");
	inner3->set_att9("INNER TEST 45");
	inner3->set_att10(47.52);
	inner3->set_att11(48.53);
	inner3->set_att12(49.54);
	inner3->set_att13(49.53);
	inner3->set_att14(50.54);
	inner3->set_att15(51.55);
	inner3->set_att16(false);
	inner3->set_att17(false);
	inner3->set_att18(false);

	performance1.set_att1(101);
	performance1.set_att2(102);
	performance1.set_att3("OUTER TEST 3");
	performance1.set_allocated_att4(inner1);
	performance1.set_att5(105.10);
	performance1.set_att6(107.8);
	performance1.set_att7(true);
	performance1.set_att8(108);
	performance1.set_att9("OUTER TEST 9");
	performance1.set_allocated_att10(inner2);
	performance1.set_att11(1011.16);
	performance1.set_att12(1013.14);
	performance1.set_att13(true);
	performance1.set_att14("OUTER TEST 14");
	performance1.set_allocated_att15(inner3);
	performance1.set_att16(1016.21);
	performance1.set_att17(1018.19);
	performance1.set_att18(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.clear_att9();
	performance1.clear_att10();
	performance1.clear_att11();
	performance1.clear_att12();
	performance1.clear_att13();
	performance1.clear_att14();
	performance1.clear_att15();
	performance1.clear_att16();
	performance1.clear_att17();
	performance1.clear_att18();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.clear_att9();
	performance2.clear_att10();
	performance2.clear_att11();
	performance2.clear_att12();
	performance2.clear_att13();
	performance2.clear_att14();
	performance2.clear_att15();
	performance2.clear_att16();
	performance2.clear_att17();
	performance2.clear_att18();
	performance2.Clear();

	free(buffer);
}

inline void testInnerComplexStructProtobuf_4()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outercomplexPerformance_4 performance1 = performance::Performance_outercomplexPerformance_4(), performance2 = performance::Performance_outercomplexPerformance_4();
	
	performance::Performance_innercomplexPerformance_4 *inner1 = new performance::Performance_innercomplexPerformance_4();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);
	inner1->set_att7(7);
	inner1->set_att8(8);
	inner1->set_att9("INNER TEST 9");
	inner1->set_att10("INNER TEST 10");
	inner1->set_att11("INNER TEST 11");
	inner1->set_att12("INNER TEST 12");
	inner1->set_att13(14.19);
	inner1->set_att14(15.20);
	inner1->set_att15(16.21);
	inner1->set_att16(17.22);
	inner1->set_att17(17.21);
	inner1->set_att18(18.22);
	inner1->set_att19(19.23);
	inner1->set_att20(20.24);
	inner1->set_att21(false);
	inner1->set_att22(false);
	inner1->set_att23(false);
	inner1->set_att24(false);

	performance::Performance_innercomplexPerformance_4 *inner2 = new performance::Performance_innercomplexPerformance_4();
	inner2->set_att1(25);
	inner2->set_att2(26);
	inner2->set_att3(27);
	inner2->set_att4(28);
	inner2->set_att5(29);
	inner2->set_att6(30);
	inner2->set_att7(31);
	inner2->set_att8(32);
	inner2->set_att9("INNER TEST 33");
	inner2->set_att10("INNER TEST 34");
	inner2->set_att11("INNER TEST 35");
	inner2->set_att12("INNER TEST 36");
	inner2->set_att13(38.43);
	inner2->set_att14(39.44);
	inner2->set_att15(40.45);
	inner2->set_att16(41.46);
	inner2->set_att17(41.45);
	inner2->set_att18(42.46);
	inner2->set_att19(43.47);
	inner2->set_att20(44.48);
	inner2->set_att21(false);
	inner2->set_att22(false);
	inner2->set_att23(false);
	inner2->set_att24(false);

	performance::Performance_innercomplexPerformance_4 *inner3 = new performance::Performance_innercomplexPerformance_4();
	inner3->set_att1(49);
	inner3->set_att2(50);
	inner3->set_att3(51);
	inner3->set_att4(52);
	inner3->set_att5(53);
	inner3->set_att6(54);
	inner3->set_att7(55);
	inner3->set_att8(56);
	inner3->set_att9("INNER TEST 57");
	inner3->set_att10("INNER TEST 58");
	inner3->set_att11("INNER TEST 59");
	inner3->set_att12("INNER TEST 60");
	inner3->set_att13(62.67);
	inner3->set_att14(63.68);
	inner3->set_att15(64.69);
	inner3->set_att16(65.70);
	inner3->set_att17(65.69);
	inner3->set_att18(66.70);
	inner3->set_att19(67.71);
	inner3->set_att20(68.72);
	inner3->set_att21(false);
	inner3->set_att22(false);
	inner3->set_att23(false);
	inner3->set_att24(false);

	performance::Performance_innercomplexPerformance_4 *inner4 = new performance::Performance_innercomplexPerformance_4();
	inner4->set_att1(73);
	inner4->set_att2(74);
	inner4->set_att3(75);
	inner4->set_att4(76);
	inner4->set_att5(77);
	inner4->set_att6(78);
	inner4->set_att7(79);
	inner4->set_att8(80);
	inner4->set_att9("INNER TEST 81");
	inner4->set_att10("INNER TEST 82");
	inner4->set_att11("INNER TEST 83");
	inner4->set_att12("INNER TEST 84");
	inner4->set_att13(86.91);
	inner4->set_att14(87.92);
	inner4->set_att15(88.93);
	inner4->set_att16(89.94);
	inner4->set_att17(89.93);
	inner4->set_att18(90.94);
	inner4->set_att19(91.95);
	inner4->set_att20(92.96);
	inner4->set_att21(false);
	inner4->set_att22(false);
	inner4->set_att23(false);
	inner4->set_att24(false);

	performance1.set_att1(101);
	performance1.set_att2(102);
	performance1.set_att3("OUTER TEST 3");
	performance1.set_allocated_att4(inner1);
	performance1.set_att5(105.10);
	performance1.set_att6(107.8);
	performance1.set_att7(true);
	performance1.set_att8(108);
	performance1.set_att9("OUTER TEST 9");
	performance1.set_allocated_att10(inner2);
	performance1.set_att11(1011.16);
	performance1.set_att12(1013.14);
	performance1.set_att13(true);
	performance1.set_att14("OUTER TEST 14");
	performance1.set_allocated_att15(inner3);
	performance1.set_att16(1016.21);
	performance1.set_att17(1018.19);
	performance1.set_att18(true);
	performance1.set_allocated_att19(inner4);
	performance1.set_att20(1020.25);
	performance1.set_att21(1022.23);
	performance1.set_att22(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
//		cout << "Str size: " << str.size() << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.clear_att9();
	performance1.clear_att10();
	performance1.clear_att11();
	performance1.clear_att12();
	performance1.clear_att13();
	performance1.clear_att14();
	performance1.clear_att15();
	performance1.clear_att16();
	performance1.clear_att17();
	performance1.clear_att18();
	performance1.clear_att19();
	performance1.clear_att20();
	performance1.clear_att21();
	performance1.clear_att22();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.clear_att9();
	performance2.clear_att10();
	performance2.clear_att11();
	performance2.clear_att12();
	performance2.clear_att13();
	performance2.clear_att14();
	performance2.clear_att15();
	performance2.clear_att16();
	performance2.clear_att17();
	performance2.clear_att18();
	performance2.clear_att19();
	performance2.clear_att20();
	performance2.clear_att21();
	performance2.clear_att22();
	performance2.Clear();

	free(buffer);
}

inline void testInnerComplexStructProtobuf_5()
{
	char *buffer = (char*)calloc(BUFFER_SIZE, sizeof(char));

	performance::Performance_outercomplexPerformance_5 performance1 = performance::Performance_outercomplexPerformance_5(), performance2 = performance::Performance_outercomplexPerformance_5();
	
	performance::Performance_innercomplexPerformance_5 *inner1 = new performance::Performance_innercomplexPerformance_5();
	inner1->set_att1(1);
	inner1->set_att2(2);
	inner1->set_att3(3);
	inner1->set_att4(4);
	inner1->set_att5(5);
	inner1->set_att6(6);
	inner1->set_att7(7);
	inner1->set_att8(8);
	inner1->set_att9(9);
	inner1->set_att10(10);
	inner1->set_att11("INNER TEST 11");
	inner1->set_att12("INNER TEST 12");
	inner1->set_att13("INNER TEST 13");
	inner1->set_att14("INNER TEST 14");
	inner1->set_att15("INNER TEST 15");
	inner1->set_att16(17.22);
	inner1->set_att17(18.23);
	inner1->set_att18(19.24);
	inner1->set_att19(20.25);
	inner1->set_att20(21.26);
	inner1->set_att21(21.25);
	inner1->set_att22(22.26);
	inner1->set_att23(23.27);
	inner1->set_att24(24.28);
	inner1->set_att25(25.29);
	inner1->set_att26(false);
	inner1->set_att27(false);
	inner1->set_att28(false);
	inner1->set_att29(false);
	inner1->set_att30(false);

	performance::Performance_innercomplexPerformance_5 *inner2 = new performance::Performance_innercomplexPerformance_5();
	inner2->set_att1(31);
	inner2->set_att2(32);
	inner2->set_att3(33);
	inner2->set_att4(34);
	inner2->set_att5(35);
	inner2->set_att6(36);
	inner2->set_att7(37);
	inner2->set_att8(38);
	inner2->set_att9(39);
	inner2->set_att10(40);
	inner2->set_att11("INNER TEST 41");
	inner2->set_att12("INNER TEST 42");
	inner2->set_att13("INNER TEST 43");
	inner2->set_att14("INNER TEST 44");
	inner2->set_att15("INNER TEST 45");
	inner2->set_att16(47.52);
	inner2->set_att17(48.53);
	inner2->set_att18(49.54);
	inner2->set_att19(50.55);
	inner2->set_att20(51.56);
	inner2->set_att21(51.55);
	inner2->set_att22(52.56);
	inner2->set_att23(53.57);
	inner2->set_att24(54.58);
	inner2->set_att25(55.59);
	inner2->set_att26(false);
	inner2->set_att27(false);
	inner2->set_att28(false);
	inner2->set_att29(false);
	inner2->set_att30(false);

	performance::Performance_innercomplexPerformance_5 *inner3 = new performance::Performance_innercomplexPerformance_5();
	inner3->set_att1(61);
	inner3->set_att2(62);
	inner3->set_att3(63);
	inner3->set_att4(64);
	inner3->set_att5(65);
	inner3->set_att6(66);
	inner3->set_att7(67);
	inner3->set_att8(68);
	inner3->set_att9(69);
	inner3->set_att10(70);
	inner3->set_att11("INNER TEST 71");
	inner3->set_att12("INNER TEST 72");
	inner3->set_att13("INNER TEST 73");
	inner3->set_att14("INNER TEST 74");
	inner3->set_att15("INNER TEST 75");
	inner3->set_att16(77.82);
	inner3->set_att17(78.83);
	inner3->set_att18(79.84);
	inner3->set_att19(80.85);
	inner3->set_att20(81.86);
	inner3->set_att21(81.85);
	inner3->set_att22(82.86);
	inner3->set_att23(83.87);
	inner3->set_att24(84.88);
	inner3->set_att25(85.89);
	inner3->set_att26(false);
	inner3->set_att27(false);
	inner3->set_att28(false);
	inner3->set_att29(false);
	inner3->set_att30(false);

	performance::Performance_innercomplexPerformance_5 *inner4 = new performance::Performance_innercomplexPerformance_5();
	inner4->set_att1(91);
	inner4->set_att2(92);
	inner4->set_att3(93);
	inner4->set_att4(94);
	inner4->set_att5(95);
	inner4->set_att6(96);
	inner4->set_att7(97);
	inner4->set_att8(98);
	inner4->set_att9(99);
	inner4->set_att10(100);
	inner4->set_att11("INNER TEST 101");
	inner4->set_att12("INNER TEST 102");
	inner4->set_att13("INNER TEST 103");
	inner4->set_att14("INNER TEST 104");
	inner4->set_att15("INNER TEST 105");
	inner4->set_att16(107.112);
	inner4->set_att17(108.113);
	inner4->set_att18(109.114);
	inner4->set_att19(110.115);
	inner4->set_att20(111.116);
	inner4->set_att21(111.115);
	inner4->set_att22(112.116);
	inner4->set_att23(113.117);
	inner4->set_att24(114.118);
	inner4->set_att25(115.119);
	inner4->set_att26(false);
	inner4->set_att27(false);
	inner4->set_att28(false);
	inner4->set_att29(false);
	inner4->set_att30(false);

	performance::Performance_innercomplexPerformance_5 *inner5 = new performance::Performance_innercomplexPerformance_5();
	inner5->set_att1(121);
	inner5->set_att2(122);
	inner5->set_att3(123);
	inner5->set_att4(124);
	inner5->set_att5(125);
	inner5->set_att6(126);
	inner5->set_att7(127);
	inner5->set_att8(128);
	inner5->set_att9(129);
	inner5->set_att10(130);
	inner5->set_att11("INNER TEST 131");
	inner5->set_att12("INNER TEST 132");
	inner5->set_att13("INNER TEST 133");
	inner5->set_att14("INNER TEST 134");
	inner5->set_att15("INNER TEST 135");
	inner5->set_att16(137.142);
	inner5->set_att17(138.143);
	inner5->set_att18(139.144);
	inner5->set_att19(140.145);
	inner5->set_att20(141.146);
	inner5->set_att21(141.145);
	inner5->set_att22(142.146);
	inner5->set_att23(143.147);
	inner5->set_att24(144.148);
	inner5->set_att25(145.149);
	inner5->set_att26(false);
	inner5->set_att27(false);
	inner5->set_att28(false);
	inner5->set_att29(false);
	inner5->set_att30(false);

	performance1.set_att1(101);
	performance1.set_att2(102);
	performance1.set_att3("OUTER TEST 3");
	performance1.set_allocated_att4(inner1);
	performance1.set_att5(105.10);
	performance1.set_att6(107.8);
	performance1.set_att7(true);
	performance1.set_att8(108);
	performance1.set_att9("OUTER TEST 9");
	performance1.set_allocated_att10(inner2);
	performance1.set_att11(1011.16);
	performance1.set_att12(1013.14);
	performance1.set_att13(true);
	performance1.set_att14("OUTER TEST 14");
	performance1.set_allocated_att15(inner3);
	performance1.set_att16(1016.21);
	performance1.set_att17(1018.19);
	performance1.set_att18(true);
	performance1.set_allocated_att19(inner4);
	performance1.set_att20(1020.25);
	performance1.set_att21(1022.23);
	performance1.set_att22(true);
	performance1.set_att23(1023.28);
	performance1.set_att24(1025.26);
	performance1.set_att25(true);

	boost::timer::auto_cpu_timer t;
	

	for(int count = 0; count < NUMBER_OF_LOOPS; ++count)
	{
		if(!performance1.SerializeToArray(buffer, BUFFER_SIZE)){
			printf("ERROR: serialization");
		}

//		cout << "Size: " << performance1.ByteSize() << endl;
//		std::string str(buffer);
		//cout << "Str size: " << str.size() << endl << str << endl;
//		break;

		if(!performance2.ParseFromArray(buffer, performance1.ByteSize())){
			printf("ERROR: deserialization");
		}	
	}

	performance1.clear_att1();
	performance1.clear_att2();
	performance1.clear_att3();
	performance1.clear_att4();
	performance1.clear_att5();
	performance1.clear_att6();
	performance1.clear_att7();
	performance1.clear_att8();
	performance1.clear_att9();
	performance1.clear_att10();
	performance1.clear_att11();
	performance1.clear_att12();
	performance1.clear_att13();
	performance1.clear_att14();
	performance1.clear_att15();
	performance1.clear_att16();
	performance1.clear_att17();
	performance1.clear_att18();
	performance1.clear_att19();
	performance1.clear_att20();
	performance1.clear_att21();
	performance1.clear_att22();
	performance1.clear_att23();
	performance1.clear_att24();
	performance1.clear_att25();
	performance1.Clear();
	performance2.clear_att1();
	performance2.clear_att2();
	performance2.clear_att3();
	performance2.clear_att4();
	performance2.clear_att5();
	performance2.clear_att6();
	performance2.clear_att7();
	performance2.clear_att8();
	performance2.clear_att9();
	performance2.clear_att10();
	performance2.clear_att11();
	performance2.clear_att12();
	performance2.clear_att13();
	performance2.clear_att14();
	performance2.clear_att15();
	performance2.clear_att16();
	performance2.clear_att17();
	performance2.clear_att18();
	performance2.clear_att19();
	performance2.clear_att20();
	performance2.clear_att21();
	performance2.clear_att22();
	performance2.clear_att23();
	performance2.clear_att24();
	performance2.clear_att25();
	performance2.Clear();

	free(buffer);
}

inline void innerComplexTestProtobuf()
{
	cout << "Estructura heterog\E9nea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerComplexStructProtobuf_1();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerComplexStructProtobuf_2();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerComplexStructProtobuf_3();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerComplexStructProtobuf_4();
	}
	cout << endl << endl;

	cout << "Estructura heterog\E9nea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testInnerComplexStructProtobuf_5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceProtobuf()
{
	cout << "GSOAP:" << endl << endl;
	simpleTestProtobuf();
	complexTestProtobuf();
	innerSimpleTestProtobuf();
	innerComplexTestProtobuf();
	cout << "------------------------------------------------------------------------------------------" << endl;

}


int main()
{
	performanceProtobuf();

    return 0;
}
