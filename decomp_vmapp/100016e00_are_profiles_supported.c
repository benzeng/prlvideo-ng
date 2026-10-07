
/* CVmProfileHelper::are_profiles_supported(unsigned int) */

undefined4 CVmProfileHelper::are_profiles_supported(uint param_1)

{
  return CONCAT31((int3)(param_1 - 0x801 >> 8),
                  -(param_1 - 0x806 < 0xb) & (param_1 == 0x8ff || param_1 - 0x801 < 0x10));
}

