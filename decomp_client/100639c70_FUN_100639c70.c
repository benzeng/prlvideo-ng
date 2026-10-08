
void FUN_100639c70(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  QUrl local_90 [8];
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("#become_registered_user",0x17);
  iVar2 = QString::indexOf(param_2,&local_30,0,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639cdd;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100639cdd:
  if (iVar2 == -1) {
    QUrl::QUrl(local_90,param_2,0);
    QDesktopServices::openUrl(local_90);
    QUrl::~QUrl(local_90);
    return;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDialogClosed(CLicenseManager::DialogType, const QString&, int)",0x41);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639d65;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100639d65:
  if (DAT_102310958 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100612710(pvVar3);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar3;
  }
  pvVar3 = DAT_102310958;
  FUN_10015a2b0(&local_88,*(undefined8 *)(param_1 + 0xa8));
  cVar1 = FUN_10060b2b0(pvVar3,3,&local_88,local_68,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100639ded;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100639ded:
  if (cVar1 == '\0') {
    QDialog::reject();
  }
  else {
    QWidget::hide();
  }
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_21 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

