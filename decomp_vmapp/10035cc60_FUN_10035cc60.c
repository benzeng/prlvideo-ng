
int FUN_10035cc60(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == -1) {
    (*DAT_1011c6130)(*(undefined4 *)(param_1 + 0x30),0x8866,param_1 + 0x34);
    iVar1 = *(int *)(param_1 + 0x34);
  }
  return iVar1;
}

