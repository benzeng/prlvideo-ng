
int FUN_100b9a1b0(undefined8 param_1,undefined4 param_2,long param_3)

{
  long ****pppplVar1;
  int iVar2;
  long ***local_38;
  long ***local_30;
  
  local_38 = (long ***)&local_38;
  local_30 = (long ***)&local_38;
  iVar2 = FUN_100b9ad70(&local_38,param_1,param_2);
  pppplVar1 = (long ****)local_38;
  if (iVar2 == 0) {
    *(long *)(param_3 + 8) = param_3;
    *(long *)param_3 = param_3;
    iVar2 = FUN_100b9a400(local_38,param_3);
    pppplVar1 = (long ****)local_38;
  }
  while (pppplVar1 != &local_38) {
    pppplVar1 = (long ****)*pppplVar1;
    FUN_100ba1ea0();
  }
  return iVar2;
}

