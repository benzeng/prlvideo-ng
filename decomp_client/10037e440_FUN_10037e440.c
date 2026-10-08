
undefined4 FUN_10037e440(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QMetaObject::normalizedType((char *)&local_28);
  if ((param_2 == 0) && (iVar1 = FUN_10037e680(), iVar1 != -1)) {
    uVar2 = QMetaType::registerNormalizedTypedef((QByteArray *)&local_28,iVar1);
  }
  else {
    uVar3 = 0x10c;
    if (param_3 == 0) {
      uVar3 = 0xc;
    }
    uVar2 = QMetaType::registerNormalizedType
                      (&local_28,FUN_10037e650,FUN_10037e660,8,uVar3,&PTR_staticMetaObject_102227560
                      );
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar2;
}

