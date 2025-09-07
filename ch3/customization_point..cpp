namespace std {
    template<typename T, typename... Args>
    unique_ptr<T> make_unique(Args&&... args); 
} // namespace std

// Make unique doesn't provide customization point 

