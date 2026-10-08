
QUrlQuery * FUN_1006f8e60(QUrlQuery *param_1,undefined8 param_2)

{
  QUrlQuery local_48 [8];
  int *local_40;
  QLocale local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-parallels-support-@LOCALE@"
                        ,0x4b);
  QLocale::QLocale(local_38);
  FUN_100d3f730(&local_28,&local_30,local_38);
  QUrl::QUrl((QUrl *)param_1,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f8ede;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006f8ede:
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f8f17;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006f8f17:
  FUN_1006f7810(&local_40,param_2);
  QUrlQuery::QUrlQuery(local_48);
  QUrlQuery::setQueryItems((QList *)local_48);
  QUrl::setQuery(param_1);
  QUrlQuery::~QUrlQuery(local_48);
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    FUN_1001c45d0(&local_40,local_40);
  }
  return param_1;
}

