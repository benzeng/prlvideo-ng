
void FUN_1004b5020(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004b50a0();
  if (iVar1 == 1) {
    QMutex::lock();
    FUN_1004b5150(param_1,param_2);
    QMutex::unlock();
    return;
  }
  return;
}

