/*
how to use a std::pmr::monotonic_buffer_resource as allocator to redirect all
memory allocations into a predefined byte buffer.
*/

#include <array>
#include <cstddef>
#include <csdtlib>
#include <memory_resource>
#include <string>
#include <vector>

int main() {
    std::array<std::byte, 1000> raw; 

    std::pmr::monotonic_buffer_resource
        buffer{ raw.data(), raw.size(), std::pmr::null_memory_resource() };

        std::pmr::vector<std::prm::string> strings{ buffer }; 

        strings.emplace_back( "A string longer than what 550 can handle");
        strings.emplace_back( "Another long string going beyond 550");
        strings.emplace_back( "Another long string going beyond 550");

        // ... 

        return EXIT_SUCCESS;
    }


