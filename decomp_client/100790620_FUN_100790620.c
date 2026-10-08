
void FUN_100790620(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 2) == 0) {
    if (cVar1 == '\0') goto LAB_10079065b;
    uVar2 = uVar2 | 2;
  }
  else {
    if (cVar1 != '\0') goto LAB_10079065b;
    uVar2 = uVar2 & 0xfffffffd;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_1008604a0(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_10079065b:
  if ((uVar2 & 2) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100790673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}

