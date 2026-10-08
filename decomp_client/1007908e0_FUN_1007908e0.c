
void FUN_1007908e0(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x20) == 0) {
    if (cVar1 == '\0') goto LAB_10079091b;
    uVar2 = uVar2 | 0x20;
  }
  else {
    if (cVar1 != '\0') goto LAB_10079091b;
    uVar2 = uVar2 & 0xffffffdf;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860610(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_10079091b:
  if ((uVar2 & 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100790933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}

