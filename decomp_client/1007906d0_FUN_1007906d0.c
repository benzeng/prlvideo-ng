
void FUN_1007906d0(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 4) == 0) {
    if (cVar1 == '\0') goto LAB_10079070b;
    uVar2 = uVar2 | 4;
  }
  else {
    if (cVar1 != '\0') goto LAB_10079070b;
    uVar2 = uVar2 & 0xfffffffb;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008604f0(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_10079070b:
  if ((uVar2 & 4) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100790723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}

