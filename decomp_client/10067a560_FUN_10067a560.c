
void FUN_10067a560(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined1 local_28 [16];
  QString local_18;
  
  if (1 < param_2 + 0x7ffb8fefU) {
    return;
  }
  if (param_3 != 1) {
    local_30[0] = 0;
    local_28._8_4_ = (int)PTR_shared_null_1021e1288;
    local_28._0_8_ = PTR_shared_null_1021e1288;
    local_28._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_18.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    *(undefined4 *)(param_1 + 0x100) = 0;
    QString::operator=((QString *)(param_1 + 0x108),(QString *)local_28);
    QString::operator=((QString *)(param_1 + 0x110),(QString *)(local_28 + 8));
    QString::operator=((QString *)(param_1 + 0x118),&local_18);
    FUN_10064e770(local_30);
    return;
  }
  if (*(int *)(param_1 + 0x100) == 2) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x100) != 1) goto LAB_10067a60b;
    uVar1 = 0;
  }
  FUN_10067a650(param_1,uVar1);
LAB_10067a60b:
  FUN_100679900(param_1,*(undefined4 *)(param_1 + 0x100),param_1 + 0x108,param_1 + 0x110);
  return;
}

