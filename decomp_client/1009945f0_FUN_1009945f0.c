
undefined4 FUN_1009945f0(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,0x24);
  }
  else {
    uVar2 = 0x104;
    if (param_3 == 0) {
      uVar2 = 4;
    }
    uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_100995ae0,FUN_100995af0,2,uVar2,0);
  }
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

