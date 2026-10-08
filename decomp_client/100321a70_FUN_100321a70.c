
void FUN_100321a70(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == 0) && (iVar1 = *(int *)(param_1 + 0x54), iVar1 != param_3)) {
    *(int *)(param_1 + 0x54) = param_3;
    FUN_10082a030(param_1,param_3,iVar1);
    return;
  }
  return;
}

