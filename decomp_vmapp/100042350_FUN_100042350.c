
void FUN_100042350(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100042390(*(undefined8 *)(param_1 + 0xa8));
  if (iVar1 != -1) {
    FUN_1004c07d0(*(long *)(param_1 + 0xa8) + 0x10,param_2,iVar1);
    return;
  }
  return;
}

