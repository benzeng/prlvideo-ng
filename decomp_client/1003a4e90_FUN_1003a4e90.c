
undefined4 FUN_1003a4e90(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102273e18 == 0) {
      DAT_102273e18 = FUN_1003a4e90("CVmEditorItem::Attributes",0xffffffffffffffff,1);
    }
    if (DAT_102273e18 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102273e18);
      goto LAB_1003a4f24;
    }
  }
  uVar2 = 0x104;
  if (param_3 == 0) {
    uVar2 = 4;
  }
  uVar1 = QMetaType::registerNormalizedType(&local_28,FUN_1003a4fb0,FUN_1003a4fc0,4,uVar2,0);
LAB_1003a4f24:
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

