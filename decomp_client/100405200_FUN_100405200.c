
void FUN_100405200(void)

{
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
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc1c94);
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
      if ((bool)local_11) goto LAB_1004052ac;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004052ac:
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004052e5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004052e5:
  QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1dc1c9b);
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
      if ((bool)local_11) goto LAB_10040537d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10040537d:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004053b6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004053b6:
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

