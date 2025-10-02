class Database final 
{ 
    public: 
        static Database& instance()
        {
            static Database db; 
            return db; 
        }

        bool write( /*  Some arguments */ )
        bool read( /*  Some arguments */ ) const; 

        // Potentially access to data membeers
    private:
        Database() {}
        Database( Database const& ) = delete;
        Database& operator=( Database const& ) = delete; 
        Database( Database&& ) = delete; 
        Database& operator=( Database& ) = delete; 

        // Potentially some data members
}