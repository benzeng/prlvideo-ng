
undefined8 FUN_100116290(undefined8 param_1)

{
  QLocale local_28 [8];
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-product-activation-ka-@LOCALE@"
                        ,0x4f);
  QLocale::QLocale(local_28);
  FUN_100d3f730(param_1,&local_20,local_28);
  QLocale::~QLocale(local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

