

struct HelloWorldStruct{
	short att1;
	int att2;
	string att3;
};

--------------------------------------------------------------------------------------------------------------

Char buffer[500];
eProsima::FastBuffer cdrBuffer(buffer, 500);
eProsima::FastCdr cdr(cdrBuffer);

--------------------------------------------------------------------------------------------------------------

HelloWorldStruct inputStruct, outputStruct;
inputStruct.att1 = 10;
inputStruct.att2 = 2;
inputStruct.att3 = “Hello World!”;

--------------------------------------------------------------------------------------------------------------

DynamicFastBuffers::Typecode *structTypecode;
structTypecode = DynamicFastBuffers::TypecodeAPI::createStruct(
	DynamicFastBuffers::TypecodeAPI::createShort(),
	DynamicFastBuffers::TypecodeAPI::createInteger(),
	DynamicFastBuffers::TypecodeAPI::createString(),
	NULL
);

--------------------------------------------------------------------------------------------------------------

DynamicFastBuffers::Bytecode *serializationBytecode;
DynamicFastBuffers::Bytecode *deserializationBytecode;

serializationBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(
	structTypecode,
	DynamicFastBuffers::flag::FLAG_TRUE
);
deserializationBytecode = DynamicFastBuffers::BytecodeAPI::generateBytecode(
	structTypecode,
	DynamicFastBuffers::flag::FLAG_FALSE
);

--------------------------------------------------------------------------------------------------------------

DynamicFastBuffers::SerializerAPI::serialize(
	(void*) &inputStruct,
	serializationBytecode,
	&cdr
);

cdr.reset();

DynamicFastBuffers::SerializerAPI::deserialize(
	(void*) &outputStruct,
	serializationBytecode,
	&cdr
);
DynamicFastBuffers::TypecodeAPI::deleteTypecode(structTypecode);