
void FUN_1001e2be0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1001d7b00();
      return;
    case 1:
      FUN_1001d95c0();
      return;
    case 2:
      FUN_1001d7ba0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1001d9080(param_1,param_2,*(undefined4 *)param_4[2]);
      return;
    case 4:
      FUN_1001d91f0(param_1,param_2,*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_1001dace0(param_1,param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 6:
      FUN_1001dae50(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_100df99c0("[AppController]","prl_client_app",0,"(!)Error: login failed.");
      uVar2 = FUN_1001d50a0();
      FUN_1001d51e0(uVar2,0x80000249,1,0xffff);
      return;
    case 8:
      FUN_1001dde40(param_1,param_4[1]);
      return;
    case 9:
      FUN_1001ddeb0(param_1,param_4[1]);
      return;
    case 10:
      FUN_1001dfba0();
      return;
    default:
      return;
    }
  }
  switch(param_3) {
  case 2:
    if (*(int *)param_4[1] != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    *(undefined4 *)*param_4 = 2;
    return;
  case 3:
  case 4:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      return;
    }
    if (*(int *)param_4[1] == 1) {
      iVar1 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar1 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar1;
      }
LAB_1001e2ce7:
      *(int *)*param_4 = iVar1;
      return;
    }
    break;
  case 6:
    if (*(int *)param_4[1] != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    *(undefined4 *)*param_4 = 2;
    return;
  case 9:
    if (*(uint *)param_4[1] < 2) {
      iVar1 = DAT_10227150c;
      if (DAT_10227150c == 0) {
        iVar1 = FUN_1001e4190("CLicenseWrap::LicenseInfo",0xffffffffffffffff,1);
        DAT_10227150c = iVar1;
      }
      goto LAB_1001e2ce7;
    }
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

