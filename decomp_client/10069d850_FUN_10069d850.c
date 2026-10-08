
void FUN_10069d850(long param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
LAB_10069d865:
    return;
  }
  switch(param_3) {
  case 0:
    FUN_100698590(param_1);
    return;
  case 1:
    FUN_100698670(param_1);
    return;
  case 2:
    FUN_100698750(param_1);
    return;
  case 3:
    FUN_100698820(param_1);
    return;
  case 4:
    FUN_100698990(param_1);
    return;
  case 5:
    FUN_100698ac0(param_1);
    return;
  case 6:
    FUN_100698c00(param_1);
    return;
  case 7:
    FUN_1006990c0(param_1);
    return;
  case 8:
    FUN_100699240(param_1);
    return;
  case 9:
    FUN_1006992a0(param_1);
    return;
  case 10:
    FUN_100699300(param_1);
    return;
  case 0xb:
    FUN_100699360(param_1);
    return;
  case 0xc:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 1;
    break;
  case 0xd:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 2;
    break;
  case 0xe:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 3;
    break;
  case 0xf:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 4;
    break;
  case 0x10:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 5;
    break;
  case 0x11:
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c60(uVar3);
    uVar4 = 6;
    break;
  case 0x12:
    pvVar2 = operator_new(0x38);
    FUN_1002d01c0(pvVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),1);
    goto LAB_10069da5c;
  case 0x13:
    pvVar2 = operator_new(0x38);
    FUN_1002d01c0(pvVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),2);
    goto LAB_10069da5c;
  case 0x14:
    pvVar2 = operator_new(0x38);
    FUN_1002d01c0(pvVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),4);
    goto LAB_10069da5c;
  case 0x15:
    pvVar2 = operator_new(0x38);
    FUN_1002d01c0(pvVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),8);
LAB_10069da5c:
    CAbstractTask::execute();
    return;
  case 0x16:
    FUN_10018c2b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    CVmConfiguration::getVmSettings();
    CVmSettings::getTravelOptions();
    bVar1 = CVmTravelOptions::isEnabled();
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319ce0(uVar3);
    FUN_1003511a0(uVar3,bVar1 ^ 1);
    return;
  case 0x17:
    FUN_100699680(param_1);
    return;
  default:
    goto LAB_10069d865;
  }
  FUN_10033c610(uVar3,uVar4);
  return;
}

