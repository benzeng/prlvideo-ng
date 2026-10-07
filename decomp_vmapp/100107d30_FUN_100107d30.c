
void FUN_100107d30(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  QMutex::lock();
  *(undefined1 *)((long)param_2 + 0x14) = 1;
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
  }
  FUN_100108040(param_1,uVar1);
  QMutex::unlock();
  return;
}

