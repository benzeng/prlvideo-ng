
void FUN_1004086e0(void)

{
  undefined8 local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
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
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Keep_window_open_10226edf8);
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
      if ((bool)local_11) goto LAB_10040878f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10040878f:
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004087c8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004087c8:
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,(int)PTR_s_Close_window_10226ee00
                 );
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
      if ((bool)local_11) goto LAB_100408863;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100408863:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10040889c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10040889c:
  QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Quit__1_10226edf0);
  FUN_1001c72e0(&local_c0);
  QString::arg(&local_b0,&local_b8,&local_c0,0,0x20);
  local_d8 = 2;
  QVariant::QVariant(&local_d0,4,&local_d8,0);
  FUN_10041e0f0(&local_a8,&local_b0,&local_d0);
  FUN_10041e170(&local_20,&local_a8);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_11 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100408980;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100408980:
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_11 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004089c2;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004089c2:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_11 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004089f8;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004089f8:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_11 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100408a2e;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100408a2e:
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

