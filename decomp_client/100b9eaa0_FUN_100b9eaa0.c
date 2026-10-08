
int FUN_100b9eaa0(undefined4 *param_1,char *param_2,int param_3)

{
  char *in_RAX;
  ulong uVar1;
  char *local_28;
  
  local_28 = in_RAX;
  uVar1 = _strtoul(param_2,&local_28,10);
  *param_1 = (int)uVar1;
  if (param_2 + param_3 != local_28) {
    param_3 = -2;
  }
  return param_3;
}

