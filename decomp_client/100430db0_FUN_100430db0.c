
void FUN_100430db0(QSize *param_1,undefined8 param_2,undefined8 param_3)

{
  QSize QVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  Connection local_48 [8];
  Connection local_40 [8];
  QArrayData *local_38;
  ulong local_30;
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_3,0,0);
  *param_1 = (QSize)&PTR_FUN_1022117f0;
  param_1[2] = (QSize)&PTR_FUN_1022119e0;
  param_1[6] = (QSize)&PTR_FUN_102211a30;
  QVar1 = (QSize)operator_new(0x130);
  FUN_100433b90(QVar1,param_1,param_2);
  param_1[0xc] = QVar1;
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
  FUN_1001c72e0(&local_38);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100430ea9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100430ea9:
  QObject::connect(local_40,*(undefined8 *)(*(long *)((long)param_1[0xc] + 0x18) + 0x40),
                   "2accepted()",param_1,"1accept()",0);
  QMetaObject::Connection::~Connection(local_40);
  QObject::connect(local_48,*(undefined8 *)(*(long *)((long)param_1[0xc] + 0x18) + 0x40),
                   "2rejected()",param_1,"1reject()",0);
  QMetaObject::Connection::~Connection(local_48);
  return;
}

