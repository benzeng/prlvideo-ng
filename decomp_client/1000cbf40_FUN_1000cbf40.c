
void FUN_1000cbf40(long param_1,int param_2)

{
  if ((-1 < param_2) &&
     (param_2 < *(int *)(*(long *)(param_1 + 0x58) + 0xc) - *(int *)(*(long *)(param_1 + 0x58) + 8))
     ) {
    FUN_1000e53a0(param_1 + 0x58);
    FUN_1000df020(param_1);
    FUN_1000df110(param_1);
    return;
  }
  return;
}

