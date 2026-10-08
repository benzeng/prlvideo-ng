
bool FUN_100997b90(undefined8 param_1)

{
  int iVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QCoreApplication::applicationName();
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_PC_transfer_is_in_progress__Are_y_10227df58);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_transfer_progress_will_be_lo_10227df60);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Cancel_10227de70);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1e32e58);
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = FUN_100a084e0(3,param_1,&local_28,&local_30,&local_38,&local_40,&local_48,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100997c9e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100997c9e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100997cce;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100997cce:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100997cfe;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100997cfe:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100997d2e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100997d2e:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100997d5e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100997d5e:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_100997d8e;
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100997d8e:
  return iVar1 == 1;
}

