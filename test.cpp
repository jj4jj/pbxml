
#include "test.pb.h"
#include "pbxml.h"
#include <iostream>
using namespace std;
int main(int argc, char ** argv){
	test::Config conf;
	auto sub = conf.add_scs();
	sub =	conf.add_scs();
	sub->set_id(2345);
	sub->set_desc("for testing desc seted");

	string xml;
	protobuf_msg_to_xml_string(conf, xml);
	cout << xml << endl;
	protobuf_msg_to_xml_file(conf, "test.conf.xml");

	cout << "==================================" << endl;
	string error;
	test::Config nconf;
	protobuf_msg_from_xml_file(nconf, "test.conf.xml", error);

	cout << nconf.DebugString() << endl;

	return 0;
}

