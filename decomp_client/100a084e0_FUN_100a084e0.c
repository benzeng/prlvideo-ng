
uint FUN_100a084e0(void)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_100a083b0();
  iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3);
  uVar2 = iVar1 - 1;
  if (2 < uVar2) {
    uVar2 = 3;
  }
  return uVar2;
}

