class Engine 
{
    public:
        virtual ~Engine() = default;
        virtual void start() = 0;
        virtual void stop() = 0;
        // More engine specific functions 

        private:
        
}

