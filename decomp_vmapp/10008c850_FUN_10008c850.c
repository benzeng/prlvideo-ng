
long FUN_10008c850(ulong *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < *param_1) {
    lVar1 = FUN_10008c320();
    return lVar1;
  }
  return (param_2 - *param_1) + *(long *)(param_1[0xc] + 0x28);
}

