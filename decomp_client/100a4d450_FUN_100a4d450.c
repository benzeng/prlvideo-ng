
undefined1 FUN_100a4d450(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 uVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  QByteArray::QByteArray((QByteArray *)&local_30,0x1c,'\0');
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_30 + 0x10);
  *(undefined4 *)(local_30 + lVar1) = param_2;
  *(undefined4 *)(local_30 + lVar1 + 4) = param_3;
  uVar2 = FUN_100a4d340(param_1,0x1f,local_30 + *(long *)(local_30 + 0x10),*(uint *)(local_30 + 4));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return uVar2;
}

