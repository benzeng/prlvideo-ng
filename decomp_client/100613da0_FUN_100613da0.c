
undefined4 FUN_100613da0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102274888 == 0) {
      DAT_102274888 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
    }
    if (DAT_102274888 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102274888);
      goto LAB_100613e34;
    }
  }
  uVar2 = 0x113;
  if (param_3 == 0) {
    uVar2 = 0x13;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_100613ff0,FUN_100614000,4,uVar2,0);
LAB_100613e34:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

