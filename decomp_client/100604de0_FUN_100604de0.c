
void FUN_100604de0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  QVariant::QVariant(&local_30,"qrc:/Images/NetworkLogo.png");
  QObject::setProperty(param_2,(QVariant *)"logoItemPath");
  QVariant::~QVariant(&local_30);
  local_38 = (QArrayData *)QString::fromAscii_helper("headerText",10);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_38,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e06b26);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604ecd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100604ecd:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604efd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100604efd:
  local_58 = (QArrayData *)QString::fromAscii_helper("descriptionText",0xf);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_58,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1e06b47);
  QVariant::QVariant(&local_68,&local_70);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604fa5;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100604fa5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

