
uint FUN_1003aa890(long param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if ((ushort)(*(short *)(param_1 + 0x4c) - 0xfU) < 3) {
    uVar3 = 0xf0703U >> (((char)*(short *)(param_1 + 0x4c) + -0xf) * '\b' & 0x1fU) & 0xff;
  }
  else {
    lVar4 = FUN_1003a7de0();
    uVar1 = *(ushort *)(lVar4 + 0x1c);
    bVar2 = 0xf;
    if ((uVar1 & 0x800) == 0) {
      if ((uVar1 & 0xf) == 0) {
        if ((ulong)*(uint *)(param_1 + 0x48) == 0) {
          bVar2 = 0;
        }
        else {
          pbVar6 = (byte *)(*(long *)(param_1 + 0x40) + 0x39);
          uVar7 = 0;
          bVar2 = 0;
          do {
            if ((*pbVar6 & 1) == 0) {
              if ((pbVar6[-4] & 1) == 0) {
                bVar2 = bVar2 | pbVar6[-9];
              }
            }
            else {
              bVar2 = bVar2 | 1;
            }
            uVar7 = uVar7 + 1;
            pbVar6 = pbVar6 + 0x40;
          } while (uVar7 < *(uint *)(param_1 + 0x48));
        }
      }
      else {
        pcVar5 = (char *)(*(long *)(param_1 + 0x40) + 0x38);
        uVar7 = 0;
        bVar2 = 0;
        do {
          if (*pcVar5 != '\r') {
            bVar2 = bVar2 | pcVar5[-8];
          }
          uVar7 = uVar7 + 1;
          pcVar5 = pcVar5 + 0x40;
        } while (uVar7 < ((ulong)uVar1 & 0xf));
      }
    }
    uVar3 = (uint)bVar2;
  }
  return uVar3;
}

