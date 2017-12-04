//
//  profile_cache
//
//

#ifndef __MEM_PROFILE_CACHE_HH__
#define __MEM_PROFILE_CACHE_HH__

#include <vector>

struct ProfileData {
    // TODO: fill this out
    /* Ex:
     Addr addressStart;
     Addr addressEnd;
     std::vector<uint32_t> PHT;
     etc,...
     */
};

class ProfileCache {
public:
    ProfileCache();
    ~ProfileCache();

    // TODO: add any configurations to this
    void init();

    void addProfile(ProfileData* data);
    unsigned int numProfiles();
    ProfileData& profileAtIndex(unsigned int index);
private:
    std::vector<ProfileData> profiles;
};

#endif /* __MEM_PROFILE_CACHE_HH__ */
