
void FUN_10032d9d0(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  param_2 = param_2 & 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x28);
  *(int *)(lVar2 + 4 + param_2 * 0xc) = param_3;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 1) {
    uVar4 = *(uint *)(param_1 + 8);
    iVar8 = 0;
    if (0 < iVar1) {
      iVar6 = 0;
      iVar8 = 0;
      do {
        bVar5 = (byte)iVar6;
        uVar7 = *(uint *)(param_1 + 0xc) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0xc) >> (bVar5 & 0x1f) == 0) {
          uVar7 = 1;
        }
        uVar3 = *(uint *)(param_1 + 0x10) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x10) >> (bVar5 & 0x1f) == 0) {
          uVar3 = 1;
        }
        if (*(uint *)(&DAT_100b398f4 + (ulong)uVar4 * 8) < 0x1000000) {
          uVar9 = 0;
          uVar10 = 0;
          switch(uVar4) {
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x5e:
          case 0x5f:
            uVar10 = uVar7 * 2 + 3 & 0xfffffffc;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x62:
          case 99:
            uVar10 = uVar7 + 3 & 0xfffffffc;
            break;
          case 0x5b:
          case 0x5c:
          case 0x60:
          case 0x61:
            uVar10 = uVar7 << 2;
            break;
          case 0x5d:
            uVar10 = uVar7 << 3;
            goto switchD_10032db9a_caseD_53;
          case 0x65:
          case 0x66:
          case 0x6b:
          case 0x6c:
          case 0x87:
          case 0x8a:
            uVar10 = uVar7 * 2 + 6 & 0xfffffff8;
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
            uVar10 = uVar7 * 4 + 0xc & 0xfffffff0;
          }
          switch(uVar4) {
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
switchD_10032db9a_caseD_53:
            uVar9 = uVar10 * uVar3;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5e:
          case 0x5f:
            uVar9 = uVar3 * uVar10 * 3 >> 1;
            break;
          case 0x5a:
            uVar9 = uVar3 * uVar10 * 2;
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
            uVar9 = uVar10 * (uVar3 + 3 & 0xfffffffc) >> 2;
          }
        }
        else {
          uVar7 = uVar7 * (*(uint *)(&DAT_100b398f4 + (ulong)uVar4 * 8) >> 0x18);
          if (3 < uVar4 - 0x73) {
            uVar7 = uVar7 + 3 & 0xfffffffc;
          }
          uVar9 = uVar7 * uVar3;
        }
        uVar7 = *(uint *)(param_1 + 0x14) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x14) >> (bVar5 & 0x1f) == 0) {
          uVar7 = 1;
        }
        iVar8 = iVar8 + uVar7 * uVar9;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    *(int *)(lVar2 + 8 + param_2 * 0xc) = iVar8;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(uint *)(&DAT_100b398f4 + (ulong)*(uint *)(param_1 + 8) * 8) < 0x1000000) {
    uVar4 = 0;
    switch(*(uint *)(param_1 + 8)) {
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
      goto switchD_10032da29_caseD_53;
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5e:
    case 0x5f:
      uVar4 = (uint)(param_3 * iVar1 * 3) >> 1;
      break;
    case 0x5a:
      uVar4 = param_3 * iVar1 * 2;
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
      uVar4 = (iVar1 + 3U & 0xfffffffc) * param_3 >> 2;
    }
  }
  else {
switchD_10032da29_caseD_53:
    uVar4 = iVar1 * param_3;
  }
  *(uint *)(lVar2 + 8 + param_2 * 0xc) = uVar4 * *(int *)(param_1 + 0x14);
  return;
}

