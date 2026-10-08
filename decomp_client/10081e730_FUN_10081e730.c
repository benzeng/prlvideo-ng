
void FUN_10081e730(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar1 = *(undefined4 *)param_4[1];
    goto LAB_10081e777;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar1 = 0x80000275;
LAB_10081e777:
                    /* WARNING: Could not recover jumptable at 0x00010081e77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
    return;
  case 2:
    FUN_1002980d0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    FUN_100298790();
    return;
  case 4:
    FUN_100298730();
    return;
  case 5:
    FUN_100298e10();
    return;
  case 6:
    FUN_100298b50(param_1,*(undefined4 *)param_4[1]);
    return;
  case 7:
    uVar1 = FUN_100298170();
    break;
  case 8:
    uVar1 = FUN_100297e80();
    break;
  case 9:
    uVar1 = FUN_1002987c0();
    break;
  case 10:
    uVar1 = FUN_100298bc0();
    break;
  case 0xb:
    uVar1 = FUN_100298c90();
    break;
  case 0xc:
    uVar1 = FUN_100298900();
    break;
  case 0xd:
    uVar1 = FUN_100298940();
    break;
  case 0xe:
    uVar1 = FUN_100298d70();
    break;
  default:
    goto switchD_10081e75a_default;
  }
  if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
    *(undefined4 *)*param_4 = uVar1;
  }
switchD_10081e75a_default:
  return;
}

