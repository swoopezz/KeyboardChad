#include "FileUtil.hpp"
#include <fstream>
#include <pwd.h>
#include <unistd.h>


namespace utils {
    bool fileExists(const std::string& path) {
        std::ifstream f(path);
        return f.good();
    }

    void mkdir(std::filesystem::path& path) {
        namespace fs = std::filesystem;
        fs::create_directories(path);
    }
    
    void copy(std::filesystem::path& from, std::filesystem::path& to) {
        std::filesystem::copy_file(from, to);
    }
    
    std::optional<std::filesystem::path> getHome() {
        if (const char* home = getenv("HOME")) {
            if (home[0] != '\0')
                return std::filesystem::path(home);
        }
    
        struct passwd* pw = getpwuid(getuid());
        if (pw && pw->pw_dir && pw->pw_dir[0] != '\0') {
            return std::filesystem::path(pw->pw_dir);
        }
            
        return std::nullopt;
    }
}
