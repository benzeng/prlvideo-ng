
undefined8 FUN_100c6ae50(long *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[0xf];
  uVar7 = 0xffffffff;
  if (param_2 < 0x10) {
    if (param_2 == 0) {
      *(undefined8 *)(lVar1 + 0xf4) = 0;
      *(undefined4 *)(lVar1 + 0x290) = *(undefined4 *)(*param_1 + 0xc);
      *(long **)(lVar1 + 0x288) = param_1 + 5;
      *(undefined8 *)(lVar1 + 0x294) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x29c) = 0xffffffff;
    }
    else if (param_2 == 8) {
      lVar4 = param_4[0xf];
      if (*(long *)(lVar1 + 0x280) != 0) {
        if (*(long *)(lVar1 + 0x280) != lVar1) {
          return 0;
        }
        *(long *)(lVar4 + 0x280) = lVar4;
      }
      if (*(long **)(lVar1 + 0x288) != param_1 + 5) {
        param_4 = (long *)FUN_100bf3540(*(undefined4 *)(lVar1 + 0x290),"e_aes.c",0x312);
        *(long **)(lVar4 + 0x288) = param_4;
        if (param_4 == (long *)0x0) {
          return 0;
        }
        param_1 = *(long **)(lVar1 + 0x288);
        param_3 = *(int *)(lVar1 + 0x290);
        goto LAB_100c6aefb;
      }
      *(long **)(lVar4 + 0x288) = param_4 + 5;
    }
    else {
      if (param_2 != 9) {
        return 0xffffffff;
      }
      if (param_3 < 1) {
        return 0;
      }
      if ((0x10 < param_3) && (*(int *)(lVar1 + 0x290) < param_3)) {
        if (*(long **)(lVar1 + 0x288) != param_1 + 5) {
          FUN_100bf3910();
        }
        lVar4 = FUN_100bf3540(param_3,"e_aes.c",0x2b4);
        *(long *)(lVar1 + 0x288) = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      *(int *)(lVar1 + 0x290) = param_3;
    }
  }
  else {
    switch(param_2) {
    case 0x10:
      if (0xf < param_3 - 1U) {
        return 0;
      }
      if ((int)param_1[2] == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x294) < 0) {
        return 0;
      }
      param_1 = param_1 + 7;
LAB_100c6aefb:
      _memcpy(param_4,param_1,(long)param_3);
      break;
    case 0x11:
      if (0xf < param_3 - 1U) {
        return 0;
      }
      if ((int)param_1[2] != 0) {
        return 0;
      }
      _memcpy(param_1 + 7,param_4,(long)param_3);
      *(int *)(lVar1 + 0x294) = param_3;
      break;
    case 0x12:
      if (param_3 == -1) {
        _memcpy(*(void **)(lVar1 + 0x288),param_4,(long)*(int *)(lVar1 + 0x290));
        *(undefined4 *)(lVar1 + 0x298) = 1;
      }
      else {
        if (param_3 < 4) {
          return 0;
        }
        if (*(int *)(lVar1 + 0x290) - param_3 < 8) {
          return 0;
        }
        _memcpy(*(void **)(lVar1 + 0x288),param_4,(long)param_3);
        if (((int)param_1[2] != 0) &&
           (iVar3 = FUN_100c62100((long)param_3 + *(long *)(lVar1 + 0x288),
                                  *(int *)(lVar1 + 0x290) - param_3), iVar3 < 1)) {
          return 0;
        }
        *(undefined4 *)(lVar1 + 0x298) = 1;
      }
      break;
    case 0x13:
      if (*(int *)(lVar1 + 0x298) == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0xf4) == 0) {
        return 0;
      }
      FUN_100c1f5d0(lVar1 + 0x100,*(undefined8 *)(lVar1 + 0x288),(long)*(int *)(lVar1 + 0x290));
      iVar3 = *(int *)(lVar1 + 0x290);
      iVar2 = param_3;
      if (iVar3 <= param_3) {
        iVar2 = iVar3;
      }
      if (param_3 < 1) {
        iVar2 = iVar3;
      }
      _memcpy(param_4,(void *)(((long)iVar3 - (long)iVar2) + *(long *)(lVar1 + 0x288)),(long)iVar2);
      lVar4 = (long)*(int *)(lVar1 + 0x290) + -1 + *(long *)(lVar1 + 0x288);
      lVar5 = 0;
      do {
        cVar6 = *(char *)(lVar4 + lVar5) + '\x01';
        *(char *)(lVar4 + lVar5) = cVar6;
        if ((int)lVar5 == -7) break;
        lVar5 = lVar5 + -1;
      } while (cVar6 == '\0');
      *(undefined4 *)(lVar1 + 0xf8) = 1;
      break;
    default:
      goto switchD_100c6af1f_caseD_14;
    case 0x16:
      if (param_3 != 0xd) {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_4 + 0xc);
      *(int *)(param_1 + 8) = (int)param_4[1];
      param_1[7] = *param_4;
      *(undefined4 *)(lVar1 + 0x29c) = 0xd;
      iVar3 = -0x18;
      if ((int)param_1[2] != 0) {
        iVar3 = -8;
      }
      iVar3 = iVar3 + (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0x43),
                                     *(undefined1 *)((long)param_1 + 0x44));
      *(char *)((long)param_1 + 0x43) = (char)((uint)iVar3 >> 8);
      *(char *)((long)param_1 + 0x44) = (char)iVar3;
      return 0x10;
    case 0x18:
      if (*(int *)(lVar1 + 0x298) == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0xf4) == 0) {
        return 0;
      }
      if ((int)param_1[2] != 0) {
        return 0;
      }
      _memcpy((void *)(((long)*(int *)(lVar1 + 0x290) - (long)param_3) + *(long *)(lVar1 + 0x288)),
              param_4,(long)param_3);
      FUN_100c1f5d0(lVar1 + 0x100,*(undefined8 *)(lVar1 + 0x288),(long)*(int *)(lVar1 + 0x290));
      *(undefined4 *)(lVar1 + 0xf8) = 1;
    }
  }
  uVar7 = 1;
switchD_100c6af1f_caseD_14:
  return uVar7;
}

