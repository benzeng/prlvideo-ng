
void FUN_10024b5b0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    iVar1 = FUN_10018a9d0();
    if (iVar1 != (int)param_1[6]) {
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      lVar4 = 0;
      if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar4 = param_1[4];
      }
      iVar2 = FUN_10018a9d0(lVar4);
      if (iVar1 == iVar2) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x80000009;
      }
                    /* WARNING: Could not recover jumptable at 0x00010024b63b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,uVar3,extraout_RDX,*(code **)(*param_1 + 0xb0));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010024b5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

