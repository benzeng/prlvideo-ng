
long * FUN_100684700(int param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","dimg",3,"Creating image class type %u",param_1);
  }
  if (param_1 < 0x51) {
    uVar3 = 0;
    switch(param_1) {
    case 1:
    case 8:
switchD_100684764_caseD_1:
      plVar1 = operator_new(0x68);
      FUN_100686260(plVar1,param_1);
      break;
    case 2:
      plVar1 = operator_new(0x18168);
      FUN_10068a1d0(plVar1);
      goto LAB_100684804;
    default:
      goto switchD_100684764_caseD_3;
    case 4:
      plVar1 = operator_new(0x70);
      FUN_1006958a0(plVar1);
      break;
    case 7:
      uVar3 = 1;
    case 6:
      plVar1 = operator_new(0x88);
      FUN_1006a9410(plVar1,uVar3);
    }
  }
  else {
    if (param_1 < 0x5a) {
      if (param_1 != 0x51) {
switchD_100684764_caseD_3:
        *param_3 = 0x80021011;
        return (long *)0x0;
      }
      plVar1 = operator_new(0x18980);
      FUN_100694730(plVar1);
    }
    else {
      switch(param_1) {
      case 0x5a:
      case 0x5c:
        goto switchD_100684764_caseD_1;
      case 0x5b:
      case 0x5d:
        plVar1 = operator_new(0x18358);
        FUN_10069fe10(plVar1);
        break;
      default:
        goto switchD_100684764_caseD_3;
      }
    }
LAB_100684804:
    plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  }
  plVar2 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
    plVar2 = plVar1;
  }
  return plVar2;
}

