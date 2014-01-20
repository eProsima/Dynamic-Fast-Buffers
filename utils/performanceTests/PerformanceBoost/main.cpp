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

#define NUMBER_OF_LOOPS 100

using namespace std;

namespace testBoost
{

class simpleBoost_Class10
{
public:

	simpleBoost_Class10(){}

	void setAtt1(int64_t att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int64_t att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int64_t att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int64_t att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int64_t att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int64_t att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int64_t att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int64_t att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int64_t att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int64_t att10_)
	{
		att10 = att10_;
	}

private:
	int64_t att1;
	int64_t att2;
	int64_t att3;
	int64_t att4;
	int64_t att5;
	int64_t att6;
	int64_t att7;
	int64_t att8;
	int64_t att9;
	int64_t att10;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);

		//cout << "AR: " << sizeof(ar) << endl;

	}
};

void save_simpleBoost_Class10(const simpleBoost_Class10 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("simpleBoost_Class", cl);
};

simpleBoost_Class10 load_simpleBoost_Class10(std::istream &istream)
{
	simpleBoost_Class10 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("simpleBoost_Class10", obj);
	return obj;
};

inline void testsimpleBoost_10()
{
	boost::timer::auto_cpu_timer t;

	simpleBoost_Class10 *input = new simpleBoost_Class10(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_simpleBoost_Class10((const simpleBoost_Class10) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_simpleBoost_Class10(istream);
	}
}


class simpleBoost_Class20
{
public:

	simpleBoost_Class20(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

	void setAtt11(int att11_)
	{
		att11 = att11_;
	}

	void setAtt12(int att12_)
	{
		att12 = att12_;
	}

	void setAtt13(int att13_)
	{
		att13 = att13_;
	}

	void setAtt14(int att14_)
	{
		att14 = att14_;
	}

	void setAtt15(int att15_)
	{
		att15 = att15_;
	}

	void setAtt16(int att16_)
	{
		att16 = att16_;
	}

	void setAtt17(int att17_)
	{
		att17 = att17_;
	}

	void setAtt18(int att18_)
	{
		att18 = att18_;
	}

	void setAtt19(int att19_)
	{
		att19 = att19_;
	}

	void setAtt20(int att20_)
	{
		att20 = att20_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;
	int att11;
	int att12;
	int att13;
	int att14;
	int att15;
	int att16;
	int att17;
	int att18;
	int att19;
	int att20;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		
	}
};

void save_simpleBoost_Class20(const simpleBoost_Class20 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("simpleBoost_Class", cl);
};

simpleBoost_Class20 load_simpleBoost_Class20(std::istream &istream)
{
	simpleBoost_Class20 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("simpleBoost_Class20", obj);
	return obj;
};

inline void testsimpleBoost_20()
{
	boost::timer::auto_cpu_timer t;

	simpleBoost_Class20 *input = new simpleBoost_Class20(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);
	input->setAtt11(11);
	input->setAtt12(12);
	input->setAtt13(13);
	input->setAtt14(14);
	input->setAtt15(15);
	input->setAtt16(16);
	input->setAtt17(17);
	input->setAtt18(18);
	input->setAtt19(19);
	input->setAtt20(20);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_simpleBoost_Class20((const simpleBoost_Class20) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		
		output = load_simpleBoost_Class20(istream);
	}
}


class simpleBoost_Class30
{
public:

	simpleBoost_Class30(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

	void setAtt11(int att11_)
	{
		att11 = att11_;
	}

	void setAtt12(int att12_)
	{
		att12 = att12_;
	}

	void setAtt13(int att13_)
	{
		att13 = att13_;
	}

	void setAtt14(int att14_)
	{
		att14 = att14_;
	}

	void setAtt15(int att15_)
	{
		att15 = att15_;
	}

	void setAtt16(int att16_)
	{
		att16 = att16_;
	}

	void setAtt17(int att17_)
	{
		att17 = att17_;
	}

	void setAtt18(int att18_)
	{
		att18 = att18_;
	}

	void setAtt19(int att19_)
	{
		att19 = att19_;
	}

	void setAtt20(int att20_)
	{
		att20 = att20_;
	}

	void setAtt21(int att21_)
	{
		att21 = att21_;
	}

	void setAtt22(int att22_)
	{
		att22 = att22_;
	}

	void setAtt23(int att23_)
	{
		att23 = att23_;
	}

	void setAtt24(int att24_)
	{
		att24 = att24_;
	}

	void setAtt25(int att25_)
	{
		att25 = att25_;
	}

	void setAtt26(int att26_)
	{
		att26 = att26_;
	}

	void setAtt27(int att27_)
	{
		att27 = att27_;
	}

	void setAtt28(int att28_)
	{
		att28 = att28_;
	}

	void setAtt29(int att29_)
	{
		att29 = att29_;
	}

	void setAtt30(int att30_)
	{
		att30 = att30_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;
	int att11;
	int att12;
	int att13;
	int att14;
	int att15;
	int att16;
	int att17;
	int att18;
	int att19;
	int att20;
	int att21;
	int att22;
	int att23;
	int att24;
	int att25;
	int att26;
	int att27;
	int att28;
	int att29;
	int att30;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
	}
};

void save_simpleBoost_Class30(const simpleBoost_Class30 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("simpleBoost_Class", cl);
};

simpleBoost_Class30 load_simpleBoost_Class30(std::istream &istream)
{
	simpleBoost_Class30 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("simpleBoost_Class30", obj);
	return obj;
};

inline void testsimpleBoost_30()
{
	boost::timer::auto_cpu_timer t;

	simpleBoost_Class30 *input = new simpleBoost_Class30(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);
	input->setAtt11(11);
	input->setAtt12(12);
	input->setAtt13(13);
	input->setAtt14(14);
	input->setAtt15(15);
	input->setAtt16(16);
	input->setAtt17(17);
	input->setAtt18(18);
	input->setAtt19(19);
	input->setAtt20(20);
	input->setAtt21(21);
	input->setAtt22(22);
	input->setAtt23(23);
	input->setAtt24(24);
	input->setAtt25(25);
	input->setAtt26(26);
	input->setAtt27(27);
	input->setAtt28(28);
	input->setAtt29(29);
	input->setAtt30(30);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_simpleBoost_Class30((const simpleBoost_Class30) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_simpleBoost_Class30(istream);
	}
}


class simpleBoost_Class40
{
public:

	simpleBoost_Class40(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

	void setAtt11(int att11_)
	{
		att11 = att11_;
	}

	void setAtt12(int att12_)
	{
		att12 = att12_;
	}

	void setAtt13(int att13_)
	{
		att13 = att13_;
	}

	void setAtt14(int att14_)
	{
		att14 = att14_;
	}

	void setAtt15(int att15_)
	{
		att15 = att15_;
	}

	void setAtt16(int att16_)
	{
		att16 = att16_;
	}

	void setAtt17(int att17_)
	{
		att17 = att17_;
	}

	void setAtt18(int att18_)
	{
		att18 = att18_;
	}

	void setAtt19(int att19_)
	{
		att19 = att19_;
	}

	void setAtt20(int att20_)
	{
		att20 = att20_;
	}

	void setAtt21(int att21_)
	{
		att21 = att21_;
	}

	void setAtt22(int att22_)
	{
		att22 = att22_;
	}

	void setAtt23(int att23_)
	{
		att23 = att23_;
	}

	void setAtt24(int att24_)
	{
		att24 = att24_;
	}

	void setAtt25(int att25_)
	{
		att25 = att25_;
	}

	void setAtt26(int att26_)
	{
		att26 = att26_;
	}

	void setAtt27(int att27_)
	{
		att27 = att27_;
	}

	void setAtt28(int att28_)
	{
		att28 = att28_;
	}

	void setAtt29(int att29_)
	{
		att29 = att29_;
	}

	void setAtt30(int att30_)
	{
		att30 = att30_;
	}

	void setAtt31(int att31_)
	{
		att31 = att31_;
	}

	void setAtt32(int att32_)
	{
		att32 = att32_;
	}

	void setAtt33(int att33_)
	{
		att33 = att33_;
	}

	void setAtt34(int att34_)
	{
		att34 = att34_;
	}

	void setAtt35(int att35_)
	{
		att35 = att35_;
	}

	void setAtt36(int att36_)
	{
		att36 = att36_;
	}

	void setAtt37(int att37_)
	{
		att37 = att37_;
	}

	void setAtt38(int att38_)
	{
		att38 = att38_;
	}

	void setAtt39(int att39_)
	{
		att39 = att39_;
	}

	void setAtt40(int att40_)
	{
		att40 = att40_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;
	int att11;
	int att12;
	int att13;
	int att14;
	int att15;
	int att16;
	int att17;
	int att18;
	int att19;
	int att20;
	int att21;
	int att22;
	int att23;
	int att24;
	int att25;
	int att26;
	int att27;
	int att28;
	int att29;
	int att30;
	int att31;
	int att32;
	int att33;
	int att34;
	int att35;
	int att36;
	int att37;
	int att38;
	int att39;
	int att40;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
		ar & make_nvp("att31", att31);
		ar & make_nvp("att32", att32);
		ar & make_nvp("att33", att33);
		ar & make_nvp("att34", att34);
		ar & make_nvp("att35", att35);
		ar & make_nvp("att36", att36);
		ar & make_nvp("att37", att37);
		ar & make_nvp("att38", att38);
		ar & make_nvp("att39", att39);
		ar & make_nvp("att40", att40);
	}
};

void save_simpleBoost_Class40(const simpleBoost_Class40 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("simpleBoost_Class", cl);
};

simpleBoost_Class40 load_simpleBoost_Class40(std::istream &istream)
{
	simpleBoost_Class40 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("simpleBoost_Class40", obj);
	return obj;
};

inline void testsimpleBoost_40()
{
	boost::timer::auto_cpu_timer t;

	simpleBoost_Class40 *input = new simpleBoost_Class40(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);
	input->setAtt11(11);
	input->setAtt12(12);
	input->setAtt13(13);
	input->setAtt14(14);
	input->setAtt15(15);
	input->setAtt16(16);
	input->setAtt17(17);
	input->setAtt18(18);
	input->setAtt19(19);
	input->setAtt20(20);
	input->setAtt21(21);
	input->setAtt22(22);
	input->setAtt23(23);
	input->setAtt24(24);
	input->setAtt25(25);
	input->setAtt26(26);
	input->setAtt27(27);
	input->setAtt28(28);
	input->setAtt29(29);
	input->setAtt30(30);
	input->setAtt31(31);
	input->setAtt32(32);
	input->setAtt33(33);
	input->setAtt34(34);
	input->setAtt35(35);
	input->setAtt36(36);
	input->setAtt37(37);
	input->setAtt38(38);
	input->setAtt39(39);
	input->setAtt40(40);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_simpleBoost_Class40((const simpleBoost_Class40) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_simpleBoost_Class40(istream);
	}
}


class simpleBoost_Class50
{
public:

	simpleBoost_Class50(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

	void setAtt11(int att11_)
	{
		att11 = att11_;
	}

	void setAtt12(int att12_)
	{
		att12 = att12_;
	}

	void setAtt13(int att13_)
	{
		att13 = att13_;
	}

	void setAtt14(int att14_)
	{
		att14 = att14_;
	}

	void setAtt15(int att15_)
	{
		att15 = att15_;
	}

	void setAtt16(int att16_)
	{
		att16 = att16_;
	}

	void setAtt17(int att17_)
	{
		att17 = att17_;
	}

	void setAtt18(int att18_)
	{
		att18 = att18_;
	}

	void setAtt19(int att19_)
	{
		att19 = att19_;
	}

	void setAtt20(int att20_)
	{
		att20 = att20_;
	}

	void setAtt21(int att21_)
	{
		att21 = att21_;
	}

	void setAtt22(int att22_)
	{
		att22 = att22_;
	}

	void setAtt23(int att23_)
	{
		att23 = att23_;
	}

	void setAtt24(int att24_)
	{
		att24 = att24_;
	}

	void setAtt25(int att25_)
	{
		att25 = att25_;
	}

	void setAtt26(int att26_)
	{
		att26 = att26_;
	}

	void setAtt27(int att27_)
	{
		att27 = att27_;
	}

	void setAtt28(int att28_)
	{
		att28 = att28_;
	}

	void setAtt29(int att29_)
	{
		att29 = att29_;
	}

	void setAtt30(int att30_)
	{
		att30 = att30_;
	}

	void setAtt31(int att31_)
	{
		att31 = att31_;
	}

	void setAtt32(int att32_)
	{
		att32 = att32_;
	}

	void setAtt33(int att33_)
	{
		att33 = att33_;
	}

	void setAtt34(int att34_)
	{
		att34 = att34_;
	}

	void setAtt35(int att35_)
	{
		att35 = att35_;
	}

	void setAtt36(int att36_)
	{
		att36 = att36_;
	}

	void setAtt37(int att37_)
	{
		att37 = att37_;
	}

	void setAtt38(int att38_)
	{
		att38 = att38_;
	}

	void setAtt39(int att39_)
	{
		att39 = att39_;
	}

	void setAtt40(int att40_)
	{
		att40 = att40_;
	}

	void setAtt41(int att41_)
	{
		att41 = att41_;
	}

	void setAtt42(int att42_)
	{
		att42 = att42_;
	}

	void setAtt43(int att43_)
	{
		att43 = att43_;
	}

	void setAtt44(int att44_)
	{
		att44 = att44_;
	}

	void setAtt45(int att45_)
	{
		att45 = att45_;
	}

	void setAtt46(int att46_)
	{
		att46 = att46_;
	}

	void setAtt47(int att47_)
	{
		att47 = att47_;
	}

	void setAtt48(int att48_)
	{
		att48 = att48_;
	}

	void setAtt49(int att49_)
	{
		att49 = att49_;
	}

	void setAtt50(int att50_)
	{
		att50 = att50_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;
	int att11;
	int att12;
	int att13;
	int att14;
	int att15;
	int att16;
	int att17;
	int att18;
	int att19;
	int att20;
	int att21;
	int att22;
	int att23;
	int att24;
	int att25;
	int att26;
	int att27;
	int att28;
	int att29;
	int att30;
	int att31;
	int att32;
	int att33;
	int att34;
	int att35;
	int att36;
	int att37;
	int att38;
	int att39;
	int att40;
	int att41;
	int att42;
	int att43;
	int att44;
	int att45;
	int att46;
	int att47;
	int att48;
	int att49;
	int att50;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
		ar & make_nvp("att31", att31);
		ar & make_nvp("att32", att32);
		ar & make_nvp("att33", att33);
		ar & make_nvp("att34", att34);
		ar & make_nvp("att35", att35);
		ar & make_nvp("att36", att36);
		ar & make_nvp("att37", att37);
		ar & make_nvp("att38", att38);
		ar & make_nvp("att39", att39);
		ar & make_nvp("att40", att40);
		ar & make_nvp("att41", att41);
		ar & make_nvp("att42", att42);
		ar & make_nvp("att43", att43);
		ar & make_nvp("att44", att44);
		ar & make_nvp("att45", att45);
		ar & make_nvp("att46", att46);
		ar & make_nvp("att47", att47);
		ar & make_nvp("att48", att48);
		ar & make_nvp("att49", att49);
		ar & make_nvp("att50", att50);
	}
};

void save_simpleBoost_Class50(const simpleBoost_Class50 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("simpleBoost_Class", cl);
};

simpleBoost_Class50 load_simpleBoost_Class50(std::istream &istream)
{
	simpleBoost_Class50 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("simpleBoost_Class50", obj);
	return obj;
};

inline void testsimpleBoost_50()
{
	boost::timer::auto_cpu_timer t;

	simpleBoost_Class50 *input = new simpleBoost_Class50(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);
	input->setAtt11(11);
	input->setAtt12(12);
	input->setAtt13(13);
	input->setAtt14(14);
	input->setAtt15(15);
	input->setAtt16(16);
	input->setAtt17(17);
	input->setAtt18(18);
	input->setAtt19(19);
	input->setAtt20(20);
	input->setAtt21(21);
	input->setAtt22(22);
	input->setAtt23(23);
	input->setAtt24(24);
	input->setAtt25(25);
	input->setAtt26(26);
	input->setAtt27(27);
	input->setAtt28(28);
	input->setAtt29(29);
	input->setAtt30(30);
	input->setAtt31(31);
	input->setAtt32(32);
	input->setAtt33(33);
	input->setAtt34(34);
	input->setAtt35(35);
	input->setAtt36(36);
	input->setAtt37(37);
	input->setAtt38(38);
	input->setAtt39(39);
	input->setAtt40(40);
	input->setAtt41(41);
	input->setAtt42(42);
	input->setAtt43(43);
	input->setAtt44(44);
	input->setAtt45(45);
	input->setAtt46(46);
	input->setAtt47(47);
	input->setAtt48(48);
	input->setAtt49(49);
	input->setAtt50(50);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_simpleBoost_Class50((const simpleBoost_Class50) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_simpleBoost_Class50(istream);
	}
}

inline void simpleTestBoost()
{
	cout << "10 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testsimpleBoost_10();
	}
	cout << endl << endl;

	cout << "20 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testsimpleBoost_20();
	}
	cout << endl << endl;

	cout << "30 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testsimpleBoost_30();
	}
	cout << endl << endl;

	cout << "40 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testsimpleBoost_40();
	}
	cout << endl << endl;

	cout << "50 Enteros:" << endl;
	for(int i = 0; i < 5; ++i){
		testsimpleBoost_50();
	}

	cout << "---------------------------------------------------------------------------------------------" << endl;
}


class complexBoost_Class2
{
public:

	complexBoost_Class2(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(long att3_)
	{
		att3 = att3_;
	}

	void setAtt4(long att4_)
	{
		att4 = att4_;
	}

	void setAtt5(std::string att5_)
	{
		att5 = att5_;
	}

	void setAtt6(std::string att6_)
	{
		att6 = att6_;
	}

	void setAtt7(float att7_)
	{
		att7 = att7_;
	}

	void setAtt8(float att8_)
	{
		att8 = att8_;
	}

	void setAtt9(double att9_)
	{
		att9 = att9_;
	}

	void setAtt10(double att10_)
	{
		att10 = att10_;
	}

	void setAtt11(bool att11_)
	{
		att11 = att11_;
	}

	void setAtt12(bool att12_)
	{
		att12 = att12_;
	}

private:
	int att1;
	int att2;
	long att3;
	long att4;
	std::string att5;
	std::string att6;
	float att7;
	float att8;
	double att9;
	double att10;
	bool att11;
	bool att12;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
	}
};

void save_complexBoost_Class2(const complexBoost_Class2 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("complexBoost_Class", cl);
};

complexBoost_Class2 load_complexBoost_Class2(std::istream &istream)
{
	complexBoost_Class2 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("complexBoost_Class2", obj);
	return obj;
};

inline void testcomplexBoost_2()
{
	boost::timer::auto_cpu_timer t;

	complexBoost_Class2 *input = new complexBoost_Class2(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(1);
	input->setAtt4(2);
	input->setAtt5("1");
	input->setAtt6("2");
	input->setAtt7(3.2);
	input->setAtt8(4.3);
	input->setAtt9(8.6);
	input->setAtt10(9.7);
	input->setAtt11(true);
	input->setAtt12(true);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_complexBoost_Class2((const complexBoost_Class2) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_complexBoost_Class2(istream);
	}
}


class complexBoost_Class4
{
public:

	complexBoost_Class4(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(long att5_)
	{
		att5 = att5_;
	}

	void setAtt6(long att6_)
	{
		att6 = att6_;
	}

	void setAtt7(long att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(std::string att10_)
	{
		att10 = att10_;
	}

	void setAtt11(std::string att11_)
	{
		att11 = att11_;
	}

	void setAtt12(std::string att12_)
	{
		att12 = att12_;
	}

	void setAtt13(float att13_)
	{
		att13 = att13_;
	}

	void setAtt14(float att14_)
	{
		att14 = att14_;
	}

	void setAtt15(float att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(double att17_)
	{
		att17 = att17_;
	}

	void setAtt18(double att18_)
	{
		att18 = att18_;
	}

	void setAtt19(double att19_)
	{
		att19 = att19_;
	}

	void setAtt20(double att20_)
	{
		att20 = att20_;
	}

	void setAtt21(bool att21_)
	{
		att21 = att21_;
	}

	void setAtt22(bool att22_)
	{
		att22 = att22_;
	}

	void setAtt23(bool att23_)
	{
		att23 = att23_;
	}

	void setAtt24(bool att24_)
	{
		att24 = att24_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	long att5;
	long att6;
	long att7;
	long att8;
	std::string att9;
	std::string att10;
	std::string att11;
	std::string att12;
	float att13;
	float att14;
	float att15;
	float att16;
	double att17;
	double att18;
	double att19;
	double att20;
	bool att21;
	bool att22;
	bool att23;
	bool att24;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
	}
};

void save_complexBoost_Class4(const complexBoost_Class4 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("complexBoost_Class", cl);
};

complexBoost_Class4 load_complexBoost_Class4(std::istream &istream)
{
	complexBoost_Class4 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("complexBoost_Class4", obj);
	return obj;
};

inline void testcomplexBoost_4()
{
	boost::timer::auto_cpu_timer t;

	complexBoost_Class4 *input = new complexBoost_Class4(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(1);
	input->setAtt6(2);
	input->setAtt7(3);
	input->setAtt8(4);
	input->setAtt9("1");
	input->setAtt10("2");
	input->setAtt11("3");
	input->setAtt12("4");
	input->setAtt13(3.2);
	input->setAtt14(4.3);
	input->setAtt15(5.4);
	input->setAtt16(6.5);
	input->setAtt17(8.6);
	input->setAtt18(9.7);
	input->setAtt19(10.8);
	input->setAtt20(11.9);
	input->setAtt21(true);
	input->setAtt22(true);
	input->setAtt23(true);
	input->setAtt24(true);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_complexBoost_Class4((const complexBoost_Class4) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_complexBoost_Class4(istream);
	}
}


class complexBoost_Class6
{
public:

	complexBoost_Class6(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(long att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(long att9_)
	{
		att9 = att9_;
	}

	void setAtt10(long att10_)
	{
		att10 = att10_;
	}

	void setAtt11(long att11_)
	{
		att11 = att11_;
	}

	void setAtt12(long att12_)
	{
		att12 = att12_;
	}

	void setAtt13(std::string att13_)
	{
		att13 = att13_;
	}

	void setAtt14(std::string att14_)
	{
		att14 = att14_;
	}

	void setAtt15(std::string att15_)
	{
		att15 = att15_;
	}

	void setAtt16(std::string att16_)
	{
		att16 = att16_;
	}

	void setAtt17(std::string att17_)
	{
		att17 = att17_;
	}

	void setAtt18(std::string att18_)
	{
		att18 = att18_;
	}

	void setAtt19(float att19_)
	{
		att19 = att19_;
	}

	void setAtt20(float att20_)
	{
		att20 = att20_;
	}

	void setAtt21(float att21_)
	{
		att21 = att21_;
	}

	void setAtt22(float att22_)
	{
		att22 = att22_;
	}

	void setAtt23(float att23_)
	{
		att23 = att23_;
	}

	void setAtt24(float att24_)
	{
		att24 = att24_;
	}

	void setAtt25(double att25_)
	{
		att25 = att25_;
	}

	void setAtt26(double att26_)
	{
		att26 = att26_;
	}

	void setAtt27(double att27_)
	{
		att27 = att27_;
	}

	void setAtt28(double att28_)
	{
		att28 = att28_;
	}

	void setAtt29(double att29_)
	{
		att29 = att29_;
	}

	void setAtt30(double att30_)
	{
		att30 = att30_;
	}

	void setAtt31(bool att31_)
	{
		att31 = att31_;
	}

	void setAtt32(bool att32_)
	{
		att32 = att32_;
	}

	void setAtt33(bool att33_)
	{
		att33 = att33_;
	}

	void setAtt34(bool att34_)
	{
		att34 = att34_;
	}

	void setAtt35(bool att35_)
	{
		att35 = att35_;
	}

	void setAtt36(bool att36_)
	{
		att36 = att36_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	long att7;
	long att8;
	long att9;
	long att10;
	long att11;
	long att12;
	std::string att13;
	std::string att14;
	std::string att15;
	std::string att16;
	std::string att17;
	std::string att18;
	float att19;
	float att20;
	float att21;
	float att22;
	float att23;
	float att24;
	double att25;
	double att26;
	double att27;
	double att28;
	double att29;
	double att30;
	bool att31;
	bool att32;
	bool att33;
	bool att34;
	bool att35;
	bool att36;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
		ar & make_nvp("att31", att31);
		ar & make_nvp("att32", att32);
		ar & make_nvp("att33", att33);
		ar & make_nvp("att34", att34);
		ar & make_nvp("att35", att35);
		ar & make_nvp("att36", att36);
	}
};

void save_complexBoost_Class6(const complexBoost_Class6 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("complexBoost_Class", cl);
};

complexBoost_Class6 load_complexBoost_Class6(std::istream &istream)
{
	complexBoost_Class6 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("complexBoost_Class6", obj);
	return obj;
};

inline void testcomplexBoost_6()
{
	boost::timer::auto_cpu_timer t;

	complexBoost_Class6 *input = new complexBoost_Class6(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(1);
	input->setAtt8(2);
	input->setAtt9(3);
	input->setAtt10(4);
	input->setAtt11(5);
	input->setAtt12(6);
	input->setAtt13("1");
	input->setAtt14("2");
	input->setAtt15("3");
	input->setAtt16("4");
	input->setAtt17("5");
	input->setAtt18("6");
	input->setAtt19(3.2);
	input->setAtt20(4.3);
	input->setAtt21(5.4);
	input->setAtt22(6.5);
	input->setAtt23(7.6);
	input->setAtt24(8.7);
	input->setAtt25(8.6);
	input->setAtt26(9.7);
	input->setAtt27(10.8);
	input->setAtt28(11.9);
	input->setAtt29(12.10);
	input->setAtt30(13.11);
	input->setAtt31(true);
	input->setAtt32(true);
	input->setAtt33(true);
	input->setAtt34(true);
	input->setAtt35(true);
	input->setAtt36(true);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_complexBoost_Class6((const complexBoost_Class6) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_complexBoost_Class6(istream);
	}
}


class complexBoost_Class8
{
public:

	complexBoost_Class8(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(long att9_)
	{
		att9 = att9_;
	}

	void setAtt10(long att10_)
	{
		att10 = att10_;
	}

	void setAtt11(long att11_)
	{
		att11 = att11_;
	}

	void setAtt12(long att12_)
	{
		att12 = att12_;
	}

	void setAtt13(long att13_)
	{
		att13 = att13_;
	}

	void setAtt14(long att14_)
	{
		att14 = att14_;
	}

	void setAtt15(long att15_)
	{
		att15 = att15_;
	}

	void setAtt16(long att16_)
	{
		att16 = att16_;
	}

	void setAtt17(std::string att17_)
	{
		att17 = att17_;
	}

	void setAtt18(std::string att18_)
	{
		att18 = att18_;
	}

	void setAtt19(std::string att19_)
	{
		att19 = att19_;
	}

	void setAtt20(std::string att20_)
	{
		att20 = att20_;
	}

	void setAtt21(std::string att21_)
	{
		att21 = att21_;
	}

	void setAtt22(std::string att22_)
	{
		att22 = att22_;
	}

	void setAtt23(std::string att23_)
	{
		att23 = att23_;
	}

	void setAtt24(std::string att24_)
	{
		att24 = att24_;
	}

	void setAtt25(float att25_)
	{
		att25 = att25_;
	}

	void setAtt26(float att26_)
	{
		att26 = att26_;
	}

	void setAtt27(float att27_)
	{
		att27 = att27_;
	}

	void setAtt28(float att28_)
	{
		att28 = att28_;
	}

	void setAtt29(float att29_)
	{
		att29 = att29_;
	}

	void setAtt30(float att30_)
	{
		att30 = att30_;
	}

	void setAtt31(float att31_)
	{
		att31 = att31_;
	}

	void setAtt32(float att32_)
	{
		att32 = att32_;
	}

	void setAtt33(double att33_)
	{
		att33 = att33_;
	}

	void setAtt34(double att34_)
	{
		att34 = att34_;
	}

	void setAtt35(double att35_)
	{
		att35 = att35_;
	}

	void setAtt36(double att36_)
	{
		att36 = att36_;
	}

	void setAtt37(double att37_)
	{
		att37 = att37_;
	}

	void setAtt38(double att38_)
	{
		att38 = att38_;
	}

	void setAtt39(double att39_)
	{
		att39 = att39_;
	}

	void setAtt40(double att40_)
	{
		att40 = att40_;
	}

	void setAtt41(bool att41_)
	{
		att41 = att41_;
	}

	void setAtt42(bool att42_)
	{
		att42 = att42_;
	}

	void setAtt43(bool att43_)
	{
		att43 = att43_;
	}

	void setAtt44(bool att44_)
	{
		att44 = att44_;
	}

	void setAtt45(bool att45_)
	{
		att45 = att45_;
	}

	void setAtt46(bool att46_)
	{
		att46 = att46_;
	}

	void setAtt47(bool att47_)
	{
		att47 = att47_;
	}

	void setAtt48(bool att48_)
	{
		att48 = att48_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	long att9;
	long att10;
	long att11;
	long att12;
	long att13;
	long att14;
	long att15;
	long att16;
	std::string att17;
	std::string att18;
	std::string att19;
	std::string att20;
	std::string att21;
	std::string att22;
	std::string att23;
	std::string att24;
	float att25;
	float att26;
	float att27;
	float att28;
	float att29;
	float att30;
	float att31;
	float att32;
	double att33;
	double att34;
	double att35;
	double att36;
	double att37;
	double att38;
	double att39;
	double att40;
	bool att41;
	bool att42;
	bool att43;
	bool att44;
	bool att45;
	bool att46;
	bool att47;
	bool att48;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
		ar & make_nvp("att31", att31);
		ar & make_nvp("att32", att32);
		ar & make_nvp("att33", att33);
		ar & make_nvp("att34", att34);
		ar & make_nvp("att35", att35);
		ar & make_nvp("att36", att36);
		ar & make_nvp("att37", att37);
		ar & make_nvp("att38", att38);
		ar & make_nvp("att39", att39);
		ar & make_nvp("att40", att40);
		ar & make_nvp("att41", att41);
		ar & make_nvp("att42", att42);
		ar & make_nvp("att43", att43);
		ar & make_nvp("att44", att44);
		ar & make_nvp("att45", att45);
		ar & make_nvp("att46", att46);
		ar & make_nvp("att47", att47);
		ar & make_nvp("att48", att48);
	}
};

void save_complexBoost_Class8(const complexBoost_Class8 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("complexBoost_Class", cl);
};

complexBoost_Class8 load_complexBoost_Class8(std::istream &istream)
{
	complexBoost_Class8 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("complexBoost_Class8", obj);
	return obj;
};

inline void testcomplexBoost_8()
{
	boost::timer::auto_cpu_timer t;

	complexBoost_Class8 *input = new complexBoost_Class8(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(1);
	input->setAtt10(2);
	input->setAtt11(3);
	input->setAtt12(4);
	input->setAtt13(5);
	input->setAtt14(6);
	input->setAtt15(7);
	input->setAtt16(8);
	input->setAtt17("1");
	input->setAtt18("2");
	input->setAtt19("3");
	input->setAtt20("4");
	input->setAtt21("5");
	input->setAtt22("6");
	input->setAtt23("7");
	input->setAtt24("8");
	input->setAtt25(3.2);
	input->setAtt26(4.3);
	input->setAtt27(5.4);
	input->setAtt28(6.5);
	input->setAtt29(7.6);
	input->setAtt30(8.7);
	input->setAtt31(9.8);
	input->setAtt32(10.9);
	input->setAtt33(8.6);
	input->setAtt34(9.7);
	input->setAtt35(10.8);
	input->setAtt36(11.9);
	input->setAtt37(12.10);
	input->setAtt38(13.11);
	input->setAtt39(14.12);
	input->setAtt40(15.13);
	input->setAtt41(true);
	input->setAtt42(true);
	input->setAtt43(true);
	input->setAtt44(true);
	input->setAtt45(true);
	input->setAtt46(true);
	input->setAtt47(true);
	input->setAtt48(true);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_complexBoost_Class8((const complexBoost_Class8) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_complexBoost_Class8(istream);
	}
}


class complexBoost_Class10
{
public:

	complexBoost_Class10(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

	void setAtt11(long att11_)
	{
		att11 = att11_;
	}

	void setAtt12(long att12_)
	{
		att12 = att12_;
	}

	void setAtt13(long att13_)
	{
		att13 = att13_;
	}

	void setAtt14(long att14_)
	{
		att14 = att14_;
	}

	void setAtt15(long att15_)
	{
		att15 = att15_;
	}

	void setAtt16(long att16_)
	{
		att16 = att16_;
	}

	void setAtt17(long att17_)
	{
		att17 = att17_;
	}

	void setAtt18(long att18_)
	{
		att18 = att18_;
	}

	void setAtt19(long att19_)
	{
		att19 = att19_;
	}

	void setAtt20(long att20_)
	{
		att20 = att20_;
	}

	void setAtt21(std::string att21_)
	{
		att21 = att21_;
	}

	void setAtt22(std::string att22_)
	{
		att22 = att22_;
	}

	void setAtt23(std::string att23_)
	{
		att23 = att23_;
	}

	void setAtt24(std::string att24_)
	{
		att24 = att24_;
	}

	void setAtt25(std::string att25_)
	{
		att25 = att25_;
	}

	void setAtt26(std::string att26_)
	{
		att26 = att26_;
	}

	void setAtt27(std::string att27_)
	{
		att27 = att27_;
	}

	void setAtt28(std::string att28_)
	{
		att28 = att28_;
	}

	void setAtt29(std::string att29_)
	{
		att29 = att29_;
	}

	void setAtt30(std::string att30_)
	{
		att30 = att30_;
	}

	void setAtt31(float att31_)
	{
		att31 = att31_;
	}

	void setAtt32(float att32_)
	{
		att32 = att32_;
	}

	void setAtt33(float att33_)
	{
		att33 = att33_;
	}

	void setAtt34(float att34_)
	{
		att34 = att34_;
	}

	void setAtt35(float att35_)
	{
		att35 = att35_;
	}

	void setAtt36(float att36_)
	{
		att36 = att36_;
	}

	void setAtt37(float att37_)
	{
		att37 = att37_;
	}

	void setAtt38(float att38_)
	{
		att38 = att38_;
	}

	void setAtt39(float att39_)
	{
		att39 = att39_;
	}

	void setAtt40(float att40_)
	{
		att40 = att40_;
	}

	void setAtt41(double att41_)
	{
		att41 = att41_;
	}

	void setAtt42(double att42_)
	{
		att42 = att42_;
	}

	void setAtt43(double att43_)
	{
		att43 = att43_;
	}

	void setAtt44(double att44_)
	{
		att44 = att44_;
	}

	void setAtt45(double att45_)
	{
		att45 = att45_;
	}

	void setAtt46(double att46_)
	{
		att46 = att46_;
	}

	void setAtt47(double att47_)
	{
		att47 = att47_;
	}

	void setAtt48(double att48_)
	{
		att48 = att48_;
	}

	void setAtt49(double att49_)
	{
		att49 = att49_;
	}

	void setAtt50(double att50_)
	{
		att50 = att50_;
	}

	void setAtt51(bool att51_)
	{
		att51 = att51_;
	}

	void setAtt52(bool att52_)
	{
		att52 = att52_;
	}

	void setAtt53(bool att53_)
	{
		att53 = att53_;
	}

	void setAtt54(bool att54_)
	{
		att54 = att54_;
	}

	void setAtt55(bool att55_)
	{
		att55 = att55_;
	}

	void setAtt56(bool att56_)
	{
		att56 = att56_;
	}

	void setAtt57(bool att57_)
	{
		att57 = att57_;
	}

	void setAtt58(bool att58_)
	{
		att58 = att58_;
	}

	void setAtt59(bool att59_)
	{
		att59 = att59_;
	}

	void setAtt60(bool att60_)
	{
		att60 = att60_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;
	long att11;
	long att12;
	long att13;
	long att14;
	long att15;
	long att16;
	long att17;
	long att18;
	long att19;
	long att20;
	std::string att21;
	std::string att22;
	std::string att23;
	std::string att24;
	std::string att25;
	std::string att26;
	std::string att27;
	std::string att28;
	std::string att29;
	std::string att30;
	float att31;
	float att32;
	float att33;
	float att34;
	float att35;
	float att36;
	float att37;
	float att38;
	float att39;
	float att40;
	double att41;
	double att42;
	double att43;
	double att44;
	double att45;
	double att46;
	double att47;
	double att48;
	double att49;
	double att50;
	bool att51;
	bool att52;
	bool att53;
	bool att54;
	bool att55;
	bool att56;
	bool att57;
	bool att58;
	bool att59;
	bool att60;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
		ar & make_nvp("att31", att31);
		ar & make_nvp("att32", att32);
		ar & make_nvp("att33", att33);
		ar & make_nvp("att34", att34);
		ar & make_nvp("att35", att35);
		ar & make_nvp("att36", att36);
		ar & make_nvp("att37", att37);
		ar & make_nvp("att38", att38);
		ar & make_nvp("att39", att39);
		ar & make_nvp("att40", att40);
		ar & make_nvp("att41", att41);
		ar & make_nvp("att42", att42);
		ar & make_nvp("att43", att43);
		ar & make_nvp("att44", att44);
		ar & make_nvp("att45", att45);
		ar & make_nvp("att46", att46);
		ar & make_nvp("att47", att47);
		ar & make_nvp("att48", att48);
		ar & make_nvp("att49", att49);
		ar & make_nvp("att50", att50);
		ar & make_nvp("att51", att51);
		ar & make_nvp("att52", att52);
		ar & make_nvp("att53", att53);
		ar & make_nvp("att54", att54);
		ar & make_nvp("att55", att55);
		ar & make_nvp("att56", att56);
		ar & make_nvp("att57", att57);
		ar & make_nvp("att58", att58);
		ar & make_nvp("att59", att59);
		ar & make_nvp("att60", att60);
	}
};

void save_complexBoost_Class10(const complexBoost_Class10 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("complexBoost_Class", cl);
};

complexBoost_Class10 load_complexBoost_Class10(std::istream &istream)
{
	complexBoost_Class10 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("complexBoost_Class10", obj);
	return obj;
};

inline void testcomplexBoost_10()
{
	boost::timer::auto_cpu_timer t;

	complexBoost_Class10 *input = new complexBoost_Class10(), output;
	input->setAtt1(1);
	input->setAtt2(2);
	input->setAtt3(3);
	input->setAtt4(4);
	input->setAtt5(5);
	input->setAtt6(6);
	input->setAtt7(7);
	input->setAtt8(8);
	input->setAtt9(9);
	input->setAtt10(10);
	input->setAtt11(1);
	input->setAtt12(2);
	input->setAtt13(3);
	input->setAtt14(4);
	input->setAtt15(5);
	input->setAtt16(6);
	input->setAtt17(7);
	input->setAtt18(8);
	input->setAtt19(9);
	input->setAtt20(10);
	input->setAtt21("1");
	input->setAtt22("2");
	input->setAtt23("3");
	input->setAtt24("4");
	input->setAtt25("5");
	input->setAtt26("6");
	input->setAtt27("7");
	input->setAtt28("8");
	input->setAtt29("9");
	input->setAtt30("10");
	input->setAtt31(3.2);
	input->setAtt32(4.3);
	input->setAtt33(5.4);
	input->setAtt34(6.5);
	input->setAtt35(7.6);
	input->setAtt36(8.7);
	input->setAtt37(9.8);
	input->setAtt38(10.9);
	input->setAtt39(11.10);
	input->setAtt40(12.11);
	input->setAtt41(8.6);
	input->setAtt42(9.7);
	input->setAtt43(10.8);
	input->setAtt44(11.9);
	input->setAtt45(12.10);
	input->setAtt46(13.11);
	input->setAtt47(14.12);
	input->setAtt48(15.13);
	input->setAtt49(16.14);
	input->setAtt50(17.15);
	input->setAtt51(true);
	input->setAtt52(true);
	input->setAtt53(true);
	input->setAtt54(true);
	input->setAtt55(true);
	input->setAtt56(true);
	input->setAtt57(true);
	input->setAtt58(true);
	input->setAtt59(true);
	input->setAtt60(true);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_complexBoost_Class10((const complexBoost_Class10) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_complexBoost_Class10(istream);
	}
}

inline void complexTestBoost()
{
	cout << "2 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testcomplexBoost_2();
	}
	cout << endl << endl;

	cout << "4 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testcomplexBoost_4();
	}
	cout << endl << endl;

	cout << "6 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testcomplexBoost_6();
	}
	cout << endl << endl;

	cout << "8 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testcomplexBoost_8();
	}
	cout << endl << endl;

	cout << "10 Por Tipo:" << endl;
	for(int i = 0; i < 5; ++i){
		testcomplexBoost_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}


class innersimpleBoost_Class2
{
public:

	innersimpleBoost_Class2(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

private:
	int att1;
	int att2;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
	}
};

void save_innersimpleBoost_Class2(const innersimpleBoost_Class2 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innersimpleBoost_Class", cl);
};

innersimpleBoost_Class2 load_innersimpleBoost_Class2(std::istream &istream)
{
	innersimpleBoost_Class2 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innersimpleBoost_Class2", obj);
	return obj;
};

class outersimpleBoost_Class2
{
public:

	outersimpleBoost_Class2(){}

	void setAtt1(innersimpleBoost_Class2 att1_)
	{
		att1 = att1_;
	}

	void setAtt2(innersimpleBoost_Class2 att2_)
	{
		att2 = att2_;
	}

private:

	innersimpleBoost_Class2 att1;
	innersimpleBoost_Class2 att2;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
	}
};

void save_outersimpleBoost_Class2(const outersimpleBoost_Class2 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outersimpleBoost_Class", cl);
};

outersimpleBoost_Class2 load_outersimpleBoost_Class2(std::istream &istream)
{
	outersimpleBoost_Class2 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outersimpleBoost_Class2", obj);
	return obj;
};

inline void testinnersimpleBoost_2()
{
	boost::timer::auto_cpu_timer t;

	innersimpleBoost_Class2 *inner1 = new innersimpleBoost_Class2();
	inner1->setAtt1(1);
	inner1->setAtt2(2);
	innersimpleBoost_Class2 *inner2 = new innersimpleBoost_Class2();
	inner2->setAtt1(1);
	inner2->setAtt2(2);

	outersimpleBoost_Class2 *input = new outersimpleBoost_Class2(), output;
	input->setAtt1(*inner1);
	input->setAtt2(*inner2);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outersimpleBoost_Class2((const outersimpleBoost_Class2) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outersimpleBoost_Class2(istream);
	}
}


class innersimpleBoost_Class4
{
public:

	innersimpleBoost_Class4(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
	}
};

void save_innersimpleBoost_Class4(const innersimpleBoost_Class4 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innersimpleBoost_Class", cl);
};

innersimpleBoost_Class4 load_innersimpleBoost_Class4(std::istream &istream)
{
	innersimpleBoost_Class4 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innersimpleBoost_Class4", obj);
	return obj;
};

class outersimpleBoost_Class4
{
public:

	outersimpleBoost_Class4(){}

	void setAtt1(innersimpleBoost_Class4 att1_)
	{
		att1 = att1_;
	}

	void setAtt2(innersimpleBoost_Class4 att2_)
	{
		att2 = att2_;
	}

	void setAtt3(innersimpleBoost_Class4 att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innersimpleBoost_Class4 att4_)
	{
		att4 = att4_;
	}

private:

	innersimpleBoost_Class4 att1;
	innersimpleBoost_Class4 att2;
	innersimpleBoost_Class4 att3;
	innersimpleBoost_Class4 att4;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
	}
};

void save_outersimpleBoost_Class4(const outersimpleBoost_Class4 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outersimpleBoost_Class", cl);
};

outersimpleBoost_Class4 load_outersimpleBoost_Class4(std::istream &istream)
{
	outersimpleBoost_Class4 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outersimpleBoost_Class4", obj);
	return obj;
};

inline void testinnersimpleBoost_4()
{
	boost::timer::auto_cpu_timer t;

	innersimpleBoost_Class4 *inner1 = new innersimpleBoost_Class4();
	inner1->setAtt1(1);
	inner1->setAtt2(2);
	inner1->setAtt3(3);
	inner1->setAtt4(4);
	innersimpleBoost_Class4 *inner2 = new innersimpleBoost_Class4();
	inner2->setAtt1(1);
	inner2->setAtt2(2);
	inner2->setAtt3(3);
	inner2->setAtt4(4);
	innersimpleBoost_Class4 *inner3 = new innersimpleBoost_Class4();
	inner3->setAtt1(1);
	inner3->setAtt2(2);
	inner3->setAtt3(3);
	inner3->setAtt4(4);
	innersimpleBoost_Class4 *inner4 = new innersimpleBoost_Class4();
	inner4->setAtt1(1);
	inner4->setAtt2(2);
	inner4->setAtt3(3);
	inner4->setAtt4(4);

	outersimpleBoost_Class4 *input = new outersimpleBoost_Class4(), output;
	input->setAtt1(*inner1);
	input->setAtt2(*inner2);
	input->setAtt3(*inner3);
	input->setAtt4(*inner4);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outersimpleBoost_Class4((const outersimpleBoost_Class4) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outersimpleBoost_Class4(istream);
	}
}


class innersimpleBoost_Class6
{
public:

	innersimpleBoost_Class6(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
	}
};

void save_innersimpleBoost_Class6(const innersimpleBoost_Class6 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innersimpleBoost_Class", cl);
};

innersimpleBoost_Class6 load_innersimpleBoost_Class6(std::istream &istream)
{
	innersimpleBoost_Class6 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innersimpleBoost_Class6", obj);
	return obj;
};

class outersimpleBoost_Class6
{
public:

	outersimpleBoost_Class6(){}

	void setAtt1(innersimpleBoost_Class6 att1_)
	{
		att1 = att1_;
	}

	void setAtt2(innersimpleBoost_Class6 att2_)
	{
		att2 = att2_;
	}

	void setAtt3(innersimpleBoost_Class6 att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innersimpleBoost_Class6 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(innersimpleBoost_Class6 att5_)
	{
		att5 = att5_;
	}

	void setAtt6(innersimpleBoost_Class6 att6_)
	{
		att6 = att6_;
	}

private:

	innersimpleBoost_Class6 att1;
	innersimpleBoost_Class6 att2;
	innersimpleBoost_Class6 att3;
	innersimpleBoost_Class6 att4;
	innersimpleBoost_Class6 att5;
	innersimpleBoost_Class6 att6;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
	}
};

void save_outersimpleBoost_Class6(const outersimpleBoost_Class6 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outersimpleBoost_Class", cl);
};

outersimpleBoost_Class6 load_outersimpleBoost_Class6(std::istream &istream)
{
	outersimpleBoost_Class6 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outersimpleBoost_Class6", obj);
	return obj;
};

inline void testinnersimpleBoost_6()
{
	boost::timer::auto_cpu_timer t;

	innersimpleBoost_Class6 *inner1 = new innersimpleBoost_Class6();
	inner1->setAtt1(1);
	inner1->setAtt2(2);
	inner1->setAtt3(3);
	inner1->setAtt4(4);
	inner1->setAtt5(5);
	inner1->setAtt6(6);
	innersimpleBoost_Class6 *inner2 = new innersimpleBoost_Class6();
	inner2->setAtt1(1);
	inner2->setAtt2(2);
	inner2->setAtt3(3);
	inner2->setAtt4(4);
	inner2->setAtt5(5);
	inner2->setAtt6(6);
	innersimpleBoost_Class6 *inner3 = new innersimpleBoost_Class6();
	inner3->setAtt1(1);
	inner3->setAtt2(2);
	inner3->setAtt3(3);
	inner3->setAtt4(4);
	inner3->setAtt5(5);
	inner3->setAtt6(6);
	innersimpleBoost_Class6 *inner4 = new innersimpleBoost_Class6();
	inner4->setAtt1(1);
	inner4->setAtt2(2);
	inner4->setAtt3(3);
	inner4->setAtt4(4);
	inner4->setAtt5(5);
	inner4->setAtt6(6);
	innersimpleBoost_Class6 *inner5 = new innersimpleBoost_Class6();
	inner5->setAtt1(1);
	inner5->setAtt2(2);
	inner5->setAtt3(3);
	inner5->setAtt4(4);
	inner5->setAtt5(5);
	inner5->setAtt6(6);
	innersimpleBoost_Class6 *inner6 = new innersimpleBoost_Class6();
	inner6->setAtt1(1);
	inner6->setAtt2(2);
	inner6->setAtt3(3);
	inner6->setAtt4(4);
	inner6->setAtt5(5);
	inner6->setAtt6(6);

	outersimpleBoost_Class6 *input = new outersimpleBoost_Class6(), output;
	input->setAtt1(*inner1);
	input->setAtt2(*inner2);
	input->setAtt3(*inner3);
	input->setAtt4(*inner4);
	input->setAtt5(*inner5);
	input->setAtt6(*inner6);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outersimpleBoost_Class6((const outersimpleBoost_Class6) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outersimpleBoost_Class6(istream);
	}
}


class innersimpleBoost_Class8
{
public:

	innersimpleBoost_Class8(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
	}
};

void save_innersimpleBoost_Class8(const innersimpleBoost_Class8 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innersimpleBoost_Class", cl);
};

innersimpleBoost_Class8 load_innersimpleBoost_Class8(std::istream &istream)
{
	innersimpleBoost_Class8 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innersimpleBoost_Class8", obj);
	return obj;
};

class outersimpleBoost_Class8
{
public:

	outersimpleBoost_Class8(){}

	void setAtt1(innersimpleBoost_Class8 att1_)
	{
		att1 = att1_;
	}

	void setAtt2(innersimpleBoost_Class8 att2_)
	{
		att2 = att2_;
	}

	void setAtt3(innersimpleBoost_Class8 att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innersimpleBoost_Class8 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(innersimpleBoost_Class8 att5_)
	{
		att5 = att5_;
	}

	void setAtt6(innersimpleBoost_Class8 att6_)
	{
		att6 = att6_;
	}

	void setAtt7(innersimpleBoost_Class8 att7_)
	{
		att7 = att7_;
	}

	void setAtt8(innersimpleBoost_Class8 att8_)
	{
		att8 = att8_;
	}

private:

	innersimpleBoost_Class8 att1;
	innersimpleBoost_Class8 att2;
	innersimpleBoost_Class8 att3;
	innersimpleBoost_Class8 att4;
	innersimpleBoost_Class8 att5;
	innersimpleBoost_Class8 att6;
	innersimpleBoost_Class8 att7;
	innersimpleBoost_Class8 att8;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
	}
};

void save_outersimpleBoost_Class8(const outersimpleBoost_Class8 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outersimpleBoost_Class", cl);
};

outersimpleBoost_Class8 load_outersimpleBoost_Class8(std::istream &istream)
{
	outersimpleBoost_Class8 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outersimpleBoost_Class8", obj);
	return obj;
};

inline void testinnersimpleBoost_8()
{
	boost::timer::auto_cpu_timer t;

	innersimpleBoost_Class8 *inner1 = new innersimpleBoost_Class8();
	inner1->setAtt1(1);
	inner1->setAtt2(2);
	inner1->setAtt3(3);
	inner1->setAtt4(4);
	inner1->setAtt5(5);
	inner1->setAtt6(6);
	inner1->setAtt7(7);
	inner1->setAtt8(8);
	innersimpleBoost_Class8 *inner2 = new innersimpleBoost_Class8();
	inner2->setAtt1(1);
	inner2->setAtt2(2);
	inner2->setAtt3(3);
	inner2->setAtt4(4);
	inner2->setAtt5(5);
	inner2->setAtt6(6);
	inner2->setAtt7(7);
	inner2->setAtt8(8);
	innersimpleBoost_Class8 *inner3 = new innersimpleBoost_Class8();
	inner3->setAtt1(1);
	inner3->setAtt2(2);
	inner3->setAtt3(3);
	inner3->setAtt4(4);
	inner3->setAtt5(5);
	inner3->setAtt6(6);
	inner3->setAtt7(7);
	inner3->setAtt8(8);
	innersimpleBoost_Class8 *inner4 = new innersimpleBoost_Class8();
	inner4->setAtt1(1);
	inner4->setAtt2(2);
	inner4->setAtt3(3);
	inner4->setAtt4(4);
	inner4->setAtt5(5);
	inner4->setAtt6(6);
	inner4->setAtt7(7);
	inner4->setAtt8(8);
	innersimpleBoost_Class8 *inner5 = new innersimpleBoost_Class8();
	inner5->setAtt1(1);
	inner5->setAtt2(2);
	inner5->setAtt3(3);
	inner5->setAtt4(4);
	inner5->setAtt5(5);
	inner5->setAtt6(6);
	inner5->setAtt7(7);
	inner5->setAtt8(8);
	innersimpleBoost_Class8 *inner6 = new innersimpleBoost_Class8();
	inner6->setAtt1(1);
	inner6->setAtt2(2);
	inner6->setAtt3(3);
	inner6->setAtt4(4);
	inner6->setAtt5(5);
	inner6->setAtt6(6);
	inner6->setAtt7(7);
	inner6->setAtt8(8);
	innersimpleBoost_Class8 *inner7 = new innersimpleBoost_Class8();
	inner7->setAtt1(1);
	inner7->setAtt2(2);
	inner7->setAtt3(3);
	inner7->setAtt4(4);
	inner7->setAtt5(5);
	inner7->setAtt6(6);
	inner7->setAtt7(7);
	inner7->setAtt8(8);
	innersimpleBoost_Class8 *inner8 = new innersimpleBoost_Class8();
	inner8->setAtt1(1);
	inner8->setAtt2(2);
	inner8->setAtt3(3);
	inner8->setAtt4(4);
	inner8->setAtt5(5);
	inner8->setAtt6(6);
	inner8->setAtt7(7);
	inner8->setAtt8(8);

	outersimpleBoost_Class8 *input = new outersimpleBoost_Class8(), output;
	input->setAtt1(*inner1);
	input->setAtt2(*inner2);
	input->setAtt3(*inner3);
	input->setAtt4(*inner4);
	input->setAtt5(*inner5);
	input->setAtt6(*inner6);
	input->setAtt7(*inner7);
	input->setAtt8(*inner8);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outersimpleBoost_Class8((const outersimpleBoost_Class8) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outersimpleBoost_Class8(istream);
	}
}


class innersimpleBoost_Class10
{
public:

	innersimpleBoost_Class10(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(int att6_)
	{
		att6 = att6_;
	}

	void setAtt7(int att7_)
	{
		att7 = att7_;
	}

	void setAtt8(int att8_)
	{
		att8 = att8_;
	}

	void setAtt9(int att9_)
	{
		att9 = att9_;
	}

	void setAtt10(int att10_)
	{
		att10 = att10_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	int att6;
	int att7;
	int att8;
	int att9;
	int att10;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
	}
};

void save_innersimpleBoost_Class10(const innersimpleBoost_Class10 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innersimpleBoost_Class", cl);
};

innersimpleBoost_Class10 load_innersimpleBoost_Class10(std::istream &istream)
{
	innersimpleBoost_Class10 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innersimpleBoost_Class10", obj);
	return obj;
};

class outersimpleBoost_Class10
{
public:

	outersimpleBoost_Class10(){}

	void setAtt1(innersimpleBoost_Class10 att1_)
	{
		att1 = att1_;
	}

	void setAtt2(innersimpleBoost_Class10 att2_)
	{
		att2 = att2_;
	}

	void setAtt3(innersimpleBoost_Class10 att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innersimpleBoost_Class10 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(innersimpleBoost_Class10 att5_)
	{
		att5 = att5_;
	}

	void setAtt6(innersimpleBoost_Class10 att6_)
	{
		att6 = att6_;
	}

	void setAtt7(innersimpleBoost_Class10 att7_)
	{
		att7 = att7_;
	}

	void setAtt8(innersimpleBoost_Class10 att8_)
	{
		att8 = att8_;
	}

	void setAtt9(innersimpleBoost_Class10 att9_)
	{
		att9 = att9_;
	}

	void setAtt10(innersimpleBoost_Class10 att10_)
	{
		att10 = att10_;
	}

private:

	innersimpleBoost_Class10 att1;
	innersimpleBoost_Class10 att2;
	innersimpleBoost_Class10 att3;
	innersimpleBoost_Class10 att4;
	innersimpleBoost_Class10 att5;
	innersimpleBoost_Class10 att6;
	innersimpleBoost_Class10 att7;
	innersimpleBoost_Class10 att8;
	innersimpleBoost_Class10 att9;
	innersimpleBoost_Class10 att10;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
	}
};

void save_outersimpleBoost_Class10(const outersimpleBoost_Class10 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outersimpleBoost_Class", cl);
};

outersimpleBoost_Class10 load_outersimpleBoost_Class10(std::istream &istream)
{
	outersimpleBoost_Class10 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outersimpleBoost_Class10", obj);
	return obj;
};

inline void testinnersimpleBoost_10()
{
	boost::timer::auto_cpu_timer t;

	innersimpleBoost_Class10 *inner1 = new innersimpleBoost_Class10();
	inner1->setAtt1(1);
	inner1->setAtt2(2);
	inner1->setAtt3(3);
	inner1->setAtt4(4);
	inner1->setAtt5(5);
	inner1->setAtt6(6);
	inner1->setAtt7(7);
	inner1->setAtt8(8);
	inner1->setAtt9(9);
	inner1->setAtt10(10);
	innersimpleBoost_Class10 *inner2 = new innersimpleBoost_Class10();
	inner2->setAtt1(1);
	inner2->setAtt2(2);
	inner2->setAtt3(3);
	inner2->setAtt4(4);
	inner2->setAtt5(5);
	inner2->setAtt6(6);
	inner2->setAtt7(7);
	inner2->setAtt8(8);
	inner2->setAtt9(9);
	inner2->setAtt10(10);
	innersimpleBoost_Class10 *inner3 = new innersimpleBoost_Class10();
	inner3->setAtt1(1);
	inner3->setAtt2(2);
	inner3->setAtt3(3);
	inner3->setAtt4(4);
	inner3->setAtt5(5);
	inner3->setAtt6(6);
	inner3->setAtt7(7);
	inner3->setAtt8(8);
	inner3->setAtt9(9);
	inner3->setAtt10(10);
	innersimpleBoost_Class10 *inner4 = new innersimpleBoost_Class10();
	inner4->setAtt1(1);
	inner4->setAtt2(2);
	inner4->setAtt3(3);
	inner4->setAtt4(4);
	inner4->setAtt5(5);
	inner4->setAtt6(6);
	inner4->setAtt7(7);
	inner4->setAtt8(8);
	inner4->setAtt9(9);
	inner4->setAtt10(10);
	innersimpleBoost_Class10 *inner5 = new innersimpleBoost_Class10();
	inner5->setAtt1(1);
	inner5->setAtt2(2);
	inner5->setAtt3(3);
	inner5->setAtt4(4);
	inner5->setAtt5(5);
	inner5->setAtt6(6);
	inner5->setAtt7(7);
	inner5->setAtt8(8);
	inner5->setAtt9(9);
	inner5->setAtt10(10);
	innersimpleBoost_Class10 *inner6 = new innersimpleBoost_Class10();
	inner6->setAtt1(1);
	inner6->setAtt2(2);
	inner6->setAtt3(3);
	inner6->setAtt4(4);
	inner6->setAtt5(5);
	inner6->setAtt6(6);
	inner6->setAtt7(7);
	inner6->setAtt8(8);
	inner6->setAtt9(9);
	inner6->setAtt10(10);
	innersimpleBoost_Class10 *inner7 = new innersimpleBoost_Class10();
	inner7->setAtt1(1);
	inner7->setAtt2(2);
	inner7->setAtt3(3);
	inner7->setAtt4(4);
	inner7->setAtt5(5);
	inner7->setAtt6(6);
	inner7->setAtt7(7);
	inner7->setAtt8(8);
	inner7->setAtt9(9);
	inner7->setAtt10(10);
	innersimpleBoost_Class10 *inner8 = new innersimpleBoost_Class10();
	inner8->setAtt1(1);
	inner8->setAtt2(2);
	inner8->setAtt3(3);
	inner8->setAtt4(4);
	inner8->setAtt5(5);
	inner8->setAtt6(6);
	inner8->setAtt7(7);
	inner8->setAtt8(8);
	inner8->setAtt9(9);
	inner8->setAtt10(10);
	innersimpleBoost_Class10 *inner9 = new innersimpleBoost_Class10();
	inner9->setAtt1(1);
	inner9->setAtt2(2);
	inner9->setAtt3(3);
	inner9->setAtt4(4);
	inner9->setAtt5(5);
	inner9->setAtt6(6);
	inner9->setAtt7(7);
	inner9->setAtt8(8);
	inner9->setAtt9(9);
	inner9->setAtt10(10);
	innersimpleBoost_Class10 *inner10 = new innersimpleBoost_Class10();
	inner10->setAtt1(1);
	inner10->setAtt2(2);
	inner10->setAtt3(3);
	inner10->setAtt4(4);
	inner10->setAtt5(5);
	inner10->setAtt6(6);
	inner10->setAtt7(7);
	inner10->setAtt8(8);
	inner10->setAtt9(9);
	inner10->setAtt10(10);

	outersimpleBoost_Class10 *input = new outersimpleBoost_Class10(), output;
	input->setAtt1(*inner1);
	input->setAtt2(*inner2);
	input->setAtt3(*inner3);
	input->setAtt4(*inner4);
	input->setAtt5(*inner5);
	input->setAtt6(*inner6);
	input->setAtt7(*inner7);
	input->setAtt8(*inner8);
	input->setAtt9(*inner9);
	input->setAtt10(*inner10);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outersimpleBoost_Class10((const outersimpleBoost_Class10) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outersimpleBoost_Class10(istream);
	}
}

inline void innerSimpleTestBoost()
{
	cout << "Estructura con 2 estructuras internas de 2 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnersimpleBoost_2();
	}
	cout << endl << endl;

	cout << "Estructura con 4 estructuras internas de 4 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnersimpleBoost_4();
	}
	cout << endl << endl;

	cout << "Estructura con 6 estructuras internas de 6 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnersimpleBoost_6();
	}
	cout << endl << endl;

	cout << "Estructura con 7 estructuras internas de 7 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnersimpleBoost_8();
	}
	cout << endl << endl;

	cout << "Estructura con 10 estructuras internas de 10 miembros cada una:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnersimpleBoost_10();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}


class innercomplexBoost_Class1
{
public:

	innercomplexBoost_Class1(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(float att4_)
	{
		att4 = att4_;
	}

	void setAtt5(double att5_)
	{
		att5 = att5_;
	}

	void setAtt6(bool att6_)
	{
		att6 = att6_;
	}

private:
	int att1;
	long att2;
	std::string att3;
	float att4;
	double att5;
	bool att6;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
	}
};

void save_innercomplexBoost_Class1(const innercomplexBoost_Class1 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innercomplexBoost_Class", cl);
};

innercomplexBoost_Class1 load_innercomplexBoost_Class1(std::istream &istream)
{
	innercomplexBoost_Class1 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innercomplexBoost_Class1", obj);
	return obj;
};

class outercomplexBoost_Class1
{
public:

	outercomplexBoost_Class1(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innercomplexBoost_Class1 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(float att5_)
	{
		att5 = att5_;
	}

	void setAtt6(double att6_)
	{
		att6 = att6_;
	}

	void setAtt7(bool att7_)
	{
		att7 = att7_;
	}

private:

	int att1;
	long att2;
	std::string att3;
	innercomplexBoost_Class1 att4;
	float att5;
	double att6;
	bool att7;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
	}
};

void save_outercomplexBoost_Class1(const outercomplexBoost_Class1 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outercomplexBoost_Class", cl);
};

outercomplexBoost_Class1 load_outercomplexBoost_Class1(std::istream &istream)
{
	outercomplexBoost_Class1 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outercomplexBoost_Class1", obj);
	return obj;
};

inline void testinnercomplexBoost_1()
{
	boost::timer::auto_cpu_timer t;

	innercomplexBoost_Class1 *inner1 = new innercomplexBoost_Class1();
	inner1->setAtt1(0);
	inner1->setAtt2(0);
	inner1->setAtt3("TEST 0");
	inner1->setAtt4(2.1);
	inner1->setAtt5(8.5);
	inner1->setAtt6(true);

	outercomplexBoost_Class1 *input = new outercomplexBoost_Class1(), output;
	input->setAtt1(1);
	input->setAtt2(1);
	input->setAtt3("TEST 1");
	input->setAtt4(*inner1);
	input->setAtt5(3.2);
	input->setAtt6(8.3);
	input->setAtt7(false);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outercomplexBoost_Class1((const outercomplexBoost_Class1) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outercomplexBoost_Class1(istream);
	}
}


class innercomplexBoost_Class2
{
public:

	innercomplexBoost_Class2(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(long att3_)
	{
		att3 = att3_;
	}

	void setAtt4(long att4_)
	{
		att4 = att4_;
	}

	void setAtt5(std::string att5_)
	{
		att5 = att5_;
	}

	void setAtt6(std::string att6_)
	{
		att6 = att6_;
	}

	void setAtt7(float att7_)
	{
		att7 = att7_;
	}

	void setAtt8(float att8_)
	{
		att8 = att8_;
	}

	void setAtt9(double att9_)
	{
		att9 = att9_;
	}

	void setAtt10(double att10_)
	{
		att10 = att10_;
	}

	void setAtt11(bool att11_)
	{
		att11 = att11_;
	}

	void setAtt12(bool att12_)
	{
		att12 = att12_;
	}

private:
	int att1;
	int att2;
	long att3;
	long att4;
	std::string att5;
	std::string att6;
	float att7;
	float att8;
	double att9;
	double att10;
	bool att11;
	bool att12;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
	}
};

void save_innercomplexBoost_Class2(const innercomplexBoost_Class2 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innercomplexBoost_Class", cl);
};

innercomplexBoost_Class2 load_innercomplexBoost_Class2(std::istream &istream)
{
	innercomplexBoost_Class2 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innercomplexBoost_Class2", obj);
	return obj;
};

class outercomplexBoost_Class2
{
public:

	outercomplexBoost_Class2(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innercomplexBoost_Class2 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(float att5_)
	{
		att5 = att5_;
	}

	void setAtt6(double att6_)
	{
		att6 = att6_;
	}

	void setAtt7(bool att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(innercomplexBoost_Class2 att10_)
	{
		att10 = att10_;
	}

	void setAtt11(float att11_)
	{
		att11 = att11_;
	}

	void setAtt12(double att12_)
	{
		att12 = att12_;
	}

	void setAtt13(bool att13_)
	{
		att13 = att13_;
	}

private:

	int att1;
	long att2;
	std::string att3;
	innercomplexBoost_Class2 att4;
	float att5;
	double att6;
	bool att7;
	long att8;
	std::string att9;
	innercomplexBoost_Class2 att10;
	float att11;
	double att12;
	bool att13;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
	}
};

void save_outercomplexBoost_Class2(const outercomplexBoost_Class2 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outercomplexBoost_Class", cl);
};

outercomplexBoost_Class2 load_outercomplexBoost_Class2(std::istream &istream)
{
	outercomplexBoost_Class2 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outercomplexBoost_Class2", obj);
	return obj;
};

inline void testinnercomplexBoost_2()
{
	boost::timer::auto_cpu_timer t;

	innercomplexBoost_Class2 *inner1 = new innercomplexBoost_Class2();
	inner1->setAtt1(0);
	inner1->setAtt2(1);
	inner1->setAtt3(0);
	inner1->setAtt4(1);
	inner1->setAtt5("TEST 0");
	inner1->setAtt6("TEST 1");
	inner1->setAtt7(2.1);
	inner1->setAtt8(3.2);
	inner1->setAtt9(8.5);
	inner1->setAtt10(9.6);
	inner1->setAtt11(true);
	inner1->setAtt12(true);
	innercomplexBoost_Class2 *inner2 = new innercomplexBoost_Class2();
	inner2->setAtt1(0);
	inner2->setAtt2(1);
	inner2->setAtt3(0);
	inner2->setAtt4(1);
	inner2->setAtt5("TEST 0");
	inner2->setAtt6("TEST 1");
	inner2->setAtt7(2.1);
	inner2->setAtt8(3.2);
	inner2->setAtt9(8.5);
	inner2->setAtt10(9.6);
	inner2->setAtt11(true);
	inner2->setAtt12(true);

	outercomplexBoost_Class2 *input = new outercomplexBoost_Class2(), output;
	input->setAtt1(1);
	input->setAtt2(1);
	input->setAtt3("TEST 1");
	input->setAtt4(*inner1);
	input->setAtt5(3.2);
	input->setAtt6(8.3);
	input->setAtt7(false);
	input->setAtt8(2);
	input->setAtt9("TEST 2");
	input->setAtt10(*inner2);
	input->setAtt11(4.3);
	input->setAtt12(9.4);
	input->setAtt13(false);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outercomplexBoost_Class2((const outercomplexBoost_Class2) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outercomplexBoost_Class2(istream);
	}
}


class innercomplexBoost_Class3
{
public:

	innercomplexBoost_Class3(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(long att4_)
	{
		att4 = att4_;
	}

	void setAtt5(long att5_)
	{
		att5 = att5_;
	}

	void setAtt6(long att6_)
	{
		att6 = att6_;
	}

	void setAtt7(std::string att7_)
	{
		att7 = att7_;
	}

	void setAtt8(std::string att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(float att10_)
	{
		att10 = att10_;
	}

	void setAtt11(float att11_)
	{
		att11 = att11_;
	}

	void setAtt12(float att12_)
	{
		att12 = att12_;
	}

	void setAtt13(double att13_)
	{
		att13 = att13_;
	}

	void setAtt14(double att14_)
	{
		att14 = att14_;
	}

	void setAtt15(double att15_)
	{
		att15 = att15_;
	}

	void setAtt16(bool att16_)
	{
		att16 = att16_;
	}

	void setAtt17(bool att17_)
	{
		att17 = att17_;
	}

	void setAtt18(bool att18_)
	{
		att18 = att18_;
	}

private:
	int att1;
	int att2;
	int att3;
	long att4;
	long att5;
	long att6;
	std::string att7;
	std::string att8;
	std::string att9;
	float att10;
	float att11;
	float att12;
	double att13;
	double att14;
	double att15;
	bool att16;
	bool att17;
	bool att18;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
	}
};

void save_innercomplexBoost_Class3(const innercomplexBoost_Class3 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innercomplexBoost_Class", cl);
};

innercomplexBoost_Class3 load_innercomplexBoost_Class3(std::istream &istream)
{
	innercomplexBoost_Class3 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innercomplexBoost_Class3", obj);
	return obj;
};

class outercomplexBoost_Class3
{
public:

	outercomplexBoost_Class3(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innercomplexBoost_Class3 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(float att5_)
	{
		att5 = att5_;
	}

	void setAtt6(double att6_)
	{
		att6 = att6_;
	}

	void setAtt7(bool att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(innercomplexBoost_Class3 att10_)
	{
		att10 = att10_;
	}

	void setAtt11(float att11_)
	{
		att11 = att11_;
	}

	void setAtt12(double att12_)
	{
		att12 = att12_;
	}

	void setAtt13(bool att13_)
	{
		att13 = att13_;
	}

	void setAtt14(std::string att14_)
	{
		att14 = att14_;
	}

	void setAtt15(innercomplexBoost_Class3 att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(double att17_)
	{
		att17 = att17_;
	}

	void setAtt18(bool att18_)
	{
		att18 = att18_;
	}

private:

	int att1;
	long att2;
	std::string att3;
	innercomplexBoost_Class3 att4;
	float att5;
	double att6;
	bool att7;
	long att8;
	std::string att9;
	innercomplexBoost_Class3 att10;
	float att11;
	double att12;
	bool att13;
	std::string att14;
	innercomplexBoost_Class3 att15;
	float att16;
	double att17;
	bool att18;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
	}
};

void save_outercomplexBoost_Class3(const outercomplexBoost_Class3 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outercomplexBoost_Class", cl);
};

outercomplexBoost_Class3 load_outercomplexBoost_Class3(std::istream &istream)
{
	outercomplexBoost_Class3 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outercomplexBoost_Class3", obj);
	return obj;
};

inline void testinnercomplexBoost_3()
{
	boost::timer::auto_cpu_timer t;

	innercomplexBoost_Class3 *inner1 = new innercomplexBoost_Class3();
	inner1->setAtt1(0);
	inner1->setAtt2(1);
	inner1->setAtt3(2);
	inner1->setAtt4(0);
	inner1->setAtt5(1);
	inner1->setAtt6(2);
	inner1->setAtt7("TEST 0");
	inner1->setAtt8("TEST 1");
	inner1->setAtt9("TEST 2");
	inner1->setAtt10(2.1);
	inner1->setAtt11(3.2);
	inner1->setAtt12(4.3);
	inner1->setAtt13(8.5);
	inner1->setAtt14(9.6);
	inner1->setAtt15(10.7);
	inner1->setAtt16(true);
	inner1->setAtt17(true);
	inner1->setAtt18(true);
	innercomplexBoost_Class3 *inner2 = new innercomplexBoost_Class3();
	inner2->setAtt1(0);
	inner2->setAtt2(1);
	inner2->setAtt3(2);
	inner2->setAtt4(0);
	inner2->setAtt5(1);
	inner2->setAtt6(2);
	inner2->setAtt7("TEST 0");
	inner2->setAtt8("TEST 1");
	inner2->setAtt9("TEST 2");
	inner2->setAtt10(2.1);
	inner2->setAtt11(3.2);
	inner2->setAtt12(4.3);
	inner2->setAtt13(8.5);
	inner2->setAtt14(9.6);
	inner2->setAtt15(10.7);
	inner2->setAtt16(true);
	inner2->setAtt17(true);
	inner2->setAtt18(true);
	innercomplexBoost_Class3 *inner3 = new innercomplexBoost_Class3();
	inner3->setAtt1(0);
	inner3->setAtt2(1);
	inner3->setAtt3(2);
	inner3->setAtt4(0);
	inner3->setAtt5(1);
	inner3->setAtt6(2);
	inner3->setAtt7("TEST 0");
	inner3->setAtt8("TEST 1");
	inner3->setAtt9("TEST 2");
	inner3->setAtt10(2.1);
	inner3->setAtt11(3.2);
	inner3->setAtt12(4.3);
	inner3->setAtt13(8.5);
	inner3->setAtt14(9.6);
	inner3->setAtt15(10.7);
	inner3->setAtt16(true);
	inner3->setAtt17(true);
	inner3->setAtt18(true);

	outercomplexBoost_Class3 *input = new outercomplexBoost_Class3(), output;
	input->setAtt1(1);
	input->setAtt2(1);
	input->setAtt3("TEST 1");
	input->setAtt4(*inner1);
	input->setAtt5(3.2);
	input->setAtt6(8.3);
	input->setAtt7(false);
	input->setAtt8(2);
	input->setAtt9("TEST 2");
	input->setAtt10(*inner2);
	input->setAtt11(4.3);
	input->setAtt12(9.4);
	input->setAtt13(false);
	input->setAtt14("TEST 3");
	input->setAtt15(*inner3);
	input->setAtt16(5.4);
	input->setAtt17(10.5);
	input->setAtt18(false);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outercomplexBoost_Class3((const outercomplexBoost_Class3) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outercomplexBoost_Class3(istream);
	}
}


class innercomplexBoost_Class4
{
public:

	innercomplexBoost_Class4(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(long att5_)
	{
		att5 = att5_;
	}

	void setAtt6(long att6_)
	{
		att6 = att6_;
	}

	void setAtt7(long att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(std::string att10_)
	{
		att10 = att10_;
	}

	void setAtt11(std::string att11_)
	{
		att11 = att11_;
	}

	void setAtt12(std::string att12_)
	{
		att12 = att12_;
	}

	void setAtt13(float att13_)
	{
		att13 = att13_;
	}

	void setAtt14(float att14_)
	{
		att14 = att14_;
	}

	void setAtt15(float att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(double att17_)
	{
		att17 = att17_;
	}

	void setAtt18(double att18_)
	{
		att18 = att18_;
	}

	void setAtt19(double att19_)
	{
		att19 = att19_;
	}

	void setAtt20(double att20_)
	{
		att20 = att20_;
	}

	void setAtt21(bool att21_)
	{
		att21 = att21_;
	}

	void setAtt22(bool att22_)
	{
		att22 = att22_;
	}

	void setAtt23(bool att23_)
	{
		att23 = att23_;
	}

	void setAtt24(bool att24_)
	{
		att24 = att24_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	long att5;
	long att6;
	long att7;
	long att8;
	std::string att9;
	std::string att10;
	std::string att11;
	std::string att12;
	float att13;
	float att14;
	float att15;
	float att16;
	double att17;
	double att18;
	double att19;
	double att20;
	bool att21;
	bool att22;
	bool att23;
	bool att24;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
	}
};

void save_innercomplexBoost_Class4(const innercomplexBoost_Class4 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innercomplexBoost_Class", cl);
};

innercomplexBoost_Class4 load_innercomplexBoost_Class4(std::istream &istream)
{
	innercomplexBoost_Class4 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innercomplexBoost_Class4", obj);
	return obj;
};

class outercomplexBoost_Class4
{
public:

	outercomplexBoost_Class4(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innercomplexBoost_Class4 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(float att5_)
	{
		att5 = att5_;
	}

	void setAtt6(double att6_)
	{
		att6 = att6_;
	}

	void setAtt7(bool att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(innercomplexBoost_Class4 att10_)
	{
		att10 = att10_;
	}

	void setAtt11(float att11_)
	{
		att11 = att11_;
	}

	void setAtt12(double att12_)
	{
		att12 = att12_;
	}

	void setAtt13(bool att13_)
	{
		att13 = att13_;
	}

	void setAtt14(std::string att14_)
	{
		att14 = att14_;
	}

	void setAtt15(innercomplexBoost_Class4 att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(double att17_)
	{
		att17 = att17_;
	}

	void setAtt18(bool att18_)
	{
		att18 = att18_;
	}

	void setAtt19(innercomplexBoost_Class4 att19_)
	{
		att19 = att19_;
	}

	void setAtt20(float att20_)
	{
		att20 = att20_;
	}

	void setAtt21(double att21_)
	{
		att21 = att21_;
	}

	void setAtt22(bool att22_)
	{
		att22 = att22_;
	}

private:

	int att1;
	long att2;
	std::string att3;
	innercomplexBoost_Class4 att4;
	float att5;
	double att6;
	bool att7;
	long att8;
	std::string att9;
	innercomplexBoost_Class4 att10;
	float att11;
	double att12;
	bool att13;
	std::string att14;
	innercomplexBoost_Class4 att15;
	float att16;
	double att17;
	bool att18;
	innercomplexBoost_Class4 att19;
	float att20;
	double att21;
	bool att22;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
	}
};

void save_outercomplexBoost_Class4(const outercomplexBoost_Class4 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outercomplexBoost_Class", cl);
};

outercomplexBoost_Class4 load_outercomplexBoost_Class4(std::istream &istream)
{
	outercomplexBoost_Class4 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outercomplexBoost_Class4", obj);
	return obj;
};

inline void testinnercomplexBoost_4()
{
	boost::timer::auto_cpu_timer t;

	innercomplexBoost_Class4 *inner1 = new innercomplexBoost_Class4();
	inner1->setAtt1(0);
	inner1->setAtt2(1);
	inner1->setAtt3(2);
	inner1->setAtt4(3);
	inner1->setAtt5(0);
	inner1->setAtt6(1);
	inner1->setAtt7(2);
	inner1->setAtt8(3);
	inner1->setAtt9("TEST 0");
	inner1->setAtt10("TEST 1");
	inner1->setAtt11("TEST 2");
	inner1->setAtt12("TEST 3");
	inner1->setAtt13(2.1);
	inner1->setAtt14(3.2);
	inner1->setAtt15(4.3);
	inner1->setAtt16(5.4);
	inner1->setAtt17(8.5);
	inner1->setAtt18(9.6);
	inner1->setAtt19(10.7);
	inner1->setAtt20(11.8);
	inner1->setAtt21(true);
	inner1->setAtt22(true);
	inner1->setAtt23(true);
	inner1->setAtt24(true);
	innercomplexBoost_Class4 *inner2 = new innercomplexBoost_Class4();
	inner2->setAtt1(0);
	inner2->setAtt2(1);
	inner2->setAtt3(2);
	inner2->setAtt4(3);
	inner2->setAtt5(0);
	inner2->setAtt6(1);
	inner2->setAtt7(2);
	inner2->setAtt8(3);
	inner2->setAtt9("TEST 0");
	inner2->setAtt10("TEST 1");
	inner2->setAtt11("TEST 2");
	inner2->setAtt12("TEST 3");
	inner2->setAtt13(2.1);
	inner2->setAtt14(3.2);
	inner2->setAtt15(4.3);
	inner2->setAtt16(5.4);
	inner2->setAtt17(8.5);
	inner2->setAtt18(9.6);
	inner2->setAtt19(10.7);
	inner2->setAtt20(11.8);
	inner2->setAtt21(true);
	inner2->setAtt22(true);
	inner2->setAtt23(true);
	inner2->setAtt24(true);
	innercomplexBoost_Class4 *inner3 = new innercomplexBoost_Class4();
	inner3->setAtt1(0);
	inner3->setAtt2(1);
	inner3->setAtt3(2);
	inner3->setAtt4(3);
	inner3->setAtt5(0);
	inner3->setAtt6(1);
	inner3->setAtt7(2);
	inner3->setAtt8(3);
	inner3->setAtt9("TEST 0");
	inner3->setAtt10("TEST 1");
	inner3->setAtt11("TEST 2");
	inner3->setAtt12("TEST 3");
	inner3->setAtt13(2.1);
	inner3->setAtt14(3.2);
	inner3->setAtt15(4.3);
	inner3->setAtt16(5.4);
	inner3->setAtt17(8.5);
	inner3->setAtt18(9.6);
	inner3->setAtt19(10.7);
	inner3->setAtt20(11.8);
	inner3->setAtt21(true);
	inner3->setAtt22(true);
	inner3->setAtt23(true);
	inner3->setAtt24(true);
	innercomplexBoost_Class4 *inner4 = new innercomplexBoost_Class4();
	inner4->setAtt1(0);
	inner4->setAtt2(1);
	inner4->setAtt3(2);
	inner4->setAtt4(3);
	inner4->setAtt5(0);
	inner4->setAtt6(1);
	inner4->setAtt7(2);
	inner4->setAtt8(3);
	inner4->setAtt9("TEST 0");
	inner4->setAtt10("TEST 1");
	inner4->setAtt11("TEST 2");
	inner4->setAtt12("TEST 3");
	inner4->setAtt13(2.1);
	inner4->setAtt14(3.2);
	inner4->setAtt15(4.3);
	inner4->setAtt16(5.4);
	inner4->setAtt17(8.5);
	inner4->setAtt18(9.6);
	inner4->setAtt19(10.7);
	inner4->setAtt20(11.8);
	inner4->setAtt21(true);
	inner4->setAtt22(true);
	inner4->setAtt23(true);
	inner4->setAtt24(true);

	outercomplexBoost_Class4 *input = new outercomplexBoost_Class4(), output;
	input->setAtt1(1);
	input->setAtt2(1);
	input->setAtt3("TEST 1");
	input->setAtt4(*inner1);
	input->setAtt5(3.2);
	input->setAtt6(8.3);
	input->setAtt7(false);
	input->setAtt8(2);
	input->setAtt9("TEST 2");
	input->setAtt10(*inner2);
	input->setAtt11(4.3);
	input->setAtt12(9.4);
	input->setAtt13(false);
	input->setAtt14("TEST 3");
	input->setAtt15(*inner3);
	input->setAtt16(5.4);
	input->setAtt17(10.5);
	input->setAtt18(false);
	input->setAtt19(*inner4);
	input->setAtt20(6.5);
	input->setAtt21(11.6);
	input->setAtt22(false);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outercomplexBoost_Class4((const outercomplexBoost_Class4) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outercomplexBoost_Class4(istream);
	}
}


class innercomplexBoost_Class5
{
public:

	innercomplexBoost_Class5(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(int att2_)
	{
		att2 = att2_;
	}

	void setAtt3(int att3_)
	{
		att3 = att3_;
	}

	void setAtt4(int att4_)
	{
		att4 = att4_;
	}

	void setAtt5(int att5_)
	{
		att5 = att5_;
	}

	void setAtt6(long att6_)
	{
		att6 = att6_;
	}

	void setAtt7(long att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(long att9_)
	{
		att9 = att9_;
	}

	void setAtt10(long att10_)
	{
		att10 = att10_;
	}

	void setAtt11(std::string att11_)
	{
		att11 = att11_;
	}

	void setAtt12(std::string att12_)
	{
		att12 = att12_;
	}

	void setAtt13(std::string att13_)
	{
		att13 = att13_;
	}

	void setAtt14(std::string att14_)
	{
		att14 = att14_;
	}

	void setAtt15(std::string att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(float att17_)
	{
		att17 = att17_;
	}

	void setAtt18(float att18_)
	{
		att18 = att18_;
	}

	void setAtt19(float att19_)
	{
		att19 = att19_;
	}

	void setAtt20(float att20_)
	{
		att20 = att20_;
	}

	void setAtt21(double att21_)
	{
		att21 = att21_;
	}

	void setAtt22(double att22_)
	{
		att22 = att22_;
	}

	void setAtt23(double att23_)
	{
		att23 = att23_;
	}

	void setAtt24(double att24_)
	{
		att24 = att24_;
	}

	void setAtt25(double att25_)
	{
		att25 = att25_;
	}

	void setAtt26(bool att26_)
	{
		att26 = att26_;
	}

	void setAtt27(bool att27_)
	{
		att27 = att27_;
	}

	void setAtt28(bool att28_)
	{
		att28 = att28_;
	}

	void setAtt29(bool att29_)
	{
		att29 = att29_;
	}

	void setAtt30(bool att30_)
	{
		att30 = att30_;
	}

private:
	int att1;
	int att2;
	int att3;
	int att4;
	int att5;
	long att6;
	long att7;
	long att8;
	long att9;
	long att10;
	std::string att11;
	std::string att12;
	std::string att13;
	std::string att14;
	std::string att15;
	float att16;
	float att17;
	float att18;
	float att19;
	float att20;
	double att21;
	double att22;
	double att23;
	double att24;
	double att25;
	bool att26;
	bool att27;
	bool att28;
	bool att29;
	bool att30;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
		ar & make_nvp("att26", att26);
		ar & make_nvp("att27", att27);
		ar & make_nvp("att28", att28);
		ar & make_nvp("att29", att29);
		ar & make_nvp("att30", att30);
	}
};

void save_innercomplexBoost_Class5(const innercomplexBoost_Class5 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("innercomplexBoost_Class", cl);
};

innercomplexBoost_Class5 load_innercomplexBoost_Class5(std::istream &istream)
{
	innercomplexBoost_Class5 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("innercomplexBoost_Class5", obj);
	return obj;
};

class outercomplexBoost_Class5
{
public:

	outercomplexBoost_Class5(){}

	void setAtt1(int att1_)
	{
		att1 = att1_;
	}

	void setAtt2(long att2_)
	{
		att2 = att2_;
	}

	void setAtt3(std::string att3_)
	{
		att3 = att3_;
	}

	void setAtt4(innercomplexBoost_Class5 att4_)
	{
		att4 = att4_;
	}

	void setAtt5(float att5_)
	{
		att5 = att5_;
	}

	void setAtt6(double att6_)
	{
		att6 = att6_;
	}

	void setAtt7(bool att7_)
	{
		att7 = att7_;
	}

	void setAtt8(long att8_)
	{
		att8 = att8_;
	}

	void setAtt9(std::string att9_)
	{
		att9 = att9_;
	}

	void setAtt10(innercomplexBoost_Class5 att10_)
	{
		att10 = att10_;
	}

	void setAtt11(float att11_)
	{
		att11 = att11_;
	}

	void setAtt12(double att12_)
	{
		att12 = att12_;
	}

	void setAtt13(bool att13_)
	{
		att13 = att13_;
	}

	void setAtt14(std::string att14_)
	{
		att14 = att14_;
	}

	void setAtt15(innercomplexBoost_Class5 att15_)
	{
		att15 = att15_;
	}

	void setAtt16(float att16_)
	{
		att16 = att16_;
	}

	void setAtt17(double att17_)
	{
		att17 = att17_;
	}

	void setAtt18(bool att18_)
	{
		att18 = att18_;
	}

	void setAtt19(innercomplexBoost_Class5 att19_)
	{
		att19 = att19_;
	}

	void setAtt20(float att20_)
	{
		att20 = att20_;
	}

	void setAtt21(double att21_)
	{
		att21 = att21_;
	}

	void setAtt22(bool att22_)
	{
		att22 = att22_;
	}

	void setAtt23(float att23_)
	{
		att23 = att23_;
	}

	void setAtt24(double att24_)
	{
		att24 = att24_;
	}

	void setAtt25(bool att25_)
	{
		att25 = att25_;
	}

private:

	int att1;
	long att2;
	std::string att3;
	innercomplexBoost_Class5 att4;
	float att5;
	double att6;
	bool att7;
	long att8;
	std::string att9;
	innercomplexBoost_Class5 att10;
	float att11;
	double att12;
	bool att13;
	std::string att14;
	innercomplexBoost_Class5 att15;
	float att16;
	double att17;
	bool att18;
	innercomplexBoost_Class5 att19;
	float att20;
	double att21;
	bool att22;
	float att23;
	double att24;
	bool att25;

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		ar & make_nvp("att1", att1);
		ar & make_nvp("att2", att2);
		ar & make_nvp("att3", att3);
		ar & make_nvp("att4", att4);
		ar & make_nvp("att5", att5);
		ar & make_nvp("att6", att6);
		ar & make_nvp("att7", att7);
		ar & make_nvp("att8", att8);
		ar & make_nvp("att9", att9);
		ar & make_nvp("att10", att10);
		ar & make_nvp("att11", att11);
		ar & make_nvp("att12", att12);
		ar & make_nvp("att13", att13);
		ar & make_nvp("att14", att14);
		ar & make_nvp("att15", att15);
		ar & make_nvp("att16", att16);
		ar & make_nvp("att17", att17);
		ar & make_nvp("att18", att18);
		ar & make_nvp("att19", att19);
		ar & make_nvp("att20", att20);
		ar & make_nvp("att21", att21);
		ar & make_nvp("att22", att22);
		ar & make_nvp("att23", att23);
		ar & make_nvp("att24", att24);
		ar & make_nvp("att25", att25);
	}
};

void save_outercomplexBoost_Class5(const outercomplexBoost_Class5 & cl, std::ostream &ostream)
{
	boost::archive::xml_oarchive xml(ostream);
	xml << boost::serialization::make_nvp("outercomplexBoost_Class", cl);
};

outercomplexBoost_Class5 load_outercomplexBoost_Class5(std::istream &istream)
{
	outercomplexBoost_Class5 obj;
	boost::archive::xml_iarchive xml(istream);
	xml >> boost::serialization::make_nvp("outercomplexBoost_Class5", obj);
	return obj;
};

inline void testinnercomplexBoost_5()
{
	boost::timer::auto_cpu_timer t;

	innercomplexBoost_Class5 *inner1 = new innercomplexBoost_Class5();
	inner1->setAtt1(0);
	inner1->setAtt2(1);
	inner1->setAtt3(2);
	inner1->setAtt4(3);
	inner1->setAtt5(4);
	inner1->setAtt6(0);
	inner1->setAtt7(1);
	inner1->setAtt8(2);
	inner1->setAtt9(3);
	inner1->setAtt10(4);
	inner1->setAtt11("TEST 0");
	inner1->setAtt12("TEST 1");
	inner1->setAtt13("TEST 2");
	inner1->setAtt14("TEST 3");
	inner1->setAtt15("TEST 4");
	inner1->setAtt16(2.1);
	inner1->setAtt17(3.2);
	inner1->setAtt18(4.3);
	inner1->setAtt19(5.4);
	inner1->setAtt20(6.5);
	inner1->setAtt21(8.5);
	inner1->setAtt22(9.6);
	inner1->setAtt23(10.7);
	inner1->setAtt24(11.8);
	inner1->setAtt25(12.9);
	inner1->setAtt26(true);
	inner1->setAtt27(true);
	inner1->setAtt28(true);
	inner1->setAtt29(true);
	inner1->setAtt30(true);
	innercomplexBoost_Class5 *inner2 = new innercomplexBoost_Class5();
	inner2->setAtt1(0);
	inner2->setAtt2(1);
	inner2->setAtt3(2);
	inner2->setAtt4(3);
	inner2->setAtt5(4);
	inner2->setAtt6(0);
	inner2->setAtt7(1);
	inner2->setAtt8(2);
	inner2->setAtt9(3);
	inner2->setAtt10(4);
	inner2->setAtt11("TEST 0");
	inner2->setAtt12("TEST 1");
	inner2->setAtt13("TEST 2");
	inner2->setAtt14("TEST 3");
	inner2->setAtt15("TEST 4");
	inner2->setAtt16(2.1);
	inner2->setAtt17(3.2);
	inner2->setAtt18(4.3);
	inner2->setAtt19(5.4);
	inner2->setAtt20(6.5);
	inner2->setAtt21(8.5);
	inner2->setAtt22(9.6);
	inner2->setAtt23(10.7);
	inner2->setAtt24(11.8);
	inner2->setAtt25(12.9);
	inner2->setAtt26(true);
	inner2->setAtt27(true);
	inner2->setAtt28(true);
	inner2->setAtt29(true);
	inner2->setAtt30(true);
	innercomplexBoost_Class5 *inner3 = new innercomplexBoost_Class5();
	inner3->setAtt1(0);
	inner3->setAtt2(1);
	inner3->setAtt3(2);
	inner3->setAtt4(3);
	inner3->setAtt5(4);
	inner3->setAtt6(0);
	inner3->setAtt7(1);
	inner3->setAtt8(2);
	inner3->setAtt9(3);
	inner3->setAtt10(4);
	inner3->setAtt11("TEST 0");
	inner3->setAtt12("TEST 1");
	inner3->setAtt13("TEST 2");
	inner3->setAtt14("TEST 3");
	inner3->setAtt15("TEST 4");
	inner3->setAtt16(2.1);
	inner3->setAtt17(3.2);
	inner3->setAtt18(4.3);
	inner3->setAtt19(5.4);
	inner3->setAtt20(6.5);
	inner3->setAtt21(8.5);
	inner3->setAtt22(9.6);
	inner3->setAtt23(10.7);
	inner3->setAtt24(11.8);
	inner3->setAtt25(12.9);
	inner3->setAtt26(true);
	inner3->setAtt27(true);
	inner3->setAtt28(true);
	inner3->setAtt29(true);
	inner3->setAtt30(true);
	innercomplexBoost_Class5 *inner4 = new innercomplexBoost_Class5();
	inner4->setAtt1(0);
	inner4->setAtt2(1);
	inner4->setAtt3(2);
	inner4->setAtt4(3);
	inner4->setAtt5(4);
	inner4->setAtt6(0);
	inner4->setAtt7(1);
	inner4->setAtt8(2);
	inner4->setAtt9(3);
	inner4->setAtt10(4);
	inner4->setAtt11("TEST 0");
	inner4->setAtt12("TEST 1");
	inner4->setAtt13("TEST 2");
	inner4->setAtt14("TEST 3");
	inner4->setAtt15("TEST 4");
	inner4->setAtt16(2.1);
	inner4->setAtt17(3.2);
	inner4->setAtt18(4.3);
	inner4->setAtt19(5.4);
	inner4->setAtt20(6.5);
	inner4->setAtt21(8.5);
	inner4->setAtt22(9.6);
	inner4->setAtt23(10.7);
	inner4->setAtt24(11.8);
	inner4->setAtt25(12.9);
	inner4->setAtt26(true);
	inner4->setAtt27(true);
	inner4->setAtt28(true);
	inner4->setAtt29(true);
	inner4->setAtt30(true);
	innercomplexBoost_Class5 *inner5 = new innercomplexBoost_Class5();
	inner5->setAtt1(0);
	inner5->setAtt2(1);
	inner5->setAtt3(2);
	inner5->setAtt4(3);
	inner5->setAtt5(4);
	inner5->setAtt6(0);
	inner5->setAtt7(1);
	inner5->setAtt8(2);
	inner5->setAtt9(3);
	inner5->setAtt10(4);
	inner5->setAtt11("TEST 0");
	inner5->setAtt12("TEST 1");
	inner5->setAtt13("TEST 2");
	inner5->setAtt14("TEST 3");
	inner5->setAtt15("TEST 4");
	inner5->setAtt16(2.1);
	inner5->setAtt17(3.2);
	inner5->setAtt18(4.3);
	inner5->setAtt19(5.4);
	inner5->setAtt20(6.5);
	inner5->setAtt21(8.5);
	inner5->setAtt22(9.6);
	inner5->setAtt23(10.7);
	inner5->setAtt24(11.8);
	inner5->setAtt25(12.9);
	inner5->setAtt26(true);
	inner5->setAtt27(true);
	inner5->setAtt28(true);
	inner5->setAtt29(true);
	inner5->setAtt30(true);

	outercomplexBoost_Class5 *input = new outercomplexBoost_Class5(), output;
	input->setAtt1(1);
	input->setAtt2(1);
	input->setAtt3("TEST 1");
	input->setAtt4(*inner1);
	input->setAtt5(3.2);
	input->setAtt6(8.3);
	input->setAtt7(false);
	input->setAtt8(2);
	input->setAtt9("TEST 2");
	input->setAtt10(*inner2);
	input->setAtt11(4.3);
	input->setAtt12(9.4);
	input->setAtt13(false);
	input->setAtt14("TEST 3");
	input->setAtt15(*inner3);
	input->setAtt16(5.4);
	input->setAtt17(10.5);
	input->setAtt18(false);
	input->setAtt19(*inner4);
	input->setAtt20(6.5);
	input->setAtt21(11.6);
	input->setAtt22(false);
	input->setAtt23(7.6);
	input->setAtt24(12.7);
	input->setAtt25(false);

	boost::asio::streambuf streambuf;
	std::ostream ostream(&streambuf);
	std::istream istream(&streambuf);

	for(int i = 0; i < NUMBER_OF_LOOPS; ++i)
	{
		save_outercomplexBoost_Class5((const outercomplexBoost_Class5) *input, ostream);

		//streambuf.pubseekpos(0);
		//ostream.rdbuf(&streambuf);
		//std::cout << "Str: " << streambuf.size() << endl;
		//break;

		output = load_outercomplexBoost_Class5(istream);
	}
}

inline void innerComplexTestBoost()
{
	cout << "Estructura heterogénea con datos y 1 estructura interna de diferentes miembros repetidos 1 vez:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnercomplexBoost_1();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 2 estructuras internas de diferentes miembros repetidos 2 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnercomplexBoost_2();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 3 estructuras internas de diferentes miembros repetidos 3 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnercomplexBoost_3();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 4 estructuras internas de diferentes miembros repetidos 4 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnercomplexBoost_4();
	}
	cout << endl << endl;

	cout << "Estructura heterogénea con datos y 5 estructuras internas de diferentes miembros repetidos 5 veces:" << endl;
	for(int i = 0; i < 5; ++i){
		testinnercomplexBoost_5();
	}
	cout << "---------------------------------------------------------------------------------------------" << endl;
}

inline void performanceBoost()
{
	cout << "BOOST XML:" << endl << endl;
	simpleTestBoost();
	complexTestBoost();
	innerSimpleTestBoost();
	innerComplexTestBoost();
	cout << "------------------------------------------------------------------------------------------" << endl;

}

}

int main()
{

	testBoost::performanceBoost();

	return 0;
}