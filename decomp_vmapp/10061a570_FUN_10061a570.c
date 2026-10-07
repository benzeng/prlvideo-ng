
void FUN_10061a570(long param_1,int *param_2)

{
  int iVar1;
  
  *(int **)(param_1 + 8) = param_2;
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar1 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (iVar1 < 0) {
      FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","nPrevCount >= 0","Base.cpp",
                    0x27,"SetRefCounterPtr");
    }
  }
  return;
}

