
#include <optional>
#include <string>
#include <vector>

namespace Configuration {
struct Encryption_t {
  std::string ServerCert;
  std::string ServerKey;
  std::vector<std::string> TrustedClients;
  std::vector<std::string> IssuerCerts;
  std::vector<std::string> Revocation;
  /**
  std::string TrustedClientsDir;
  std::string IssuerDir;
  std::string RevocationDir;
  */
};

struct UserPassAuthentication_t {
  std::string Username;
  std::string Password;
};

struct Configuration {
  std::optional<std::string> Hostname;
  std::optional<std::vector<UserPassAuthentication_t>> UserPassAuthentication;
  std::optional<Encryption_t> Encryption;
};

Configuration DefaultConfiguration();

}  // namespace Configuration
