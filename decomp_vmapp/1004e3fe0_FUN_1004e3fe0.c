
undefined8 FUN_1004e3fe0(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[5] = -1;
  local_c0 = DAT_100b453e0;
  local_c8 = DAT_100b453d8;
  local_d0 = DAT_100b453d0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_40 = 0;
  local_48 = 0;
  uStack_44 = 0;
  local_38 = lVar5;
  if ((int)param_1[2] == -1) {
    iVar1 = _getattrlist((char *)(param_1[1] + *(long *)(param_1[1] + 0x10)),&local_d0,&local_b8,
                         0x7c,9);
    if (iVar1 != -1) {
      uVar7 = 0;
      if ((uStack_50 & 0xf000) == 0xa000) {
        iVar1 = _getattrlist((char *)(param_1[1] + *(long *)(param_1[1] + 0x10)),&local_d0,&local_b8
                             ,0x7c,8);
        uVar7 = 0x400;
        if (iVar1 == -1) {
          piVar2 = ___error();
          iVar1 = *piVar2;
          if (iVar1 < 0x3f) {
            uVar3 = 0xf0000019;
            switch(iVar1) {
            case 1:
              uVar3 = 0xf0000007;
              break;
            case 2:
              break;
            default:
              goto switchD_1004e43a5_caseD_3;
            case 5:
              uVar3 = 0xf000001c;
              break;
            case 9:
              uVar3 = 0xf0000012;
              break;
            case 0xd:
            case 0x1e:
              uVar3 = 0xf0000007;
              break;
            case 0xe:
              uVar3 = 0xf0000006;
              break;
            case 0x11:
              uVar3 = 0xf0000017;
              break;
            case 0x14:
              uVar3 = 0xf0000015;
              break;
            case 0x16:
            case 0x1d:
              uVar3 = 0xf0000003;
              break;
            case 0x17:
            case 0x18:
              uVar3 = 0xf000001b;
              break;
            case 0x1c:
              uVar3 = 0xf000000c;
            }
          }
          else {
            if (iVar1 == 0x3f) {
              uVar3 = 0xf0000018;
              goto switchD_1004e41c0_caseD_2;
            }
            if (iVar1 == 0x42) {
              uVar3 = 0xf000000b;
              goto switchD_1004e41c0_caseD_2;
            }
switchD_1004e43a5_caseD_3:
            uVar3 = 0xf000001c;
          }
          goto switchD_1004e41c0_caseD_2;
        }
      }
LAB_1004e4159:
      uVar4 = 0x400;
      if ((local_68 & 0x80) == 0) {
        uVar4 = uVar7;
      }
      uVar4 = ((ushort)local_68 & 0xff) >> 5 & 2 | uVar4;
      if ((uStack_50 & 0xf000) != 0x8000) {
        if ((uStack_50 & 0xf000) == 0x4000) {
          uVar4 = uVar4 | 0x10;
        }
        else {
          uVar4 = uVar4 | 4;
        }
      }
      iVar1 = _access((char *)(param_1[1] + *(long *)(param_1[1] + 0x10)),2);
      if (iVar1 != 0) {
        ___error();
      }
      uVar7 = iVar1 != 0 | uVar4;
      if ((uVar4 & 2) == 0) {
        iVar1 = QString::lastIndexOf(param_1,0x2f,0xffffffff,1);
        lVar5 = *param_1;
        if ((iVar1 + 1 < *(int *)(lVar5 + 4)) &&
           (*(short *)(lVar5 + *(long *)(lVar5 + 0x10) + (long)(iVar1 + 1) * 2) == 0x2e)) {
          uVar7 = uVar7 | 2;
        }
      }
      uVar4 = 0x80;
      if (uVar7 != 0) {
        uVar4 = uVar7;
      }
      *(uint *)(param_2 + 6) = uVar4;
      lVar5 = SUB168(SEXT816(local_98 + 0x32) * SEXT816(-0x5c28f5c28f5c28f5),8) + 0x32 + local_98;
      *param_2 = lStack_a0 * 10000000 + 0x19db1ded53e8000 + ((lVar5 >> 6) - (lVar5 >> 0x3f));
      lVar5 = SUB168(SEXT816(local_88 + 0x32) * SEXT816(-0x5c28f5c28f5c28f5),8) + 0x32 + local_88;
      lVar6 = lStack_90 * 10000000 + 0x19db1ded53e8000 + ((lVar5 >> 6) - (lVar5 >> 0x3f));
      param_2[1] = lVar6;
      lVar5 = SUB168(SEXT816(local_78 + 0x32) * SEXT816(-0x5c28f5c28f5c28f5),8) + 0x32 + local_78;
      param_2[2] = lStack_80 * 10000000 + 0x19db1ded53e8000 + ((lVar5 >> 6) - (lVar5 >> 0x3f));
      param_2[3] = lVar6;
      param_2[4] = CONCAT44(local_48,uStack_4c);
      param_2[5] = CONCAT44(local_40,uStack_44);
      uVar3 = 0;
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto switchD_1004e41c0_caseD_2;
    }
    piVar2 = ___error();
    iVar1 = *piVar2;
    if (iVar1 < 0x3f) {
      uVar3 = 0xf0000019;
      switch(iVar1) {
      case 1:
        uVar3 = 0xf0000007;
        break;
      case 2:
        break;
      default:
        goto switchD_1004e434b_caseD_3;
      case 5:
        uVar3 = 0xf000001c;
        break;
      case 9:
        uVar3 = 0xf0000012;
        break;
      case 0xd:
      case 0x1e:
        uVar3 = 0xf0000007;
        break;
      case 0xe:
        uVar3 = 0xf0000006;
        break;
      case 0x11:
        uVar3 = 0xf0000017;
        break;
      case 0x14:
        uVar3 = 0xf0000015;
        break;
      case 0x16:
      case 0x1d:
        uVar3 = 0xf0000003;
        break;
      case 0x17:
      case 0x18:
        uVar3 = 0xf000001b;
        break;
      case 0x1c:
        uVar3 = 0xf000000c;
      }
    }
    else {
      if (iVar1 == 0x3f) {
        uVar3 = 0xf0000018;
        goto switchD_1004e41c0_caseD_2;
      }
      if (iVar1 == 0x42) {
        uVar3 = 0xf000000b;
        goto switchD_1004e41c0_caseD_2;
      }
switchD_1004e434b_caseD_3:
      uVar3 = 0xf000001c;
    }
    goto switchD_1004e41c0_caseD_2;
  }
  iVar1 = _fgetattrlist((int)param_1[2],&local_d0,&local_b8,0x7c,8);
  if (iVar1 != -1) {
    uVar7 = 0;
    goto LAB_1004e4159;
  }
  piVar2 = ___error();
  iVar1 = *piVar2;
  if (iVar1 < 0x3f) {
    uVar3 = 0xf0000019;
    switch(iVar1) {
    case 1:
      uVar3 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e41c0_caseD_3;
    case 5:
      uVar3 = 0xf000001c;
      break;
    case 9:
      uVar3 = 0xf0000012;
      break;
    case 0xd:
    case 0x1e:
      uVar3 = 0xf0000007;
      break;
    case 0xe:
      uVar3 = 0xf0000006;
      break;
    case 0x11:
      uVar3 = 0xf0000017;
      break;
    case 0x14:
      uVar3 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar3 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar3 = 0xf000001b;
      break;
    case 0x1c:
      uVar3 = 0xf000000c;
    }
  }
  else {
    if (iVar1 == 0x3f) {
      uVar3 = 0xf0000018;
      goto switchD_1004e41c0_caseD_2;
    }
    if (iVar1 == 0x42) {
      uVar3 = 0xf000000b;
      goto switchD_1004e41c0_caseD_2;
    }
switchD_1004e41c0_caseD_3:
    uVar3 = 0xf000001c;
  }
switchD_1004e41c0_caseD_2:
  if (lVar5 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

