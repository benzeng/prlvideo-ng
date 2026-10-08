
void FUN_100790990(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xc0))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 0x40) == 0) {
    if (cVar1 == '\0') goto LAB_1007909cb;
    uVar2 = uVar2 | 0x40;
  }
  else {
    if (cVar1 != '\0') goto LAB_1007909cb;
    uVar2 = uVar2 & 0xffffffbf;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860670(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_1007909cb:
  if ((uVar2 & 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007909e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}

