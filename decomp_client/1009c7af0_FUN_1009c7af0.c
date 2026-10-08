
void FUN_1009c7af0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long in_RAX;
  long local_18;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  local_18 = in_RAX;
  FUN_100c8abb0(param_1 + 1,&local_18,param_1 + 4,(long)param_1 + 0x24,(long)param_3);
  param_1[2] = local_18 + param_1[1];
  param_1[3] = param_1[1];
  return;
}

