
void FUN_100821c80(long *param_1,int param_2,int param_3,long *param_4)

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
                    /* WARNING: Could not recover jumptable at 0x000100821cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002b80e0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_1002b8290(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002b8bb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002b9f10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1002ba6b0(param_1,param_4[1]);
      return;
    case 6:
      FUN_1002ba860();
      return;
    case 7:
      iVar1 = FUN_1002b7790();
      break;
    case 8:
      iVar1 = FUN_1002b78b0();
      break;
    case 9:
      iVar1 = FUN_1002b7980();
      break;
    case 10:
      iVar1 = FUN_1002b8100();
      break;
    case 0xb:
      iVar1 = FUN_1002b88d0();
      break;
    case 0xc:
      iVar1 = FUN_1002b9cd0();
      break;
    case 0xd:
      iVar1 = FUN_1002ba6c0();
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

