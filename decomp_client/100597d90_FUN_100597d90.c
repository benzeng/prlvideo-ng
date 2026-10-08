
undefined4 FUN_100597d90(undefined8 param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if (param_2 == 0) {
    if (DAT_102274448 == 0) {
      DAT_102274448 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
    }
    if (DAT_102274448 != -1) {
      uVar1 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,DAT_102274448);
      goto LAB_100597e28;
    }
  }
  uVar2 = 0x303;
  if (param_3 == 0) {
    uVar2 = 0x203;
  }
  uVar1 = QMetaType::registerNormalizedType
                    (&local_28,FUN_100597eb0,FUN_100597f30,0x10,uVar2,&DAT_1022268f8);
LAB_100597e28:
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

