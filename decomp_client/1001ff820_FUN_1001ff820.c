
void FUN_1001ff820(long *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 3) {
    MacUtils::showInFinder((QString *)(param_1 + 9));
  }
  else if (param_3 == 1) {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001548f0(uVar1,param_1 + 7);
    if (lVar2 != 0) {
      FUN_100192d10(lVar2,0x27f,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ff87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

