
void FUN_10021a2a0(long *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  cVar1 = FUN_10018c1f0(lVar2,2);
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010021a2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

