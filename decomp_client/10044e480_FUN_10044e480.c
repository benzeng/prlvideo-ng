
undefined4 FUN_10044e480(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  uVar2 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
  local_30 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_28,uVar2,&local_30,0);
  uVar1 = QVariant::toUInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar1;
}

