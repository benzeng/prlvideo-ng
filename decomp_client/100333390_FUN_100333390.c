
undefined4 FUN_100333390(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  uVar2 = 0x103;
  if (param_3 == 0) {
    uVar2 = 3;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_100333490,FUN_1003334a0,0x114,uVar2,0);
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

