
void FUN_10083ba00(long *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083ba25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x210))();
      return;
    case 1:
      FUN_1004e0810();
      return;
    case 2:
      FUN_1004e13f0();
      return;
    case 3:
      FUN_1004e1300();
      return;
    case 4:
      FUN_1004e1320();
      return;
    }
  }
  return;
}

