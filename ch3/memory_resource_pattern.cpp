

namespace std::pmr {

class memory_resource 
{
    public:
        // ... a virtual destructor, constructor and assigment operators
    [[nodiscard]] void* allocate(size_t bytes, size_t alligment);
    void deallocate(void* p, size_t bytes, size_t alligment);
    bool is_equal(memory_resource const& other) const noexcept;

    private:
        virtual void* do_allocate(size_t bytes, size_t alligment) = 0;
        virtual void* do_deallocated(size_t bytes, size_t alligment) = 0 ;
        virtual void* do_is_equal(memory_resource const& other) const noexcept = 0;
};

} // namespace std::pmr