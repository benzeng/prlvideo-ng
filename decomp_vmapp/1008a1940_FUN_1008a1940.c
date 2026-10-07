
int FUN_1008a1940(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1008a52d0(param_1,param_2,&DAT_100be1970);
  if (param_1 != 0) {
    iVar2 = FUN_1008a1ad0(*(undefined8 *)(param_1 + 0xb0),param_2);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

