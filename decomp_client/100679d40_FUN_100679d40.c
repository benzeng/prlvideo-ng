
void FUN_100679d40(long param_1,uint param_2)

{
  int iVar1;
  QStringList *pQVar2;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  QString local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_40;
  AnonymousUnion0 local_38;
  QString local_30 [2];
  
  CContentModel::setBusy(SUB81(param_1,0));
  if ((int)param_2 < 0) {
    iVar1 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar2 = (QStringList *)CWizardController::parentWidget();
    local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_40 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_78 = (undefined1  [16])0x0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)(ulong)param_2,pQVar2,(QStringList *)&local_38.field0,
               (CSlotInfo *)&local_40,SUB81(local_78,0));
    QVariant::~QVariant((QVariant *)&local_58);
    if ((int *)local_78._0_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_78._0_8_ = *(int *)local_78._0_8_ + -1;
      local_30[1].field0_0x0._7_1_ = *(int *)local_78._0_8_ != 0;
      UNLOCK();
      if ((!(bool)local_30[1].field0_0x0._7_1_) && ((int *)local_78._0_8_ != (int *)0x0)) {
        operator_delete((void *)local_78._0_8_);
      }
    }
    FUN_100039a80(&local_40);
    FUN_100039a80(&local_38);
    return;
  }
  QString::fromUtf8_helper((char *)local_30,0x1e41978);
  QString::operator=((QString *)(param_1 + 0x140),local_30);
  if (*(int *)local_30[0].field0_0x0 != -1) {
    if (*(int *)local_30[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_30[0].field0_0x0 = *(int *)local_30[0].field0_0x0 + -1;
      local_30[1].field0_0x0._7_1_ = *(int *)local_30[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_30[1].field0_0x0._7_1_) goto LAB_100679dbd;
    }
    QArrayData::deallocate((QArrayData *)local_30[0].field0_0x0,2,8);
  }
LAB_100679dbd:
  *(undefined1 *)(param_1 + 0x15e) = 0;
  local_98[0] = 0;
  local_90._8_4_ = (int)PTR_shared_null_1021e1288;
  local_90._0_8_ = PTR_shared_null_1021e1288;
  local_90._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x100) = 0;
  QString::operator=((QString *)(param_1 + 0x108),(QString *)local_90);
  QString::operator=((QString *)(param_1 + 0x110),(QString *)(local_90 + 8));
  QString::operator=((QString *)(param_1 + 0x118),&local_80);
  FUN_10064e770(local_98);
  *(undefined1 *)(param_1 + 0x169) = 0;
  CAbstractWizardModel::goToPage(param_1,3,0);
  return;
}

