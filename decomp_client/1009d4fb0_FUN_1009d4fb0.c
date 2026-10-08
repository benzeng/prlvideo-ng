
void FUN_1009d4fb0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_1022365e0;
  FUN_1009ceeb0(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  *(int *)(param_1 + 6) = param_2;
  *(undefined4 *)((long)param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 7) = 0x1000007;
  iVar1 = _getpagesize();
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = (long)iVar1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = param_1 + 10;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  if ((ulong)param_1[0x14] < 0x100) {
    lVar3 = FUN_1009d79a0(param_1 + 10,0x100);
    pvVar5 = (void *)param_1[0xf];
    lVar4 = param_1[0x10];
  }
  else {
    lVar3 = param_1[0x13];
    lVar4 = 0;
    pvVar5 = (void *)0x0;
  }
  pvVar6 = (void *)(lVar3 - (lVar4 - (long)pvVar5 & 0xfffffffffffffff0U));
  _memcpy(pvVar6,pvVar5,lVar4 - (long)pvVar5);
  param_1[0xf] = pvVar6;
  param_1[0x10] = lVar3;
  param_1[0x11] = lVar3 + 0x100;
  if (*(int *)PTR__mach_task_self__1021e1c58 == param_2) {
    param_1[9] = 0;
    uVar2 = 0x1000007;
  }
  else {
    pvVar5 = operator_new(0x20);
    FUN_1009d1910(pvVar5,*(undefined4 *)(param_1 + 6));
    param_1[9] = pvVar5;
    uVar2 = *(undefined4 *)((long)pvVar5 + 4);
  }
  *(undefined4 *)(param_1 + 7) = uVar2;
  FUN_1009d4d30();
  return;
}

