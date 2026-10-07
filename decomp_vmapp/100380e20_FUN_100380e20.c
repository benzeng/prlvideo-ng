
bool FUN_100380e20(long param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x78) == param_2) {
    if (*(int *)(param_1 + 0x7c) == param_3) {
      iVar1 = FUN_10038e1b0(param_4);
      bVar2 = iVar1 == *(int *)(param_1 + 0x18);
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

