
void FUN_1005b66f0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  CDispApplianceConfigs *this;
  QStringList *pQVar4;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102205b70);
  if (lVar2 == 0) {
    return;
  }
  if ((-1 < param_2) && (*(long *)(lVar2 + 0x30) != 0)) {
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    this = operator_new(0xa0);
    CDispApplianceConfigs::CDispApplianceConfigs(this,*(CDispApplianceConfigs **)(lVar2 + 0x30));
    FUN_1005bb690(uVar3,this);
    FUN_1008400c0(param_1);
    return;
  }
  iVar1 = CAbstractWizardModel::currentPageId();
  if (iVar1 != 0x12) {
    return;
  }
  uVar3 = CAbstractWizardModel::wizardCtrl();
  local_90._32_8_ = QString::fromAscii_helper("1goBack()",9);
  local_90._24_4_ = 0x80000000;
  local_90._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_68,uVar3,local_90 + 0x20,local_90 + 0x10);
  QVariant::~QVariant((QVariant *)(local_90 + 0x10));
  if (*(int *)local_90._32_8_ != -1) {
    if (*(int *)local_90._32_8_ != 0) {
      LOCK();
      *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
      local_29 = *(int *)local_90._32_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b6804;
    }
    QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
  }
LAB_1005b6804:
  iVar1 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar4 = (QStringList *)CWizardController::parentWidget();
  local_90._8_8_ = PTR_shared_null_1021e15e8;
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x80015338,pQVar4,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
             SUB81(local_68,0));
  FUN_100039a80(local_90);
  FUN_100039a80(local_90 + 8);
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

