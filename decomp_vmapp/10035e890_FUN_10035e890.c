
void FUN_10035e890(long param_1,long param_2,uint *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_38;
  
  uVar13 = (ulong)param_4;
  uVar7 = 0;
  if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
    uVar7 = uVar13;
  }
  if ((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3) <= uVar7) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0x40) + uVar7 * 8);
  if (lVar9 == 0) {
    return;
  }
  bVar17 = (byte)param_5;
  uVar14 = 1 << (bVar17 & 0x1f);
  if ((*(uint *)(*(long *)(lVar9 + 0x88) + uVar13 * 4) >> (param_5 & 0x1f) & 1) == 0) {
    return;
  }
  if ((*(uint *)(*(long *)(param_2 + 0x90) + uVar13 * 4) & uVar14) != 0) {
    return;
  }
  if (param_3[2] <= *param_3) {
    return;
  }
  if (param_3[3] <= param_3[1]) {
    return;
  }
  if (param_3[5] <= param_3[4]) {
    return;
  }
  iVar4 = FUN_10032df60(param_2,param_4,param_5);
  if (-1 < iVar4) {
    if (((*(byte *)(lVar9 + 0xac) & 0x10) == 0) ||
       (*(int *)(lVar9 + 0x1c) != *(int *)(lVar9 + 0x20))) {
      if (*(int *)(param_2 + 0x24) == 5) {
        param_4 = param_3[4];
        uVar6 = param_3[5];
      }
      else {
        uVar6 = param_4 + 1;
      }
      if (param_4 < uVar6) {
        do {
          FUN_100389cf0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5);
          param_4 = param_4 + 1;
        } while (uVar6 != param_4);
      }
    }
    else {
      if (*(int *)(param_2 + 0x24) == 5) {
        param_4 = param_3[4];
        uVar6 = param_3[5];
      }
      else {
        uVar6 = param_4 + 1;
      }
      if (param_4 < uVar6) {
        do {
          FUN_1003898b0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5);
          param_4 = param_4 + 1;
        } while (uVar6 != param_4);
      }
    }
    goto LAB_10035edb0;
  }
  uVar16 = 0;
  uVar7 = uVar13;
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar7 = uVar16;
  }
  uVar6 = *(uint *)(*(long *)(*(long *)(param_2 + 0x40) + uVar7 * 8) + 0x1c);
  uVar5 = FUN_10032e340(param_2,param_4,param_5);
  uVar10 = *(uint *)(param_2 + 0xc) >> (bVar17 & 0x1f);
  if (*(uint *)(param_2 + 0xc) >> (bVar17 & 0x1f) == 0) {
    uVar10 = 1;
  }
  uVar3 = *(uint *)(param_2 + 0x10) >> (bVar17 & 0x1f);
  if (*(uint *)(param_2 + 0x10) >> (bVar17 & 0x1f) == 0) {
    uVar3 = 1;
  }
  uVar2 = *(uint *)(&DAT_100b3ca14 + (ulong)uVar6 * 8);
  if (uVar2 < 0x1000000) {
    switch(uVar6) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
      goto switchD_10035ea40_caseD_53;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5e:
    case 0x5f:
      uVar16 = (ulong)(uVar5 * uVar3 * 3 >> 1);
      break;
    case 0x5a:
      uVar16 = (ulong)(uVar5 * uVar3 * 2);
      break;
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      uVar16 = (ulong)((uVar3 + 3 & 0xfffffffc) * uVar5 >> 2);
    }
  }
  else {
switchD_10035ea40_caseD_53:
    uVar16 = (ulong)(uVar3 * uVar5);
  }
  local_38 = *(long *)(param_1 + 0x40);
  local_48 = uVar6;
  local_44 = uVar10;
  local_40 = uVar3;
  local_3c = uVar5;
  if ((ulong)(*(long *)(param_1 + 0x48) - local_38) < uVar16) {
    FUN_10005a320();
    local_38 = *(long *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar11 = *param_3;
  uVar12 = param_3[1];
  if (uVar2 < 0x1000000) {
    uVar7 = 0;
    switch(uVar6) {
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x60:
    case 0x61:
switchD_10035eb1e_caseD_53:
      uVar11 = uVar11 * 2 + 2 & 0xfffffffc;
      goto LAB_10035eb5c;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5e:
    case 0x5f:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      uVar7 = 0;
      switch(uVar6) {
      case 0x5b:
      case 0x5c:
        goto switchD_10035eb1e_caseD_5b;
      case 0x5d:
        goto switchD_10035eb1e_caseD_5d;
      case 0x60:
      case 0x61:
        goto switchD_10035eb1e_caseD_53;
      case 0x62:
      case 99:
        goto switchD_10035eb1e_caseD_62;
      case 0x65:
      case 0x66:
      case 0x6b:
      case 0x6c:
      case 0x87:
      case 0x8a:
        uVar7 = (ulong)((uVar12 >> 2) * uVar5 + (uVar11 & 0x7ffffffc) * 2);
        break;
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6d:
      case 0x6e:
      case 0x88:
      case 0x89:
      case 0x8b:
        uVar7 = (ulong)((uVar12 >> 2) * uVar5 + (uVar11 & 0x3ffffffc) * 4);
      }
      break;
    case 0x5b:
    case 0x5c:
switchD_10035eb1e_caseD_5b:
      uVar7 = (ulong)(uVar12 * uVar5 + uVar11 * 4);
      break;
    case 0x5d:
switchD_10035eb1e_caseD_5d:
      uVar7 = (ulong)(uVar12 * uVar5 + uVar11 * 8);
      break;
    case 0x62:
    case 99:
switchD_10035eb1e_caseD_62:
      uVar7 = (ulong)(uVar12 * uVar5 + uVar11);
    }
  }
  else {
    uVar11 = (uVar2 >> 0x18) * uVar11;
LAB_10035eb5c:
    uVar7 = (ulong)(uVar11 + uVar12 * uVar5);
  }
  if (*(int *)(param_2 + 0x24) == 5) {
    param_4 = param_3[4];
    uVar11 = param_3[5];
  }
  else {
    uVar11 = param_4 + 1;
  }
  if (param_4 < uVar11) {
    iVar4 = iVar4 + (int)uVar7;
    uVar12 = uVar3 * uVar5;
    do {
      local_60 = 1;
      local_50 = 0;
      local_5c = 0;
      local_58 = 0x8e;
      FUN_100389f90(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5,&local_48,
                    param_3,&local_60);
      iVar8 = iVar4;
      if (*(int *)(param_2 + 0x24) == 5) {
        uVar15 = uVar12;
        if (uVar2 < 0x1000000) {
          uVar15 = 0;
          switch(uVar6) {
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
            uVar15 = uVar12;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5e:
          case 0x5f:
            uVar15 = uVar12 * 3 >> 1;
            break;
          case 0x5a:
            uVar15 = uVar12 * 2;
            break;
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x87:
          case 0x88:
          case 0x89:
          case 0x8a:
          case 0x8b:
            uVar15 = (uVar3 + 3 & 0xfffffffc) * uVar5 >> 2;
          }
        }
        iVar8 = uVar15 * param_4 + iVar4;
      }
      lVar9 = local_38 + uVar7;
      if ((*param_3 == 0) && (param_3[2] == uVar10)) {
        FUN_1002fcd60(*(undefined8 *)(param_1 + 0x38),lVar9,iVar8,(param_3[3] - param_3[1]) * uVar5)
        ;
      }
      else if (param_3[3] != param_3[1]) {
        lVar18 = 0;
        uVar15 = 0;
        do {
          FUN_1002fcd60(*(undefined8 *)(param_1 + 0x38),lVar9 + lVar18,iVar8 + (int)lVar18);
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + (ulong)uVar5;
        } while (uVar15 < param_3[3] - param_3[1]);
      }
      param_4 = param_4 + 1;
    } while (param_4 != uVar11);
  }
LAB_10035edb0:
  if (*param_3 == 0) {
    uVar6 = 1;
    if (*(uint *)(param_2 + 0xc) >> (bVar17 & 0x1f) != 0) {
      uVar6 = *(uint *)(param_2 + 0xc) >> (bVar17 & 0x1f);
    }
    if (param_3[2] == uVar6) {
      iVar4 = *(int *)(param_2 + 0x24);
      if ((iVar4 != 2) && (iVar4 != 7)) {
        if (param_3[1] != 0) {
          return;
        }
        uVar6 = 1;
        if (*(uint *)(param_2 + 0x10) >> (bVar17 & 0x1f) != 0) {
          uVar6 = *(uint *)(param_2 + 0x10) >> (bVar17 & 0x1f);
        }
        if (param_3[3] != uVar6) {
          return;
        }
        if (iVar4 == 5) {
          if (param_3[4] != 0) {
            return;
          }
          uVar6 = 1;
          if (*(uint *)(param_2 + 0x14) >> (bVar17 & 0x1f) != 0) {
            uVar6 = *(uint *)(param_2 + 0x14) >> (bVar17 & 0x1f);
          }
          if (param_3[5] != uVar6) {
            return;
          }
        }
      }
      puVar1 = (uint *)(*(long *)(param_2 + 0x90) + uVar13 * 4);
      *puVar1 = *puVar1 | uVar14;
    }
  }
  return;
}

