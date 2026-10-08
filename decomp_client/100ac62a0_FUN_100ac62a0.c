
void FUN_100ac62a0(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  QByteArray::QByteArray((QByteArray *)&local_30,0x50,'\0');
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_30 + 0x10);
  *(undefined4 *)(local_30 + lVar1) = 0x18;
  *(undefined4 *)(local_30 + lVar1 + 8) = 0x164;
  QByteArray::append((char *)&local_30,param_3);
  FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),*param_2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

