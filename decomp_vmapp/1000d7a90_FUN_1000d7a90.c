
void FUN_1000d7a90(long *param_1,uint param_2)

{
  uint uVar1;
  
  QMutex::lock();
  uVar1 = *(uint *)(param_1 + 7) | param_2;
  if (~param_2 <= param_2) {
    uVar1 = *(uint *)(param_1 + 7) & param_2;
  }
  *(uint *)(param_1 + 7) = uVar1;
  if ((char)param_1[8] == '\0') {
    FUN_100430270(*(undefined8 *)(*param_1 + 0xf0));
  }
  QMutex::unlock();
  return;
}

