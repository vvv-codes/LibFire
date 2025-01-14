#ifndef FIRE_VERSION_INCLUDED
#define FIRE_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define FIRE_VERSION_MAJOR 1
#define FIRE_VERSION_MINOR 0
#define FIRE_VERSION_PATCH 3
#define FIRE_VERSION_BETA 0
#define FIRE_VERSION_VERSTRING   \
	MAKE_STR(FIRE_VERSION_MAJOR) \
	"." MAKE_STR(FIRE_VERSION_MINOR) "." MAKE_STR(FIRE_VERSION_PATCH) "." MAKE_STR(FIRE_VERSION_BETA)

#endif
