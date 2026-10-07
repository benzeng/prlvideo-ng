
int FUN_1000a3a50(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_1000a3990();
  iVar1 = -0x7ffffcae;
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 < 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(long **)(param_1 + 0x1950) = plVar2;
      *(byte *)(param_1 + 0x1ab0) = *(byte *)(param_1 + 0x1ab0) | 0x80;
    }
  }
  return iVar1;
}

