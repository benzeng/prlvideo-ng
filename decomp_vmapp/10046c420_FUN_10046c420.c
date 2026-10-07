
void FUN_10046c420(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x28) + 8);
  iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0xc);
  if (iVar3 < iVar1) {
    iVar3 = (iVar1 + 1) - iVar3;
    do {
      plVar2 = (long *)FUN_10046c8a0(param_1 + 0x28,iVar3 + -2);
      FUN_10046c480(*(undefined8 *)*plVar2,(undefined8 *)*plVar2 + 1,param_2);
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  return;
}

