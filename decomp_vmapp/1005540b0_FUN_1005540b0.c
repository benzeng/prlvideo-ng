
undefined8 * FUN_1005540b0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)((long)param_1 + 0x24);
  puVar5 = _valloc(0x1000);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1008e3970("","TransMem",0,"ss_clone() failed to allocate storage map");
    return (undefined8 *)0x0;
  }
  uVar9 = iVar1 * 4 + 0xfffU & 0xfffff000;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[7] = param_1[7];
  puVar5[6] = param_1[6];
  puVar5[5] = param_1[5];
  puVar5[4] = param_1[4];
  puVar5[3] = param_1[3];
  puVar5[2] = param_1[2];
  uVar3 = *param_1;
  puVar5[1] = param_1[1];
  *puVar5 = uVar3;
  pvVar4 = (void *)param_1[8];
  pvVar6 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    pvVar6 = _valloc((long)(int)uVar9);
    puVar5[8] = pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_1008e3970("","TransMem",0,"ss_clone() failed to allocate block index");
      goto LAB_1005542e6;
    }
    _memcpy(pvVar6,pvVar4,(long)(int)uVar9);
  }
  pvVar4 = (void *)param_1[9];
  pvVar7 = (void *)0x0;
  if (pvVar4 == (void *)0x0) {
LAB_10055421d:
    pvVar4 = (void *)param_1[10];
    if (pvVar4 == (void *)0x0) {
      return puVar5;
    }
    pvVar8 = _valloc((long)(int)uVar9);
    puVar5[10] = pvVar8;
    if (pvVar8 != (void *)0x0) {
      _memcpy(pvVar8,pvVar4,(long)(int)uVar9);
      return puVar5;
    }
    FUN_1008e3970("","TransMem",0,"ss_clone() failed to allocate compression index");
    _free(pvVar6);
    pvVar6 = pvVar7;
  }
  else {
    uVar10 = (ulong)((iVar1 * iVar2 + 0x1fU >> 5) * 4 + 0xfff & 0x3ffff000);
    pvVar7 = _valloc(uVar10);
    puVar5[9] = pvVar7;
    if (pvVar7 != (void *)0x0) {
      _memcpy(pvVar7,pvVar4,uVar10);
      goto LAB_10055421d;
    }
    FUN_1008e3970("","TransMem",0,"ss_clone() failed to allocate page bitmap");
  }
  _free(pvVar6);
LAB_1005542e6:
  _free(puVar5);
  return (undefined8 *)0x0;
}

