
int FUN_1001ce4a0(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if ((param_2 == 0) && (iVar1 = FUN_1001cf560(), iVar1 != -1)) {
    iVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,iVar1);
  }
  else {
    uVar2 = 0x187;
    if (param_3 == 0) {
      uVar2 = 0x87;
    }
    iVar1 = QMetaType::registerNormalizedType(&local_28,FUN_1001cf450,FUN_1001cf490,0x10,uVar2,0);
    if (0 < iVar1) {
      FUN_1001cf4d0(iVar1);
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return iVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return iVar1;
}

