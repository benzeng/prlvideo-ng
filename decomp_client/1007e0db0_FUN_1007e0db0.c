
void FUN_1007e0db0(undefined8 param_1,char *param_2)

{
  QString local_50;
  QVariant local_48;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  QMetaObject::tr((char *)&local_38,(char *)&PTR_staticMetaObject_10222ecd0,0x1e19531);
  QVariant::QVariant(&local_30,&local_38);
  QObject::setProperty(param_2,(QVariant *)"infoText");
  QVariant::~QVariant(&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007e0e41;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007e0e41:
  QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_10222ecd0,0x1e19547);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(param_2,(QVariant *)"descriptionText");
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

