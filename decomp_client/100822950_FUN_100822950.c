
void FUN_100822950(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1002c05a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002c0480(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002c0510(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 3:
      FUN_1002c0440();
      return;
    case 4:
      goto switchD_10082299f_caseD_4;
    case 5:
      uVar1 = FUN_1002c0120();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    case 6:
      uVar1 = FUN_1002c0000();
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    default:
      return;
    }
  }
  if (param_3 == 0) {
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        if (*(int *)param_4[1] == 0) {
          puVar2 = (undefined4 *)*param_4;
          goto LAB_1008229d8;
        }
        if (*(int *)param_4[1] == 1) {
          if (DAT_10226db58 == 0) {
            DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
          }
          *(int *)*param_4 = DAT_10226db58;
          return;
        }
      }
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    puVar2 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar2 = 0xffffffff;
      return;
    }
  }
LAB_1008229d8:
  *puVar2 = 2;
  return;
switchD_10082299f_caseD_4:
  uVar1 = FUN_1002bfe40();
  if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)*param_4 = uVar1;
  return;
}

