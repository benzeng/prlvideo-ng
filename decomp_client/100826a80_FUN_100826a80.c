
void FUN_100826a80(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 5) || (*(int *)param_4[1] != 1)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (DAT_10226db58 == 0) {
      DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
    }
    piVar2 = (int *)*param_4;
    iVar1 = DAT_10226db58;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100826af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002d4db0();
      return;
    case 2:
      FUN_1002d4ed0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002d4eb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002d4c30();
      return;
    case 5:
      FUN_1002d5420(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 6:
      iVar1 = FUN_1002d41a0();
      break;
    case 7:
      iVar1 = FUN_1002d43c0();
      break;
    case 8:
      iVar1 = FUN_1002d46e0();
      break;
    case 9:
      iVar1 = FUN_1002d48c0();
      break;
    case 10:
      iVar1 = FUN_1002d4c90();
      break;
    case 0xb:
      iVar1 = FUN_1002d4d80();
      break;
    default:
      return;
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  *piVar2 = iVar1;
  return;
}

