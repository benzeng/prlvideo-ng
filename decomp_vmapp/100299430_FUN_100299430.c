
undefined1 FUN_100299430(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  QMutex::lock();
  cVar1 = '\x01';
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x58))();
    FUN_10029a070(param_1);
    FUN_10029c300(param_1 + 0x98);
  }
  *(undefined8 *)(param_1 + 0x98) = param_2;
  cVar2 = FUN_10029a130(param_1);
  if (cVar2 != '\0') {
    uVar3 = 1;
    if (cVar1 != '\0') goto LAB_1002994b9;
    cVar1 = FUN_100299bb0(param_1,0);
    if (cVar1 != '\0') goto LAB_1002994b9;
  }
  FUN_10029c300(param_1 + 0x98);
  uVar3 = 0;
LAB_1002994b9:
  QMutex::unlock();
  return uVar3;
}

