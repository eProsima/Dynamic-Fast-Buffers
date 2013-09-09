#include <ostream>
#include <fstream>
#include <iostream>
#include <string>
#include <exception>

#include <boost/asio.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/timer/timer.hpp>
#include "Poco/FastInfoset/FastInfosetWriter.h"
#include "Poco/FastInfoset/Converter.h"

#define NUMBER_OF_LOOPS 1000

namespace testFI
{
	inline void prueba()
	{

		//boost::timer::auto_cpu_timer t1;

		std::ifstream ifstream("sample.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
		/*std::stringbuf fis;
		std::stringbuf xml2;*/
		
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		
		
		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
	
	
		for(int i=0; i< 1000; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			//std::stringbuf fis;
			//std::stringbuf xml2;
			

			try
			{
				//std::cout << "llega" << std::endl;

				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "sale" << std::endl;

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

				/*ixml1.seekg(0);
				ofis.seekp(0);
				ifis.seekg(0);
				oxml2.seekp(0);*/

			}
			catch(Poco::Exception &ex)
			{
				std::cout << "EXCEPTION: " << ex.displayText() << ex.what() << std::endl;
			}
		}


		//std::ifstream ifilestr2("sample.fis");
		//std::ofstream ofilestr2("sampleFinal.xml", std::ios::binary);

		
		
		/*
		Poco::FastInfoset::FastInfosetWriter writer(ostream);

		std::cout << "Writer created" << std::endl;

		writer.startDocument();
		std::cout << "Doc started" << std::endl;
		writer.startElement("", "", "greeting");
		std::cout << "Element started" << std::endl;
		writer.characters("Hello, world!");
		std::cout << "Hello world" << std::endl;
		writer.endElement("", "", "greeting");
		std::cout << "Element ended" << std::endl;
		writer.endDocument();
		std::cout << "Document ended" << std::endl;

		*/

		//std::cout << ostream;

		//std::string s;
		//std::cin >> s;
		

	}

	inline void testSimpleFastInfoset_10()
	{

		boost::timer::auto_cpu_timer t1;

		std::ifstream ifstream("sample.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}

	inline void testSimpleFastInfoset_20()
	{

		std::ifstream ifstream("simple_20.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}

	inline void testSimpleFastInfoset_30()
	{

		std::ifstream ifstream("simple_30.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}

	inline void testSimpleFastInfoset_40()
	{

		std::ifstream ifstream("simple_40.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}

	inline void testSimpleFastInfoset_50()
	{

		std::ifstream ifstream("simple_50.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
	}

	inline void testComplexFastInfoset_2()
	{

		std::ifstream ifstream("complex_2.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				//std::cout << "Strlen: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexFastInfoset_4()
	{

		std::ifstream ifstream("complex_4.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Strlen: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexFastInfoset_6()
	{

		std::ifstream ifstream("complex_6.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Strlen: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexFastInfoset_8()
	{

		std::ifstream ifstream("complex_8.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Strlen: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexFastInfoset_10()
	{

		std::ifstream ifstream("complex_10.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Strlen: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testSimpleInnerFastInfoset_2()
	{

		std::ifstream ifstream("simpleInner_2.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testSimpleInnerFastInfoset_4()
	{

		std::ifstream ifstream("simpleInner_4.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testSimpleInnerFastInfoset_6()
	{

		std::ifstream ifstream("simpleInner_6.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}
	
	inline void testSimpleInnerFastInfoset_8()
	{

		std::ifstream ifstream("simpleInner_8.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testSimpleInnerFastInfoset_10()
	{

		std::ifstream ifstream("simpleInner_10.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.in_avail() << std::endl;
				//std::cout << "Data: \n" << fis.str() << std::endl;
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexInnerFastInfoset_1()
	{

		std::ifstream ifstream("complexInner_1.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 
				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexInnerFastInfoset_2()
	{

		std::ifstream ifstream("complexInner_2.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 
				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexInnerFastInfoset_3()
	{

		std::ifstream ifstream("complexInner_3.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 
				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexInnerFastInfoset_4()
	{

		std::ifstream ifstream("complexInner_4.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 
				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

	inline void testComplexInnerFastInfoset_5()
	{

		std::ifstream ifstream("complexInner_5.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("sample.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("sample.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("sampleFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< NUMBER_OF_LOOPS; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);
				std::cout << "Strlen: " << fis.str().size() << std::endl;
				break; 
				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
				int i = 0;
			}
		}
	}

}

inline void testSesar()
{
	boost::timer::auto_cpu_timer t1;

		std::ifstream ifstream("TrajectoryClusterPayload.xml", std::ios::in | std::ios::binary);
		std::ofstream ofstream("TrajectoryClusterPayload.fis", std::ios::out | std::ios::binary);
		std::ifstream ifstream2("TrajectoryClusterPayload.fis", std::ios::in | std::ios::binary);
		std::ofstream ofstream2("TrajectoryClusterPayloadFinal.xml", std::ios::out | std::ios::binary);
		std::stringbuf xml1;
		std::stringbuf fis;
		std::stringbuf xml2;
			
		std::ostream ostxml1(&xml1);
		std::ostream ofis(&fis);
		std::istream ifis(&fis);
		std::ostream oxml2(&xml2);

		ostxml1 << ifstream.rdbuf();

		std::istream ixml1(&xml1);
		
		boost::timer::auto_cpu_timer t2;
		
		for(int i=0; i< 1000; ++i){
			xml1.pubseekpos(0);
			ixml1.rdbuf(&xml1);
			fis.pubseekpos(0);
			ofis.rdbuf(&fis);
			ifis.rdbuf(&fis);
			xml2.pubseekpos(0);
			oxml2.rdbuf(&xml2);

			try
			{
				Poco::FastInfoset::Converter::convertToFIS(ixml1, ofis);

				//std::cout << "Str: " << fis.str().size() << std::endl;
				//break; 

				Poco::FastInfoset::Converter::convertToXML(ifis, oxml2);

			}
			catch(Poco::Exception &ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
}

int main()
{
	testSesar();

	/*for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleFastInfoset_10();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleFastInfoset_20();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleFastInfoset_30();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleFastInfoset_40();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleFastInfoset_50();
	}*/

	/*for(int i=0; i < 5; ++i)
	{
		testFI::testComplexFastInfoset_2();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexFastInfoset_4();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexFastInfoset_6();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexFastInfoset_8();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexFastInfoset_10();
	}*/

	//testFI::testSimpleFastInfoset_10();
	//testFI::prueba();
	//testFI::testComplexFastInfoset_2();

	/*for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleInnerFastInfoset_2();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleInnerFastInfoset_4();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleInnerFastInfoset_6();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleInnerFastInfoset_8();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testSimpleInnerFastInfoset_10();
	}*/

	/*for(int i=0; i < 5; ++i)
	{
		testFI::testComplexInnerFastInfoset_1();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexInnerFastInfoset_2();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexInnerFastInfoset_3();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexInnerFastInfoset_4();
	}
	std::cout << "---------------" << std::endl;
	for(int i=0; i < 5; ++i)
	{
		testFI::testComplexInnerFastInfoset_5();
	}*/

	return 0;
}