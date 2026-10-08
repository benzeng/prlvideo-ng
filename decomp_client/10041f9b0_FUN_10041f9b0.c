
void FUN_10041f9b0(QSize *param_1,undefined8 param_2)

{
  QSize QVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  Connection local_40 [8];
  Connection local_38 [8];
  ulong local_30;
  
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_2,0,0);
  *param_1 = (QSize)&PTR_FUN_102210c70;
  param_1[2] = (QSize)&PTR_FUN_102210e60;
  param_1[6] = (QSize)&PTR_FUN_102210eb0;
  QVar1 = (QSize)operator_new(0x18);
  param_1[0xc] = QVar1;
  CVmHardDisk::CVmHardDisk((CVmHardDisk *)(param_1 + 0xe));
  FUN_10041ff70(param_1[0xc]);
  FontUtils::setSmallFont(*(QWidget **)((long)param_1[0xc] + 8),false);
  QVar1 = param_1[5];
  uVar5 = (*(int *)((long)QVar1 + 0x1c) + 1) - *(int *)((long)QVar1 + 0x14);
  uVar3 = (*(int *)((long)QVar1 + 0x20) + 1) - *(int *)((long)QVar1 + 0x18);
  uVar2 = (**(code **)((long)*param_1 + 0x78))(param_1);
  local_30 = (ulong)uVar5;
  if ((int)uVar5 < (int)uVar2) {
    local_30 = uVar2 & 0xffffffff;
  }
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < (int)(uVar2 >> 0x20)) {
    uVar4 = uVar2 >> 0x20;
  }
  local_30 = local_30 | uVar4 << 0x20;
  QWidget::setFixedSize(param_1);
  QObject::connect(local_38,*(undefined8 *)((long)param_1[0xc] + 0x10),"2accepted()",param_1,
                   "1accept()",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::connect(local_40,*(undefined8 *)((long)param_1[0xc] + 0x10),"2rejected()",param_1,
                   "1reject()",0);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

