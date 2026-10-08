
int FUN_100c652b0(undefined1 *param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  char cVar8;
  ulong uVar9;
  
  iVar4 = 0;
  if (0 < (int)param_3) {
    uVar5 = 0xfffffffc;
    if (-5 < (int)~param_3) {
      uVar5 = ~param_3;
    }
    uVar5 = uVar5 + 3 + param_3;
    pcVar7 = param_1 + 3;
    pbVar6 = (byte *)(param_2 + 2);
    do {
      uVar9 = (ulong)pbVar6[-2] << 0x10;
      if ((int)param_3 < 3) {
        if (param_3 == 2) {
          uVar9 = uVar9 | (ulong)pbVar6[-1] << 8;
        }
        pcVar7[-3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [uVar9 >> 0x12];
        pcVar7[-2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [uVar9 >> 0xc & 0x3f];
        cVar8 = '=';
        if (param_3 != 1) {
          cVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [uVar9 >> 6 & 0x3f];
        }
        pcVar7[-1] = cVar8;
        *pcVar7 = '=';
      }
      else {
        bVar1 = pbVar6[-1];
        bVar2 = *pbVar6;
        pcVar7[-3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [pbVar6[-2] >> 2];
        pcVar7[-2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [(ulong)(((uint)uVar9 | (uint)bVar1 << 8) >> 0xc) & 0x3f];
        pcVar7[-1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [(ulong)(ushort)(CONCAT11(bVar1,bVar2) >> 6) & 0x3f];
        *pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)bVar2 & 0x3f];
      }
      pcVar7 = pcVar7 + 4;
      pbVar6 = pbVar6 + 3;
      bVar3 = 3 < (int)param_3;
      param_3 = param_3 - 3;
    } while (bVar3);
    iVar4 = (uVar5 / 3) * 4 + 4;
    param_1 = param_1 + ((ulong)uVar5 / 3) * 4 + 4;
  }
  *param_1 = 0;
  return iVar4;
}

