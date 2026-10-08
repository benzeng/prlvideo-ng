
void FUN_1009a6ce0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_1009983c0();
  cVar1 = FUN_100991a90(uVar2);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_100998580(param_1);
  FUN_100998560(&local_28,param_1);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Network_connection_was_lost__10227e000);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_check_your_network_connec_10227e008);
  FUN_100a08530(uVar2,&local_28,&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a6da2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a6da2:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a6dd2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a6dd2:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a6e02;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009a6e02:
  uVar2 = FUN_1009983a0(param_1);
  FUN_100990b60(uVar2,3);
  return;
}

