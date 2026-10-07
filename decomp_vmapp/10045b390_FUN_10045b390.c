
int FUN_10045b390(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return iVar1 - iVar2;
}

