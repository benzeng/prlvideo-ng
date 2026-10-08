
undefined8 * FUN_1005aa500(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  QLocale local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if ((lVar2 == 0) || (iVar1 = FUN_10018f890(lVar2), iVar1 != 0x80f)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_10221df20,0x1e03704);
  CAntivirusInfo::productName();
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://parallels.com/products/desktop/pdfm12-kis2015-win10-compat-@LOCALE@"
                        ,0x4a);
  QLocale::QLocale(local_50);
  FUN_100d3f730(&local_40,&local_48,local_50);
  QString::arg(param_1,&local_28,&local_40,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa60c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005aa60c:
  QLocale::~QLocale(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa645;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005aa645:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa675;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005aa675:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005aa6a5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005aa6a5:
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

