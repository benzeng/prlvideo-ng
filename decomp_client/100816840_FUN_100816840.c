
void FUN_100816840(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 2) || (*(int *)param_4[1] != 1)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (DAT_10226db58 == 0) {
      DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
    }
    piVar2 = (int *)*param_4;
    iVar1 = DAT_10226db58;
    goto LAB_100816961;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x128);
    goto LAB_1008168eb;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0001008168df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)param_4[1]);
    return;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x138);
LAB_1008168eb:
                    /* WARNING: Could not recover jumptable at 0x0001008168fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x000100816908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x140))();
    return;
  case 4:
    iVar1 = (**(code **)(*param_1 + 200))();
    break;
  case 5:
    iVar1 = (**(code **)(*param_1 + 0xd0))();
    break;
  case 6:
    iVar1 = (**(code **)(*param_1 + 0xd8))();
    break;
  case 7:
    iVar1 = (**(code **)(*param_1 + 0xe0))();
    break;
  case 8:
    iVar1 = (**(code **)(*param_1 + 0xe8))();
    break;
  case 9:
    iVar1 = (**(code **)(*param_1 + 0xf0))();
    break;
  case 10:
    iVar1 = (**(code **)(*param_1 + 0xf8))();
    break;
  default:
    goto switchD_1008168ad_default;
  }
  piVar2 = (int *)*param_4;
  if (piVar2 != (int *)0x0) {
LAB_100816961:
    *piVar2 = iVar1;
  }
switchD_1008168ad_default:
  return;
}

