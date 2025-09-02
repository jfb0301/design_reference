template<>
struct std::hash<CustomType>
{
    std::size_t operator()(customType const& v) const nonexcept {
        return { /* ... */ }
    }
};

