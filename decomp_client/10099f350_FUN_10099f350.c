
void FUN_10099f350(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0x8000000) {
    uVar1 = FUN_1009983c0();
    FUN_100992b40(uVar1);
    *(undefined1 *)(param_1 + 0x68) = 0;
    FUN_1009a01a0(param_1);
    return;
  }
  uVar1 = FUN_100998580();
  FUN_100998560(&local_28,param_1);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_An_unknown_error_has_occurred__10227e0f0);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,(int)PTR_s__10227e0f8);
  FUN_100a08530(uVar1,&local_28,&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10099f423;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10099f423:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10099f453;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10099f453:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10099f483;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10099f483:
  uVar1 = FUN_1009983a0(param_1);
  FUN_100990b60(uVar1,3);
  return;
}

