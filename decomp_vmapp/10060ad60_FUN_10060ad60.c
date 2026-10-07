
void FUN_10060ad60(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(*param_1 + 0x48) * *(int *)((long)param_1 + 0x24);
  if (param_2 < (uint)(iVar1 * 8)) {
    if (param_3 != 0) {
      bVar5 = (param_3 & 1) != 0;
      if (bVar5) {
        *(byte *)(param_1[1] + (ulong)(param_2 >> 3)) =
             *(byte *)(param_1[1] + (ulong)(param_2 >> 3)) | (byte)(0x80 >> ((byte)param_2 & 7));
      }
      uVar4 = (uint)bVar5;
      if (param_3 != 1) {
        iVar1 = param_3 - uVar4;
        param_2 = uVar4 + 1 + param_2;
        do {
          uVar2 = (ulong)(param_2 - 1 >> 3);
          *(byte *)(param_1[1] + uVar2) =
               *(byte *)(param_1[1] + uVar2) | (byte)(0x80 >> ((byte)(param_2 - 1) & 7));
          *(byte *)(param_1[1] + (ulong)(param_2 >> 3)) =
               *(byte *)(param_1[1] + (ulong)(param_2 >> 3)) | (byte)(0x80 >> ((byte)param_2 & 7));
          param_2 = param_2 + 2;
          iVar1 = iVar1 + -2;
        } while (iVar1 != 0);
      }
    }
  }
  else if (param_3 != 0) {
    bVar5 = (param_3 & 1) != 0;
    if (bVar5) {
      uVar4 = param_2 + iVar1 * -8;
      uVar2 = (ulong)(uVar4 >> 3);
      *(byte *)(param_1[3] + uVar2) =
           *(byte *)(param_1[3] + uVar2) | (byte)(0x80 >> ((byte)uVar4 & 7));
    }
    uVar4 = (uint)bVar5;
    if (param_3 != 1) {
      iVar3 = param_3 - uVar4;
      uVar4 = uVar4 + 1 + param_2 + iVar1 * -8;
      do {
        uVar2 = (ulong)(uVar4 - 1 >> 3);
        *(byte *)(param_1[3] + uVar2) =
             *(byte *)(param_1[3] + uVar2) | (byte)(0x80 >> ((byte)(uVar4 - 1) & 7));
        *(byte *)(param_1[3] + (ulong)(uVar4 >> 3)) =
             *(byte *)(param_1[3] + (ulong)(uVar4 >> 3)) | (byte)(0x80 >> ((byte)uVar4 & 7));
        uVar4 = uVar4 + 2;
        iVar3 = iVar3 + -2;
      } while (iVar3 != 0);
    }
  }
  return;
}

