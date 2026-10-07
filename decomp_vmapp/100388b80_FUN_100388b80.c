
void FUN_100388b80(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  ulong param_5,uint param_6,undefined4 param_7)

{
  if (param_4 < 0x8c18) {
    if (param_4 < 0x8513) {
      if (param_4 < 0x806f) {
        if (param_4 == 0xde0) {
                    /* WARNING: Could not recover jumptable at 0x000100388bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_1011c75b0)(param_2,param_3,param_5 & 0xffffffff,param_7,param_5,DAT_1011c75b0);
          return;
        }
        if (param_4 == 0xde1) {
LAB_100388c71:
                    /* WARNING: Could not recover jumptable at 0x000100388c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_1011c5de8)(param_2,param_3,param_4,param_5 & 0xffffffff,param_7,DAT_1011c5de8);
          return;
        }
      }
      else {
        if (param_4 == 0x806f) goto LAB_100388c45;
        if (param_4 == 0x84f5) goto LAB_100388c71;
      }
    }
    else if (param_4 == 0x8513) {
                    /* WARNING: Could not recover jumptable at 0x000100388c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1011c5de8)(param_2,param_3,param_6 + 0x8515 + (param_6 / 6) * -6,param_5 & 0xffffffff,
                       param_7);
      return;
    }
  }
  else if (param_4 < 0x9100) {
    if ((param_4 == 0x8c18) || (param_4 == 0x8c1a)) {
LAB_100388c45:
                    /* WARNING: Could not recover jumptable at 0x000100388c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1011c5e18)(param_2,param_3,param_5 & 0xffffffff,param_7,param_6);
      return;
    }
  }
  else {
    if (param_4 == 0x9102) goto LAB_100388c45;
    if (param_4 == 0x9100) goto LAB_100388c71;
  }
  return;
}

