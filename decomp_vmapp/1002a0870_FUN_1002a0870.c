
int FUN_1002a0870(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = FUN_1002990b0(*(undefined8 *)(param_1 + 0x30));
  if (-1 < iVar1) {
    iVar1 = FUN_1002990b0(*(undefined8 *)(param_1 + 0x38));
    if (-1 < iVar1) {
      if (*(char *)(param_1 + 0x50) != '\0') {
        (**(code **)(**(long **)(param_1 + 0x38) + 0xc0))();
        (**(code **)(**(long **)(param_1 + 0x30) + 0xc0))();
      }
      iVar1 = 0;
      FUN_10025b310(param_1 + 8,1);
      goto LAB_1002a0907;
    }
  }
  FUN_100299500(*(undefined8 *)(param_1 + 0x30));
  FUN_100299500(*(undefined8 *)(param_1 + 0x38));
  FUN_10025b310(param_1 + 8,0);
LAB_1002a0907:
  QMutex::unlock();
  return iVar1;
}

