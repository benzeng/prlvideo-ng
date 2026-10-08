
int FUN_100b1aa50(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_100b21df0();
  if (-1 < iVar2) {
    plVar1 = *(long **)(param_1 + 0x20);
    iVar2 = 0;
    if ((*(uint *)(plVar1 + 0x10) & 1) != 0) {
      *(uint *)(plVar1 + 0x10) = *(uint *)(plVar1 + 0x10) & 0xfffffffe;
      iVar3 = (**(code **)(*plVar1 + 0x20))();
      if (iVar3 < 0) {
        iVar2 = 0;
        FUN_100df99c0("","dimg",0,"SaveHasData() write failed. 0x%X",iVar3);
      }
    }
  }
  return iVar2;
}

