
undefined4 FUN_1003deea0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102273e70 == 0) {
      DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
    }
    if (DAT_102273e70 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102273e70);
      goto LAB_1003def34;
    }
  }
  uVar2 = 0x113;
  if (param_3 == 0) {
    uVar2 = 0x13;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_1003defc0,FUN_1003defd0,4,uVar2,0);
LAB_1003def34:
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

