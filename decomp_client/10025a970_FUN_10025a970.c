
void FUN_10025a970(long *param_1,int param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    lVar1 = CVmSharing::getHostSharing();
    FUN_10025a9f0(lVar1 + 0xa8,param_1 + 5);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0;
  }
  else {
    if ((long *)param_1[5] != (long *)0x0) {
      (**(code **)(*(long *)param_1[5] + 0x20))();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar2 = 0x80000275;
  }
                    /* WARNING: Could not recover jumptable at 0x00010025a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

