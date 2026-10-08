
void FUN_1009c7a70(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  long lVar3;
  long local_18;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0xffffffff;
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10) + lVar2;
  iVar1 = *(int *)(lVar2 + 4);
  *param_1 = lVar3;
  param_1[1] = lVar3;
  local_18 = in_RAX;
  FUN_100c8abb0(param_1 + 1,&local_18,param_1 + 4,(long)param_1 + 0x24,(long)iVar1);
  param_1[2] = local_18 + param_1[1];
  param_1[3] = param_1[1];
  return;
}

