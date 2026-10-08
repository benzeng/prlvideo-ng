
byte FUN_100750670(undefined8 param_1)

{
  byte bVar1;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  FUN_10074a700(&local_20,param_1);
  if (*(int *)(local_20.field0_0x0 + 4) == 0) {
    bVar1 = 0;
  }
  else {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Third_party_VM_10226fe08);
    bVar1 = operator==(&local_20,&local_28);
    bVar1 = bVar1 ^ 1;
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1007506ff;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1007506ff:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return bVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return bVar1;
}

