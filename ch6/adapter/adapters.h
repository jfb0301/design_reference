class JSONExportable
{
    public:
        // ...

        virtual ~JSONExportable() = default; 

        virtual void exportJSON(/*  ... */) const = 0; 
        //...
};

class Serializable 
{
    public:
        //  ...
        virtual ~Serializable() = default; 

        virtual void ~Serializable(ByteStream& bs, /* */ ) const = 0;

};

class Document : public  JSONExportable
               , public  Serializable
{
    public:
        // ... 
}; 

class OpenPages
{
    public:
        // ... 
        void convertToBytes( /* ... */ ); 
};

void exportToJSONFormat( OpenPages const& pages, /* ... */ );


class Pages : public Document
{
    public:
        // ...
        void exportJSON( /* ...*/ ) const override
        {
            exportToJSONFormat(pages, /*...*/);
        }

        void serialize( ByteStream& bs, /* ... */) const override
        {
            pages.convertToBytes(/*...*/);
        }

    private:
        OpenPages pages; 
}; 

// Class adapter