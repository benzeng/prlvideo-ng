
ulong FUN_10081b220(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  time_t tVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  plVar4 = (long *)param_1[6];
  lVar7 = *plVar4;
  iVar2 = (int)param_2;
  if ((iVar2 != 0x6d) && (lVar7 == 0)) {
    return 0;
  }
  uVar3 = 0;
  if (100 < iVar2) {
    if (0x76 < iVar2) {
      switch(iVar2) {
      case 0x77:
        if (param_3 == 0) {
          FUN_10080eba0(lVar7);
        }
        else {
          FUN_10080eca0();
        }
        goto LAB_10081b66a;
      case 0x7d:
        uVar3 = plVar4[2];
        if (param_3 < 0x200) {
          return uVar3;
        }
        plVar4[2] = param_3;
        return uVar3;
      case 0x7e:
        return (long)(int)plVar4[1];
      case 0x7f:
        uVar3 = plVar4[4];
        lVar7 = 5;
        if (0x3b < param_3) {
          lVar7 = param_3;
        }
        plVar4[4] = lVar7;
        tVar5 = _time((time_t *)0x0);
        plVar4[5] = tVar5;
        return uVar3;
      }
switchD_10081b26d_caseD_2:
      lVar9 = *(long *)(lVar7 + 0x10);
      goto LAB_10081b34a;
    }
    switch(iVar2) {
    case 0x65:
      FUN_10087d610(param_1,0xf);
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      iVar2 = FUN_100810ed0(lVar7);
      uVar3 = (ulong)iVar2;
      uVar1 = FUN_100810d60(lVar7,iVar2);
      switch(uVar1) {
      case 2:
        uVar8 = 9;
        break;
      case 3:
        uVar8 = 10;
        break;
      case 4:
        FUN_10087d630(param_1,0xc);
        *(undefined4 *)((long)param_1 + 0x24) = 1;
        return uVar3;
      default:
        return uVar3;
      case 7:
        FUN_10087d630(param_1,0xc);
        *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_1[7] + 0x24);
        return uVar3;
      }
      FUN_10087d630(param_1,uVar8);
      return uVar3;
    default:
      goto switchD_10081b26d_caseD_2;
    case 0x69:
      lVar9 = *(long *)(lVar7 + 0x10);
      param_2 = 0x69;
      goto LAB_10081b34a;
    case 0x6d:
      if (lVar7 != 0) {
        FUN_10080ee30(lVar7);
        if (*(int *)((long)param_1 + 0x1c) != 0) {
          if (((int)param_1[3] != 0) && (*plVar4 != 0)) {
            FUN_10080dae0();
          }
          *(undefined4 *)(param_1 + 3) = 0;
          *(undefined4 *)(param_1 + 4) = 0;
        }
        if (param_1[6] != 0) {
          FUN_10081e1a0();
        }
        plVar4 = (long *)FUN_10081ddd0(0x30,"bio_ssl.c",0x6a);
        if (plVar4 == (long *)0x0) {
          FUN_100887ce0(0x20,0x76,0x41,"bio_ssl.c",0x6c);
          return 0;
        }
        plVar4[5] = 0;
        plVar4[4] = 0;
        plVar4[3] = 0;
        plVar4[2] = 0;
        plVar4[1] = 0;
        *plVar4 = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        param_1[6] = (long)plVar4;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      *(int *)((long)param_1 + 0x1c) = (int)param_3;
      *plVar4 = (long)param_4;
      lVar7 = FUN_10080e280(param_4);
      if (lVar7 != 0) {
        if (param_1[7] != 0) {
          FUN_10087dfb0(lVar7);
        }
        param_1[7] = lVar7;
        FUN_10081d580(lVar7 + 0x48,1,0x15,"bio_ssl.c",0x162);
      }
      *(undefined4 *)(param_1 + 3) = 1;
      break;
    case 0x6e:
      if (param_4 == (long *)0x0) {
        return 0;
      }
      *param_4 = lVar7;
    }
    goto LAB_10081b66a;
  }
  switch(iVar2) {
  case 1:
    FUN_10080ee30(lVar7);
    if (*(long *)(lVar7 + 0x30) == *(long *)(*(long *)(lVar7 + 8) + 0x28)) {
      FUN_10080eca0(lVar7);
    }
    else if (*(long *)(lVar7 + 0x30) == *(long *)(*(long *)(lVar7 + 8) + 0x20)) {
      FUN_10080eba0(lVar7);
    }
    FUN_10080d4e0(lVar7);
    lVar9 = param_1[7];
    if (lVar9 == 0) {
      lVar9 = *(long *)(lVar7 + 0x10);
      if (lVar9 == 0) {
        return 1;
      }
      param_2 = 1;
    }
    else {
      param_2 = 1;
    }
    goto LAB_10081b34a;
  default:
    goto switchD_10081b26d_caseD_2;
  case 3:
  case 0xe:
    break;
  case 6:
    lVar9 = param_1[7];
    if (lVar9 == 0) {
      return 1;
    }
    if (lVar9 == *(long *)(lVar7 + 0x10)) {
      return 1;
    }
    FUN_10080e200(lVar7,lVar9,lVar9);
    FUN_10081d580(param_1[7] + 0x48,1,0x15,"bio_ssl.c",0x183);
    goto LAB_10081b66a;
  case 7:
    if (param_4 != param_1) {
      return 1;
    }
    if (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)) {
      FUN_10087e280();
    }
    if (param_1[7] != 0) {
      FUN_10081d580(param_1[7] + 0x48,0xffffffff,0x15,"bio_ssl.c",400);
    }
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    goto LAB_10081b66a;
  case 8:
    uVar3 = (ulong)*(int *)((long)param_1 + 0x1c);
    break;
  case 9:
    *(int *)((long)param_1 + 0x1c) = (int)param_3;
    goto LAB_10081b66a;
  case 10:
    iVar2 = FUN_10080e840(lVar7);
    if (iVar2 == 0) {
      iVar2 = FUN_10087db60(*(undefined8 *)(lVar7 + 0x10),10,0,0);
      uVar3 = (ulong)iVar2;
    }
    else {
      uVar3 = (ulong)iVar2;
    }
    break;
  case 0xb:
    FUN_10087d610(param_1,0xf);
    uVar3 = FUN_10087db60(*(undefined8 *)(lVar7 + 0x18),0xb,param_3,param_4);
    FUN_10087e580(param_1);
    break;
  case 0xc:
    if (*(long *)param_4[6] != 0) {
      FUN_10080dae0();
    }
    lVar6 = FUN_100811040(lVar7);
    plVar4 = (long *)param_4[6];
    *plVar4 = lVar6;
    lVar7 = param_1[6];
    lVar9 = *(long *)(lVar7 + 0x18);
    plVar4[2] = *(long *)(lVar7 + 0x10);
    plVar4[3] = lVar9;
    lVar9 = *(long *)(lVar7 + 0x28);
    plVar4[4] = *(long *)(lVar7 + 0x20);
    plVar4[5] = lVar9;
    uVar3 = (ulong)(lVar6 != 0);
    break;
  case 0xd:
    lVar9 = *(long *)(lVar7 + 0x18);
    param_2 = 0xd;
LAB_10081b34a:
    uVar3 = FUN_10087db60(lVar9,param_2,param_3,param_4);
    return uVar3;
  case 0xf:
    lVar7 = FUN_1008113a0(lVar7);
    *param_4 = lVar7;
LAB_10081b66a:
    uVar3 = 1;
  }
  return uVar3;
}

