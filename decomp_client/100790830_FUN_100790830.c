
void FUN_100790830(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb0))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x10) == 0) {
    if (cVar1 == '\0') goto LAB_10079086b;
    uVar2 = uVar2 | 0x10;
  }
  else {
    if (cVar1 != '\0') goto LAB_10079086b;
    uVar2 = uVar2 & 0xffffffef;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008605b0(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_10079086b:
  if ((uVar2 & 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100790883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}

