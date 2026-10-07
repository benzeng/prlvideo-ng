
undefined4 FUN_1006c4580(void)

{
  undefined4 uVar1;
  string local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  string local_38;
  undefined1 local_37 [15];
  undefined1 *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QString::toUtf8();
  std::string::__init((char *)&local_38,(ulong)(local_20 + *(long *)(local_20 + 0x10)));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006c45e0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_1006c45e0:
  std::string::__init((char *)&local_50,0x100ae6e22);
  std::string::append((char *)&local_50);
  if (((byte)local_38 & 1) == 0) {
    local_28 = local_37;
  }
  std::string::append((char *)&local_50,(ulong)local_28);
  std::string::append((char *)&local_50);
  std::string::append((char *)&local_50);
  if (((byte)local_50 & 1) == 0) {
    local_40 = local_4f;
  }
  uVar1 = FUN_1007d8970(local_40);
  std::string::~string(&local_50);
  std::string::~string(&local_38);
  return uVar1;
}

