
undefined8 FUN_1007f8500(long param_1,int param_2,long param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  
  uVar2 = 0;
  if (param_2 < 0x36) {
    if (0xd < param_2 - 1U) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x130);
    uVar2 = 0;
    switch(param_2) {
    case 1:
      if (*(long *)(lVar4 + 0x30) == 0) {
        if (*(long *)(lVar4 + 0x68) == 0) {
          return 1;
        }
        iVar1 = FUN_100891d80();
        if (0x40 < iVar1) {
          return 1;
        }
      }
      return 0;
    case 2:
      if ((param_4 != (char *)0x0) && (lVar3 = FUN_10086ee20(param_4), lVar3 != 0)) {
        if (*(long *)(lVar4 + 0x30) != 0) {
          FUN_10086c430();
        }
        *(long *)(lVar4 + 0x30) = lVar3;
        goto LAB_1007f88c4;
      }
      uVar2 = 4;
      uVar6 = 0xdb1;
      break;
    case 3:
      lVar3 = FUN_100876120(param_4);
      if (lVar3 != 0) {
        if (*(long *)(lVar4 + 0x40) != 0) {
          FUN_100876b00();
        }
        *(long *)(lVar4 + 0x40) = lVar3;
        goto LAB_1007f88c4;
      }
      uVar2 = 5;
      uVar6 = 0xdc9;
      break;
    case 4:
      if (param_4 == (char *)0x0) {
        uVar2 = 0x2b;
        uVar6 = 0xde1;
      }
      else {
        lVar3 = FUN_1008641c0(param_4);
        if (lVar3 == 0) {
          uVar2 = 0x10;
          uVar6 = 0xde6;
        }
        else {
          if (((*(byte *)(param_1 + 0x11a) & 8) != 0) || (iVar1 = FUN_1008642a0(lVar3), iVar1 != 0))
          {
            if (*(long *)(lVar4 + 0x50) != 0) {
              FUN_100863f80();
            }
            *(long *)(lVar4 + 0x50) = lVar3;
            goto LAB_1007f88c4;
          }
          FUN_100863f80(lVar3);
          uVar2 = 0x2b;
          uVar6 = 0xdec;
        }
      }
      break;
    case 5:
      uVar2 = 0x42;
      uVar6 = 0xdbd;
      break;
    case 6:
      uVar2 = 0x42;
      uVar6 = 0xdd6;
      break;
    case 7:
      uVar2 = 0x42;
      uVar6 = 0xdfa;
      break;
    default:
      goto switchD_1007f8537_caseD_8;
    case 0xe:
      lVar4 = *(long *)(param_1 + 0xf8);
      if (lVar4 == 0) {
        lVar4 = FUN_100884e10();
        *(long *)(param_1 + 0xf8) = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      FUN_1008852e0(lVar4,param_4);
      goto LAB_1007f88c4;
    }
LAB_1007f898b:
    FUN_100887ce0(0x14,0x85,uVar2,"s3_lib.c",uVar6);
    uVar2 = 0;
  }
  else {
    if (param_2 < 0x4e) {
      if (param_2 - 0x3aU < 2) {
        if (param_4 == (char *)0x0) {
          return 0x30;
        }
        if (param_3 != 0x30) {
          uVar2 = 0x145;
          uVar6 = 0xe0a;
          goto LAB_1007f898b;
        }
        if (param_2 == 0x3b) {
          uVar2 = *(undefined8 *)param_4;
          *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_4 + 8);
          *(undefined8 *)(param_1 + 0x1b0) = uVar2;
          uVar2 = *(undefined8 *)(param_4 + 0x10);
          *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_4 + 0x18);
          *(undefined8 *)(param_1 + 0x1c0) = uVar2;
          uVar2 = *(undefined8 *)(param_4 + 0x20);
          *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_4 + 0x28);
          *(undefined8 *)(param_1 + 0x1d0) = uVar2;
        }
        else {
          uVar2 = *(undefined8 *)(param_1 + 0x1b0);
          *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_1 + 0x1b8);
          *(undefined8 *)param_4 = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0x1c0);
          *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_1 + 0x1c8);
          *(undefined8 *)(param_4 + 0x10) = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0x1d0);
          *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_1 + 0x1d8);
          *(undefined8 *)(param_4 + 0x20) = uVar2;
        }
      }
      else if (param_2 == 0x36) {
        *(char **)(param_1 + 0x1a8) = param_4;
      }
      else {
        if (param_2 != 0x40) {
          return 0;
        }
        *(char **)(param_1 + 0x1f0) = param_4;
      }
    }
    else {
      switch(param_2) {
      case 0x4e:
        *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) | 4;
        *(char **)(param_1 + 0x238) = param_4;
        break;
      case 0x4f:
        *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) | 4;
        if (*(long *)(param_1 + 600) != 0) {
          FUN_10081e1a0();
        }
        *(undefined8 *)(param_1 + 600) = 0;
        if (param_4 == (char *)0x0) {
          return 1;
        }
        sVar5 = _strlen(param_4);
        if ((sVar5 < 0x100) && (*param_4 != '\0')) {
          lVar4 = FUN_10087d050(param_4);
          *(long *)(param_1 + 600) = lVar4;
          if (lVar4 != 0) {
            return 1;
          }
          uVar2 = 0x44;
          uVar6 = 0xe32;
        }
        else {
          uVar2 = 0x165;
          uVar6 = 0xe2e;
        }
        goto LAB_1007f898b;
      case 0x50:
        *(int *)(param_1 + 0x2a8) = (int)param_3;
        break;
      case 0x51:
        *(code **)(param_1 + 0x250) = FUN_1007f89f0;
        *(char **)(param_1 + 0x2a0) = param_4;
        break;
      case 0x52:
        *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0xf8);
        break;
      case 0x53:
        if (*(long *)(param_1 + 0xf8) == 0) {
          return 1;
        }
        FUN_100885590(*(long *)(param_1 + 0xf8),FUN_1008a17f0);
        *(undefined8 *)(param_1 + 0xf8) = 0;
        break;
      default:
        goto switchD_1007f8537_caseD_8;
      }
    }
LAB_1007f88c4:
    uVar2 = 1;
  }
switchD_1007f8537_caseD_8:
  return uVar2;
}

