
void FUN_1005fd910(undefined8 param_1,long param_2)

{
  char *pcVar1;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("headerText",10);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_28,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e0670d);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fd9cf;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005fd9cf:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fd9ff;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005fd9ff:
  local_48 = (QArrayData *)QString::fromAscii_helper("descriptionText",0xf);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_48,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1e0673d);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fdaa7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005fdaa7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

