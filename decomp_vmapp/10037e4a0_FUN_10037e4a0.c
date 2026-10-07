
undefined8 FUN_10037e4a0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1a0) - *(int *)(param_2 + 0x198);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_2 + 0x1a4) - *(int *)(param_2 + 0x19c);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  (*DAT_1011c72d0)(*(int *)(param_2 + 0x198),*(int *)(param_2 + 0x19c),iVar2,iVar1);
  return 0;
}

