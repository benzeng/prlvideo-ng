
undefined8 FUN_100ad4780(long param_1)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  undefined8 *puVar4;
  long lVar5;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  QArrayData *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  FUN_100ad4d20();
  puVar2 = PTR_shared_null_1021e15e8;
  local_40 = PTR_shared_null_1021e15e8;
  FUN_100ad3870(param_1,1,&local_40);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad4823;
    }
    iVar1 = *(int *)(puVar2 + 0xc);
    if (iVar1 != *(int *)(puVar2 + 8)) {
      lVar5 = (long)*(int *)(puVar2 + 8) * 8 + (long)iVar1 * -8;
      puVar4 = (undefined8 *)(puVar2 + (long)iVar1 * 8 + 8);
      do {
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_100ad4823:
  local_48 = puVar2;
  FUN_100ad3450(&local_50,param_1,param_1 + 0x990);
  FUN_1000abcb0(&local_58,&local_48);
  FUN_100ad31f0(param_1,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad48bf;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100ad48bf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad48ef;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100ad48ef:
  FUN_1000abcb0(&local_60,&local_48);
  FUN_100ad3ab0(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad496f;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar5 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_60 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_100ad496f:
  FUN_1000abcb0(&local_68,&local_48);
  FUN_100ad4000(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad49ef;
    }
    iVar1 = *(int *)(local_68 + 0xc);
    if (iVar1 != *(int *)(local_68 + 8)) {
      lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_68 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_100ad49ef:
  FUN_100ade530(param_1 + 0xa38);
  *(undefined1 *)(param_1 + 0xad0) = 0;
  FUN_100ade660(*(undefined8 *)(param_1 + 0xa58),0);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 1;
      }
    }
    iVar1 = *(int *)(puVar2 + 0xc);
    if (iVar1 != *(int *)(puVar2 + 8)) {
      lVar5 = (long)*(int *)(puVar2 + 8) * 8 + (long)iVar1 * -8;
      puVar4 = (undefined8 *)(puVar2 + (long)iVar1 * 8 + 8);
      do {
        if ((void *)*puVar4 != (void *)0x0) {
          operator_delete((void *)*puVar4);
        }
        puVar4 = puVar4 + -1;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return 1;
}

