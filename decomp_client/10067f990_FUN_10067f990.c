
void FUN_10067f990(undefined8 param_1,undefined8 param_2,int param_3)

{
  QLocale local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  QUrl local_20 [15];
  undefined1 local_11;
  
  if (param_3 != 1) {
    return;
  }
  local_30 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/licenses-@LOCALE@",0x2a);
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
      if ((bool)local_11) goto LAB_10067fa22;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10067fa22:
  QLocale::~QLocale(local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

