
void FUN_100ad3cf0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  undefined8 *puVar4;
  long lVar5;
  Data *local_50;
  undefined *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_40,0x50,'\0');
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  lVar5 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar5) = 0x19;
  *(undefined4 *)(local_40 + lVar5 + 8) = 0x50;
  *(uint *)(local_40 + lVar5 + 0x28) = (uint)*(byte *)(param_1 + 0xae0);
  puVar2 = PTR_shared_null_1021e15e8;
  local_48 = PTR_shared_null_1021e15e8;
  FUN_1000abcb0(&local_50,&local_48);
  if (*(int *)(local_50 + 0xc) == *(int *)(local_50 + 8)) {
    FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),&local_40);
  }
  else {
    pDVar3 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
    do {
      FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),**(undefined8 **)pDVar3,&local_40);
      pDVar3 = pDVar3 + 8;
    } while (pDVar3 != local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad3e2f;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar5 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_50 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100ad3e2f:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad3e93;
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
LAB_100ad3e93:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return;
}

