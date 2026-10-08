
undefined4 FUN_100ae7f00(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  Data *pDVar3;
  undefined4 uVar4;
  uint uVar5;
  Data *pDVar6;
  Data **ppDVar7;
  long lVar8;
  Data *local_38;
  undefined1 local_2a;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  ppDVar7 = &local_38;
  if (param_2 == (undefined8 *)0x0) {
    ppDVar7 = (Data **)0x0;
  }
  uVar4 = FUN_100ae8080(param_1,ppDVar7);
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = *(uint *)(local_38 + 8);
    if ((int)uVar5 < (int)*(uint *)(local_38 + 0xc)) {
      if (1 < *(uint *)local_38) {
        FUN_100ae84c0(&local_38,*(uint *)(local_38 + 4));
        uVar5 = *(uint *)(local_38 + 8);
      }
      uVar2 = **(undefined8 **)(local_38 + (long)(int)uVar5 * 8 + 0x10);
      param_2[1] = (*(undefined8 **)(local_38 + (long)(int)uVar5 * 8 + 0x10))[1];
      *param_2 = uVar2;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0xffffffffffffffff;
    }
  }
  pDVar3 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_2a = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar8 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return uVar4;
}

