
void FUN_100604850(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  QVariant::QVariant(&local_30,"qrc:/Images/FinalLogo.png");
  QObject::setProperty(param_2,(QVariant *)"logoItemPath");
  QVariant::~QVariant(&local_30);
  QVariant::QVariant(&local_40,true);
  QObject::setProperty(param_2,(QVariant *)"centralizeDescriptionText");
  QVariant::~QVariant(&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("headerText",10);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_48,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1e06a48);
  QVariant::QVariant(&local_58,&local_60);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604969;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100604969:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604999;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100604999:
  local_68 = (QArrayData *)QString::fromAscii_helper("descriptionText",0xf);
  pcVar1 = (char *)qt_qFindChild_helper(param_2,&local_68,PTR_staticMetaObject_1021e1368,1);
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1e06a55);
  QVariant::QVariant(&local_78,&local_80);
  QObject::setProperty(pcVar1,(QVariant *)"text");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_19 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100604a41;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100604a41:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

