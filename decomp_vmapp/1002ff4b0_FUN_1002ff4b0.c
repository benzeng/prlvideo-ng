
void FUN_1002ff4b0(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_100bbb8f0;
  FUN_1002a53f0(param_1[2],0x8130,0x813f);
  uVar2 = (ulong)DAT_1011c8100;
  uVar3 = 0;
  if (DAT_1011c8100 != 0) {
    do {
      pvVar1 = *(void **)(DAT_1011c80f8 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_10030bd20(pvVar1);
        operator_delete(pvVar1);
        uVar2 = (ulong)DAT_1011c8100;
      }
      *(undefined8 *)(DAT_1011c80f8 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = (ulong)DAT_1011c80e8;
  uVar3 = 0;
  if (DAT_1011c80e8 != 0) {
    do {
      pvVar1 = *(void **)(DAT_1011c80e0 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_10030b4a0(pvVar1);
        operator_delete(pvVar1);
        uVar2 = (ulong)DAT_1011c80e8;
      }
      *(undefined8 *)(DAT_1011c80e0 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_1011c8108 != (void *)0x0) {
    operator_delete__(DAT_1011c8108);
  }
  DAT_1011c8108 = (void *)0x0;
  DAT_1011c8110 = 0;
  if (DAT_1011c8118 != (void *)0x0) {
    operator_delete__(DAT_1011c8118);
  }
  DAT_1011c8118 = (void *)0x0;
  DAT_1011c8120 = 0;
  FUN_1002a6e00(param_1);
  return;
}

