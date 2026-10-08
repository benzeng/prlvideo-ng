
bool FUN_100b706c0(void)

{
  int iVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  QString::toLatin1();
  if ((1 < *(uint *)local_20) || (*(long *)(local_20 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_20,*(uint *)(local_20 + 4) + 1,*(uint *)(local_20 + 8) >> 0x1f);
  }
  iVar1 = FUN_100b92430(local_20 + *(long *)(local_20 + 0x10),0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return iVar1 != 0;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return iVar1 != 0;
}

