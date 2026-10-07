
undefined4 FUN_10060a260(long param_1,undefined8 param_2,short param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_100607b00(param_1 + 0x10);
  *(short *)(param_1 + 0x110) = param_3 + -8;
  *(undefined2 *)(param_1 + 0x10a) = 0xe;
  *(undefined2 *)(param_1 + 0x10c) = 0x78;
  *(undefined2 *)(param_1 + 0x10e) = 0xf8;
  *(ushort *)(param_1 + 0x112) = param_3 - 0x100U;
  uVar3 = (uint)(ushort)(param_3 - 0x100U);
  pbVar1 = _malloc((ulong)uVar3);
  *(byte **)(param_1 + 0x118) = pbVar1;
  if (pbVar1 == (byte *)0x0) {
    FUN_1008e3970("","vdisk",0,"No memory for bitmap buffer");
    uVar2 = 0x80010013;
  }
  else {
    ___bzero(pbVar1,(ulong)uVar3);
    *pbVar1 = *pbVar1 | 0x80;
    *(undefined4 *)(param_1 + 0x120) = 0;
    uVar2 = 0;
    if (uVar3 * 8 < *(uint *)(param_1 + 0x34)) {
      uVar3 = *(uint *)(param_1 + 0x34) + uVar3 * -8 + -0xa1 + (uint)*(ushort *)(param_1 + 0x30) * 8
      ;
      uVar2 = 0;
      *(uint *)(param_1 + 0x120) = uVar3 - uVar3 % ((uint)*(ushort *)(param_1 + 0x30) * 8 - 0xa0);
    }
  }
  return uVar2;
}

