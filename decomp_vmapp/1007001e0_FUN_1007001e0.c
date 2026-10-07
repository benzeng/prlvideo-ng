
undefined8 FUN_1007001e0(long *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  uint local_34;
  
  if ((void *)param_1[0x44] != (void *)0x0) {
    _free((void *)param_1[0x44]);
  }
  if ((void *)param_1[0x45] != (void *)0x0) {
    _free((void *)param_1[0x45]);
  }
  ___bzero(param_1 + 4,0x210);
  iVar2 = FUN_1007000e0(param_1);
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      return 1;
    }
    if (iVar2 == 0x200) {
      cVar1 = *(char *)((long)param_1 + 0xbc);
      if (cVar1 == 'K') {
        uVar3 = FUN_1006fe320((long)param_1 + 0x9c);
        iVar6 = (int)(((uint)((int)uVar3 >> 0x1f) >> 0x17) + uVar3) >> 9;
        local_34 = uVar3 & 0x1ff;
        iVar2 = (uint)((uVar3 & 0x1ff) != 0) + iVar6;
        pvVar4 = _malloc((long)(iVar2 * 0x200));
        param_1[0x45] = (long)pvVar4;
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        if (0 < iVar2) {
          iVar2 = iVar6 + 1 + (uint)(local_34 != 0);
          do {
            iVar6 = (**(code **)(*param_1 + 0x10))(param_1[2],pvVar4,0x200);
            if (iVar6 != 0x200) goto LAB_1007003f3;
            pvVar4 = (void *)((long)pvVar4 + 0x200);
            iVar2 = iVar2 + -1;
          } while (1 < iVar2);
        }
        iVar2 = FUN_1007000e0(param_1);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        if (iVar2 != 0x200) goto LAB_1007003f8;
        cVar1 = *(char *)((long)param_1 + 0xbc);
      }
      if (cVar1 == 'L') {
        uVar3 = FUN_1006fe320((long)param_1 + 0x9c);
        iVar6 = (int)(((uint)((int)uVar3 >> 0x1f) >> 0x17) + uVar3) >> 9;
        local_34 = uVar3 & 0x1ff;
        iVar2 = (uint)((uVar3 & 0x1ff) != 0) + iVar6;
        pvVar4 = _malloc((long)(iVar2 * 0x200));
        param_1[0x44] = (long)pvVar4;
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        if (0 < iVar2) {
          iVar2 = iVar6 + 1 + (uint)(local_34 != 0);
          do {
            iVar6 = (**(code **)(*param_1 + 0x10))(param_1[2],pvVar4,0x200);
            if (iVar6 != 0x200) goto LAB_1007003f3;
            pvVar4 = (void *)((long)pvVar4 + 0x200);
            iVar2 = iVar2 + -1;
          } while (1 < iVar2);
        }
        iVar2 = FUN_1007000e0(param_1);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        if (iVar2 != 0x200) goto LAB_1007003f8;
      }
      return 0;
    }
    piVar5 = ___error();
    *piVar5 = 0x16;
  }
  return 0xffffffff;
LAB_1007003f3:
  if (iVar6 == -1) {
    return 0xffffffff;
  }
LAB_1007003f8:
  piVar5 = ___error();
  *piVar5 = 0x16;
  return 0xffffffff;
}

