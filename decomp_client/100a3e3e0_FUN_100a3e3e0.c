
void FUN_100a3e3e0(long param_1,undefined4 param_2,char param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long *plVar3;
  
  switch(param_2) {
  case 0:
    lVar1 = **(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      (**(code **)(lVar1 + 0x38))(*(long **)(param_1 + 0x10),1);
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
    }
    else {
      (**(code **)(lVar1 + 0x30))();
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
    }
    uVar2 = 2;
    break;
  case 1:
    plVar3 = *(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
      uVar2 = 3;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
      uVar2 = 3;
    }
    break;
  case 2:
    plVar3 = *(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
      uVar2 = 0;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
      uVar2 = 0;
    }
    break;
  case 3:
    lVar1 = **(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      (**(code **)(lVar1 + 0x38))(*(long **)(param_1 + 0x10),4);
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
      uVar2 = 5;
    }
    else {
      (**(code **)(lVar1 + 0x30))();
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
      uVar2 = 5;
    }
    break;
  case 4:
    lVar1 = **(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      (**(code **)(lVar1 + 0x38))(*(long **)(param_1 + 0x10),6);
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
      uVar2 = 7;
    }
    else {
      (**(code **)(lVar1 + 0x30))();
      plVar3 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
      uVar2 = 7;
    }
    break;
  case 5:
    plVar3 = *(long **)(param_1 + 0x10);
    if (param_3 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x38);
      uVar2 = 10;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x30);
      uVar2 = 10;
    }
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a3e529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,uVar2);
  return;
}

