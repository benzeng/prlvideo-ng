
void FUN_100680800(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  QStringList *pQVar4;
  QArrayData *local_b0;
  QUrl local_a8 [8];
  QVariant local_a0;
  Data_conflict local_90;
  QString local_88 [2];
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  CContentModel::setBusy(SUB81(param_1,0));
  cVar1 = FUN_10061c760(param_2);
  if (cVar1 != '\0') {
    uVar2 = CAbstractWizardModel::currentPageId();
    if ((0xb < uVar2) || ((0x818U >> (uVar2 & 0x1f) & 1) == 0)) {
      *(uint *)(param_1 + 0x164) = uVar2;
    }
    CAbstractWizardModel::goToPage(param_1,3,0);
    return;
  }
  if ((int)param_2 < 0) {
    iVar3 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar4 = (QStringList *)CWizardController::parentWidget();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)(ulong)param_2,pQVar4,(QStringList *)&local_38.field0,
               (CSlotInfo *)&local_40,SUB81(&local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_29 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    FUN_100039a80(&local_40);
    FUN_100039a80(&local_38);
    return;
  }
  QSettings::QSettings((QSettings *)local_88,(QObject *)0x0);
  local_90.field7 = QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
  QVariant::QVariant(&local_a0,true);
  QSettings::setValue(local_88,(QVariant *)&local_90);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_90.field15 != -1) {
    if (*(int *)local_90.field15 != 0) {
      LOCK();
      *(int *)local_90.field15 = *(int *)local_90.field15 + -1;
      local_29 = *(int *)local_90.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006808fd;
    }
    QArrayData::deallocate((QArrayData *)local_90.field15,2,8);
  }
LAB_1006808fd:
  QSettings::~QSettings((QSettings *)local_88);
  QTimer::start();
  QString::toUtf8();
  QUrl::fromEncoded(local_a8,&local_b0,0);
  QDesktopServices::openUrl(local_a8);
  QUrl::~QUrl(local_a8);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
  return;
}

