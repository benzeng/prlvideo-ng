
int FUN_100c7cec0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100c80850(param_1,param_2,&DAT_102251f80);
  if (param_1 != 0) {
    iVar2 = FUN_100c7d050(*(undefined8 *)(param_1 + 0xb0),param_2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

