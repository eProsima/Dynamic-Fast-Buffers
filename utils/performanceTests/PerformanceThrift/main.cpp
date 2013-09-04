#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <io.h>
#include <errno.h>
#include <fcntl.h>
#include <sys\stat.h>
#include <ostream>
#include <fstream>
#include <sys/stat.h>
#include <list>
#include <string>
#include <fstream>

//Thrift
#include "thrift/protocol/TBinaryProtocol.h"
#include "thrift/protocol/TCompactProtocol.h"
#include "thrift/transport/TTransportUtils.h"
#include "thrift/transport/TFDTransport.h"
#include "thrift/transport/TTransport.h"
#include "thrift/transport/TSocket.h"
#include "thrift/protocol/TBinaryProtocol.h"
#include "fileSimple_types.h"
#include "fileSimple_constants.h"
#include "performance_constants.h"
#include "performance_types.h"

//Boost
#include <boost/serialization/list.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/asio.hpp>
#include "boost/shared_ptr.hpp"
#include <boost/timer/timer.hpp>
#include <boost/chrono.hpp>

//Using
using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

#define NUMBER_OF_LOOPS 1000000


namespace testThrift
{

inline void simpleThrift_10()
{

	thriftPerformance::simpleThrift_10 input = thriftPerformance::simpleThrift_10(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);

	boost::shared_ptr<TMemoryBuffer> strBuffer(new TMemoryBuffer(100));
	boost::shared_ptr<TBufferedTransport> bt(new TBufferedTransport(strBuffer));
	boost::shared_ptr<TBinaryProtocol> binaryProtcol(new TBinaryProtocol(bt));
	/*boost::shared_ptr<TSocket> socket(new TSocket("localhost", 8585));
	boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	boost::shared_ptr<TBinaryProtocol> binaryProtcol(new TBinaryProtocol(transport));*/

	apache::thrift::protocol::TProtocol* p = binaryProtcol.get();
	strBuffer->open();

	boost::timer::auto_cpu_timer t;

	boost::chrono::duration<double> program_seconds;

	boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		try{
			input.write(p);
			output.read(p);
			//std::cout << "writes" << std::endl;
		}catch (std::exception &ex){
			//std::cout << ex.what() << ": " << std::endl;
		}
	}

	//transport->close();

	program_seconds = boost::chrono::system_clock::now() - program_start;

	cout << program_seconds.count() << endl;
}

inline void simpleThrift_20()
{
	thriftPerformance::simpleThrift_20 input = thriftPerformance::simpleThrift_20(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);
	input.__set_att11(11);
	input.__set_att12(12);
	input.__set_att13(13);
	input.__set_att14(14);
	input.__set_att15(15);
	input.__set_att16(16);
	input.__set_att17(17);
	input.__set_att18(18);
	input.__set_att19(19);
	input.__set_att20(20);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	boost::timer::auto_cpu_timer t;

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void simpleThrift_30()
{
	thriftPerformance::simpleThrift_30 input = thriftPerformance::simpleThrift_30(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);
	input.__set_att11(11);
	input.__set_att12(12);
	input.__set_att13(13);
	input.__set_att14(14);
	input.__set_att15(15);
	input.__set_att16(16);
	input.__set_att17(17);
	input.__set_att18(18);
	input.__set_att19(19);
	input.__set_att20(20);
	input.__set_att21(21);
	input.__set_att22(22);
	input.__set_att23(23);
	input.__set_att24(24);
	input.__set_att25(25);
	input.__set_att26(26);
	input.__set_att27(27);
	input.__set_att28(28);
	input.__set_att29(29);
	input.__set_att30(30);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	boost::timer::auto_cpu_timer t;

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void simpleThrift_40()
{
	thriftPerformance::simpleThrift_40 input = thriftPerformance::simpleThrift_40(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);
	input.__set_att11(11);
	input.__set_att12(12);
	input.__set_att13(13);
	input.__set_att14(14);
	input.__set_att15(15);
	input.__set_att16(16);
	input.__set_att17(17);
	input.__set_att18(18);
	input.__set_att19(19);
	input.__set_att20(20);
	input.__set_att21(21);
	input.__set_att22(22);
	input.__set_att23(23);
	input.__set_att24(24);
	input.__set_att25(25);
	input.__set_att26(26);
	input.__set_att27(27);
	input.__set_att28(28);
	input.__set_att29(29);
	input.__set_att30(30);
	input.__set_att31(31);
	input.__set_att32(32);
	input.__set_att33(33);
	input.__set_att34(34);
	input.__set_att35(35);
	input.__set_att36(36);
	input.__set_att37(37);
	input.__set_att38(38);
	input.__set_att39(39);
	input.__set_att40(40);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	boost::timer::auto_cpu_timer t;

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void simpleThrift_50()
{
	

	thriftPerformance::simpleThrift_50 input = thriftPerformance::simpleThrift_50(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);
	input.__set_att11(11);
	input.__set_att12(12);
	input.__set_att13(13);
	input.__set_att14(14);
	input.__set_att15(15);
	input.__set_att16(16);
	input.__set_att17(17);
	input.__set_att18(18);
	input.__set_att19(19);
	input.__set_att20(20);
	input.__set_att21(21);
	input.__set_att22(22);
	input.__set_att23(23);
	input.__set_att24(24);
	input.__set_att25(25);
	input.__set_att26(26);
	input.__set_att27(27);
	input.__set_att28(28);
	input.__set_att29(29);
	input.__set_att30(30);
	input.__set_att31(31);
	input.__set_att32(32);
	input.__set_att33(33);
	input.__set_att34(34);
	input.__set_att35(35);
	input.__set_att36(36);
	input.__set_att37(37);
	input.__set_att38(38);
	input.__set_att39(39);
	input.__set_att40(40);
	input.__set_att41(41);
	input.__set_att42(42);
	input.__set_att43(43);
	input.__set_att44(44);
	input.__set_att45(45);
	input.__set_att46(46);
	input.__set_att47(47);
	input.__set_att48(48);
	input.__set_att49(49);
	input.__set_att50(50);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	boost::timer::auto_cpu_timer t;

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void simpleTestThrift()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleThrift_10();
	}
	cout << endl << endl;

	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleThrift_20();
	}
	cout << endl << endl;

	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleThrift_30();
	}
	cout << endl << endl;

	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleThrift_40();
	}
	cout << endl << endl;

	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleThrift_50();
	}

	cout << "---------------------------------------------------------------------------------------------" << endl;
}


