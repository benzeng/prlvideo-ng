
void FUN_100408e70(void)

{
  undefined8 local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  undefined8 local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QVariant local_68;
  undefined8 local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QVariant local_30;
  int *local_20;
  undefined1 local_11;
  
  local_20 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Disabled_10226ec60);
  local_58 = 0;
  QVariant::QVariant(&local_50,4,&local_58,0);
  FUN_10041e0f0(&local_38,&local_40,&local_50);
  FUN_10041e170(&local_20,&local_38);
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100408f1f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100408f1f:
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100408f58;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100408f58:
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Optimize_for_Time_Machine_10226ec68);
  local_90 = 1;
  QVariant::QVariant(&local_88,4,&local_90,0);
  FUN_10041e0f0(&local_70,&local_78,&local_88);
  FUN_10041e170(&local_20,&local_70);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100408ff3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100408ff3:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10040902c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10040902c:
  QMetaObject::tr((char *)&local_b0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Custom_10226ec70);
  local_c8 = 2;
  QVariant::QVariant(&local_c0,4,&local_c8,0);
  FUN_10041e0f0(&local_a8,&local_b0,&local_c0);
  FUN_10041e170(&local_20,&local_a8);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_11 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004090e2;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004090e2:
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_11 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100409124;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100409124:
  FUN_1003fa820();
  if (*local_20 != -1) {
    if (*local_20 != 0) {
      LOCK();
      *local_20 = *local_20 + -1;
      UNLOCK();
      if (*local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    FUN_10041b480(&local_20,local_20);
  }
  return;
}

