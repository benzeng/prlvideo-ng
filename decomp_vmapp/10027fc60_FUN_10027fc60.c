
void FUN_10027fc60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_10025ae40();
  uVar2 = CVmClusteredDevice::getStackIndex();
  FUN_1002578b0(param_1 + 5,0xb,uVar2,0);
  *param_1 = &PTR_FUN_100bafc60;
  param_1[5] = &PTR_FUN_100bafe80;
  param_1[6] = &PTR_metaObject_100bafef8;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = &PTR_FUN_101115d40;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_100284dc0(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x19) = 0;
  uVar1 = CVmClusteredDevice::getStackIndex();
  *(undefined1 *)((long)param_1 + 0xc9) = uVar1;
  QMutex::QMutex((QMutex *)(param_1 + 0x21),1);
  QMutex::QMutex((QMutex *)(param_1 + 0x23),0);
  param_1[0x24] = PTR_shared_null_100ba2188;
  param_1[0x25] = param_3;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  lVar3 = FUN_100257d80(param_1 + 5);
  uVar4 = (ulong)*(byte *)((long)param_1 + 0xc9);
  if (uVar4 < 8) {
    *(char *)(lVar3 + 0x31c28 + uVar4) = (char)(1 << (*(byte *)(param_1 + 0x19) & 0x1f));
  }
  else if (*(byte *)((long)param_1 + 0xc9) < 0x10) {
    *(char *)(uVar4 + 0x31c28 + lVar3) = (char)(1 << (*(byte *)(param_1 + 0x19) & 0x1f));
  }
  QMutex::lock();
  *(undefined8 **)(&DAT_1011c3c20 + (ulong)*(byte *)((long)param_1 + 0xc9) * 8) = param_1;
  QMutex::unlock();
  return;
}