inline void complexThrift_2()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::complexThrift_2 input = thriftPerformance::complexThrift_2(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att1(0);
	input.__set_att2(1);
	input.__set_att3(0);
	input.__set_att4(1);
	input.__set_att5("TEST 0");
	input.__set_att6("TEST 1");
	input.__set_att7(2.0);
	input.__set_att8(3.1);
	input.__set_att9(8.5);
	input.__set_att10(9.6);
	input.__set_att11(true);
	input.__set_att12(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		//std::cout << input.write(protocol.get()) << endl; break;break;
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void complexThrift_4()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::complexThrift_4 input = thriftPerformance::complexThrift_4(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att1(0);
	input.__set_att2(1);
	input.__set_att3(2);
	input.__set_att4(3);
	input.__set_att5(0);
	input.__set_att6(1);
	input.__set_att7(2);
	input.__set_att8(3);
	input.__set_att9("TEST 0");
	input.__set_att10("TEST 1");
	input.__set_att11("TEST 2");
	input.__set_att12("TEST 3");
	input.__set_att13(2.0);
	input.__set_att14(3.1);
	input.__set_att15(4.2);
	input.__set_att16(5.3);
	input.__set_att17(8.5);
	input.__set_att18(9.6);
	input.__set_att19(10.7);
	input.__set_att20(11.8);
	input.__set_att21(true);
	input.__set_att22(true);
	input.__set_att23(true);
	input.__set_att24(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void complexThrift_6()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::complexThrift_6 input = thriftPerformance::complexThrift_6(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att1(0);
	input.__set_att2(1);
	input.__set_att3(2);
	input.__set_att4(3);
	input.__set_att5(4);
	input.__set_att6(5);
	input.__set_att7(0);
	input.__set_att8(1);
	input.__set_att9(2);
	input.__set_att10(3);
	input.__set_att11(4);
	input.__set_att12(5);
	input.__set_att13("TEST 0");
	input.__set_att14("TEST 1");
	input.__set_att15("TEST 2");
	input.__set_att16("TEST 3");
	input.__set_att17("TEST 4");
	input.__set_att18("TEST 5");
	input.__set_att19(2.0);
	input.__set_att20(3.1);
	input.__set_att21(4.2);
	input.__set_att22(5.3);
	input.__set_att23(6.4);
	input.__set_att24(7.5);
	input.__set_att25(8.5);
	input.__set_att26(9.6);
	input.__set_att27(10.7);
	input.__set_att28(11.8);
	input.__set_att29(12.9);
	input.__set_att30(13.10);
	input.__set_att31(true);
	input.__set_att32(true);
	input.__set_att33(true);
	input.__set_att34(true);
	input.__set_att35(true);
	input.__set_att36(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void complexThrift_8()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::complexThrift_8 input = thriftPerformance::complexThrift_8(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att1(0);
	input.__set_att2(1);
	input.__set_att3(2);
	input.__set_att4(3);
	input.__set_att5(4);
	input.__set_att6(5);
	input.__set_att7(6);
	input.__set_att8(7);
	input.__set_att9(0);
	input.__set_att10(1);
	input.__set_att11(2);
	input.__set_att12(3);
	input.__set_att13(4);
	input.__set_att14(5);
	input.__set_att15(6);
	input.__set_att16(7);
	input.__set_att17("TEST 0");
	input.__set_att18("TEST 1");
	input.__set_att19("TEST 2");
	input.__set_att20("TEST 3");
	input.__set_att21("TEST 4");
	input.__set_att22("TEST 5");
	input.__set_att23("TEST 6");
	input.__set_att24("TEST 7");
	input.__set_att25(2.0);
	input.__set_att26(3.1);
	input.__set_att27(4.2);
	input.__set_att28(5.3);
	input.__set_att29(6.4);
	input.__set_att30(7.5);
	input.__set_att31(8.6);
	input.__set_att32(9.7);
	input.__set_att33(8.5);
	input.__set_att34(9.6);
	input.__set_att35(10.7);
	input.__set_att36(11.8);
	input.__set_att37(12.9);
	input.__set_att38(13.10);
	input.__set_att39(14.11);
	input.__set_att40(15.12);
	input.__set_att41(true);
	input.__set_att42(true);
	input.__set_att43(true);
	input.__set_att44(true);
	input.__set_att45(true);
	input.__set_att46(true);
	input.__set_att47(true);
	input.__set_att48(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void complexThrift_10()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::complexThrift_10 input = thriftPerformance::complexThrift_10(), output;
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3(3);
	input.__set_att4(4);
	input.__set_att5(5);
	input.__set_att6(6);
	input.__set_att7(7);
	input.__set_att8(8);
	input.__set_att9(9);
	input.__set_att10(10);
	input.__set_att1(0);
	input.__set_att2(1);
	input.__set_att3(2);
	input.__set_att4(3);
	input.__set_att5(4);
	input.__set_att6(5);
	input.__set_att7(6);
	input.__set_att8(7);
	input.__set_att9(8);
	input.__set_att10(9);
	input.__set_att11(0);
	input.__set_att12(1);
	input.__set_att13(2);
	input.__set_att14(3);
	input.__set_att15(4);
	input.__set_att16(5);
	input.__set_att17(6);
	input.__set_att18(7);
	input.__set_att19(8);
	input.__set_att20(9);
	input.__set_att21("TEST 0");
	input.__set_att22("TEST 1");
	input.__set_att23("TEST 2");
	input.__set_att24("TEST 3");
	input.__set_att25("TEST 4");
	input.__set_att26("TEST 5");
	input.__set_att27("TEST 6");
	input.__set_att28("TEST 7");
	input.__set_att29("TEST 8");
	input.__set_att30("TEST 9");
	input.__set_att31(2.0);
	input.__set_att32(3.1);
	input.__set_att33(4.2);
	input.__set_att34(5.3);
	input.__set_att35(6.4);
	input.__set_att36(7.5);
	input.__set_att37(8.6);
	input.__set_att38(9.7);
	input.__set_att39(10.8);
	input.__set_att40(11.9);
	input.__set_att41(8.5);
	input.__set_att42(9.6);
	input.__set_att43(10.7);
	input.__set_att44(11.8);
	input.__set_att45(12.9);
	input.__set_att46(13.10);
	input.__set_att47(14.11);
	input.__set_att48(15.12);
	input.__set_att49(16.13);
	input.__set_att50(17.14);
	input.__set_att51(true);
	input.__set_att52(true);
	input.__set_att53(true);
	input.__set_att54(true);
	input.__set_att55(true);
	input.__set_att56(true);
	input.__set_att57(true);
	input.__set_att58(true);
	input.__set_att59(true);
	input.__set_att60(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void complexTestThrift()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexThrift_2();
	}
	cout << endl << endl;

	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexThrift_4();
	}
	cout << endl << endl;

	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexThrift_6();
	}
	cout << endl << endl;

	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexThrift_8();
	}
	cout << endl << endl;

	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexThrift_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}


inline void innersimpleThrift_2()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innersimpleThrift_2 inner1 = thriftPerformance::innersimpleThrift_2();
	inner1.__set_att1(1);
	inner1.__set_att2(2);

	thriftPerformance::innersimpleThrift_2 inner2 = thriftPerformance::innersimpleThrift_2();
	inner2.__set_att1(1);
	inner2.__set_att2(2);

	thriftPerformance::outersimpleThrift_2 input = thriftPerformance::outersimpleThrift_2(), output = thriftPerformance::outersimpleThrift_2();
	input.__set_att1(inner1);
	input.__set_att2(inner2);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innersimpleThrift_4()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innersimpleThrift_4 inner1 = thriftPerformance::innersimpleThrift_4();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);

	thriftPerformance::innersimpleThrift_4 inner2 = thriftPerformance::innersimpleThrift_4();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);

	thriftPerformance::innersimpleThrift_4 inner3 = thriftPerformance::innersimpleThrift_4();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);

	thriftPerformance::innersimpleThrift_4 inner4 = thriftPerformance::innersimpleThrift_4();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);

	thriftPerformance::outersimpleThrift_4 input = thriftPerformance::outersimpleThrift_4(), output = thriftPerformance::outersimpleThrift_4();
	input.__set_att1(inner1);
	input.__set_att2(inner2);
	input.__set_att3(inner3);
	input.__set_att4(inner4);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innersimpleThrift_6()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innersimpleThrift_6 inner1 = thriftPerformance::innersimpleThrift_6();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);

	thriftPerformance::innersimpleThrift_6 inner2 = thriftPerformance::innersimpleThrift_6();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);

	thriftPerformance::innersimpleThrift_6 inner3 = thriftPerformance::innersimpleThrift_6();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);

	thriftPerformance::innersimpleThrift_6 inner4 = thriftPerformance::innersimpleThrift_6();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);
	inner4.__set_att5(5);
	inner4.__set_att6(6);

	thriftPerformance::innersimpleThrift_6 inner5 = thriftPerformance::innersimpleThrift_6();
	inner5.__set_att1(1);
	inner5.__set_att2(2);
	inner5.__set_att3(3);
	inner5.__set_att4(4);
	inner5.__set_att5(5);
	inner5.__set_att6(6);

	thriftPerformance::innersimpleThrift_6 inner6 = thriftPerformance::innersimpleThrift_6();
	inner6.__set_att1(1);
	inner6.__set_att2(2);
	inner6.__set_att3(3);
	inner6.__set_att4(4);
	inner6.__set_att5(5);
	inner6.__set_att6(6);

	thriftPerformance::outersimpleThrift_6 input = thriftPerformance::outersimpleThrift_6(), output = thriftPerformance::outersimpleThrift_6();
	input.__set_att1(inner1);
	input.__set_att2(inner2);
	input.__set_att3(inner3);
	input.__set_att4(inner4);
	input.__set_att5(inner5);
	input.__set_att6(inner6);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innersimpleThrift_8()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innersimpleThrift_8 inner1 = thriftPerformance::innersimpleThrift_8();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);
	inner1.__set_att7(7);
	inner1.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner2 = thriftPerformance::innersimpleThrift_8();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);
	inner2.__set_att7(7);
	inner2.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner3 = thriftPerformance::innersimpleThrift_8();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);
	inner3.__set_att7(7);
	inner3.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner4 = thriftPerformance::innersimpleThrift_8();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);
	inner4.__set_att5(5);
	inner4.__set_att6(6);
	inner4.__set_att7(7);
	inner4.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner5 = thriftPerformance::innersimpleThrift_8();
	inner5.__set_att1(1);
	inner5.__set_att2(2);
	inner5.__set_att3(3);
	inner5.__set_att4(4);
	inner5.__set_att5(5);
	inner5.__set_att6(6);
	inner5.__set_att7(7);
	inner5.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner6 = thriftPerformance::innersimpleThrift_8();
	inner6.__set_att1(1);
	inner6.__set_att2(2);
	inner6.__set_att3(3);
	inner6.__set_att4(4);
	inner6.__set_att5(5);
	inner6.__set_att6(6);
	inner6.__set_att7(7);
	inner6.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner7 = thriftPerformance::innersimpleThrift_8();
	inner7.__set_att1(1);
	inner7.__set_att2(2);
	inner7.__set_att3(3);
	inner7.__set_att4(4);
	inner7.__set_att5(5);
	inner7.__set_att6(6);
	inner7.__set_att7(7);
	inner7.__set_att8(8);

	thriftPerformance::innersimpleThrift_8 inner8 = thriftPerformance::innersimpleThrift_8();
	inner8.__set_att1(1);
	inner8.__set_att2(2);
	inner8.__set_att3(3);
	inner8.__set_att4(4);
	inner8.__set_att5(5);
	inner8.__set_att6(6);
	inner8.__set_att7(7);
	inner8.__set_att8(8);

	thriftPerformance::outersimpleThrift_8 input = thriftPerformance::outersimpleThrift_8(), output = thriftPerformance::outersimpleThrift_8();
	input.__set_att1(inner1);
	input.__set_att2(inner2);
	input.__set_att3(inner3);
	input.__set_att4(inner4);
	input.__set_att5(inner5);
	input.__set_att6(inner6);
	input.__set_att7(inner7);
	input.__set_att8(inner8);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innersimpleThrift_10()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innersimpleThrift_10 inner1 = thriftPerformance::innersimpleThrift_10();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);
	inner1.__set_att7(7);
	inner1.__set_att8(8);
	inner1.__set_att9(9);
	inner1.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner2 = thriftPerformance::innersimpleThrift_10();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);
	inner2.__set_att7(7);
	inner2.__set_att8(8);
	inner2.__set_att9(9);
	inner2.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner3 = thriftPerformance::innersimpleThrift_10();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);
	inner3.__set_att7(7);
	inner3.__set_att8(8);
	inner3.__set_att9(9);
	inner3.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner4 = thriftPerformance::innersimpleThrift_10();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);
	inner4.__set_att5(5);
	inner4.__set_att6(6);
	inner4.__set_att7(7);
	inner4.__set_att8(8);
	inner4.__set_att9(9);
	inner4.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner5 = thriftPerformance::innersimpleThrift_10();
	inner5.__set_att1(1);
	inner5.__set_att2(2);
	inner5.__set_att3(3);
	inner5.__set_att4(4);
	inner5.__set_att5(5);
	inner5.__set_att6(6);
	inner5.__set_att7(7);
	inner5.__set_att8(8);
	inner5.__set_att9(9);
	inner5.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner6 = thriftPerformance::innersimpleThrift_10();
	inner6.__set_att1(1);
	inner6.__set_att2(2);
	inner6.__set_att3(3);
	inner6.__set_att4(4);
	inner6.__set_att5(5);
	inner6.__set_att6(6);
	inner6.__set_att7(7);
	inner6.__set_att8(8);
	inner6.__set_att9(9);
	inner6.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner7 = thriftPerformance::innersimpleThrift_10();
	inner7.__set_att1(1);
	inner7.__set_att2(2);
	inner7.__set_att3(3);
	inner7.__set_att4(4);
	inner7.__set_att5(5);
	inner7.__set_att6(6);
	inner7.__set_att7(7);
	inner7.__set_att8(8);
	inner7.__set_att9(9);
	inner7.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner8 = thriftPerformance::innersimpleThrift_10();
	inner8.__set_att1(1);
	inner8.__set_att2(2);
	inner8.__set_att3(3);
	inner8.__set_att4(4);
	inner8.__set_att5(5);
	inner8.__set_att6(6);
	inner8.__set_att7(7);
	inner8.__set_att8(8);
	inner8.__set_att9(9);
	inner8.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner9 = thriftPerformance::innersimpleThrift_10();
	inner9.__set_att1(1);
	inner9.__set_att2(2);
	inner9.__set_att3(3);
	inner9.__set_att4(4);
	inner9.__set_att5(5);
	inner9.__set_att6(6);
	inner9.__set_att7(7);
	inner9.__set_att8(8);
	inner9.__set_att9(9);
	inner9.__set_att10(10);

	thriftPerformance::innersimpleThrift_10 inner10 = thriftPerformance::innersimpleThrift_10();
	inner10.__set_att1(1);
	inner10.__set_att2(2);
	inner10.__set_att3(3);
	inner10.__set_att4(4);
	inner10.__set_att5(5);
	inner10.__set_att6(6);
	inner10.__set_att7(7);
	inner10.__set_att8(8);
	inner10.__set_att9(9);
	inner10.__set_att10(10);

	thriftPerformance::outersimpleThrift_10 input = thriftPerformance::outersimpleThrift_10(), output = thriftPerformance::outersimpleThrift_10();
	input.__set_att1(inner1);
	input.__set_att2(inner2);
	input.__set_att3(inner3);
	input.__set_att4(inner4);
	input.__set_att5(inner5);
	input.__set_att6(inner6);
	input.__set_att7(inner7);
	input.__set_att8(inner8);
	input.__set_att9(inner9);
	input.__set_att10(inner10);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innerSimpleTestThrift()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleThrift_2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleThrift_4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleThrift_6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleThrift_8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleThrift_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}


