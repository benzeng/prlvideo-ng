
void FUN_10018fec0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 < 0x40c) {
    switch(iVar1) {
    case 0x3e9:
      goto switchD_10018fee6_caseD_3e9;
    case 0x3ea:
      FUN_100804ee0();
      return;
    default:
      return;
    case 0x3ee:
      FUN_100804f40();
      return;
    case 0x3ef:
      FUN_100804fa0();
      return;
    case 0x3f0:
      FUN_100804e20();
      return;
    }
  }
  if (iVar1 == 0x40c) {
switchD_10018fee6_caseD_3e9:
    FUN_100804e80();
    return;
  }
  return;
}

