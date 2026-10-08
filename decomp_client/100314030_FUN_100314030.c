
undefined8 * FUN_100314030(undefined8 *param_1,undefined8 param_2,int param_3)

{
  QArrayData *local_70;
  undefined4 local_68 [2];
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_4c;
  QArrayData *local_48;
  undefined4 local_40 [2];
  QArrayData *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  if (param_3 != -0x7ffffe6a) {
    CMessageDataProvider::buttonsMapForReportGeneratedMessage((int)param_1);
    return param_1;
  }
  *param_1 = PTR_shared_null_1021e12f0;
  local_28 = 1;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Close_10226ddf0);
  local_40[0] = 1;
  local_38 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_30 = 0;
  FUN_100314320(param_1,&local_28,local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003140e6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003140e6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100314116;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100314116:
  local_4c = 2;
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Send_Problem_Report_102270080);
  local_68[0] = 0xcf09;
  local_60 = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_58 = 0;
  FUN_100314320(param_1,&local_4c,local_68);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003141a6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003141a6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return param_1;
}

