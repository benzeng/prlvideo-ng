
undefined4 FUN_1000871d0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_10226c7d8 == 0) {
      DAT_10226c7d8 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
    }
    if (DAT_10226c7d8 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_10226c7d8);
      goto LAB_100087264;
    }
  }
  uVar2 = 0x113;
  if (param_3 == 0) {
    uVar2 = 0x13;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_1000872f0,FUN_100087300,4,uVar2,0);
LAB_100087264:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

