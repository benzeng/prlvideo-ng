
int FUN_100ba5ab0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  void *local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (void *)0x0;
  lStack_40 = 0;
  iVar1 = FUN_100ba55c0(param_1,&local_48);
  if (iVar1 == 0) {
    *param_2 = local_48;
    *param_3 = lStack_40 - (long)local_48;
    iVar1 = 0;
  }
  else if (local_48 != (void *)0x0) {
    _free(local_48);
  }
  return iVar1;
}

