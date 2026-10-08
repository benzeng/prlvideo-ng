
void FUN_10023fc30(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (-1 < param_2) {
    uVar1 = FUN_100794960();
    lVar2 = 0;
    if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar2 = param_1[4];
    }
    FUN_1007958e0(uVar1,lVar2,param_1 + 5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010023fc7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

