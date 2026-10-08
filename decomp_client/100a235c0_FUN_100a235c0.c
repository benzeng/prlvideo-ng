
undefined4 FUN_100a235c0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102280ccc == 0) {
      DAT_102280ccc = FUN_100a235c0("QList<QSslError>",0xffffffffffffffff,1);
    }
    if (DAT_102280ccc != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102280ccc);
      goto LAB_100a23654;
    }
  }
  uVar2 = 0x107;
  if (param_3 == 0) {
    uVar2 = 7;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_100a236e0,FUN_100a23760,8,uVar2,0);
LAB_100a23654:
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

