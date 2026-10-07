
void FUN_100339ed0(long param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (0x2a < param_2) {
    switch(param_2) {
    case 0x2b:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x10f;
      break;
    case 0x2c:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x10d;
      break;
    case 0x2d:
switchD_100339f2a_caseD_2d:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x10e;
      break;
    case 0x2e:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x113;
      break;
    default:
      goto switchD_10033a090_caseD_5;
    }
    goto LAB_10033a070;
  }
  if (param_2 < 0x15) {
    if (param_2 < 0x11) {
      if (param_2 == 1) {
        plVar4 = *(long **)(param_1 + 0xbbb8);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
        uVar2 = 0x100;
        goto LAB_10033a070;
      }
      if (param_2 != 3) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                (*(long **)(param_1 + 0xbbb8),0x10c,param_3);
      (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                (*(long **)(param_1 + 0xbbb8),0x10d,param_3);
      goto switchD_100339f2a_caseD_2d;
    }
    if (param_2 == 0x11) {
      if (6 < param_3) {
        return;
      }
      if ((0x54U >> (param_3 & 0x1f) & 1) == 0) {
        if ((10U >> (param_3 & 0x1f) & 1) == 0) {
          return;
        }
        plVar4 = *(long **)(param_1 + 0xbbb8);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
        uVar2 = 0x110;
        param_3 = 1;
      }
      else {
        plVar4 = *(long **)(param_1 + 0xbbb8);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
        uVar2 = 0x110;
        param_3 = 2;
      }
      goto LAB_10033a070;
    }
    if (param_2 != 0x12) {
      return;
    }
    switch(param_3) {
    case 1:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      lVar1 = *plVar4;
      uVar2 = 1;
      break;
    case 2:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      lVar1 = *plVar4;
      uVar2 = 2;
      break;
    case 3:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      lVar1 = *plVar4;
      uVar2 = 1;
      goto LAB_10033a299;
    case 4:
      plVar4 = *(long **)(param_1 + 0xbbb8);
      lVar1 = *plVar4;
      uVar2 = 2;
LAB_10033a299:
      (**(code **)(lVar1 + 0x60))(plVar4,0x111,uVar2);
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x112;
      param_3 = 1;
      goto LAB_10033a070;
    default:
      goto switchD_10033a090_caseD_5;
    case 6:
      (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x111,2);
      plVar4 = *(long **)(param_1 + 0xbbb8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
      uVar2 = 0x112;
      param_3 = 2;
      goto LAB_10033a070;
    }
    (**(code **)(lVar1 + 0x60))(plVar4,0x111,uVar2);
    plVar4 = *(long **)(param_1 + 0xbbb8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
    uVar2 = 0x112;
    param_3 = 0;
    goto LAB_10033a070;
  }
  if (param_2 != 0x15) {
switchD_10033a090_caseD_5:
    return;
  }
  switch(param_3) {
  case 1:
  case 7:
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x101,2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x102,2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x104,2);
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar3 = 0x105;
    uVar2 = 2;
    goto LAB_10033a21e;
  case 2:
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x101,4);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x102,2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x103,0);
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar2 = 2;
    break;
  case 3:
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar2 = 0xd;
    goto LAB_10033a1b1;
  case 4:
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x101,4);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x102,2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x103,0);
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar2 = 4;
    break;
  default:
    goto switchD_10033a090_caseD_5;
  case 8:
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar2 = 7;
LAB_10033a1b1:
    (**(code **)(lVar1 + 0x60))(plVar4,0x101,uVar2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x102,2);
    (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x103,0);
    plVar4 = *(long **)(param_1 + 0xbbb8);
    lVar1 = *plVar4;
    uVar2 = 3;
  }
  (**(code **)(lVar1 + 0x60))(plVar4,0x104,uVar2);
  (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))(*(long **)(param_1 + 0xbbb8),0x105,2);
  plVar4 = *(long **)(param_1 + 0xbbb8);
  lVar1 = *plVar4;
  uVar3 = 0x106;
  uVar2 = 0;
LAB_10033a21e:
  (**(code **)(lVar1 + 0x60))(plVar4,uVar3,uVar2);
  plVar4 = *(long **)(param_1 + 0xbbb8);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
  uVar2 = 0x141;
  param_3 = 1;
LAB_10033a070:
                    /* WARNING: Could not recover jumptable at 0x00010033a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar4,uVar2,param_3);
  return;
}

