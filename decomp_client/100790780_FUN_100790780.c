
void FUN_100790780(long *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 8) == 0) {
    if (cVar1 == '\0') goto LAB_1007907bb;
    uVar2 = uVar2 | 8;
  }
  else {
    if (cVar1 != '\0') goto LAB_1007907bb;
    uVar2 = uVar2 & 0xfffffff7;
  }
  *(uint *)(param_1 + 2) = uVar2;
  FUN_100860550(param_1,cVar1);
  uVar2 = *(uint *)(param_1 + 2);
LAB_1007907bb:
  if ((uVar2 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007907d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}

