#pragma once
#include <string>
namespace google {
	namespace protobuf {
		class Message;
	}
}

int	protobuf_msg_to_xml_file(const google::protobuf::Message & msg, const std::string & xmlfile);
int	protobuf_msg_from_xml_file(google::protobuf::Message & msg, const std::string & xmlfile, std::string & error);
int	protobuf_msg_to_xml_string(const google::protobuf::Message & msg, std::string & sxml);
int	protobuf_msg_from_xml_string(google::protobuf::Message & msg, const std::string & sxml, std::string & error);
