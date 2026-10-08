
undefined1  [16] FUN_100acd9a0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = FUN_100370280();
  uVar1 = DAT_100e152b8;
  lVar3 = FUN_1003704b0(uVar2,param_1 + 0x50,DAT_100e152b8);
  uVar2 = 0xffffffffffffffff;
  uVar4 = 0;
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar2 = FUN_100370280();
    lVar3 = FUN_1003704b0(uVar2,param_1 + 0x50,uVar1);
    uVar5 = *(ulong *)(*(long *)(lVar3 + 0x28) + 0x14);
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x1c);
    uVar4 = uVar5 & 0xffffffff00000000;
    uVar5 = uVar5 & 0xffffffff;
  }
  auVar6._0_8_ = uVar4 | uVar5;
  auVar6._8_8_ = uVar2;
  return auVar6;
}

