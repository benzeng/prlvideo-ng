
undefined8 FUN_100230e80(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  iVar1 = FUN_100319ae0(lVar3);
  if ((int)param_1[5] != iVar1) {
    switch(iVar1) {
    case 1:
                    /* WARNING: Could not recover jumptable at 0x000100230ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
      return uVar2;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x000100230ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      return uVar2;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100230efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      return uVar2;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x000100230f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
      return uVar2;
    }
  }
  return 0;
}

