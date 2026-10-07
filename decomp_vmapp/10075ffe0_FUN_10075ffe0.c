
uint FUN_10075ffe0(undefined8 param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                  ulong *param_6,undefined8 *param_7)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  uint local_48;
  uint local_44;
  ulong local_40;
  ulong local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 3) {
    cVar2 = (**(code **)(param_2 + 8))
                      (&local_38,8,
                       param_4 >> 0x24 & 0xff8 | *(ulong *)(param_3 + 0x90) & 0x1fffffff000);
    if (cVar2 == '\0') goto LAB_10076048c;
    *param_7 = 0x8000000000;
    if ((local_38 & 1) == 0) {
      return 1;
    }
    local_38 = local_38 & 0x1fffffff000;
    if (param_5 < local_38) {
      return 1;
    }
    if (local_38 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    cVar2 = (**(code **)(param_2 + 8))(&local_40,8,param_4 >> 0x1b & 0xff8 | local_38);
    if (cVar2 == '\0') goto LAB_10076048c;
    *param_7 = 0x40000000;
    if ((local_40 & 1) == 0) {
      return 1;
    }
    uVar4 = local_40 & 0x1fffffff000;
    if (param_5 < uVar4) {
      return 1;
    }
    if (uVar4 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    if ((local_40 & 0x80) != 0) {
      *param_6 = local_40 & 0x1ffc0000000;
      if ((param_4 & 0x3fffffff) != 0) {
        FUN_1008e3970("","dbgdump",0,"Large page for unexpected vaddr %llx");
        return 0xffffffe4;
      }
      uVar4 = local_40 & 0x1ffc0000000 | 0x3fffffff;
      goto LAB_100760593;
    }
    local_40 = uVar4;
    cVar2 = (**(code **)(param_2 + 8))(&local_50,8,param_4 >> 0x12 & 0xff8 | uVar4);
    if (cVar2 == '\0') goto LAB_10076048c;
    *param_7 = 0x200000;
    if ((local_50 & 1) == 0) {
      return 1;
    }
    uVar4 = local_50 & 0x1fffffff000;
    if (param_5 < uVar4) {
      return 1;
    }
    if (uVar4 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    if ((local_50 & 0x80) != 0) {
      uVar4 = local_50 & 0x1ffffe00000;
      *param_6 = uVar4;
      if ((param_4 & 0x1fffff) != 0) {
        FUN_1008e3970("","dbgdump",0,"Large page for unexpected vaddr %llx");
        return 0xffffffe1;
      }
      goto LAB_10076057c;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return 0xfffffff6;
      }
      uVar4 = *(ulong *)(param_3 + 0x98);
      cVar2 = (**(code **)(param_2 + 8))
                        (&local_44,4,
                         param_4 >> 0x14 & 0xffc | *(ulong *)(param_3 + 0x90) & 0xfffff000);
      if (cVar2 == '\0') goto LAB_10076048c;
      *param_7 = 0x400000;
      uVar3 = (ulong)local_44;
      if ((local_44 & 1) == 0) {
        return 1;
      }
      if (param_5 < (uVar3 & 0xfffff000)) {
        return 1;
      }
      if ((uVar3 & 0xfffff000) - 0xb0000000 < 0x50000000) {
        return 1;
      }
      if (((uVar4 & 0x10) != 0) && ((local_44 & 0x80) != 0)) {
        uVar4 = (uVar3 & 0x1fe000) << 0x13 | uVar3 & 0xffc00000;
        *param_6 = uVar4;
        if ((param_4 & 0x3fffff) != 0) {
          FUN_1008e3970("","dbgdump",0,"Large page for unexpected vaddr %llx");
          return 0xfffffff4;
        }
        uVar4 = uVar4 | 0x3fffff;
        goto LAB_100760593;
      }
      local_44 = local_44 & 0xfffff000;
      cVar2 = (**(code **)(param_2 + 8))(&local_48,4,param_4 >> 10 & 0xffc | (ulong)local_44);
      if (cVar2 == '\0') goto LAB_10076048c;
      *param_7 = 0x1000;
      if ((local_48 & 1) == 0) {
        return 1;
      }
      local_58 = (ulong)local_48 & 0xfffff000;
      goto joined_r0x000100760468;
    }
    cVar2 = (**(code **)(param_2 + 8))
                      (&local_40,8,
                       (param_4 >> 0x1b & 0xff8) + (*(ulong *)(param_3 + 0x90) & 0xffffffe0));
    if (cVar2 == '\0') goto LAB_10076048c;
    *param_7 = 0x40000000;
    if ((local_40 & 1) == 0) {
      return 1;
    }
    local_40 = local_40 & 0x1fffffff000;
    if (param_5 < local_40) {
      return 1;
    }
    if (local_40 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    cVar2 = (**(code **)(param_2 + 8))(&local_50,8,param_4 >> 0x12 & 0xff8 | local_40);
    if (cVar2 == '\0') goto LAB_10076048c;
    *param_7 = 0x200000;
    if ((local_50 & 1) == 0) {
      return 1;
    }
    uVar4 = local_50 & 0x1fffffff000;
    if (param_5 < uVar4) {
      return 1;
    }
    if (uVar4 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    if ((local_50 & 0x80) != 0) {
      uVar4 = local_50 & 0x1ffffe00000;
      *param_6 = uVar4;
      if ((param_4 & 0x1fffff) != 0) {
        FUN_1008e3970("","dbgdump",0,"Large page for unexpected vaddr %llx");
        return 0xffffffec;
      }
LAB_10076057c:
      uVar4 = uVar4 | 0x1fffff;
LAB_100760593:
      return (0x4fffffff < uVar4 - 0xb0000000 && uVar4 <= param_5) ^ 1;
    }
  }
  local_50 = uVar4;
  cVar2 = (**(code **)(param_2 + 8))(&local_58,8,param_4 >> 9 & 0xff8 | uVar4);
  if (cVar2 != '\0') {
    *param_7 = 0x1000;
    if ((local_58 & 1) == 0) {
      return 1;
    }
    local_58 = local_58 & 0x1fffffff000;
joined_r0x000100760468:
    if (param_5 < local_58) {
      return 1;
    }
    if (local_58 - 0xb0000000 < 0x50000000) {
      return 1;
    }
    *param_6 = local_58;
    return 0;
  }
LAB_10076048c:
  FUN_1008e3970("","dbgdump",0,"Read failed at vadd 0x%llx",param_4);
  return 0xffffffff;
}

