
void FUN_10030afb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  
  *param_1 = param_2;
  param_1[1] = 0x84f500008058;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  FUN_10030b0f0(param_1,param_3,param_4);
  uVar6 = (ulong)DAT_1011c80e8;
  pvVar5 = DAT_1011c80e0;
  uVar3 = DAT_1011c80e8;
  if (1 < uVar6) {
    uVar4 = 1;
    do {
      if (*(long *)((long)DAT_1011c80e0 + uVar4 * 8) == 0) {
        uVar6 = uVar4 & 0xffffffff;
        goto LAB_10030b0cc;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  uVar1 = DAT_1011c80e8 * 2;
  if (DAT_1011c80e8 < uVar1) {
    pvVar5 = operator_new__((ulong)uVar1 << 3);
    pvVar2 = DAT_1011c80e0;
    _memcpy(pvVar5,DAT_1011c80e0,uVar6 * 8);
    ___bzero((void *)((long)pvVar5 + uVar6 * 8),uVar6 * 8);
    uVar3 = uVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
LAB_10030b0cc:
  DAT_1011c80e8 = uVar3;
  DAT_1011c80e0 = pvVar5;
  *(undefined8 **)((long)DAT_1011c80e0 + uVar6 * 8) = param_1;
  *(int *)((long)param_1 + 100) = (int)uVar6 + DAT_1011c80d8;
  return;
}

