
void FUN_1002581e0(void)

{
  QArrayData *local_28;
  QUrl local_20 [15];
  undefined1 local_11;
  
  local_28 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://parallels.com/products/desktop/pdfm12-parallels-forums-@LOCALE@",
                        0x46);
  QUrl::QUrl(local_20,&local_28,0);
  QDesktopServices::openUrl(local_20);
  QUrl::~QUrl(local_20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

