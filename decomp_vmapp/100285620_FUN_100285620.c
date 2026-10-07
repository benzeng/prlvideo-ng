
undefined8 * FUN_100285620(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  uVar2 = 0;
  if (param_2 < 0x10) {
    uVar2 = (&DAT_1011b89e0)[param_2];
  }
  puVar1 = operator_new(0x18);
  *puVar1 = &DAT_1011c37c8;
  puVar1[1] = uVar2;
  *(undefined4 *)(puVar1 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(puVar1 + 2) = 1;
  uVar2 = FUN_100288dd0(puVar1);
  *param_1 = uVar2;
  QMutex::unlock();
  return param_1;
}

