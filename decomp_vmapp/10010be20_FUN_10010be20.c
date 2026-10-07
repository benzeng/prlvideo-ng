
void FUN_10010be20(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(*param_3 + 0x10) + 0x40);
  if (iVar1 == 0x30dc4) {
    FUN_10010c6f0();
    return;
  }
  if (iVar1 == 0x30dc3) {
    FUN_10010be50();
    return;
  }
  return;
}

