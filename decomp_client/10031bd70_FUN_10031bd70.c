
void FUN_10031bd70(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == param_2) {
    return;
  }
  *(int *)(param_1 + 0x58) = param_2;
  FUN_100df99c0("","prl_client_app",0,"Tools installation stage changed from [%d] to [%d]",iVar1,
                param_2);
  FUN_10082a090(param_1,param_2,iVar1);
  return;
}

