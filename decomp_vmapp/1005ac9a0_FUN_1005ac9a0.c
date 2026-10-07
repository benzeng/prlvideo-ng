
void FUN_1005ac9a0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((long)param_1 + 0x34) == 0) {
    FUN_1008e3970("","vdisk",0,"Error: async request reference is zero!");
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x263,
                  "ReqCompletion");
  }
  else {
    iVar1 = *(int *)(param_1 + 7);
    if (-1 < *(int *)(param_1 + 7)) {
      *(int *)(param_1 + 7) = param_2;
      iVar1 = param_2;
    }
    iVar2 = *(int *)((long)param_1 + 0x34) + -1;
    *(int *)((long)param_1 + 0x34) = iVar2;
    if ((iVar2 == 0) && (*(char *)((long)param_1 + 0x3c) != '\0')) {
      FUN_1005aca50(*param_1,param_1[1],param_1 + 8,iVar1);
      return;
    }
  }
  return;
}

