
void FUN_100ac5350(double param_1,double param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  switch(param_4) {
  case 0x12:
    *(undefined4 *)(param_3 + 0xb08) = 4;
    *(double *)(param_3 + 0xb10) = *(double *)(param_3 + 0xb10) - param_1;
    break;
  case 0x13:
    *(undefined4 *)(param_3 + 0xb0c) = 1;
    *(undefined8 *)(param_3 + 0xb18) = 0;
    *(undefined8 *)(param_3 + 0xb10) = 0;
    return;
  case 0x14:
    *(undefined4 *)(param_3 + 0xb0c) = 3;
    break;
  default:
    goto switchD_100ac5373_caseD_15;
  case 0x1d:
    uVar1 = FUN_100319cd0(*(undefined8 *)(param_3 + 0x20));
    FUN_100346ec0(uVar1,(int)param_1);
    return;
  case 0x1e:
    *(undefined4 *)(param_3 + 0xb08) = 4;
    dVar2 = *(double *)(param_3 + 0xb18);
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      *(undefined8 *)(param_3 + 0xb18) = 0x3ff0000000000000;
      dVar2 = DAT_100e11050;
    }
    *(double *)(param_3 + 0xb18) = (param_1 + DAT_100e11050) * dVar2;
    break;
  case 0x1f:
    *(undefined4 *)(param_3 + 0xb08) = 5;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      if (param_1 <= 0.0) {
        uVar1 = 0x4000000000000000;
      }
      else {
        uVar1 = 0x3ff0000000000000;
      }
      *(undefined8 *)(param_3 + 0xb10) = uVar1;
    }
    else {
      *(undefined8 *)(param_3 + 0xb10) = 0;
    }
    if ((param_2 != 0.0) || (NAN(param_2))) {
      if (param_2 <= 0.0) {
        uVar1 = 0x4010000000000000;
      }
      else {
        uVar1 = 0x4008000000000000;
      }
      *(undefined8 *)(param_3 + 0xb18) = uVar1;
      *(undefined4 *)(param_3 + 0xb0c) = 3;
    }
    else {
      *(undefined8 *)(param_3 + 0xb18) = 0;
      *(undefined4 *)(param_3 + 0xb0c) = 3;
    }
  }
  uVar1 = FUN_100319cd0(*(undefined8 *)(param_3 + 0x20));
  FUN_100346850(uVar1,*(undefined4 *)(param_3 + 0xb08),*(undefined4 *)(param_3 + 0xb0c),
                param_3 + 0xb10,param_3 + 0xb18);
  *(undefined4 *)(param_3 + 0xb0c) = 2;
switchD_100ac5373_caseD_15:
  return;
}

