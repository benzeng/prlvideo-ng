
void FUN_100ad3560(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_48;
  Data *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = param_3;
  FUN_1000aaa10(&local_40,&local_38);
  FUN_1000abcb0(&local_48,&local_40);
  if (*(int *)(local_48 + 0xc) == *(int *)(local_48 + 8)) {
    FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),param_2);
  }
  else {
    pDVar2 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
    do {
      FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),**(undefined8 **)pDVar2,param_2);
      pDVar2 = pDVar2 + 8;
    } while (pDVar2 != local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ad365f;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100ad365f:
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

