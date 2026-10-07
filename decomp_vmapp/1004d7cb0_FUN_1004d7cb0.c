
void FUN_1004d7cb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,byte param_6,long *param_7)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bc3140;
  piVar1 = (int *)*param_3;
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_2;
  param_1[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  param_1[4] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[5] = PTR_shared_null_100ba20d0;
  *(byte *)(param_1 + 6) = param_6 & 1;
  *(byte *)((long)param_1 + 0x31) = param_6 >> 4 & 1;
  *(byte *)((long)param_1 + 0x32) = param_6 >> 1 & 1;
  *(byte *)((long)param_1 + 0x33) = param_6 >> 2 & 1;
  *(byte *)((long)param_1 + 0x34) = param_6 >> 3 & 1;
  *(byte *)((long)param_1 + 0x35) = param_6 >> 5 & 1;
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 7),0);
  param_1[8] = PTR_shared_null_100ba20d8;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = param_5;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar3 = PTR_shared_null_100ba2180;
  param_1[0xe] = PTR_shared_null_100ba2180;
  *(undefined1 *)(param_1 + 0xf) = 0;
  lVar2 = *param_7;
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = puVar3;
  uVar4 = FUN_1004d4d30("UTF-8");
  param_1[0xc] = uVar4;
  FUN_1004d7b60(param_1);
  return;
}

