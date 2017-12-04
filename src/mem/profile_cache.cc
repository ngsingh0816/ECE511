//
//  profile_cache.cc
//
//

#include "mem/profile_cache.hh"

#include "sim/system.hh"

ProfileCache::ProfileCache() {
}

ProfileCache::~ProfileCache() {
}

void ProfileCache::init() {
}

void ProfileCache::addProfile(ProfileData* data) {
    if (!data)
        panic("Null profile encountered\n");
    profiles.push_back(*data);

    printf("Profile read\n");
}

unsigned int ProfileCache::numProfiles() {
    return profiles.size();
}

ProfileData& ProfileCache::profileAtIndex(unsigned int index) {
    if (index >= profiles.size())
        panic("Profile index out of bounds\n");
    return profiles[index];
}
