
undefined8 * FUN_1005eaa90(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  QMutex::lock();
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x68) + 0x10), lVar1 == 0)) {
    FUN_1007d6870(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x218);
    param_1[1] = *(undefined8 *)(lVar1 + 0x220);
    *param_1 = uVar2;
  }
  QMutex::unlock();
  return param_1;
}

