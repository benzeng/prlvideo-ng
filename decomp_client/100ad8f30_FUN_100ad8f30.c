
void FUN_100ad8f30(long param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  undefined8 *puVar4;
  long lVar5;
  Data *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0xad3) == param_2) {
    return;
  }
  *(char *)(param_1 + 0xad3) = param_2;
  puVar2 = PTR_shared_null_1021e15e8;
  local_40 = PTR_shared_null_1021e15e8;
  FUN_1000abcb0(&local_48,&local_40);
  FUN_100ad4000(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad8fef;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar5 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100ad8fef:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
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
  return;
}

