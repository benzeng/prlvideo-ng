
undefined8 * FUN_100a3f470(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined *local_38;
  undefined1 local_29;
  
  puVar4 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 8);
  plVar7 = (long *)(lVar2 + 0x10 + ((long)((*(int *)(lVar2 + 0xc) + -1) - iVar1) + (long)iVar1) * 8)
  ;
  uVar6 = (long)(*(int *)(lVar2 + 0xc) - iVar1);
  do {
    uVar8 = uVar6;
    if ((long)uVar8 < 1) {
      return param_1;
    }
    plVar3 = (long *)*plVar7;
    plVar7 = plVar7 + -1;
    uVar6 = uVar8 - 1;
  } while (*plVar3 != param_3);
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((undefined *)plVar3[1] != puVar4) {
    FUN_100a3f920(&local_38,plVar3 + 1);
    puVar5 = local_38;
    puVar4 = PTR_shared_null_1021e15e8;
    local_38 = PTR_shared_null_1021e15e8;
    *param_1 = puVar5;
    puVar5 = PTR_shared_null_1021e15e8;
    iVar1 = *(int *)puVar4;
    if (iVar1 != -1) {
      if (iVar1 != 0) {
        LOCK();
        *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
        local_29 = *(int *)puVar5 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a3f526;
      }
      FUN_100a3fda0(&local_38,puVar4);
    }
  }
LAB_100a3f526:
  FUN_100a40040(param_2,uVar8 - 1 & 0xffffffff);
  return param_1;
}

