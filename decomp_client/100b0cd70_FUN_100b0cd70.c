
long * FUN_100b0cd70(int param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","dimg",3,"Creating image class type %u",param_1);
  }
  if (param_1 < 0x51) {
    uVar3 = 0;
    switch(param_1) {
    case 1:
    case 8:
switchD_100b0cdd4_caseD_1:
      plVar1 = operator_new(0x68);
      FUN_100b0e8d0(plVar1,param_1);
      break;
    case 2:
      plVar1 = operator_new(0x18168);
      FUN_100b12840(plVar1);
      goto LAB_100b0ce74;
    default:
      goto switchD_100b0cdd4_caseD_3;
    case 4:
      plVar1 = operator_new(0x70);
      FUN_100b1df10(plVar1);
      break;
    case 7:
      uVar3 = 1;
    case 6:
      plVar1 = operator_new(0x88);
      FUN_100b318e0(plVar1,uVar3);
    }
  }
  else {
    if (param_1 < 0x5a) {
      if (param_1 != 0x51) {
switchD_100b0cdd4_caseD_3:
        *param_3 = 0x80021011;
        return (long *)0x0;
      }
      plVar1 = operator_new(0x18980);
      FUN_100b1cda0(plVar1);
    }
    else {
      switch(param_1) {
      case 0x5a:
      case 0x5c:
        goto switchD_100b0cdd4_caseD_1;
      case 0x5b:
      case 0x5d:
        plVar1 = operator_new(0x18358);
        FUN_100b28480(plVar1);
        break;
      default:
        goto switchD_100b0cdd4_caseD_3;
      }
    }
LAB_100b0ce74:
    plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  }
  plVar2 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
    plVar2 = plVar1;
  }
  return plVar2;
}

