
undefined8 FUN_10037f170(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x8528) == 0) {
    (*DAT_1011c5bc0)(0xc11);
  }
  else {
    (*DAT_1011c5c78)(0xc11);
    iVar2 = *(int *)(param_2 + 0xbb58) - *(int *)(param_2 + 0xbb50);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar1 = *(int *)(param_2 + 0xbb5c) - *(int *)(param_2 + 0xbb54);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    (*DAT_1011c69c8)(*(int *)(param_2 + 0xbb50),*(int *)(param_2 + 0xbb54),iVar2,iVar1);
  }
  return 0;
}

