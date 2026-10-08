
QPixmap * FUN_10073aab0(QPixmap *param_1,undefined8 param_2,undefined8 param_3,QSize *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  QColor local_98 [16];
  QFileInfo local_88 [8];
  QFileInfo local_80 [8];
  QFileIconProvider local_78 [16];
  QSize local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::split(&local_40,param_3,&local_48,1,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ab2a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10073ab2a:
  local_50 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::lastIndexOf(param_3,&local_50,0xffffffff,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ab88;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10073ab88:
  QString::right((int)&local_58);
  iVar3 = QString::toInt((bool *)&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073abe2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10073abe2:
  QString::left((int)&local_60);
  local_68.field1_0x4 = iVar3;
  local_68.field0_0x0 = iVar3;
  QFileIconProvider::QFileIconProvider(local_78);
  QFileInfo::QFileInfo(local_88,&local_60);
  QFileIconProvider::icon(local_80);
  QFileInfo::~QFileInfo(local_88);
  if (param_4 != (QSize *)0x0) {
    *param_4 = local_68;
  }
  cVar2 = QIcon::isNull();
  if (cVar2 == '\0') {
    local_68 = (QSize)QIcon::actualSize(local_80,&local_68,0,1);
    QIcon::pixmap(param_1,local_80,&local_68,0,1);
  }
  else {
    QPixmap::QPixmap(param_1,&local_68);
    QColor::QColor(local_98,0x13);
    QPixmap::fill((QColor *)param_1);
  }
  QIcon::~QIcon((QIcon *)local_80);
  QFileIconProvider::~QFileIconProvider(local_78);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073acf0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10073acf0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10073ad60:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10073ad60;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

