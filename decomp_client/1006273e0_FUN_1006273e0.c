
undefined8 FUN_1006273e0(undefined8 param_1,int param_2)

{
  QArrayData *pQVar1;
  QLocale local_58 [8];
  QArrayData *local_50;
  QLocale local_48 [8];
  QArrayData *local_40;
  QLocale local_38 [8];
  QArrayData *local_30;
  QLocale local_28 [8];
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 == 3) {
    local_30 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-pro-pdfm12-@LOCALE@",0x30);
    QLocale::QLocale(local_38);
    FUN_100d3f730(param_1,&local_30,local_38);
    QLocale::~QLocale(local_38);
    if (*(int *)local_30 == -1) {
      return param_1;
    }
    pQVar1 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
  }
  else if (param_2 == 2) {
    local_40 = (QArrayData *)
               QString::fromAscii_helper
                         ("http://www.parallels.com/buy-business-pdfm12-@LOCALE@",0x35);
    QLocale::QLocale(local_48);
    FUN_100d3f730(param_1,&local_40,local_48);
    QLocale::~QLocale(local_48);
    if (*(int *)local_40 == -1) {
      return param_1;
    }
    pQVar1 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
  }
  else if (param_2 == 1) {
    local_20 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-std-pdfm12-@LOCALE@",0x30);
    QLocale::QLocale(local_28);
    FUN_100d3f730(param_1,&local_20,local_28);
    QLocale::~QLocale(local_28);
    if (*(int *)local_20 == -1) {
      return param_1;
    }
    pQVar1 = local_20;
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
  }
  else {
    local_50 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
    QLocale::QLocale(local_58);
    FUN_100d3f730(param_1,&local_50,local_58);
    QLocale::~QLocale(local_58);
    if (*(int *)local_50 == -1) {
      return param_1;
    }
    pQVar1 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
  }
  QArrayData::deallocate(pQVar1,2,8);
  return param_1;
}

