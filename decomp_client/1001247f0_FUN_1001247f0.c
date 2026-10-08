
bool FUN_1001247f0(void)

{
  int iVar1;
  QArrayData *local_20;
  
  QString::toUtf8();
  iVar1 = FUN_100dfaa00(local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100124847;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100124847:
  return iVar1 == 0;
}

