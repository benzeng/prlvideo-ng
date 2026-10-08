
undefined4 FUN_10041ed50(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102273fe0 == 0) {
      DAT_102273fe0 = FUN_10041ed50("CSupportedOses",0xffffffffffffffff,1);
    }
    if (DAT_102273fe0 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102273fe0);
      goto LAB_10041ede4;
    }
  }
  uVar2 = 0x103;
  if (param_3 == 0) {
    uVar2 = 3;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_10041ee70,FUN_10041eed0,8,uVar2,0);
LAB_10041ede4:
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

