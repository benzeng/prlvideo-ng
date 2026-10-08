
ulong FUN_100c75770(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  undefined1 local_50 [56];
  long local_18;
  
  lVar2 = *(long *)(param_1 + 8);
  local_18 = 0;
  if (*(char *)(lVar2 + 0xc) != 'Z') {
    iVar7 = ((uint)*(byte *)(lVar2 + 0xe) +
            ((uint)*(byte *)(lVar2 + 0xd) + (uint)*(byte *)(lVar2 + 0xd) * 4) * 2) * 0x3c;
    iVar1 = (uint)*(byte *)(lVar2 + 0x10) +
            ((uint)*(byte *)(lVar2 + 0xf) + (uint)*(byte *)(lVar2 + 0xf) * 4) * 2;
    iVar4 = 0x7dd0 - (iVar7 + iVar1);
    if (*(char *)(lVar2 + 0xc) != '-') {
      iVar4 = iVar7 + -0x7dd0 + iVar1;
    }
    local_18 = (long)(iVar4 * 0x3c);
  }
  local_18 = param_2 - local_18;
  piVar5 = (int *)FUN_100bf5d30(&local_18,local_50);
  uVar6 = 0xfffffffe;
  if (piVar5 != (int *)0x0) {
    pbVar3 = *(byte **)(param_1 + 8);
    iVar4 = (uint)*pbVar3 + (uint)*pbVar3 * 4;
    iVar1 = (pbVar3[1] - 0x210) + iVar4 * 2;
    iVar4 = (pbVar3[1] - 0x1ac) + iVar4 * 2;
    if (0x31 < iVar1) {
      iVar4 = iVar1;
    }
    if (iVar4 < piVar5[5]) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 1;
      if (iVar4 <= piVar5[5]) {
        iVar1 = (pbVar3[3] - 0x211) + ((uint)pbVar3[2] + (uint)pbVar3[2] * 4) * 2;
        if (iVar1 < piVar5[4]) {
          uVar6 = 0xffffffff;
        }
        else if (iVar1 <= piVar5[4]) {
          iVar1 = (pbVar3[5] - 0x210) + ((uint)pbVar3[4] + (uint)pbVar3[4] * 4) * 2;
          if (iVar1 < piVar5[3]) {
            uVar6 = 0xffffffff;
          }
          else if (iVar1 <= piVar5[3]) {
            iVar1 = (pbVar3[7] - 0x210) + ((uint)pbVar3[6] + (uint)pbVar3[6] * 4) * 2;
            if (iVar1 < piVar5[2]) {
              uVar6 = 0xffffffff;
            }
            else if (iVar1 <= piVar5[2]) {
              iVar1 = (pbVar3[9] - 0x210) + ((uint)pbVar3[8] + (uint)pbVar3[8] * 4) * 2;
              if (iVar1 < piVar5[1]) {
                uVar6 = 0xffffffff;
              }
              else if (iVar1 <= piVar5[1]) {
                iVar1 = (pbVar3[0xb] - 0x210) + ((uint)pbVar3[10] + (uint)pbVar3[10] * 4) * 2;
                uVar6 = 0xffffffff;
                if (*piVar5 <= iVar1) {
                  uVar6 = (ulong)(*piVar5 < iVar1);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar6;
}