inline void innercomplexThrift_1()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innercomplexThrift_1 inner1 = thriftPerformance::innercomplexThrift_1();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3("TEST 3");
	inner1.__set_att4(2.5);
	inner1.__set_att5(6.2);
	inner1.__set_att6(true);

	thriftPerformance::outercomplexThrift_1 input = thriftPerformance::outercomplexThrift_1(), output = thriftPerformance::outercomplexThrift_1();
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3("OUTER TEST 3");
	input.__set_att4(inner1);
	input.__set_att5(3.6);
	input.__set_att6(7.3);
	input.__set_att7(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innercomplexThrift_2()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innercomplexThrift_2 inner1 = thriftPerformance::innercomplexThrift_2();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5("TEST 5");
	inner1.__set_att6("TEST 6");
	inner1.__set_att7(2.5);
	inner1.__set_att8(3.6);
	inner1.__set_att9(6.2);
	inner1.__set_att10(7.3);
	inner1.__set_att11(true);
	inner1.__set_att12(true);

	thriftPerformance::innercomplexThrift_2 inner2 = thriftPerformance::innercomplexThrift_2();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5("TEST 5");
	inner2.__set_att6("TEST 6");
	inner2.__set_att7(2.5);
	inner2.__set_att8(3.6);
	inner2.__set_att9(6.2);
	inner2.__set_att10(7.3);
	inner2.__set_att11(true);
	inner2.__set_att12(true);

	thriftPerformance::outercomplexThrift_2 input = thriftPerformance::outercomplexThrift_2(), output = thriftPerformance::outercomplexThrift_2();
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3("OUTER TEST 3");
	input.__set_att4(inner1);
	input.__set_att5(3.6);
	input.__set_att6(7.3);
	input.__set_att7(true);
	input.__set_att8(8);
	input.__set_att9("OUTER TEST 9");
	input.__set_att10(inner2);
	input.__set_att11(4.7);
	input.__set_att12(8.4);
	input.__set_att13(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innercomplexThrift_3()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innercomplexThrift_3 inner1 = thriftPerformance::innercomplexThrift_3();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);
	inner1.__set_att7("TEST 7");
	inner1.__set_att8("TEST 8");
	inner1.__set_att9("TEST 9");
	inner1.__set_att10(2.5);
	inner1.__set_att11(3.6);
	inner1.__set_att12(4.7);
	inner1.__set_att13(6.2);
	inner1.__set_att14(7.3);
	inner1.__set_att15(8.4);
	inner1.__set_att16(true);
	inner1.__set_att17(true);
	inner1.__set_att18(true);

	thriftPerformance::innercomplexThrift_3 inner2 = thriftPerformance::innercomplexThrift_3();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);
	inner2.__set_att7("TEST 7");
	inner2.__set_att8("TEST 8");
	inner2.__set_att9("TEST 9");
	inner2.__set_att10(2.5);
	inner2.__set_att11(3.6);
	inner2.__set_att12(4.7);
	inner2.__set_att13(6.2);
	inner2.__set_att14(7.3);
	inner2.__set_att15(8.4);
	inner2.__set_att16(true);
	inner2.__set_att17(true);
	inner2.__set_att18(true);

	thriftPerformance::innercomplexThrift_3 inner3 = thriftPerformance::innercomplexThrift_3();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);
	inner3.__set_att7("TEST 7");
	inner3.__set_att8("TEST 8");
	inner3.__set_att9("TEST 9");
	inner3.__set_att10(2.5);
	inner3.__set_att11(3.6);
	inner3.__set_att12(4.7);
	inner3.__set_att13(6.2);
	inner3.__set_att14(7.3);
	inner3.__set_att15(8.4);
	inner3.__set_att16(true);
	inner3.__set_att17(true);
	inner3.__set_att18(true);

	thriftPerformance::outercomplexThrift_3 input = thriftPerformance::outercomplexThrift_3(), output = thriftPerformance::outercomplexThrift_3();
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3("OUTER TEST 3");
	input.__set_att4(inner1);
	input.__set_att5(3.6);
	input.__set_att6(7.3);
	input.__set_att7(true);
	input.__set_att8(8);
	input.__set_att9("OUTER TEST 9");
	input.__set_att10(inner2);
	input.__set_att11(4.7);
	input.__set_att12(8.4);
	input.__set_att13(true);
	input.__set_att14("OUTER TEST 14");
	input.__set_att15(inner3);
	input.__set_att16(5.8);
	input.__set_att17(9.5);
	input.__set_att18(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innercomplexThrift_4()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innercomplexThrift_4 inner1 = thriftPerformance::innercomplexThrift_4();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);
	inner1.__set_att7(7);
	inner1.__set_att8(8);
	inner1.__set_att9("TEST 9");
	inner1.__set_att10("TEST 10");
	inner1.__set_att11("TEST 11");
	inner1.__set_att12("TEST 12");
	inner1.__set_att13(2.5);
	inner1.__set_att14(3.6);
	inner1.__set_att15(4.7);
	inner1.__set_att16(5.8);
	inner1.__set_att17(6.2);
	inner1.__set_att18(7.3);
	inner1.__set_att19(8.4);
	inner1.__set_att20(9.5);
	inner1.__set_att21(true);
	inner1.__set_att22(true);
	inner1.__set_att23(true);
	inner1.__set_att24(true);

	thriftPerformance::innercomplexThrift_4 inner2 = thriftPerformance::innercomplexThrift_4();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);
	inner2.__set_att7(7);
	inner2.__set_att8(8);
	inner2.__set_att9("TEST 9");
	inner2.__set_att10("TEST 10");
	inner2.__set_att11("TEST 11");
	inner2.__set_att12("TEST 12");
	inner2.__set_att13(2.5);
	inner2.__set_att14(3.6);
	inner2.__set_att15(4.7);
	inner2.__set_att16(5.8);
	inner2.__set_att17(6.2);
	inner2.__set_att18(7.3);
	inner2.__set_att19(8.4);
	inner2.__set_att20(9.5);
	inner2.__set_att21(true);
	inner2.__set_att22(true);
	inner2.__set_att23(true);
	inner2.__set_att24(true);

	thriftPerformance::innercomplexThrift_4 inner3 = thriftPerformance::innercomplexThrift_4();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);
	inner3.__set_att7(7);
	inner3.__set_att8(8);
	inner3.__set_att9("TEST 9");
	inner3.__set_att10("TEST 10");
	inner3.__set_att11("TEST 11");
	inner3.__set_att12("TEST 12");
	inner3.__set_att13(2.5);
	inner3.__set_att14(3.6);
	inner3.__set_att15(4.7);
	inner3.__set_att16(5.8);
	inner3.__set_att17(6.2);
	inner3.__set_att18(7.3);
	inner3.__set_att19(8.4);
	inner3.__set_att20(9.5);
	inner3.__set_att21(true);
	inner3.__set_att22(true);
	inner3.__set_att23(true);
	inner3.__set_att24(true);

	thriftPerformance::innercomplexThrift_4 inner4 = thriftPerformance::innercomplexThrift_4();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);
	inner4.__set_att5(5);
	inner4.__set_att6(6);
	inner4.__set_att7(7);
	inner4.__set_att8(8);
	inner4.__set_att9("TEST 9");
	inner4.__set_att10("TEST 10");
	inner4.__set_att11("TEST 11");
	inner4.__set_att12("TEST 12");
	inner4.__set_att13(2.5);
	inner4.__set_att14(3.6);
	inner4.__set_att15(4.7);
	inner4.__set_att16(5.8);
	inner4.__set_att17(6.2);
	inner4.__set_att18(7.3);
	inner4.__set_att19(8.4);
	inner4.__set_att20(9.5);
	inner4.__set_att21(true);
	inner4.__set_att22(true);
	inner4.__set_att23(true);
	inner4.__set_att24(true);

	thriftPerformance::outercomplexThrift_4 input = thriftPerformance::outercomplexThrift_4(), output = thriftPerformance::outercomplexThrift_4();
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3("OUTER TEST 3");
	input.__set_att4(inner1);
	input.__set_att5(3.6);
	input.__set_att6(7.3);
	input.__set_att7(true);
	input.__set_att8(8);
	input.__set_att9("OUTER TEST 9");
	input.__set_att10(inner2);
	input.__set_att11(4.7);
	input.__set_att12(8.4);
	input.__set_att13(true);
	input.__set_att14("OUTER TEST 14");
	input.__set_att15(inner3);
	input.__set_att16(5.8);
	input.__set_att17(9.5);
	input.__set_att18(true);
	input.__set_att19(inner4);
	input.__set_att20(6.9);
	input.__set_att21(10.6);
	input.__set_att22(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innercomplexThrift_5()
{
	boost::timer::auto_cpu_timer t;

	thriftPerformance::innercomplexThrift_5 inner1 = thriftPerformance::innercomplexThrift_5();
	inner1.__set_att1(1);
	inner1.__set_att2(2);
	inner1.__set_att3(3);
	inner1.__set_att4(4);
	inner1.__set_att5(5);
	inner1.__set_att6(6);
	inner1.__set_att7(7);
	inner1.__set_att8(8);
	inner1.__set_att9(9);
	inner1.__set_att10(10);
	inner1.__set_att11("TEST 11");
	inner1.__set_att12("TEST 12");
	inner1.__set_att13("TEST 13");
	inner1.__set_att14("TEST 14");
	inner1.__set_att15("TEST 15");
	inner1.__set_att16(2.5);
	inner1.__set_att17(3.6);
	inner1.__set_att18(4.7);
	inner1.__set_att19(5.8);
	inner1.__set_att20(6.9);
	inner1.__set_att21(6.2);
	inner1.__set_att22(7.3);
	inner1.__set_att23(8.4);
	inner1.__set_att24(9.5);
	inner1.__set_att25(10.6);
	inner1.__set_att26(true);
	inner1.__set_att27(true);
	inner1.__set_att28(true);
	inner1.__set_att29(true);
	inner1.__set_att30(true);

	thriftPerformance::innercomplexThrift_5 inner2 = thriftPerformance::innercomplexThrift_5();
	inner2.__set_att1(1);
	inner2.__set_att2(2);
	inner2.__set_att3(3);
	inner2.__set_att4(4);
	inner2.__set_att5(5);
	inner2.__set_att6(6);
	inner2.__set_att7(7);
	inner2.__set_att8(8);
	inner2.__set_att9(9);
	inner2.__set_att10(10);
	inner2.__set_att11("TEST 11");
	inner2.__set_att12("TEST 12");
	inner2.__set_att13("TEST 13");
	inner2.__set_att14("TEST 14");
	inner2.__set_att15("TEST 15");
	inner2.__set_att16(2.5);
	inner2.__set_att17(3.6);
	inner2.__set_att18(4.7);
	inner2.__set_att19(5.8);
	inner2.__set_att20(6.9);
	inner2.__set_att21(6.2);
	inner2.__set_att22(7.3);
	inner2.__set_att23(8.4);
	inner2.__set_att24(9.5);
	inner2.__set_att25(10.6);
	inner2.__set_att26(true);
	inner2.__set_att27(true);
	inner2.__set_att28(true);
	inner2.__set_att29(true);
	inner2.__set_att30(true);

	thriftPerformance::innercomplexThrift_5 inner3 = thriftPerformance::innercomplexThrift_5();
	inner3.__set_att1(1);
	inner3.__set_att2(2);
	inner3.__set_att3(3);
	inner3.__set_att4(4);
	inner3.__set_att5(5);
	inner3.__set_att6(6);
	inner3.__set_att7(7);
	inner3.__set_att8(8);
	inner3.__set_att9(9);
	inner3.__set_att10(10);
	inner3.__set_att11("TEST 11");
	inner3.__set_att12("TEST 12");
	inner3.__set_att13("TEST 13");
	inner3.__set_att14("TEST 14");
	inner3.__set_att15("TEST 15");
	inner3.__set_att16(2.5);
	inner3.__set_att17(3.6);
	inner3.__set_att18(4.7);
	inner3.__set_att19(5.8);
	inner3.__set_att20(6.9);
	inner3.__set_att21(6.2);
	inner3.__set_att22(7.3);
	inner3.__set_att23(8.4);
	inner3.__set_att24(9.5);
	inner3.__set_att25(10.6);
	inner3.__set_att26(true);
	inner3.__set_att27(true);
	inner3.__set_att28(true);
	inner3.__set_att29(true);
	inner3.__set_att30(true);

	thriftPerformance::innercomplexThrift_5 inner4 = thriftPerformance::innercomplexThrift_5();
	inner4.__set_att1(1);
	inner4.__set_att2(2);
	inner4.__set_att3(3);
	inner4.__set_att4(4);
	inner4.__set_att5(5);
	inner4.__set_att6(6);
	inner4.__set_att7(7);
	inner4.__set_att8(8);
	inner4.__set_att9(9);
	inner4.__set_att10(10);
	inner4.__set_att11("TEST 11");
	inner4.__set_att12("TEST 12");
	inner4.__set_att13("TEST 13");
	inner4.__set_att14("TEST 14");
	inner4.__set_att15("TEST 15");
	inner4.__set_att16(2.5);
	inner4.__set_att17(3.6);
	inner4.__set_att18(4.7);
	inner4.__set_att19(5.8);
	inner4.__set_att20(6.9);
	inner4.__set_att21(6.2);
	inner4.__set_att22(7.3);
	inner4.__set_att23(8.4);
	inner4.__set_att24(9.5);
	inner4.__set_att25(10.6);
	inner4.__set_att26(true);
	inner4.__set_att27(true);
	inner4.__set_att28(true);
	inner4.__set_att29(true);
	inner4.__set_att30(true);

	thriftPerformance::innercomplexThrift_5 inner5 = thriftPerformance::innercomplexThrift_5();
	inner5.__set_att1(1);
	inner5.__set_att2(2);
	inner5.__set_att3(3);
	inner5.__set_att4(4);
	inner5.__set_att5(5);
	inner5.__set_att6(6);
	inner5.__set_att7(7);
	inner5.__set_att8(8);
	inner5.__set_att9(9);
	inner5.__set_att10(10);
	inner5.__set_att11("TEST 11");
	inner5.__set_att12("TEST 12");
	inner5.__set_att13("TEST 13");
	inner5.__set_att14("TEST 14");
	inner5.__set_att15("TEST 15");
	inner5.__set_att16(2.5);
	inner5.__set_att17(3.6);
	inner5.__set_att18(4.7);
	inner5.__set_att19(5.8);
	inner5.__set_att20(6.9);
	inner5.__set_att21(6.2);
	inner5.__set_att22(7.3);
	inner5.__set_att23(8.4);
	inner5.__set_att24(9.5);
	inner5.__set_att25(10.6);
	inner5.__set_att26(true);
	inner5.__set_att27(true);
	inner5.__set_att28(true);
	inner5.__set_att29(true);
	inner5.__set_att30(true);

	thriftPerformance::outercomplexThrift_5 input = thriftPerformance::outercomplexThrift_5(), output = thriftPerformance::outercomplexThrift_5();
	input.__set_att1(1);
	input.__set_att2(2);
	input.__set_att3("OUTER TEST 3");
	input.__set_att4(inner1);
	input.__set_att5(3.6);
	input.__set_att6(7.3);
	input.__set_att7(true);
	input.__set_att8(8);
	input.__set_att9("OUTER TEST 9");
	input.__set_att10(inner2);
	input.__set_att11(4.7);
	input.__set_att12(8.4);
	input.__set_att13(true);
	input.__set_att14("OUTER TEST 14");
	input.__set_att15(inner3);
	input.__set_att16(5.8);
	input.__set_att17(9.5);
	input.__set_att18(true);
	input.__set_att19(inner4);
	input.__set_att20(6.9);
	input.__set_att21(10.6);
	input.__set_att22(true);
	input.__set_att23(7.10);
	input.__set_att24(11.7);
	input.__set_att25(true);

	boost::shared_ptr<TMemoryBuffer> mb(new TMemoryBuffer(500));
	boost::shared_ptr<TBinaryProtocol> protocol(new TBinaryProtocol(mb));

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		mb->resetBuffer();
		input.write(protocol.get());
		output.read(protocol.get());
	}
}

inline void innerComplexTestThrift()
{
	cout << "Estructura heterogénea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexThrift_1();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexThrift_2();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexThrift_3();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexThrift_4();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexThrift_5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceThrift()
{
	cout << "APACHE THRIFT:" << endl << endl;
	simpleTestThrift();
	complexTestThrift();
	innerSimpleTestThrift();
	innerComplexTestThrift();
	cout << "------------------------------------------------------------------------------------------" << endl;

}

}

int main()
{

	testThrift::performanceThrift();

	return 0;
}