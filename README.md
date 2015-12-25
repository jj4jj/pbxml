# pbxml
protobuf convert each other with xml 

##install##
protobuf


##compile##
make


##test##
```
./test

<?xml version="1.0" encoding="utf-8" ?>
    <Config type="Config">
    <name>string value</name>
    <desc>string value</desc>
    <version>string value</version>

    <scs type="SubConf">
        <id>1</id>
        <value>2</value>
        <desc>desc sub</desc>
    </scs>
    <scs type="SubConf">
        <id>2345</id>
        <value>2</value>
        <desc>for testing desc seted</desc>
    </scs>

</Config>

==================================
name: "string value"
desc: "string value"
version: "string value"
scs {
    id: 1
    value: 2
    desc: "desc sub"
}
scs {
    id: 2345
    value: 2
    desc: "for testing desc seted"
}
```
