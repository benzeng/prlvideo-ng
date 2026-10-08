
undefined1 FUN_100dda580(void)

{
  undefined1 uVar1;
  string local_38 [24];
  QArrayData *local_20;
  undefined1 local_11;
  
  QString::toUtf8();
  std::string::__init((char *)local_38,(ulong)(local_20 + *(long *)(local_20 + 0x10)));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dda5e0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100dda5e0:
  uVar1 = FUN_100deae00(local_38);
  std::string::~string(local_38);
  return uVar1;
}

