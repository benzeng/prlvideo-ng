
void FUN_1009a76f0(undefined8 param_1,char *param_2)

{
  long local_50;
  QVariant local_48;
  QLocale local_38 [8];
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-p2v-apple-assistant-learn-more-@LOCALE@"
                        ,0x58);
  QLocale::QLocale(local_38);
  FUN_100d3f730(&local_28,&local_30,local_38);
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009a7772;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a7772:
  QVariant::QVariant(&local_48,&local_28);
  QObject::setProperty(param_2,(QVariant *)"transerToMacLearnMoreUrl");
  QVariant::~QVariant(&local_48);
  QObject::connect(&local_50,param_2,"2selectedButtonChanged()",param_1,"2DataChanged()",0);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

