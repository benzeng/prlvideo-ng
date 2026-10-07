
void FUN_1004a9c30(undefined4 param_1,void *param_2,uint param_3,long *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_4;
  *puVar1 = param_1;
  puVar1[1] = param_3;
  *param_4 = (long)(puVar1 + 2);
  _memcpy(puVar1 + 2,param_2,(ulong)param_3);
  *param_4 = *param_4 + (ulong)param_3;
  return;
}

