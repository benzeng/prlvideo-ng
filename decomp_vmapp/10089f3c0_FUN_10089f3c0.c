
int FUN_10089f3c0(byte *param_1,int param_2,uint param_3,byte param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *local_60;
  undefined1 local_3e [6];
  ulong local_38;
  
  iVar10 = 0;
  if (param_2 != 0) {
    pbVar3 = param_1 + param_2;
    uVar5 = param_3 & 7;
    iVar10 = 0;
    pbVar8 = param_1;
    local_60 = param_1;
    if (uVar5 == 4) {
      do {
        bVar4 = param_4 & 1;
        if ((param_4 & 1) != 0) {
          bVar4 = (local_60 == param_1) << 5;
        }
        pbVar8 = local_60 + 4;
        bVar6 = bVar4;
        if (pbVar8 == pbVar3) {
          bVar6 = 0x40;
        }
        if ((param_4 & 1) != 0) {
          bVar4 = bVar6;
        }
        local_38 = (ulong)local_60[3] |
                   (ulong)local_60[2] << 8 | (ulong)local_60[1] << 0x10 | (ulong)*local_60 << 0x18;
        if ((param_3 & 8) == 0) {
          iVar1 = FUN_10089f6b0(local_38,bVar4 | param_4,param_5,param_6,param_7);
          if (iVar1 < 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar1;
        }
        else {
          iVar1 = FUN_10089d0a0(local_3e,6);
          if (0 < iVar1) {
            lVar7 = 0;
            do {
              iVar2 = FUN_10089f6b0(local_3e[lVar7],bVar4 | param_4,param_5,param_6,param_7);
              if (iVar2 < 0) {
                return -1;
              }
              iVar10 = iVar10 + iVar2;
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar1);
          }
        }
        local_60 = pbVar8;
      } while (pbVar8 != pbVar3);
    }
    else {
      do {
        bVar4 = param_4 & 1;
        if ((param_4 & 1) != 0) {
          bVar4 = (pbVar8 == param_1) << 5;
        }
        if (uVar5 == 0) {
          iVar1 = FUN_10089cd10(pbVar8,param_2,&local_38);
          if (iVar1 < 0) {
            return -1;
          }
          pbVar9 = pbVar8 + iVar1;
        }
        else if (uVar5 == 1) {
          local_38 = (ulong)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          if (uVar5 != 2) {
            return -1;
          }
          pbVar9 = pbVar8 + 2;
          local_38 = (ulong)CONCAT11(*pbVar8,pbVar8[1]);
        }
        bVar6 = bVar4;
        if (pbVar9 == pbVar3) {
          bVar6 = 0x40;
        }
        if ((param_4 & 1) != 0) {
          bVar4 = bVar6;
        }
        if ((param_3 & 8) == 0) {
          iVar1 = FUN_10089f6b0(local_38,bVar4 | param_4,param_5,param_6,param_7);
          if (iVar1 < 0) {
            return -1;
          }
          iVar10 = iVar10 + iVar1;
        }
        else {
          iVar1 = FUN_10089d0a0(local_3e,6);
          if (0 < iVar1) {
            lVar7 = 0;
            do {
              iVar2 = FUN_10089f6b0(local_3e[lVar7],bVar4 | param_4,param_5,param_6,param_7);
              if (iVar2 < 0) {
                return -1;
              }
              iVar10 = iVar10 + iVar2;
              lVar7 = lVar7 + 1;
            } while (lVar7 < iVar1);
          }
        }
        pbVar8 = pbVar9;
      } while (pbVar9 != pbVar3);
    }
  }
  return iVar10;
}

