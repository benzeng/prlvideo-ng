
void FUN_100ad3ab0(long param_1,undefined8 param_2)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QByteArray::QByteArray((QByteArray *)&local_38,0x50,'\0');
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  lVar3 = *(long *)(local_38 + 0x10);
  *(undefined4 *)(local_38 + lVar3) = 0x14;
  *(undefined4 *)(local_38 + lVar3 + 8) = 0x50;
  *(uint *)(local_38 + lVar3 + 0x28) = (uint)*(byte *)(param_1 + 0xac8);
  FUN_1000abcb0(&local_40,param_2);
  if (*(int *)(local_40 + 0xc) == *(int *)(local_40 + 8)) {
    FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),&local_38);
  }
  else {
    pDVar2 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
    do {
      FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),**(undefined8 **)pDVar2,&local_38);
      pDVar2 = pDVar2 + 8;
    } while (pDVar2 != local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ad3bef;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_100ad3bef:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

