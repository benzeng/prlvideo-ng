
undefined8 FUN_100363960(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    return 3;
  }
  if ((*(int *)(lVar2 + 8) != 0) && (*(char *)(DAT_1011c8478 + 0x40) != '\0')) {
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        if ((param_3 & 1) != 0) {
          bVar1 = *(byte *)(lVar2 + 0x30 + uVar9 * 0x28);
          if (*(int *)(lVar2 + 0xc + uVar9 * 0x28) == 0) {
            (*DAT_1011c7550)(0xbe2,uVar9);
          }
          else {
            iVar11 = *(int *)(lVar2 + 0x14 + uVar9 * 0x28);
            iVar10 = 0;
            switch(iVar11) {
            case 1:
              break;
            case 2:
              iVar10 = 1;
              break;
            default:
              iVar10 = 0x300;
              switch(iVar11) {
              case 3:
                break;
              case 4:
                iVar10 = 0x301;
                break;
              default:
                iVar10 = 0x500;
                break;
              case 9:
                iVar10 = 0x306;
                break;
              case 10:
                iVar10 = 0x307;
                break;
              case 0x10:
              case 0x11:
                goto switchD_100363e4a_caseD_12;
              }
              break;
            case 5:
              iVar10 = 0x302;
              break;
            case 6:
              iVar10 = 0x303;
              break;
            case 7:
              iVar10 = 0x304;
              break;
            case 8:
              iVar10 = 0x305;
              break;
            case 0xb:
              iVar10 = 0x308;
              break;
            case 0xe:
              iVar10 = 0x8001;
              break;
            case 0xf:
              iVar10 = 0x8002;
              break;
            case 0x12:
            case 0x13:
switchD_100363e4a_caseD_12:
              iVar10 = 1;
              if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
                iVar10 = 0x500;
                if (iVar11 - 0x10U < 4) {
                  iVar10 = *(int *)(&DAT_100b3c960 + (long)(int)(iVar11 - 0x10U) * 4);
                }
              }
            }
            iVar11 = *(int *)(lVar2 + 0x18 + uVar9 * 0x28);
            iVar8 = 0;
            switch(iVar11) {
            case 1:
              break;
            case 2:
              iVar8 = 1;
              break;
            default:
              iVar8 = 0x300;
              switch(iVar11) {
              case 3:
                break;
              case 4:
                iVar8 = 0x301;
                break;
              default:
                iVar8 = 0x500;
                break;
              case 9:
                iVar8 = 0x306;
                break;
              case 10:
                iVar8 = 0x307;
                break;
              case 0x10:
              case 0x11:
                goto switchD_100363ee2_caseD_12;
              }
              break;
            case 5:
              iVar8 = 0x302;
              break;
            case 6:
              iVar8 = 0x303;
              break;
            case 7:
              iVar8 = 0x304;
              break;
            case 8:
              iVar8 = 0x305;
              break;
            case 0xb:
              iVar8 = 0x308;
              break;
            case 0xe:
              iVar8 = 0x8001;
              break;
            case 0xf:
              iVar8 = 0x8002;
              break;
            case 0x12:
            case 0x13:
switchD_100363ee2_caseD_12:
              iVar8 = 1;
              if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
                iVar8 = 0x500;
                if (iVar11 - 0x10U < 4) {
                  iVar8 = *(int *)(&DAT_100b3c960 + (long)(int)(iVar11 - 0x10U) * 4);
                }
              }
            }
            iVar11 = *(int *)(lVar2 + 0x20 + uVar9 * 0x28);
            iVar12 = 0;
            switch(iVar11) {
            case 1:
              break;
            case 2:
              iVar12 = 1;
              break;
            default:
              iVar12 = 0x500;
              break;
            case 5:
              iVar12 = 0x302;
              break;
            case 6:
              iVar12 = 0x303;
              break;
            case 7:
              iVar12 = 0x304;
              break;
            case 8:
              iVar12 = 0x305;
              break;
            case 0xb:
              iVar12 = 0x308;
              break;
            case 0xe:
              iVar12 = 0x8001;
              break;
            case 0xf:
              iVar12 = 0x8002;
              break;
            case 0x12:
            case 0x13:
              iVar12 = 1;
              if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
                uVar4 = iVar11 - 0x10;
                iVar12 = 0x500;
                if (uVar4 < 4) {
                  iVar12 = *(int *)(&DAT_100b3c960 + (long)(int)uVar4 * 4);
                }
              }
            }
            iVar11 = *(int *)(lVar2 + 0x24 + uVar9 * 0x28);
            iVar7 = 0;
            switch(iVar11) {
            case 1:
              break;
            case 2:
              iVar7 = 1;
              break;
            default:
              iVar7 = 0x500;
              break;
            case 5:
              iVar7 = 0x302;
              break;
            case 6:
              iVar7 = 0x303;
              break;
            case 7:
              iVar7 = 0x304;
              break;
            case 8:
              iVar7 = 0x305;
              break;
            case 0xb:
              iVar7 = 0x308;
              break;
            case 0xe:
              iVar7 = 0x8001;
              break;
            case 0xf:
              iVar7 = 0x8002;
              break;
            case 0x12:
            case 0x13:
              iVar7 = 1;
              if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
                uVar4 = iVar11 - 0x10;
                iVar7 = 0x500;
                if (uVar4 < 4) {
                  iVar7 = *(int *)(&DAT_100b3c960 + (long)(int)uVar4 * 4);
                }
              }
            }
            uVar4 = *(int *)(lVar2 + 0x1c + uVar9 * 0x28) - 1;
            iVar5 = 0x500;
            iVar11 = 0x500;
            if (uVar4 < 5) {
              iVar11 = *(int *)(&DAT_100b3cf00 + (long)(int)uVar4 * 4);
            }
            uVar4 = *(int *)(lVar2 + 0x28 + uVar9 * 0x28) - 1;
            if (uVar4 < 5) {
              iVar5 = *(int *)(&DAT_100b3cf00 + (long)(int)uVar4 * 4);
            }
            if (iVar8 == 0x500) {
              return 3;
            }
            if (iVar10 == 0x500) {
              return 3;
            }
            if (iVar12 == 0x500) {
              return 3;
            }
            if (iVar7 == 0x500) {
              return 3;
            }
            if (iVar11 == 0x500) {
              return 3;
            }
            if (iVar5 == 0x500) {
              return 3;
            }
            (*DAT_1011c7580)(0xbe2,uVar9);
            (*DAT_1011c78d0)(uVar9,iVar10,iVar8,iVar12,iVar7);
            (*DAT_1011c78c0)(uVar9,iVar11,iVar5);
          }
          (*DAT_1011c7520)(uVar9,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
        }
        param_3 = param_3 >> 1;
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (param_3 != 0);
    }
    goto LAB_10036411a;
  }
  bVar1 = *(byte *)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0xc) == 0) {
    (*DAT_1011c5bc0)(0xbe2);
  }
  else {
    iVar11 = *(int *)(lVar2 + 0x14);
    iVar10 = 0;
    switch(iVar11) {
    case 1:
      break;
    case 2:
      iVar10 = 1;
      break;
    default:
      iVar10 = 0x300;
      switch(iVar11) {
      case 3:
        break;
      case 4:
        iVar10 = 0x301;
        break;
      default:
        iVar10 = 0x500;
        break;
      case 9:
        iVar10 = 0x306;
        break;
      case 10:
        iVar10 = 0x307;
        break;
      case 0x10:
      case 0x11:
        goto switchD_1003639e3_caseD_12;
      }
      break;
    case 5:
      iVar10 = 0x302;
      break;
    case 6:
      iVar10 = 0x303;
      break;
    case 7:
      iVar10 = 0x304;
      break;
    case 8:
      iVar10 = 0x305;
      break;
    case 0xb:
      iVar10 = 0x308;
      break;
    case 0xe:
      iVar10 = 0x8001;
      break;
    case 0xf:
      iVar10 = 0x8002;
      break;
    case 0x12:
    case 0x13:
switchD_1003639e3_caseD_12:
      iVar10 = 1;
      if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
        iVar10 = 0x500;
        if (iVar11 - 0x10U < 4) {
          iVar10 = *(int *)(&DAT_100b3c960 + (long)(int)(iVar11 - 0x10U) * 4);
        }
      }
    }
    iVar11 = *(int *)(lVar2 + 0x18);
    iVar8 = 0;
    switch(iVar11) {
    case 1:
      break;
    case 2:
      iVar8 = 1;
      break;
    default:
      iVar8 = 0x300;
      switch(iVar11) {
      case 3:
        break;
      case 4:
        iVar8 = 0x301;
        break;
      default:
        iVar8 = 0x500;
        break;
      case 9:
        iVar8 = 0x306;
        break;
      case 10:
        iVar8 = 0x307;
        break;
      case 0x10:
      case 0x11:
        goto switchD_100363a7b_caseD_12;
      }
      break;
    case 5:
      iVar8 = 0x302;
      break;
    case 6:
      iVar8 = 0x303;
      break;
    case 7:
      iVar8 = 0x304;
      break;
    case 8:
      iVar8 = 0x305;
      break;
    case 0xb:
      iVar8 = 0x308;
      break;
    case 0xe:
      iVar8 = 0x8001;
      break;
    case 0xf:
      iVar8 = 0x8002;
      break;
    case 0x12:
    case 0x13:
switchD_100363a7b_caseD_12:
      iVar8 = 1;
      if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
        iVar8 = 0x500;
        if (iVar11 - 0x10U < 4) {
          iVar8 = *(int *)(&DAT_100b3c960 + (long)(int)(iVar11 - 0x10U) * 4);
        }
      }
    }
    iVar11 = 0;
    switch(*(int *)(lVar2 + 0x20)) {
    case 1:
      break;
    case 2:
      iVar11 = 1;
      break;
    default:
      iVar11 = 0x500;
      break;
    case 5:
      iVar11 = 0x302;
      break;
    case 6:
      iVar11 = 0x303;
      break;
    case 7:
      iVar11 = 0x304;
      break;
    case 8:
      iVar11 = 0x305;
      break;
    case 0xb:
      iVar11 = 0x308;
      break;
    case 0xe:
      iVar11 = 0x8001;
      break;
    case 0xf:
      iVar11 = 0x8002;
      break;
    case 0x12:
    case 0x13:
      iVar11 = 1;
      if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
        uVar4 = *(int *)(lVar2 + 0x20) - 0x10;
        iVar11 = 0x500;
        if (uVar4 < 4) {
          iVar11 = *(int *)(&DAT_100b3c960 + (long)(int)uVar4 * 4);
        }
      }
    }
    iVar12 = 0;
    switch(*(int *)(lVar2 + 0x24)) {
    case 1:
      break;
    case 2:
      iVar12 = 1;
      break;
    default:
      iVar12 = 0x500;
      break;
    case 5:
      iVar12 = 0x302;
      break;
    case 6:
      iVar12 = 0x303;
      break;
    case 7:
      iVar12 = 0x304;
      break;
    case 8:
      iVar12 = 0x305;
      break;
    case 0xb:
      iVar12 = 0x308;
      break;
    case 0xe:
      iVar12 = 0x8001;
      break;
    case 0xf:
      iVar12 = 0x8002;
      break;
    case 0x12:
    case 0x13:
      iVar12 = 1;
      if (*(int *)(DAT_1011c8478 + 0x10) != 0) {
        uVar4 = *(int *)(lVar2 + 0x24) - 0x10;
        iVar12 = 0x500;
        if (uVar4 < 4) {
          iVar12 = *(int *)(&DAT_100b3c960 + (long)(int)uVar4 * 4);
        }
      }
    }
    uVar4 = *(int *)(lVar2 + 0x1c) - 1;
    iVar5 = 0x500;
    iVar7 = 0x500;
    if (uVar4 < 5) {
      iVar7 = *(int *)(&DAT_100b3cf00 + (long)(int)uVar4 * 4);
    }
    uVar4 = *(int *)(lVar2 + 0x28) - 1;
    if (uVar4 < 5) {
      iVar5 = *(int *)(&DAT_100b3cf00 + (long)(int)uVar4 * 4);
    }
    if (iVar8 == 0x500) {
      return 3;
    }
    if (iVar10 == 0x500) {
      return 3;
    }
    if (iVar11 == 0x500) {
      return 3;
    }
    if (iVar12 == 0x500) {
      return 3;
    }
    if (iVar7 == 0x500) {
      return 3;
    }
    if (iVar5 == 0x500) {
      return 3;
    }
    (*DAT_1011c5c78)(0xbe2);
    (*DAT_1011c57b8)(iVar10,iVar8,iVar11,iVar12);
    (*DAT_1011c57a0)(iVar7,iVar5);
  }
  (*DAT_1011c5970)(bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1,bVar1 >> 3 & 1);
LAB_10036411a:
  (*DAT_1011c5780)(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                   *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  if (*(int *)(lVar2 + 4) == 0) {
    puVar3 = &DAT_1011c5bc0;
  }
  else {
    puVar3 = &DAT_1011c5c78;
  }
  (*(code *)*puVar3)(0x809e);
  if (*(int *)(lVar2 + 8) == 0) {
    if (*(int *)(lVar2 + 0x10) == 0) {
      puVar3 = &DAT_1011c5bc0;
      uVar6 = 0xbf2;
    }
    else {
      if (0xf < (ulong)(long)*(int *)(lVar2 + 0x2c)) {
        return 3;
      }
      uVar6 = *(undefined4 *)(&DAT_100b3cf20 + (long)*(int *)(lVar2 + 0x2c) * 4);
      (*DAT_1011c5c78)(0xbf2);
      puVar3 = &DAT_1011c6478;
    }
    (*(code *)*puVar3)(uVar6);
  }
  return 0;
}

