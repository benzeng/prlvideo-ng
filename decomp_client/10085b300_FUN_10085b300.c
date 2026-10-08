
void FUN_10085b300(long *param_1,int param_2,int param_3,long param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x80);
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010085b337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))();
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010085b32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,**(undefined8 **)(param_4 + 8));
  return;
}

