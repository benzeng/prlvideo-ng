
void FUN_1008280a0(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 1) || (*(int *)param_4[1] != 1)) {
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
                    /* WARNING: Could not recover jumptable at 0x000100828114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002e9bd0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      iVar1 = FUN_1002e9580();
      break;
    case 3:
      iVar1 = FUN_1002e9650();
      break;
    case 4:
      iVar1 = FUN_1002e9e30();
      break;
    case 5:
      iVar1 = FUN_1002e9ed0();
      break;
    case 6:
      iVar1 = FUN_1002e9c50();
      break;
    case 7:
      iVar1 = FUN_1002e9d50();
      break;
    case 8:
      iVar1 = FUN_1002e9f70();
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

