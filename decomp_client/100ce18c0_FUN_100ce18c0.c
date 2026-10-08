
void FUN_100ce18c0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  QString local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_10225b1f0;
  *(undefined4 *)(param_1 + 1) = 0;
  auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar4._0_8_ = PTR_shared_null_1021e1288;
  auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar4;
  FUN_100d144c0(param_1 + 5);
  FUN_100d144f0(param_1 + 7);
  FUN_100d14610(param_1 + 8);
  FUN_100d14ad0(param_1 + 10);
  FUN_100d14b20(param_1 + 0x1d);
  FUN_100d14d50(param_1 + 0x1f);
  lVar3 = QArrayData::allocate(0x28,8,4,0);
  param_1[0x22] = lVar3;
  if (lVar3 == 0) {
    qBadAlloc();
    lVar3 = param_1[0x22];
  }
  *(undefined4 *)(lVar3 + 4) = 4;
  lVar1 = *(long *)(lVar3 + 0x10);
  FUN_100d14eb0(lVar3 + lVar1);
  FUN_100d14eb0(lVar1 + 0x28 + lVar3);
  FUN_100d14eb0(lVar1 + 0x50 + lVar3);
  FUN_100d14eb0(lVar1 + 0x78 + lVar3);
  lVar3 = QArrayData::allocate(0x28,8,4,0);
  param_1[0x23] = lVar3;
  if (lVar3 == 0) {
    qBadAlloc();
    lVar3 = param_1[0x23];
  }
  *(undefined4 *)(lVar3 + 4) = 4;
  lVar1 = *(long *)(lVar3 + 0x10);
  FUN_100d15130(lVar3 + lVar1);
  FUN_100d15130(lVar1 + 0x28 + lVar3);
  FUN_100d15130(lVar1 + 0x50 + lVar3);
  FUN_100d15130(lVar1 + 0x78 + lVar3);
  FUN_100d15280(param_1 + 0x24);
  FUN_100d15280(param_1 + 0x26);
  FUN_100d15280(param_1 + 0x28);
  FUN_100d15280(param_1 + 0x2a);
  FUN_100d15420(param_1 + 0x2c);
  FUN_100d15420(param_1 + 0x2e);
  FUN_100d15420(param_1 + 0x30);
  FUN_100d158c0(param_1 + 0x32);
  FUN_100d158c0(param_1 + 0x39);
  FUN_100d158c0(param_1 + 0x40);
  FUN_100d158c0(param_1 + 0x47);
  FUN_100d158c0(param_1 + 0x4e);
  FUN_100d15ae0(param_1 + 0x55);
  FUN_100d15b10(param_1 + 0x59);
  puVar2 = PTR_shared_null_1021e1288;
  param_1[0x5a] = PTR_shared_null_1021e1288;
  param_1[0x5b] = puVar2;
  param_1[0x5c] = puVar2;
  param_1[0x5d] = puVar2;
  param_1[0x5e] = puVar2;
  QDir::homePath();
  QString::operator=((QString *)(param_1 + 0x5c),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ce1b49;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100ce1b49:
  FUN_100ce26b0(param_1);
  return;
}

