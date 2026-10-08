
void FUN_1007c7b90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    iVar1 = FUN_10032c830();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (iVar1 == 2) {
      uVar2 = 2;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      uVar2 = 1;
    }
    FUN_1007c74b0(param_1,uVar2);
    return;
  }
  return;
}

