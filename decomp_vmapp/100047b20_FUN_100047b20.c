
void FUN_100047b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  FUN_100041050(param_1 + 0xd);
  *param_1 = &PTR_FUN_100ba82c8;
  param_1[5] = &PTR_FUN_100ba8330;
  param_1[0xd] = &PTR_FUN_100ba8360;
  param_1[0x22] = DAT_1011c3698;
  QMutex::QMutex((QMutex *)(param_1 + 0x23),0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x25),0);
  param_1[0x27] = PTR_shared_null_100ba20d8;
  param_1[0x28] = PTR_shared_null_100ba2188;
  FUN_1004c0790(param_1,0x8320,0x8328);
  FUN_10051a6b0(param_1[0x22] + 0x10f0,7,param_1 + 5);
  *(undefined4 *)(param_1 + 0x26) = 0;
  puVar1 = param_1 + 0x1d;
  if (((ulong)puVar1 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    puVar1 = (undefined8 *)((ulong)puVar1 | 1);
  }
  *(undefined1 *)((long)param_1 + 0xfc) = 1;
  if (((ulong)puVar1 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  FUN_10004dd60(&DAT_1011c35f0,param_1);
  return;
}

