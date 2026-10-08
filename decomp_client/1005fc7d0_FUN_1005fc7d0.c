
void FUN_1005fc7d0(undefined8 param_1,char *param_2)

{
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  FUN_1005fbcd0();
  local_38 = (QArrayData *)QString::fromAscii_helper("qrc:/Modern_ie.png",0x12);
  QVariant::QVariant(&local_30,10,&local_38,0);
  QObject::setProperty(param_2,(QVariant *)"itemPicture");
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005fc858;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005fc858:
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Test_Environments_102270918);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(param_2,(QVariant *)"titleText");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

