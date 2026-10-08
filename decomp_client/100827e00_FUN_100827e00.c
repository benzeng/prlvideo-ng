
void FUN_100827e00(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((((param_3 != 8) && (param_3 != 9)) && (param_3 != 10)) || (*(int *)param_4[1] != 1)) {
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
      FUN_1002e3080(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002e4eb0();
      return;
    case 2:
      FUN_1002e2990(param_1,*(undefined1 *)param_4[1]);
      return;
    case 3:
      FUN_1002e4ee0();
      return;
    case 4:
      FUN_1002e0c00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1002e4a90(param_1,param_4[1],param_4[2]);
      return;
    case 6:
      FUN_1002e4c60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002e4b70(param_1,param_4[1]);
      return;
    case 8:
      FUN_1002e4a20(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_1002e4a70(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      FUN_1002e5120(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xb:
      FUN_1002e51a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xc:
      FUN_1002e5210();
      return;
    case 0xd:
      iVar1 = FUN_1002e0910();
      break;
    case 0xe:
      iVar1 = FUN_1002e0f90();
      break;
    case 0xf:
      iVar1 = FUN_1002e1260();
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

