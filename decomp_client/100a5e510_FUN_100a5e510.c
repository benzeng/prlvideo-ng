
void FUN_100a5e510(long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar1 = *(int *)(*param_2 + 4);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  lVar2 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar2) = param_3;
  *(int *)(local_40 + lVar2 + 4) = iVar1 + 8;
  _memcpy(local_40 + lVar2 + 8,(void *)(*param_2 + *(long *)(*param_2 + 0x10)),(long)iVar1);
  FUN_100a4a170(param_1 + 0x10,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4));
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

