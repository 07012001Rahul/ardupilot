# for now we make this define, but we should migrate from this to much
#  more specific defines - added below.
define HAL_MINIMIZE_FEATURES 1

# disable emitting nice strings when activating RC channel aux functions:
define AP_RC_CHANNEL_AUX_FUNCTION_STRINGS_ENABLED 0

# low-end boards aren't expected to be used in environments where
# things like satellite communications are required:
define HAL_HIGH_LATENCY2_ENABLED 0