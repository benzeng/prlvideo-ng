
undefined1
FUN_1006cafa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14)

{
  long lVar1;
  char in_AL;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  long local_60;
  int local_58;
  undefined4 local_54;
  long *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_e8 = param_1;
    local_d8 = param_2;
    local_c8 = param_3;
    local_b8 = param_4;
    local_a8 = param_5;
    local_98 = param_6;
    local_88 = param_7;
    local_78 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = local_118;
  local_50 = (long *)&stack0x00000008;
  local_54 = 0x30;
  local_58 = 0x18;
  local_100 = param_12;
  local_f8 = param_13;
  local_f0 = param_14;
  local_60 = param_9;
  local_38 = lVar1;
  do {
    lVar5 = local_60;
    if (param_11 == 0) break;
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar5 == 0) break;
    lVar5 = _CFGetTypeID(lVar5);
    if (lVar5 != lVar4) break;
    uVar7 = (ulong)local_58;
    if (uVar7 < 0x29) {
      local_58 = local_58 + 8;
      plVar6 = (long *)(local_48 + uVar7);
    }
    else {
      plVar6 = local_50;
      local_50 = local_50 + 1;
    }
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      _CFDictionarySetValue(local_60,param_11,param_10);
      uVar3 = 1;
      goto LAB_1006cb0bc;
    }
    cVar2 = _CFDictionaryGetValueIfPresent(local_60,param_11,&local_60);
    param_11 = lVar5;
  } while (cVar2 != '\0');
  uVar3 = 0;
LAB_1006cb0bc:
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

