
void FUN_10067d820(long param_1,uint param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  MessageParams *pMVar5;
  QWidget *pQVar6;
  QString *pQVar7;
  QStringList *pQVar8;
  undefined8 uVar9;
  bool bVar10;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130 [16];
  QString local_120 [22];
  QUrl local_70 [8];
  QArrayData *local_68;
  QLocale local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  bVar10 = SUB81(param_1,0);
  CContentModel::setBusy(bVar10);
  cVar1 = FUN_10061c760(param_2);
  if (cVar1 != '\0') {
    uVar3 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar3) || ((0x818U >> (uVar3 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar3;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x161);
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x160) = 0;
  }
  if (-1 < (int)param_2) {
    if (*(long *)(param_1 + 0x58) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      return;
    }
    cVar1 = FUN_100d80630(1);
    if (cVar1 != '\0') {
      CContentModel::setBusy(bVar10);
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x60);
      }
      FUN_10068a870(*(undefined8 *)(param_1 + 0x20),uVar9);
    }
    if ((param_3 == '\0') && (cVar1 = FUN_100d80630(1), cVar1 == '\0')) {
      FUN_100677d80(param_1);
      return;
    }
    CContentModel::setBusy(bVar10);
    FUN_10068c350(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  cVar2 = FUN_100d80630(1);
  if ((param_2 != 0x80011076) || (cVar2 == '\x01')) {
    iVar4 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar8 = (QStringList *)CWizardController::parentWidget();
    local_130._8_8_ = PTR_shared_null_1021e15e8;
    local_130._0_8_ = PTR_shared_null_1021e15e8;
    local_168 = (int *)0x0;
    uStack_160 = 0;
    local_150 = 0;
    local_158 = 0;
    local_140 = 0x80000000;
    local_148.field7 = 0;
    local_138 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QWidget *)(ulong)param_2,pQVar8,(QStringList *)(local_130 + 8),
               (CSlotInfo *)local_130,SUB81(&local_168,0));
    QVariant::~QVariant((QVariant *)&local_148);
    if (local_168 != (int *)0x0) {
      LOCK();
      *local_168 = *local_168 + -1;
      local_31 = *local_168 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_168 != (int *)0x0)) {
        operator_delete(local_168);
      }
    }
    FUN_100039a80(local_130);
    FUN_100039a80(local_130 + 8);
    goto LAB_10067dc3f;
  }
  MessageUtils::getMessageString((int)&local_40,true);
  MessageUtils::getMessageString((int)&local_48,true);
  local_58 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
  QLocale::QLocale(local_60);
  FUN_100d3f730(&local_50,&local_58,local_60);
  FUN_1006291f0(local_70,9,param_4);
  QUrl::toString(&local_68,local_70,0);
  QString::replace(&local_48,&local_50,&local_68,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067da1e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10067da1e:
  QUrl::~QUrl(local_70);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067da57;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10067da57:
  QLocale::~QLocale(local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067da90;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10067da90:
  pMVar5 = (MessageParams *)CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar6 = (QWidget *)CWizardController::parentWidget();
  MessageParams::MessageParams((MessageParams *)local_120,-0x7ffeef8a,pQVar6);
  pQVar7 = (QString *)MessageParams::setShortMsg(local_120);
  MessageParams::setLongMsg(pQVar7);
  CMessageManager::showMessageBox(pMVar5);
  FUN_1001f39d0(local_120);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067db1f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10067db1f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067dc3f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10067dc3f:
  if (cVar1 != '\0') {
    CAbstractWizardModel::goToPage(param_1,0xc,0);
  }
  return;
}

