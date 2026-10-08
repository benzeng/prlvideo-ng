
void FUN_100091500(long *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 < 0x13) {
    switch(iVar1) {
    case 4:
      FUN_100091590();
      return;
    case 8:
      FUN_100090910();
      return;
    case 10:
      FUN_100091410();
      return;
    case 0xd:
      FUN_1003345c0(param_1[2]);
      return;
    }
  }
  else if (iVar1 == 0x13) {
                    /* WARNING: Could not recover jumptable at 0x000100091532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))();
    return;
  }
  return;
}

