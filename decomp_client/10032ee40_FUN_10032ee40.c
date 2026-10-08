
undefined1 FUN_10032ee40(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *local_20;
  
  QString::toUtf8();
  uVar1 = FUN_10032ec90(param_1,local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(local_20 + 4))
  ;
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return uVar1;
}

