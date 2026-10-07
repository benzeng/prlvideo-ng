
undefined8 FUN_10040bcd0(long param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined8 *)(param_1 + 0x38);
  if (param_2 != '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x30);
  }
  QMutex::lock();
  uVar1 = *puVar2;
  uVar3 = FUN_10040d640(uVar1);
  *param_4 = uVar3;
  uVar3 = FUN_10040d680(uVar1);
  *param_3 = uVar3;
  QMutex::unlock();
  return 1;
}

