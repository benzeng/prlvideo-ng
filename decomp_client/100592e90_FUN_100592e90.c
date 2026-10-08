
QVariant * FUN_100592e90(QVariant *param_1)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  QLineEdit::text();
  FUN_1009dfc00(&local_28,&local_30,&local_38);
  QVariant::QVariant(param_1,10,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100592f22;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100592f22:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100592f52;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100592f52:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

