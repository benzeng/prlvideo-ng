
undefined8
FUN_100d1d2c0(long param_1,int param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(param_4 | param_3);
  if ((int)(param_4 | param_3) < 0) {
    uVar2 = 0;
    if (param_2 != 1) {
      return 0;
    }
    if ((((*(char *)(param_1 + 0x10) == '\0') && (uVar2 = 1, *(char *)(param_1 + 0x11) == '\0')) &&
        (uVar2 = 2, *(char *)(param_1 + 0x12) == '\0')) &&
       (uVar2 = 3, *(char *)(param_1 + 0x13) == '\0')) {
      return 0;
    }
    *param_5 = (uint)(uVar2 >> 1);
    uVar3 = 0;
    *param_6 = (uint)uVar2 & 1;
  }
  else {
    if (param_2 == 1) {
      uVar1 = param_4 + param_3 * 2;
      if (3 < uVar1) {
        return 0;
      }
      uVar3 = (ulong)(int)uVar1;
      if (*(char *)(param_1 + 0x10 + uVar3) == '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x10 + uVar3) = 0;
    }
    *param_5 = param_3;
    *param_6 = param_4;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

