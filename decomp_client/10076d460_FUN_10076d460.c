
undefined1 FUN_10076d460(void)

{
  undefined1 uVar1;
  QString local_28;
  QDir local_20 [15];
  undefined1 local_11;
  
  local_28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("/Applications/Acronis True Image.app",0x24);
  QDir::QDir(local_20,&local_28);
  uVar1 = QDir::exists();
  QDir::~QDir(local_20);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar1;
}

