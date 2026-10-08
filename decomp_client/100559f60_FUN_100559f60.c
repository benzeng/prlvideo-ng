
undefined4 FUN_100559f60(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102274244 == 0) {
      DAT_102274244 = FUN_100559f60("CRemapInfo",0xffffffffffffffff,1);
    }
    if (DAT_102274244 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102274244);
      goto LAB_100559ff8;
    }
  }
  uVar2 = 0x303;
  if (param_3 == 0) {
    uVar2 = 0x203;
  }
  uVar1 = QMetaType::registerNormalizedType
                    (&local_28,FUN_10055a080,FUN_10055a0c0,0x18,uVar2,&DAT_1022269e8);
LAB_100559ff8:
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

