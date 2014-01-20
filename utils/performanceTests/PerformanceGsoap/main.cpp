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

//GSoap
#include "stdsoap2.h"
#include "soapH.h"
#include "ns1.nsmap"

using namespace std;

#define NUMBER_OF_LOOPS 1000

namespace testGsoap
{

inline void simpleGsoap10()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__simpleGsoap10 input, output;
	input.soap = soap;
	input.att1 = 1;
	input.att2 = 2;
	input.att3 = 3;
	input.att4 = 4;
	input.att5 = 5;
	input.att6 = 6;
	input.att7 = 7;
	input.att8 = 8;
	input.att9 = 9;
	input.att10 = 10;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__simpleGsoap10(soap, &input);
		
		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;
		
		soap_read__ns1__simpleGsoap10(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void simpleGsoap20()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__simpleGsoap20 input, output;
	input.soap = soap;
	input.att1 = 1;
	input.att2 = 2;
	input.att3 = 3;
	input.att4 = 4;
	input.att5 = 5;
	input.att6 = 6;
	input.att7 = 7;
	input.att8 = 8;
	input.att9 = 9;
	input.att10 = 10;
	input.att11 = 11;
	input.att12 = 12;
	input.att13 = 13;
	input.att14 = 14;
	input.att15 = 15;
	input.att16 = 16;
	input.att17 = 17;
	input.att18 = 18;
	input.att19 = 19;
	input.att20 = 20;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__simpleGsoap20(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__simpleGsoap20(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void simpleGsoap30()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__simpleGsoap30 input, output;
	input.soap = soap;
	input.att1 = 1;
	input.att2 = 2;
	input.att3 = 3;
	input.att4 = 4;
	input.att5 = 5;
	input.att6 = 6;
	input.att7 = 7;
	input.att8 = 8;
	input.att9 = 9;
	input.att10 = 10;
	input.att11 = 11;
	input.att12 = 12;
	input.att13 = 13;
	input.att14 = 14;
	input.att15 = 15;
	input.att16 = 16;
	input.att17 = 17;
	input.att18 = 18;
	input.att19 = 19;
	input.att20 = 20;
	input.att21 = 21;
	input.att22 = 22;
	input.att23 = 23;
	input.att24 = 24;
	input.att25 = 25;
	input.att26 = 26;
	input.att27 = 27;
	input.att28 = 28;
	input.att29 = 29;
	input.att30 = 30;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__simpleGsoap30(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__simpleGsoap30(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void simpleGsoap40()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__simpleGsoap40 input, output;
	input.soap = soap;
	input.att1 = 1;
	input.att2 = 2;
	input.att3 = 3;
	input.att4 = 4;
	input.att5 = 5;
	input.att6 = 6;
	input.att7 = 7;
	input.att8 = 8;
	input.att9 = 9;
	input.att10 = 10;
	input.att11 = 11;
	input.att12 = 12;
	input.att13 = 13;
	input.att14 = 14;
	input.att15 = 15;
	input.att16 = 16;
	input.att17 = 17;
	input.att18 = 18;
	input.att19 = 19;
	input.att20 = 20;
	input.att21 = 21;
	input.att22 = 22;
	input.att23 = 23;
	input.att24 = 24;
	input.att25 = 25;
	input.att26 = 26;
	input.att27 = 27;
	input.att28 = 28;
	input.att29 = 29;
	input.att30 = 30;
	input.att31 = 31;
	input.att32 = 32;
	input.att33 = 33;
	input.att34 = 34;
	input.att35 = 35;
	input.att36 = 36;
	input.att37 = 37;
	input.att38 = 38;
	input.att39 = 39;
	input.att40 = 40;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__simpleGsoap40(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__simpleGsoap40(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void simpleGsoap50()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__simpleGsoap50 input, output;
	input.soap = soap;
	input.att1 = 1;
	input.att2 = 2;
	input.att3 = 3;
	input.att4 = 4;
	input.att5 = 5;
	input.att6 = 6;
	input.att7 = 7;
	input.att8 = 8;
	input.att9 = 9;
	input.att10 = 10;
	input.att11 = 11;
	input.att12 = 12;
	input.att13 = 13;
	input.att14 = 14;
	input.att15 = 15;
	input.att16 = 16;
	input.att17 = 17;
	input.att18 = 18;
	input.att19 = 19;
	input.att20 = 20;
	input.att21 = 21;
	input.att22 = 22;
	input.att23 = 23;
	input.att24 = 24;
	input.att25 = 25;
	input.att26 = 26;
	input.att27 = 27;
	input.att28 = 28;
	input.att29 = 29;
	input.att30 = 30;
	input.att31 = 31;
	input.att32 = 32;
	input.att33 = 33;
	input.att34 = 34;
	input.att35 = 35;
	input.att36 = 36;
	input.att37 = 37;
	input.att38 = 38;
	input.att39 = 39;
	input.att40 = 40;
	input.att41 = 41;
	input.att42 = 42;
	input.att43 = 43;
	input.att44 = 44;
	input.att45 = 45;
	input.att46 = 46;
	input.att47 = 47;
	input.att48 = 48;
	input.att49 = 49;
	input.att50 = 50;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__simpleGsoap50(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__simpleGsoap50(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void simpleTestGsoap()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleGsoap10();
	}
	cout << endl << endl;

	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleGsoap20();
	}
	cout << endl << endl;

	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleGsoap30();
	}
	cout << endl << endl;

	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleGsoap40();
	}
	cout << endl << endl;

	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		simpleGsoap50();
	}

	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void complexGsoap2()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__complexGsoap2 input, output;
	input.soap = soap;
	input.att1 = 0;
	input.att2 = 1;
	input.att3 = 0;
	input.att4 = 1;
	input.att5 = "TEST 0";
	input.att6 = "TEST 1";
	input.att7 = 2.5;
	input.att8 = 3.6;
	input.att9 = 27.1;
	input.att10 = 28.2;
	input.att11 = true;
	input.att12 = true;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__complexGsoap2(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__complexGsoap2(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void complexGsoap4()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__complexGsoap4 input, output;
	input.soap = soap;
	input.att1 = 0;
	input.att2 = 1;
	input.att3 = 2;
	input.att4 = 3;
	input.att5 = 0;
	input.att6 = 1;
	input.att7 = 2;
	input.att8 = 3;
	input.att9 = "TEST 0";
	input.att10 = "TEST 1";
	input.att11 = "TEST 2";
	input.att12 = "TEST 3";
	input.att13 = 2.5;
	input.att14 = 3.6;
	input.att15 = 4.7;
	input.att16 = 5.8;
	input.att17 = 27.1;
	input.att18 = 28.2;
	input.att19 = 29.3;
	input.att20 = 30.4;
	input.att21 = true;
	input.att22 = true;
	input.att23 = true;
	input.att24 = true;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__complexGsoap4(soap, &input);
		
		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;
		
		soap_read__ns1__complexGsoap4(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void complexGsoap6()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__complexGsoap6 input, output;
	input.soap = soap;
	input.att1 = 0;
	input.att2 = 1;
	input.att3 = 2;
	input.att4 = 3;
	input.att5 = 4;
	input.att6 = 5;
	input.att7 = 0;
	input.att8 = 1;
	input.att9 = 2;
	input.att10 = 3;
	input.att11 = 4;
	input.att12 = 5;
	input.att13 = "TEST 0";
	input.att14 = "TEST 1";
	input.att15 = "TEST 2";
	input.att16 = "TEST 3";
	input.att17 = "TEST 4";
	input.att18 = "TEST 5";
	input.att19 = 2.5;
	input.att20 = 3.6;
	input.att21 = 4.7;
	input.att22 = 5.8;
	input.att23 = 6.9;
	input.att24 = 7.10;
	input.att25 = 27.1;
	input.att26 = 28.2;
	input.att27 = 29.3;
	input.att28 = 30.4;
	input.att29 = 31.5;
	input.att30 = 32.6;
	input.att31 = true;
	input.att32 = true;
	input.att33 = true;
	input.att34 = true;
	input.att35 = true;
	input.att36 = true;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__complexGsoap6(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__complexGsoap6(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void complexGsoap8()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__complexGsoap8 input, output;
	input.soap = soap;
	input.att1 = 0;
	input.att2 = 1;
	input.att3 = 2;
	input.att4 = 3;
	input.att5 = 4;
	input.att6 = 5;
	input.att7 = 6;
	input.att8 = 7;
	input.att9 = 0;
	input.att10 = 1;
	input.att11 = 2;
	input.att12 = 3;
	input.att13 = 4;
	input.att14 = 5;
	input.att15 = 6;
	input.att16 = 7;
	input.att17 = "TEST 0";
	input.att18 = "TEST 1";
	input.att19 = "TEST 2";
	input.att20 = "TEST 3";
	input.att21 = "TEST 4";
	input.att22 = "TEST 5";
	input.att23 = "TEST 6";
	input.att24 = "TEST 7";
	input.att25 = 2.5;
	input.att26 = 3.6;
	input.att27 = 4.7;
	input.att28 = 5.8;
	input.att29 = 6.9;
	input.att30 = 7.10;
	input.att31 = 8.11;
	input.att32 = 9.12;
	input.att33 = 27.1;
	input.att34 = 28.2;
	input.att35 = 29.3;
	input.att36 = 30.4;
	input.att37 = 31.5;
	input.att38 = 32.6;
	input.att39 = 33.7;
	input.att40 = 34.8;
	input.att41 = true;
	input.att42 = true;
	input.att43 = true;
	input.att44 = true;
	input.att45 = true;
	input.att46 = true;
	input.att47 = true;
	input.att48 = true;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__complexGsoap8(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__complexGsoap8(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void complexGsoap10()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__complexGsoap10 input, output;
	input.soap = soap;
	input.att1 = 0;
	input.att2 = 1;
	input.att3 = 2;
	input.att4 = 3;
	input.att5 = 4;
	input.att6 = 5;
	input.att7 = 6;
	input.att8 = 7;
	input.att9 = 8;
	input.att10 = 9;
	input.att11 = 0;
	input.att12 = 1;
	input.att13 = 2;
	input.att14 = 3;
	input.att15 = 4;
	input.att16 = 5;
	input.att17 = 6;
	input.att18 = 7;
	input.att19 = 8;
	input.att20 = 9;
	input.att21 = "TEST 0";
	input.att22 = "TEST 1";
	input.att23 = "TEST 2";
	input.att24 = "TEST 3";
	input.att25 = "TEST 4";
	input.att26 = "TEST 5";
	input.att27 = "TEST 6";
	input.att28 = "TEST 7";
	input.att29 = "TEST 8";
	input.att30 = "TEST 9";
	input.att31 = 2.5;
	input.att32 = 3.6;
	input.att33 = 4.7;
	input.att34 = 5.8;
	input.att35 = 6.9;
	input.att36 = 7.10;
	input.att37 = 8.11;
	input.att38 = 9.12;
	input.att39 = 10.13;
	input.att40 = 11.14;
	input.att41 = 27.1;
	input.att42 = 28.2;
	input.att43 = 29.3;
	input.att44 = 30.4;
	input.att45 = 31.5;
	input.att46 = 32.6;
	input.att47 = 33.7;
	input.att48 = 34.8;
	input.att49 = 35.9;
	input.att50 = 36.10;
	input.att51 = true;
	input.att52 = true;
	input.att53 = true;
	input.att54 = true;
	input.att55 = true;
	input.att56 = true;
	input.att57 = true;
	input.att58 = true;
	input.att59 = true;
	input.att60 = true;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__complexGsoap10(soap, &input);

		//streambuf.pubseekpos(0);
	//	ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__complexGsoap10(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void complexTestGsoap()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexGsoap2();
	}
	cout << endl << endl;

	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexGsoap4();
	}
	cout << endl << endl;

	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexGsoap6();
	}
	cout << endl << endl;

	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexGsoap8();
	}
	cout << endl << endl;

	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		complexGsoap10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void innersimpleGsoap2()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outersimpleGsoap2 input, output;
	input.soap = soap;

	ns1__innersimpleGsoap2 inner1;
	inner1.soap = soap;
	inner1.att1 = 1;
	inner1.att2 = 2;

	ns1__innersimpleGsoap2 inner2;
	inner2.soap = soap;
	inner2.att1 = 1;
	inner2.att2 = 2;

	input.att1 = &inner1;
	input.att2 = &inner2;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outersimpleGsoap2(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outersimpleGsoap2(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innersimpleGsoap4()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outersimpleGsoap4 input, output;
	input.soap = soap;

	ns1__innersimpleGsoap4 inner1;
	inner1.soap = soap;
	inner1.att1 = 1;
	inner1.att2 = 2;
	inner1.att3 = 3;
	inner1.att4 = 4;

	ns1__innersimpleGsoap4 inner2;
	inner2.soap = soap;
	inner2.att1 = 1;
	inner2.att2 = 2;
	inner2.att3 = 3;
	inner2.att4 = 4;

	ns1__innersimpleGsoap4 inner3;
	inner3.soap = soap;
	inner3.att1 = 1;
	inner3.att2 = 2;
	inner3.att3 = 3;
	inner3.att4 = 4;

	ns1__innersimpleGsoap4 inner4;
	inner4.soap = soap;
	inner4.att1 = 1;
	inner4.att2 = 2;
	inner4.att3 = 3;
	inner4.att4 = 4;

	input.att1 = &inner1;
	input.att2 = &inner2;
	input.att3 = &inner3;
	input.att4 = &inner4;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outersimpleGsoap4(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outersimpleGsoap4(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innersimpleGsoap6()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outersimpleGsoap6 input, output;
	input.soap = soap;

	ns1__innersimpleGsoap6 inner1;
	inner1.soap = soap;
	inner1.att1 = 1;
	inner1.att2 = 2;
	inner1.att3 = 3;
	inner1.att4 = 4;
	inner1.att5 = 5;
	inner1.att6 = 6;

	ns1__innersimpleGsoap6 inner2;
	inner2.soap = soap;
	inner2.att1 = 1;
	inner2.att2 = 2;
	inner2.att3 = 3;
	inner2.att4 = 4;
	inner2.att5 = 5;
	inner2.att6 = 6;

	ns1__innersimpleGsoap6 inner3;
	inner3.soap = soap;
	inner3.att1 = 1;
	inner3.att2 = 2;
	inner3.att3 = 3;
	inner3.att4 = 4;
	inner3.att5 = 5;
	inner3.att6 = 6;

	ns1__innersimpleGsoap6 inner4;
	inner4.soap = soap;
	inner4.att1 = 1;
	inner4.att2 = 2;
	inner4.att3 = 3;
	inner4.att4 = 4;
	inner4.att5 = 5;
	inner4.att6 = 6;

	ns1__innersimpleGsoap6 inner5;
	inner5.soap = soap;
	inner5.att1 = 1;
	inner5.att2 = 2;
	inner5.att3 = 3;
	inner5.att4 = 4;
	inner5.att5 = 5;
	inner5.att6 = 6;

	ns1__innersimpleGsoap6 inner6;
	inner6.soap = soap;
	inner6.att1 = 1;
	inner6.att2 = 2;
	inner6.att3 = 3;
	inner6.att4 = 4;
	inner6.att5 = 5;
	inner6.att6 = 6;

	input.att1 = &inner1;
	input.att2 = &inner2;
	input.att3 = &inner3;
	input.att4 = &inner4;
	input.att5 = &inner5;
	input.att6 = &inner6;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outersimpleGsoap6(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outersimpleGsoap6(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innersimpleGsoap8()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outersimpleGsoap8 input, output;
	input.soap = soap;

	ns1__innersimpleGsoap8 inner1;
	inner1.soap = soap;
	inner1.att1 = 1;
	inner1.att2 = 2;
	inner1.att3 = 3;
	inner1.att4 = 4;
	inner1.att5 = 5;
	inner1.att6 = 6;
	inner1.att7 = 7;
	inner1.att8 = 8;

	ns1__innersimpleGsoap8 inner2;
	inner2.soap = soap;
	inner2.att1 = 1;
	inner2.att2 = 2;
	inner2.att3 = 3;
	inner2.att4 = 4;
	inner2.att5 = 5;
	inner2.att6 = 6;
	inner2.att7 = 7;
	inner2.att8 = 8;

	ns1__innersimpleGsoap8 inner3;
	inner3.soap = soap;
	inner3.att1 = 1;
	inner3.att2 = 2;
	inner3.att3 = 3;
	inner3.att4 = 4;
	inner3.att5 = 5;
	inner3.att6 = 6;
	inner3.att7 = 7;
	inner3.att8 = 8;

	ns1__innersimpleGsoap8 inner4;
	inner4.soap = soap;
	inner4.att1 = 1;
	inner4.att2 = 2;
	inner4.att3 = 3;
	inner4.att4 = 4;
	inner4.att5 = 5;
	inner4.att6 = 6;
	inner4.att7 = 7;
	inner4.att8 = 8;

	ns1__innersimpleGsoap8 inner5;
	inner5.soap = soap;
	inner5.att1 = 1;
	inner5.att2 = 2;
	inner5.att3 = 3;
	inner5.att4 = 4;
	inner5.att5 = 5;
	inner5.att6 = 6;
	inner5.att7 = 7;
	inner5.att8 = 8;

	ns1__innersimpleGsoap8 inner6;
	inner6.soap = soap;
	inner6.att1 = 1;
	inner6.att2 = 2;
	inner6.att3 = 3;
	inner6.att4 = 4;
	inner6.att5 = 5;
	inner6.att6 = 6;
	inner6.att7 = 7;
	inner6.att8 = 8;

	ns1__innersimpleGsoap8 inner7;
	inner7.soap = soap;
	inner7.att1 = 1;
	inner7.att2 = 2;
	inner7.att3 = 3;
	inner7.att4 = 4;
	inner7.att5 = 5;
	inner7.att6 = 6;
	inner7.att7 = 7;
	inner7.att8 = 8;

	ns1__innersimpleGsoap8 inner8;
	inner8.soap = soap;
	inner8.att1 = 1;
	inner8.att2 = 2;
	inner8.att3 = 3;
	inner8.att4 = 4;
	inner8.att5 = 5;
	inner8.att6 = 6;
	inner8.att7 = 7;
	inner8.att8 = 8;

	input.att1 = &inner1;
	input.att2 = &inner2;
	input.att3 = &inner3;
	input.att4 = &inner4;
	input.att5 = &inner5;
	input.att6 = &inner6;
	input.att7 = &inner7;
	input.att8 = &inner8;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outersimpleGsoap8(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outersimpleGsoap8(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innersimpleGsoap10()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outersimpleGsoap10 input, output;
	input.soap = soap;

	ns1__innersimpleGsoap10 inner1;
	inner1.soap = soap;
	inner1.att1 = 1;
	inner1.att2 = 2;
	inner1.att3 = 3;
	inner1.att4 = 4;
	inner1.att5 = 5;
	inner1.att6 = 6;
	inner1.att7 = 7;
	inner1.att8 = 8;
	inner1.att9 = 9;
	inner1.att10 = 10;

	ns1__innersimpleGsoap10 inner2;
	inner2.soap = soap;
	inner2.att1 = 1;
	inner2.att2 = 2;
	inner2.att3 = 3;
	inner2.att4 = 4;
	inner2.att5 = 5;
	inner2.att6 = 6;
	inner2.att7 = 7;
	inner2.att8 = 8;
	inner2.att9 = 9;
	inner2.att10 = 10;

	ns1__innersimpleGsoap10 inner3;
	inner3.soap = soap;
	inner3.att1 = 1;
	inner3.att2 = 2;
	inner3.att3 = 3;
	inner3.att4 = 4;
	inner3.att5 = 5;
	inner3.att6 = 6;
	inner3.att7 = 7;
	inner3.att8 = 8;
	inner3.att9 = 9;
	inner3.att10 = 10;

	ns1__innersimpleGsoap10 inner4;
	inner4.soap = soap;
	inner4.att1 = 1;
	inner4.att2 = 2;
	inner4.att3 = 3;
	inner4.att4 = 4;
	inner4.att5 = 5;
	inner4.att6 = 6;
	inner4.att7 = 7;
	inner4.att8 = 8;
	inner4.att9 = 9;
	inner4.att10 = 10;

	ns1__innersimpleGsoap10 inner5;
	inner5.soap = soap;
	inner5.att1 = 1;
	inner5.att2 = 2;
	inner5.att3 = 3;
	inner5.att4 = 4;
	inner5.att5 = 5;
	inner5.att6 = 6;
	inner5.att7 = 7;
	inner5.att8 = 8;
	inner5.att9 = 9;
	inner5.att10 = 10;

	ns1__innersimpleGsoap10 inner6;
	inner6.soap = soap;
	inner6.att1 = 1;
	inner6.att2 = 2;
	inner6.att3 = 3;
	inner6.att4 = 4;
	inner6.att5 = 5;
	inner6.att6 = 6;
	inner6.att7 = 7;
	inner6.att8 = 8;
	inner6.att9 = 9;
	inner6.att10 = 10;

	ns1__innersimpleGsoap10 inner7;
	inner7.soap = soap;
	inner7.att1 = 1;
	inner7.att2 = 2;
	inner7.att3 = 3;
	inner7.att4 = 4;
	inner7.att5 = 5;
	inner7.att6 = 6;
	inner7.att7 = 7;
	inner7.att8 = 8;
	inner7.att9 = 9;
	inner7.att10 = 10;

	ns1__innersimpleGsoap10 inner8;
	inner8.soap = soap;
	inner8.att1 = 1;
	inner8.att2 = 2;
	inner8.att3 = 3;
	inner8.att4 = 4;
	inner8.att5 = 5;
	inner8.att6 = 6;
	inner8.att7 = 7;
	inner8.att8 = 8;
	inner8.att9 = 9;
	inner8.att10 = 10;

	ns1__innersimpleGsoap10 inner9;
	inner9.soap = soap;
	inner9.att1 = 1;
	inner9.att2 = 2;
	inner9.att3 = 3;
	inner9.att4 = 4;
	inner9.att5 = 5;
	inner9.att6 = 6;
	inner9.att7 = 7;
	inner9.att8 = 8;
	inner9.att9 = 9;
	inner9.att10 = 10;

	ns1__innersimpleGsoap10 inner10;
	inner10.soap = soap;
	inner10.att1 = 1;
	inner10.att2 = 2;
	inner10.att3 = 3;
	inner10.att4 = 4;
	inner10.att5 = 5;
	inner10.att6 = 6;
	inner10.att7 = 7;
	inner10.att8 = 8;
	inner10.att9 = 9;
	inner10.att10 = 10;

	input.att1 = &inner1;
	input.att2 = &inner2;
	input.att3 = &inner3;
	input.att4 = &inner4;
	input.att5 = &inner5;
	input.att6 = &inner6;
	input.att7 = &inner7;
	input.att8 = &inner8;
	input.att9 = &inner9;
	input.att10 = &inner10;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outersimpleGsoap10(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outersimpleGsoap10(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innerSimpleTestGsoap()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleGsoap2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleGsoap4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleGsoap6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleGsoap8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		innersimpleGsoap10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void innercomplexGsoap1()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outercomplexGsoap1 input, output;
	input.soap = soap;

	ns1__innercomplexGsoap1 inner1;
	inner1.soap = soap;
	inner1.att1 = 0;
	inner1.att2 = 0;
	inner1.att3 = "TEST 0";
	inner1.att4 = 1.5;
	inner1.att5 = 10.0;
	inner1.att6 = true;

	input.att1 = 1;
	input.att2 = 1;
	input.att3 = "TEST 1";
	input.att4 = &inner1;
	input.att5 = 10.6;
	input.att6 = 2.18;
	input.att7 = false;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outercomplexGsoap1(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outercomplexGsoap1(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innercomplexGsoap2()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outercomplexGsoap2 input, output;
	input.soap = soap;

	ns1__innercomplexGsoap2 inner1;
	inner1.soap = soap;
	inner1.att1 = 0;
	inner1.att2 = 1;
	inner1.att3 = 0;
	inner1.att4 = 1;
	inner1.att5 = "TEST 0";
	inner1.att6 = "TEST 1";
	inner1.att7 = 1.5;
	inner1.att8 = 2.6;
	inner1.att9 = 10.0;
	inner1.att10 = 11.1;
	inner1.att11 = true;
	inner1.att12 = true;

	ns1__innercomplexGsoap2 inner2;
	inner2.soap = soap;
	inner2.att1 = 0;
	inner2.att2 = 1;
	inner2.att3 = 0;
	inner2.att4 = 1;
	inner2.att5 = "TEST 0";
	inner2.att6 = "TEST 1";
	inner2.att7 = 1.5;
	inner2.att8 = 2.6;
	inner2.att9 = 10.0;
	inner2.att10 = 11.1;
	inner2.att11 = true;
	inner2.att12 = true;

	input.att1 = 1;
	input.att2 = 1;
	input.att3 = "TEST 1";
	input.att4 = &inner1;
	input.att5 = 10.6;
	input.att6 = 2.18;
	input.att7 = false;
	input.att8 = 2;
	input.att9 = "TEST 2";
	input.att10 = &inner2;
	input.att11 = 11.7;
	input.att12 = 3.19;
	input.att13 = false;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outercomplexGsoap2(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outercomplexGsoap2(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innercomplexGsoap3()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outercomplexGsoap3 input, output;
	input.soap = soap;

	ns1__innercomplexGsoap3 inner1;
	inner1.soap = soap;
	inner1.att1 = 0;
	inner1.att2 = 1;
	inner1.att3 = 2;
	inner1.att4 = 0;
	inner1.att5 = 1;
	inner1.att6 = 2;
	inner1.att7 = "TEST 0";
	inner1.att8 = "TEST 1";
	inner1.att9 = "TEST 2";
	inner1.att10 = 1.5;
	inner1.att11 = 2.6;
	inner1.att12 = 3.7;
	inner1.att13 = 10.0;
	inner1.att14 = 11.1;
	inner1.att15 = 12.2;
	inner1.att16 = true;
	inner1.att17 = true;
	inner1.att18 = true;

	ns1__innercomplexGsoap3 inner2;
	inner2.soap = soap;
	inner2.att1 = 0;
	inner2.att2 = 1;
	inner2.att3 = 2;
	inner2.att4 = 0;
	inner2.att5 = 1;
	inner2.att6 = 2;
	inner2.att7 = "TEST 0";
	inner2.att8 = "TEST 1";
	inner2.att9 = "TEST 2";
	inner2.att10 = 1.5;
	inner2.att11 = 2.6;
	inner2.att12 = 3.7;
	inner2.att13 = 10.0;
	inner2.att14 = 11.1;
	inner2.att15 = 12.2;
	inner2.att16 = true;
	inner2.att17 = true;
	inner2.att18 = true;

	ns1__innercomplexGsoap3 inner3;
	inner3.soap = soap;
	inner3.att1 = 0;
	inner3.att2 = 1;
	inner3.att3 = 2;
	inner3.att4 = 0;
	inner3.att5 = 1;
	inner3.att6 = 2;
	inner3.att7 = "TEST 0";
	inner3.att8 = "TEST 1";
	inner3.att9 = "TEST 2";
	inner3.att10 = 1.5;
	inner3.att11 = 2.6;
	inner3.att12 = 3.7;
	inner3.att13 = 10.0;
	inner3.att14 = 11.1;
	inner3.att15 = 12.2;
	inner3.att16 = true;
	inner3.att17 = true;
	inner3.att18 = true;

	input.att1 = 1;
	input.att2 = 1;
	input.att3 = "TEST 1";
	input.att4 = &inner1;
	input.att5 = 10.6;
	input.att6 = 2.18;
	input.att7 = false;
	input.att8 = 2;
	input.att9 = "TEST 2";
	input.att10 = &inner2;
	input.att11 = 11.7;
	input.att12 = 3.19;
	input.att13 = false;
	input.att14 = "TEST 3";
	input.att15 = &inner3;
	input.att16 = 12.8;
	input.att17 = 4.20;
	input.att18 = false;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outercomplexGsoap3(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outercomplexGsoap3(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innercomplexGsoap4()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outercomplexGsoap4 input, output;
	input.soap = soap;

	ns1__innercomplexGsoap4 inner1;
	inner1.soap = soap;
	inner1.att1 = 0;
	inner1.att2 = 1;
	inner1.att3 = 2;
	inner1.att4 = 3;
	inner1.att5 = 0;
	inner1.att6 = 1;
	inner1.att7 = 2;
	inner1.att8 = 3;
	inner1.att9 = "TEST 0";
	inner1.att10 = "TEST 1";
	inner1.att11 = "TEST 2";
	inner1.att12 = "TEST 3";
	inner1.att13 = 1.5;
	inner1.att14 = 2.6;
	inner1.att15 = 3.7;
	inner1.att16 = 4.8;
	inner1.att17 = 10.0;
	inner1.att18 = 11.1;
	inner1.att19 = 12.2;
	inner1.att20 = 13.3;
	inner1.att21 = true;
	inner1.att22 = true;
	inner1.att23 = true;
	inner1.att24 = true;

	ns1__innercomplexGsoap4 inner2;
	inner2.soap = soap;
	inner2.att1 = 0;
	inner2.att2 = 1;
	inner2.att3 = 2;
	inner2.att4 = 3;
	inner2.att5 = 0;
	inner2.att6 = 1;
	inner2.att7 = 2;
	inner2.att8 = 3;
	inner2.att9 = "TEST 0";
	inner2.att10 = "TEST 1";
	inner2.att11 = "TEST 2";
	inner2.att12 = "TEST 3";
	inner2.att13 = 1.5;
	inner2.att14 = 2.6;
	inner2.att15 = 3.7;
	inner2.att16 = 4.8;
	inner2.att17 = 10.0;
	inner2.att18 = 11.1;
	inner2.att19 = 12.2;
	inner2.att20 = 13.3;
	inner2.att21 = true;
	inner2.att22 = true;
	inner2.att23 = true;
	inner2.att24 = true;

	ns1__innercomplexGsoap4 inner3;
	inner3.soap = soap;
	inner3.att1 = 0;
	inner3.att2 = 1;
	inner3.att3 = 2;
	inner3.att4 = 3;
	inner3.att5 = 0;
	inner3.att6 = 1;
	inner3.att7 = 2;
	inner3.att8 = 3;
	inner3.att9 = "TEST 0";
	inner3.att10 = "TEST 1";
	inner3.att11 = "TEST 2";
	inner3.att12 = "TEST 3";
	inner3.att13 = 1.5;
	inner3.att14 = 2.6;
	inner3.att15 = 3.7;
	inner3.att16 = 4.8;
	inner3.att17 = 10.0;
	inner3.att18 = 11.1;
	inner3.att19 = 12.2;
	inner3.att20 = 13.3;
	inner3.att21 = true;
	inner3.att22 = true;
	inner3.att23 = true;
	inner3.att24 = true;

	ns1__innercomplexGsoap4 inner4;
	inner4.soap = soap;
	inner4.att1 = 0;
	inner4.att2 = 1;
	inner4.att3 = 2;
	inner4.att4 = 3;
	inner4.att5 = 0;
	inner4.att6 = 1;
	inner4.att7 = 2;
	inner4.att8 = 3;
	inner4.att9 = "TEST 0";
	inner4.att10 = "TEST 1";
	inner4.att11 = "TEST 2";
	inner4.att12 = "TEST 3";
	inner4.att13 = 1.5;
	inner4.att14 = 2.6;
	inner4.att15 = 3.7;
	inner4.att16 = 4.8;
	inner4.att17 = 10.0;
	inner4.att18 = 11.1;
	inner4.att19 = 12.2;
	inner4.att20 = 13.3;
	inner4.att21 = true;
	inner4.att22 = true;
	inner4.att23 = true;
	inner4.att24 = true;

	input.att1 = 1;
	input.att2 = 1;
	input.att3 = "TEST 1";
	input.att4 = &inner1;
	input.att5 = 10.6;
	input.att6 = 2.18;
	input.att7 = false;
	input.att8 = 2;
	input.att9 = "TEST 2";
	input.att10 = &inner2;
	input.att11 = 11.7;
	input.att12 = 3.19;
	input.att13 = false;
	input.att14 = "TEST 3";
	input.att15 = &inner3;
	input.att16 = 12.8;
	input.att17 = 4.20;
	input.att18 = false;
	input.att19 = &inner4;
	input.att20 = 13.9;
	input.att21 = 5.21;
	input.att22 = false;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outercomplexGsoap4(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outercomplexGsoap4(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innercomplexGsoap5()
{
	struct soap *soap = soap_new();
	soap_init(soap);
	soap_set_omode(soap, SOAP_XML_GRAPH);
	soap_imode(soap, SOAP_XML_GRAPH);
	soap_begin(soap);

	_ns1__outercomplexGsoap5 input, output;
	input.soap = soap;

	ns1__innercomplexGsoap5 inner1;
	inner1.soap = soap;
	inner1.att1 = 0;
	inner1.att2 = 1;
	inner1.att3 = 2;
	inner1.att4 = 3;
	inner1.att5 = 4;
	inner1.att6 = 0;
	inner1.att7 = 1;
	inner1.att8 = 2;
	inner1.att9 = 3;
	inner1.att10 = 4;
	inner1.att11 = "TEST 0";
	inner1.att12 = "TEST 1";
	inner1.att13 = "TEST 2";
	inner1.att14 = "TEST 3";
	inner1.att15 = "TEST 4";
	inner1.att16 = 1.5;
	inner1.att17 = 2.6;
	inner1.att18 = 3.7;
	inner1.att19 = 4.8;
	inner1.att20 = 5.9;
	inner1.att21 = 10.0;
	inner1.att22 = 11.1;
	inner1.att23 = 12.2;
	inner1.att24 = 13.3;
	inner1.att25 = 14.4;
	inner1.att26 = true;
	inner1.att27 = true;
	inner1.att28 = true;
	inner1.att29 = true;
	inner1.att30 = true;

	ns1__innercomplexGsoap5 inner2;
	inner2.soap = soap;
	inner2.att1 = 0;
	inner2.att2 = 1;
	inner2.att3 = 2;
	inner2.att4 = 3;
	inner2.att5 = 4;
	inner2.att6 = 0;
	inner2.att7 = 1;
	inner2.att8 = 2;
	inner2.att9 = 3;
	inner2.att10 = 4;
	inner2.att11 = "TEST 0";
	inner2.att12 = "TEST 1";
	inner2.att13 = "TEST 2";
	inner2.att14 = "TEST 3";
	inner2.att15 = "TEST 4";
	inner2.att16 = 1.5;
	inner2.att17 = 2.6;
	inner2.att18 = 3.7;
	inner2.att19 = 4.8;
	inner2.att20 = 5.9;
	inner2.att21 = 10.0;
	inner2.att22 = 11.1;
	inner2.att23 = 12.2;
	inner2.att24 = 13.3;
	inner2.att25 = 14.4;
	inner2.att26 = true;
	inner2.att27 = true;
	inner2.att28 = true;
	inner2.att29 = true;
	inner2.att30 = true;

	ns1__innercomplexGsoap5 inner3;
	inner3.soap = soap;
	inner3.att1 = 0;
	inner3.att2 = 1;
	inner3.att3 = 2;
	inner3.att4 = 3;
	inner3.att5 = 4;
	inner3.att6 = 0;
	inner3.att7 = 1;
	inner3.att8 = 2;
	inner3.att9 = 3;
	inner3.att10 = 4;
	inner3.att11 = "TEST 0";
	inner3.att12 = "TEST 1";
	inner3.att13 = "TEST 2";
	inner3.att14 = "TEST 3";
	inner3.att15 = "TEST 4";
	inner3.att16 = 1.5;
	inner3.att17 = 2.6;
	inner3.att18 = 3.7;
	inner3.att19 = 4.8;
	inner3.att20 = 5.9;
	inner3.att21 = 10.0;
	inner3.att22 = 11.1;
	inner3.att23 = 12.2;
	inner3.att24 = 13.3;
	inner3.att25 = 14.4;
	inner3.att26 = true;
	inner3.att27 = true;
	inner3.att28 = true;
	inner3.att29 = true;
	inner3.att30 = true;

	ns1__innercomplexGsoap5 inner4;
	inner4.soap = soap;
	inner4.att1 = 0;
	inner4.att2 = 1;
	inner4.att3 = 2;
	inner4.att4 = 3;
	inner4.att5 = 4;
	inner4.att6 = 0;
	inner4.att7 = 1;
	inner4.att8 = 2;
	inner4.att9 = 3;
	inner4.att10 = 4;
	inner4.att11 = "TEST 0";
	inner4.att12 = "TEST 1";
	inner4.att13 = "TEST 2";
	inner4.att14 = "TEST 3";
	inner4.att15 = "TEST 4";
	inner4.att16 = 1.5;
	inner4.att17 = 2.6;
	inner4.att18 = 3.7;
	inner4.att19 = 4.8;
	inner4.att20 = 5.9;
	inner4.att21 = 10.0;
	inner4.att22 = 11.1;
	inner4.att23 = 12.2;
	inner4.att24 = 13.3;
	inner4.att25 = 14.4;
	inner4.att26 = true;
	inner4.att27 = true;
	inner4.att28 = true;
	inner4.att29 = true;
	inner4.att30 = true;

	ns1__innercomplexGsoap5 inner5;
	inner5.soap = soap;
	inner5.att1 = 0;
	inner5.att2 = 1;
	inner5.att3 = 2;
	inner5.att4 = 3;
	inner5.att5 = 4;
	inner5.att6 = 0;
	inner5.att7 = 1;
	inner5.att8 = 2;
	inner5.att9 = 3;
	inner5.att10 = 4;
	inner5.att11 = "TEST 0";
	inner5.att12 = "TEST 1";
	inner5.att13 = "TEST 2";
	inner5.att14 = "TEST 3";
	inner5.att15 = "TEST 4";
	inner5.att16 = 1.5;
	inner5.att17 = 2.6;
	inner5.att18 = 3.7;
	inner5.att19 = 4.8;
	inner5.att20 = 5.9;
	inner5.att21 = 10.0;
	inner5.att22 = 11.1;
	inner5.att23 = 12.2;
	inner5.att24 = 13.3;
	inner5.att25 = 14.4;
	inner5.att26 = true;
	inner5.att27 = true;
	inner5.att28 = true;
	inner5.att29 = true;
	inner5.att30 = true;

	input.att1 = 1;
	input.att2 = 1;
	input.att3 = "TEST 1";
	input.att4 = &inner1;
	input.att5 = 10.6;
	input.att6 = 2.18;
	input.att7 = false;
	input.att8 = 2;
	input.att9 = "TEST 2";
	input.att10 = &inner2;
	input.att11 = 11.7;
	input.att12 = 3.19;
	input.att13 = false;
	input.att14 = "TEST 3";
	input.att15 = &inner3;
	input.att16 = 12.8;
	input.att17 = 4.20;
	input.att18 = false;
	input.att19 = &inner4;
	input.att20 = 13.9;
	input.att21 = 5.21;
	input.att22 = false;
	input.att23 = 14.10;
	input.att24 = 6.22;
	input.att25 = false;

	boost::asio::streambuf streambuf;
	std::ostream *ost = new std::ostream(&streambuf);
	std::istream *ist = new std::istream(&streambuf);
	input.soap->os = ost;
	input.soap->is = ist;

	boost::timer::auto_cpu_timer t;

	for(int i=0; i < NUMBER_OF_LOOPS; ++i){
		soap_write__ns1__outercomplexGsoap5(soap, &input);

		//streambuf.pubseekpos(0);
		//ost->rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		soap_read__ns1__outercomplexGsoap5(soap, &output);
	}

	soap_destroy(soap);
	soap_end(soap);
	soap_done(soap);
}

inline void innerComplexTestGsoap()
{
	cout << "Estructura heterogénea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexGsoap1();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexGsoap2();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexGsoap3();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexGsoap4();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		innercomplexGsoap5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceGsoap()
{
	cout << "GSOAP:" << endl << endl;
	simpleTestGsoap();
	complexTestGsoap();
	innerSimpleTestGsoap();
	innerComplexTestGsoap();
	cout << "------------------------------------------------------------------------------------------" << endl;

}

}

int main()
{

	testGsoap::performanceGsoap();

	return 0;
}