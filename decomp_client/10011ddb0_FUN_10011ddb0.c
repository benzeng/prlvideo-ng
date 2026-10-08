
undefined8 FUN_10011ddb0(undefined8 param_1)

{
  QLocale local_38 [8];
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  EnumUtils::enumToString(&local_28);
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_20,0x1dc08d9);
    QString::operator=(&local_28,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10011de21;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
LAB_10011de21:
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-online-backup-@LOCALE@",
                        0x47);
  QLocale::QLocale(local_38,&local_28);
  FUN_100d3f730(param_1,&local_30,local_38);
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10011de8c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10011de8c:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

