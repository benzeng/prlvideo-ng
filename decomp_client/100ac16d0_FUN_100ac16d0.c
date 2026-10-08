
void FUN_100ac16d0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_40,uVar3);
  lVar2 = FUN_1000a9690(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac1753;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ac1753:
  if (lVar2 == 0) {
    return;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100abc0e0(param_1 + 0x28,&local_48,param_3,param_4,param_5,param_6);
  QByteArray::QByteArray((QByteArray *)&local_50,0x50,'\0');
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_50 + 0x10);
  *(undefined4 *)(local_50 + lVar1) = 0x1d;
  *(int *)(local_50 + lVar1 + 8) = *(int *)(local_48 + 4) + 0x50;
  QByteArray::append((QByteArray *)&local_50);
  FUN_1000b7920(lVar2,param_2,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac1822;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100ac1822:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return;
}

