
void FUN_10043cef0(QSize *param_1,QSize param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  QSize QVar2;
  long *plVar3;
  long lVar4;
  long local_68;
  undefined8 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  QVariant local_48;
  QVariant local_38;
  int local_24;
  
  local_24 = param_3;
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_4,0,0);
  *param_1 = (QSize)&PTR_FUN_102212090;
  param_1[2] = (QSize)&PTR_FUN_102212280;
  param_1[6] = (QSize)&PTR_FUN_1022122d0;
  QVar2 = (QSize)operator_new(0x20);
  param_1[0xc] = QVar2;
  param_1[0xd] = param_2;
  param_1[0xe].field0_0x0 = param_3;
  FUN_10043d4e0(QVar2,param_1);
  pcVar1 = *(char **)((long)param_1[0xc] + 8);
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_38,DAT_102273e70,&local_24,0);
  QObject::setProperty(pcVar1,(QVariant *)PTR_s_deviceType_1021f1e48);
  QVariant::~QVariant(&local_38);
  pcVar1 = *(char **)((long)param_1[0xc] + 8);
  QVariant::QVariant(&local_48,local_24 == 5);
  QObject::setProperty(pcVar1,(QVariant *)PTR_s_remoteDeviceSelector_1021f1e50);
  QVariant::~QVariant(&local_48);
  plVar3 = (long *)FUN_1003b0ac0(param_1[0xd]);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)((long)param_1[0xc] + 8),&local_58);
  QVariant::~QVariant((QVariant *)&local_58);
  local_60 = (**(code **)((long)*param_1 + 0x70))(param_1);
  QWidget::setFixedSize(param_1);
  QObject::connect(&local_68,*(undefined8 *)((long)param_1[0xc] + 8),
                   "2currentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType,QString,QString)"
                   ,param_1,
                   "1onCurrentItemChanged(CPrlFileDevSelectorItem::FileDevSelectorItemType,QString,QString)"
                   ,0);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  lVar4 = QDialogButtonBox::button(*(undefined8 *)((long)param_1[0xc] + 0x10),0x400);
  if (lVar4 != 0) {
    QWidget::setDisabled(SUB81(lVar4,0));
  }
  return;
}

