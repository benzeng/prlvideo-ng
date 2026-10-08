
undefined4 FUN_100597a70(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102274440 == 0) {
      DAT_102274440 = FUN_100597a70("CMouseRemapInfo",0xffffffffffffffff,1);
    }
    if (DAT_102274440 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102274440);
      goto LAB_100597b08;
    }
  }
  uVar2 = 0x303;
  if (param_3 == 0) {
    uVar2 = 0x203;
  }
  uVar1 = QMetaType::registerNormalizedType
                    (&local_28,FUN_100597b90,FUN_100597ba0,0xc,uVar2,&DAT_102226a18);
LAB_100597b08:
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

