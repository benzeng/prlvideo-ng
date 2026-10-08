
void FUN_1007723b0(void)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QUrl local_40 [8];
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar1 = CAbstractWizardActionHandler::wizardModel();
  if (*(int *)(lVar1 + 0x24) != 0) goto LAB_10077250f;
  uVar2 = FUN_100152280();
  uVar2 = FUN_1001554a0(uVar2);
  uVar2 = FUN_10016f500(uVar2);
  FUN_10061abe0(&local_38,uVar2,0x12);
  QVariant::toString();
  QVariant::~QVariant(&local_38);
  FUN_10076db60(local_40,&local_28);
  if (2 < DAT_10230ffd0) {
    QUrl::toString(&local_50,local_40,0);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"about to open %s",local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10077249d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10077249d:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007724cd;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1007724cd:
  QDesktopServices::openUrl(local_40);
  QUrl::~QUrl(local_40);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077250f;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10077250f:
  uVar2 = CAbstractWizardActionHandler::wizardModel();
  uVar2 = FUN_10076f180(uVar2);
  FUN_10076ed90(uVar2,0);
  return;
}

