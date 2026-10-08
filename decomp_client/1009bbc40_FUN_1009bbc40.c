
void FUN_1009bbc40(undefined8 param_1,char *param_2)

{
  long local_48;
  QArrayData *local_40;
  QUrl local_38 [8];
  QVariant local_30;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("http://www.parallels.com/12/pc",0x1e);
  QUrl::QUrl(local_38,&local_40,0);
  QVariant::QVariant(&local_30,local_38);
  QObject::setProperty(param_2,(QVariant *)"downloadTransporterAgentUrl");
  QVariant::~QVariant(&local_30);
  QUrl::~QUrl(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009bbce0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009bbce0:
  QObject::connect(&local_48,param_2,"2selectManuallyClicked()",param_1,"1onSelectManuallyClicked()"
                   ,0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  return;
}

