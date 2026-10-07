
long FUN_1006c98a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 local_118 [16];
  undefined8 local_108;
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
  local_58 = 0x10;
  local_108 = param_11;
  local_100 = param_12;
  local_f8 = param_13;
  local_f0 = param_14;
  local_60 = param_9;
  local_38 = lVar1;
  if (param_10 != 0) {
    lVar3 = _CFDictionaryGetTypeID();
    if (param_9 != 0) {
      do {
        lVar4 = _CFGetTypeID(param_9);
        if ((lVar4 != lVar3) ||
           (cVar2 = _CFDictionaryGetValueIfPresent(local_60,param_10,&local_60), param_9 = local_60,
           cVar2 == '\0')) break;
        uVar6 = (ulong)local_58;
        if (uVar6 < 0x29) {
          local_58 = local_58 + 8;
          plVar5 = (long *)(local_48 + uVar6);
        }
        else {
          plVar5 = local_50;
          local_50 = local_50 + 1;
        }
        param_10 = *plVar5;
        if (param_10 == 0) goto LAB_1006c99cd;
        lVar3 = _CFDictionaryGetTypeID();
      } while (param_9 != 0);
    }
    param_9 = 0;
  }
LAB_1006c99cd:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_9;
}

