
void FUN_1005f2100(undefined8 param_1,char *param_2)

{
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  FUN_1005fbcd0();
  local_38 = (QArrayData *)QString::fromAscii_helper("qrc:/Windows8-120.png",0x15);
  QVariant::QVariant(&local_30,10,&local_38,0);
  QObject::setProperty(param_2,(QVariant *)"itemPicture");
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005f2188;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005f2188:
  QMetaObject::tr((char *)&local_50,(char *)&PTR_PTR_10221fc70,0x1e05f88);
  QVariant::QVariant(&local_48,10,&local_50,0);
  QObject::setProperty(param_2,(QVariant *)"titleText");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

