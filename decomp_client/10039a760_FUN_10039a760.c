
void FUN_10039a760(void)

{
  char cVar1;
  QArrayData *pQVar2;
  QLocale local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QUrl local_40 [8];
  QLocale local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  QUrl local_20 [15];
  undefined1 local_11;
  
  cVar1 = FUN_1006272c0();
  if (cVar1 == '\0') {
    local_50 = (QArrayData *)
               QString::fromAscii_helper
                         ("http://www.parallels.com/products/desktop/pdfm12-new-verison-@LOCALE@",
                          0x45);
    QLocale::QLocale(local_58);
    FUN_100d3f730(&local_48,&local_50,local_58);
    QUrl::QUrl(local_40,&local_48,0);
    QDesktopServices::openUrl(local_40);
    QUrl::~QUrl(local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_11 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_10039a8b1;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10039a8b1:
    QLocale::~QLocale(local_58);
    if (*(int *)local_50 == -1) {
      return;
    }
    pQVar2 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_10039a8db;
  }
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-free-upgrade-subscription-@LOCALE@"
                        ,0x53);
  QLocale::QLocale(local_38);
  FUN_100d3f730(&local_28,&local_30,local_38);
  QUrl::QUrl(local_20,&local_28,0);
  QDesktopServices::openUrl(local_20);
  QUrl::~QUrl(local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10039a7f6;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10039a7f6:
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 == -1) {
    return;
  }
  pQVar2 = local_30;
  if (*(int *)local_30 != 0) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    UNLOCK();
    if (*(int *)local_30 != 0) {
      return;
    }
    local_11 = 0;
  }
LAB_10039a8db:
  QArrayData::deallocate(pQVar2,2,8);
  return;
}

