
void FUN_100ac5720(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  QByteArray::QByteArray((QByteArray *)&local_30,0x50,'\0');
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_30 + 0x10);
  *(undefined4 *)(local_30 + lVar1 + 8) = 0x50;
  *(undefined4 *)(local_30 + lVar1 + 0x20) = 0;
  *(undefined4 *)(local_30 + lVar1) = 0x17;
  *(undefined4 *)(local_30 + lVar1 + 0x28) = param_2;
  FUN_100ad3560(param_1,&local_30,param_3);
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

