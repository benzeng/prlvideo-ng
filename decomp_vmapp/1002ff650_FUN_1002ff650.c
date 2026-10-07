
void FUN_1002ff650(void)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar2 = DAT_1011c8100;
  if (DAT_1011c8100 != 0) {
    do {
      pvVar1 = *(void **)(DAT_1011c80f8 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_10030bd20(pvVar1);
        operator_delete(pvVar1);
        uVar2 = DAT_1011c8100;
      }
      *(undefined8 *)(DAT_1011c80f8 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar3 = (ulong)DAT_1011c80e8;
  uVar4 = 0;
  if (DAT_1011c80e8 != 0) {
    do {
      pvVar1 = *(void **)(DAT_1011c80e0 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_10030b4a0(pvVar1);
        operator_delete(pvVar1);
        uVar3 = (ulong)DAT_1011c80e8;
      }
      *(undefined8 *)(DAT_1011c80e0 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

