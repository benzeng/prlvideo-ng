
undefined1 FUN_10009fca0(long param_1,long *param_2,size_t *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  undefined1 uVar9;
  void *pvVar10;
  
  lVar4 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar4 + 4);
  sVar5 = *param_3;
  pvVar7 = operator_new__((long)iVar2 + 0x1b + sVar5,(nothrow_t *)PTR_nothrow_1021e1620);
  plVar8 = operator_new(0x18);
  *(undefined4 *)(plVar8 + 1) = 1;
  plVar8[2] = (long)pvVar7;
  *plVar8 = (long)&PTR_FUN_102282990;
  if (pvVar7 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    pvVar10 = (void *)0x0;
    if (*param_2 != 0) {
      pvVar10 = *(void **)(*param_2 + 0x10);
    }
    _memcpy(pvVar7,pvVar10,sVar5);
    *(int *)((long)pvVar7 + 0xc) = (int)sVar5;
    *(undefined8 *)((long)pvVar7 + sVar5) = 0x100000010;
    *(undefined8 *)((long)pvVar7 + sVar5 + 8) = 0x10;
    *(undefined4 *)((long)pvVar7 + sVar5 + 0x10) = 1;
    uVar3 = *(uint *)(lVar4 + 4);
    *(uint *)((long)pvVar7 + sVar5 + 0x14) = uVar3;
    _memcpy((void *)((long)pvVar7 + sVar5 + 0x18),(void *)(lVar4 + *(long *)(lVar4 + 0x10)),
            (ulong)uVar3);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar6 = (long *)*param_2;
    *param_2 = (long)plVar8;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *param_3 = *param_3 + (long)iVar2 + 0x1b;
    uVar9 = 1;
  }
  LOCK();
  plVar6 = plVar8 + 1;
  lVar4 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return uVar9;
}

