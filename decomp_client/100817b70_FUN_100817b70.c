
void FUN_100817b70(long *param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 local_d0 [176];
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100256670(param_1);
      return;
    case 1:
      FUN_1002579a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002579d0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 3:
      FUN_100257cc0(param_1,*(undefined4 *)param_4[1],param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 4:
      FUN_100259380(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100817f40(local_d0,param_4[1]);
      FUN_100258380(param_1,local_d0,*(undefined8 *)param_4[2],*(undefined8 *)param_4[3]);
      FUN_100818290(local_d0);
      return;
    case 6:
      FUN_1002581e0(param_1);
      return;
    case 7:
      FUN_1002582b0(param_1);
      return;
    case 8:
      iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
      break;
    case 9:
      iVar1 = (**(code **)(*param_1 + 200))(param_1);
      break;
    case 10:
      iVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
      break;
    default:
      return;
    }
    piVar3 = (int *)*param_4;
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != 0xc) {
      if (param_2 != 9) {
        return;
      }
      if (param_3 == 0) {
        pvVar2 = operator_new(0x40);
        FUN_100256070(pvVar2,*(undefined4 *)param_4[1]);
        if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
          *(undefined8 *)*param_4 = pvVar2;
          return;
        }
        return;
      }
      return;
    }
    if (param_3 == 2) {
      if (*(int *)param_4[1] != 1) goto LAB_100817ca1;
      iVar1 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar1 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar1;
      }
    }
    else if (param_3 == 3) {
      if (*(int *)param_4[1] != 0) {
LAB_100817ca1:
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      iVar1 = DAT_102274888;
      if (DAT_102274888 == 0) {
        iVar1 = FUN_100613da0("CLicenseManager::DialogType",0xffffffffffffffff,1);
        DAT_102274888 = iVar1;
      }
    }
    else {
      if ((param_3 != 5) || (*(int *)param_4[1] != 1)) goto LAB_100817ca1;
      iVar1 = FUN_1003dff90();
    }
    piVar3 = (int *)*param_4;
  }
  *piVar3 = iVar1;
  return;
}

