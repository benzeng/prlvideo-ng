
int FUN_10032df60(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(uint3 *)(param_1 + 0xb0) & 7) == 1) {
    param_2 = param_2 * *(int *)(param_1 + 0x1c) + param_3;
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 0xc);
  if ((*(uint3 *)(param_1 + 0xb0) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    iVar7 = 0;
    if (0 < param_3) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        bVar5 = (byte)iVar6;
        uVar3 = *(uint *)(param_1 + 0xc) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0xc) >> (bVar5 & 0x1f) == 0) {
          uVar3 = 1;
        }
        uVar2 = *(uint *)(param_1 + 0x10) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x10) >> (bVar5 & 0x1f) == 0) {
          uVar2 = 1;
        }
        if (*(uint *)(&DAT_100b398f4 + (ulong)uVar1 * 8) < 0x1000000) {
          uVar8 = 0;
          uVar9 = 0;
          switch(uVar1) {
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x5e:
          case 0x5f:
            uVar9 = uVar3 * 2 + 3 & 0xfffffffc;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x62:
          case 99:
            uVar9 = uVar3 + 3 & 0xfffffffc;
            break;
          case 0x5b:
          case 0x5c:
          case 0x60:
          case 0x61:
            uVar9 = uVar3 << 2;
            break;
          case 0x5d:
            uVar9 = uVar3 << 3;
            goto switchD_10032e0fa_caseD_53;
          case 0x65:
          case 0x66:
          case 0x6b:
          case 0x6c:
          case 0x87:
          case 0x8a:
            uVar9 = uVar3 * 2 + 6 & 0xfffffff8;
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
            uVar9 = uVar3 * 4 + 0xc & 0xfffffff0;
          }
          switch(uVar1) {
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
switchD_10032e0fa_caseD_53:
            uVar8 = uVar9 * uVar2;
            break;
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5e:
          case 0x5f:
            uVar8 = uVar2 * uVar9 * 3 >> 1;
            break;
          case 0x5a:
            uVar8 = uVar2 * uVar9 * 2;
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
            uVar8 = uVar9 * (uVar2 + 3 & 0xfffffffc) >> 2;
          }
        }
        else {
          uVar3 = uVar3 * (*(uint *)(&DAT_100b398f4 + (ulong)uVar1 * 8) >> 0x18);
          if (3 < uVar1 - 0x73) {
            uVar3 = uVar3 + 3 & 0xfffffffc;
          }
          uVar8 = uVar3 * uVar2;
        }
        uVar3 = *(uint *)(param_1 + 0x14) >> (bVar5 & 0x1f);
        if (*(uint *)(param_1 + 0x14) >> (bVar5 & 0x1f) == 0) {
          uVar3 = 1;
        }
        iVar7 = iVar7 + uVar3 * uVar8;
        iVar6 = iVar6 + 1;
      } while (param_3 != iVar6);
    }
    iVar4 = iVar4 + iVar7;
  }
  return iVar4;
}

