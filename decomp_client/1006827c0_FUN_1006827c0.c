
void FUN_1006827c0(long param_1,int param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  QLocale local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QUrl local_30 [15];
  undefined1 local_21;
  
  CContentModel::setBusy(SUB81(param_1,0));
  cVar3 = FUN_10061c760(param_2);
  if (cVar3 != '\0') {
    uVar4 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar4) || ((0x818U >> (uVar4 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar4;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  if ((param_2 < 0) || (*(int *)(*param_3 + 4) == 0)) {
    local_48 = (QArrayData *)
               QString::fromAscii_helper("http://www.parallels.com/licenses-@LOCALE@",0x2a);
    QLocale::QLocale(local_50);
    FUN_100d3f730(&local_40,&local_48,local_50);
    bVar2 = false;
    QUrl::QUrl(local_30,&local_40,0);
    bVar1 = true;
  }
  else {
    QString::toUtf8();
    bVar1 = false;
    QUrl::fromEncoded(local_30,&local_38,0);
    bVar2 = true;
  }
  QDesktopServices::openUrl(local_30);
  QUrl::~QUrl(local_30);
  if (!bVar1) goto LAB_100682917;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006828de;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006828de:
  QLocale::~QLocale(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100682917;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100682917:
  if ((bVar2) && (*(int *)local_38 != -1)) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

