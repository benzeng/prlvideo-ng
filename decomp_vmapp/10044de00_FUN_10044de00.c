
int FUN_10044de00(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return iVar1 - iVar2;
}

