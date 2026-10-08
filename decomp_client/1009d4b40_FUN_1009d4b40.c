
void FUN_1009d4b40(undefined8 *param_1)

{
  mach_port_t mVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_1022365e0;
  FUN_1009ceeb0(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)PTR__mach_task_self__1021e1c58;
  mVar1 = _mach_thread_self();
  *(mach_port_t *)((long)param_1 + 0x34) = mVar1;
  *(undefined4 *)(param_1 + 7) = 0x1000007;
  iVar2 = _getpagesize();
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = (long)iVar2;
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
    pvVar6 = (void *)param_1[0xf];
    lVar4 = param_1[0x10];
  }
  else {
    lVar3 = param_1[0x13];
    lVar4 = 0;
    pvVar6 = (void *)0x0;
  }
  pvVar5 = (void *)(lVar3 - (lVar4 - (long)pvVar6 & 0xfffffffffffffff0U));
  _memcpy(pvVar5,pvVar6,lVar4 - (long)pvVar6);
  param_1[0xf] = pvVar5;
  param_1[0x10] = lVar3;
  param_1[0x11] = lVar3 + 0x100;
  FUN_1009d4d30();
  return;
}

