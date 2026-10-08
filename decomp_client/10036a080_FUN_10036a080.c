
void FUN_10036a080(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int in_stack_00000018;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  iVar1 = FUN_100323e20(uVar2);
  if (in_stack_00000018 == iVar1) {
    bVar3 = true;
    if (*(int *)(param_1 + 0x84) != 0) {
      bVar3 = *(int *)(param_1 + 0x80) == 0;
    }
    FUN_100369150(param_1,bVar3,0);
    return;
  }
  return;
}

