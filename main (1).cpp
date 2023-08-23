class University {
private:
    static University* instance;

    // Private constructor to prevent instantiation from outside
    University() {}

public:
    // Static method to get the instance
    static University* getInstance() {
        if (instance == nullptr) {
            instance = new University();
        }

        return instance;
    }

    // Other member functions
    void enrollStudent(const std::string& studentName) {
        // Implementation
        std::cout << "Enrolling student: " << studentName << std::endl;
    }
};

// Initialize the instance as nullptr
University* University::instance = nullptr;

int main() {
    // Get the University instance
    University* university = University::getInstance();

    // Enroll students
    university->enrollStudent("Alice");
    university->enrollStudent("Bob");

    return 0;
}