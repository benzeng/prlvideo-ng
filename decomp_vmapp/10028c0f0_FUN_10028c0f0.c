
void FUN_10028c0f0(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  
  pbVar3 = *(byte **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(pbVar3 + 0x10);
  uVar4 = *(undefined8 *)pbVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pbVar3 + 8);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar2 = param_3 - 1;
  if (pbVar3[0x16] < param_3) {
    uVar2 = (uint)pbVar3[0x16];
  }
  uVar2 = *(uint *)(param_2 + (ulong)uVar2 * 4);
  *(uint *)(param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 0x16) = 7;
  if ((char)(uVar2 >> 8) != '\0') {
    bVar1 = *pbVar3;
    if ((bVar1 == 0) || (bVar1 == 3)) {
      *(undefined2 *)(param_1 + 0x16) = 0;
    }
    else {
      if (1 < bVar1 - 5) {
        if (bVar1 == 2) {
          if ((uVar2 & 0x10000000) == 0) {
            FUN_1008e3970("","LocalDevices",0,"LSI: write to RO page: %d:%d",pbVar3[0x17] & 0xf,
                          pbVar3[0x16]);
            return;
          }
        }
        else if (bVar1 != 1) {
          FUN_1008e3970("","LocalDevices",0,"LSI: unsupported page %d:%d action: 0x%02X",
                        pbVar3[0x17] & 0xf,pbVar3[0x16],bVar1);
          return;
        }
      }
      uVar5 = FUN_10028c1e0();
      *(undefined2 *)(param_1 + 0x16) = uVar5;
    }
  }
  return;
}

