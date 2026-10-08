
void FUN_100acdb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100acdb6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x78) + 0xc0))(*(long **)(param_1 + 0x78),param_2,param_3);
    return;
  }
  return;
}

