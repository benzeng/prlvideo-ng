
void FUN_10060aed0(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = *(int *)(*param_1 + 0x48) * *(int *)((long)param_1 + 0x24);
  uVar3 = (uint)param_2;
  uVar4 = uVar3 + iVar2 * -8;
  iVar5 = (int)(param_2 >> 0x20);
  if (uVar3 < (uint)(iVar2 * 8)) {
    if (iVar5 != 0) {
      bVar6 = (param_2 >> 0x20 & 1) != 0;
      if (bVar6) {
        uVar1 = param_2 >> 3 & 0x1fffffff;
        *(byte *)(param_1[1] + uVar1) =
             *(byte *)(param_1[1] + uVar1) | (byte)(0x80 >> ((byte)param_2 & 7));
      }
      uVar4 = (uint)bVar6;
      if (iVar5 != 1) {
        uVar3 = uVar3 + uVar4;
        iVar5 = iVar5 - uVar4;
        do {
          *(byte *)(param_1[1] + (ulong)(uVar3 >> 3)) =
               *(byte *)(param_1[1] + (ulong)(uVar3 >> 3)) | (byte)(0x80 >> ((byte)uVar3 & 7));
          uVar1 = (ulong)(uVar3 + 1 >> 3);
          *(byte *)(param_1[1] + uVar1) =
               *(byte *)(param_1[1] + uVar1) | (byte)(0x80 >> ((byte)(uVar3 + 1) & 7));
          uVar3 = uVar3 + 2;
          iVar5 = iVar5 + -2;
        } while (iVar5 != 0);
      }
    }
  }
  else if (iVar5 != 0) {
    bVar6 = (param_2 >> 0x20 & 1) != 0;
    if (bVar6) {
      uVar1 = (ulong)(uVar4 >> 3);
      *(byte *)(param_1[3] + uVar1) =
           *(byte *)(param_1[3] + uVar1) | (byte)(0x80 >> ((byte)uVar4 & 7));
    }
    uVar4 = (uint)bVar6;
    if (iVar5 != 1) {
      uVar3 = uVar3 + uVar4 + iVar2 * -8;
      iVar5 = iVar5 - uVar4;
      do {
        *(byte *)(param_1[3] + (ulong)(uVar3 >> 3)) =
             *(byte *)(param_1[3] + (ulong)(uVar3 >> 3)) | (byte)(0x80 >> ((byte)uVar3 & 7));
        uVar1 = (ulong)(uVar3 + 1 >> 3);
        *(byte *)(param_1[3] + uVar1) =
             *(byte *)(param_1[3] + uVar1) | (byte)(0x80 >> ((byte)(uVar3 + 1) & 7));
        uVar3 = uVar3 + 2;
        iVar5 = iVar5 + -2;
      } while (iVar5 != 0);
    }
  }
  return;
}

