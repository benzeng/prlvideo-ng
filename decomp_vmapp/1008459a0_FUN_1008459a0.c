
void FUN_1008459a0(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar6;
  byte bVar7;
  byte bVar5;
  
  if (param_3 != 0) {
    pcVar2 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    pbVar1 = param_1 + 0x10;
    (*pcVar2)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    bVar7 = (byte)param_3;
    bVar3 = (byte)(param_3 >> 8);
    if (param_3 < 0xff00) {
      *pbVar1 = *pbVar1 ^ bVar3;
      param_1[0x11] = param_1[0x11] ^ bVar7;
      uVar6 = 2;
    }
    else {
      *pbVar1 = ~*pbVar1;
      bVar4 = (byte)(param_3 >> 0x10);
      bVar5 = (byte)(param_3 >> 0x18);
      if (param_3 >> 0x20 == 0) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        param_1[0x12] = param_1[0x12] ^ bVar5;
        param_1[0x13] = param_1[0x13] ^ bVar4;
        param_1[0x14] = param_1[0x14] ^ bVar3;
        param_1[0x15] = param_1[0x15] ^ bVar7;
        uVar6 = 6;
      }
      else {
        param_1[0x11] = ~param_1[0x11];
        param_1[0x12] = param_1[0x12] ^ (byte)(param_3 >> 0x38);
        param_1[0x13] = param_1[0x13] ^ (byte)(param_3 >> 0x30);
        param_1[0x14] = param_1[0x14] ^ (byte)(param_3 >> 0x28);
        param_1[0x15] = param_1[0x15] ^ (byte)(param_3 >> 0x20);
        param_1[0x16] = param_1[0x16] ^ bVar5;
        param_1[0x17] = param_1[0x17] ^ bVar4;
        param_1[0x18] = param_1[0x18] ^ bVar3;
        param_1[0x19] = param_1[0x19] ^ bVar7;
        uVar6 = 10;
      }
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (0xf < uVar6) {
        (*pcVar2)(pbVar1,pbVar1,*(undefined8 *)(param_1 + 0x30));
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        uVar6 = 0;
      }
      pbVar1[uVar6] = pbVar1[uVar6] ^ *param_2;
      uVar6 = uVar6 + 1;
      param_2 = param_2 + 1;
    }
    (*pcVar2)(pbVar1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  return;
}

