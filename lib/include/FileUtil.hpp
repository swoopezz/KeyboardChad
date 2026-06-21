#include <string>
#include <filesystem>
#include <optional>

namespace utils {
    bool fileExists(const std::string& path);
    void mkdir(std::filesystem::path& path);
    void copy(std::filesystem::path& from, std::filesystem::path& to);
    std::optional<std::filesystem::path> getHome();
}
