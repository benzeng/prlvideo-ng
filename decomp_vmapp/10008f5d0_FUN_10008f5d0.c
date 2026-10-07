
bool FUN_10008f5d0(ulong param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_3 / 10 + 1;
  do {
    if (*(int *)(param_1 + 0xa4) == param_2) {
      return true;
    }
    QThread::wait(param_1);
    iVar1 = iVar1 + -1;
  } while (1 < iVar1);
  return *(int *)(param_1 + 0xa4) == param_2;
}

