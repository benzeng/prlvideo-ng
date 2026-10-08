
byte FUN_1006ae550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined7 in_register_00000001;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uStack_38;
  
  uStack_38 = CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff;
  bVar3 = FUN_10069e540(param_1,(long)&uStack_38 + 7);
  if (uStack_38._7_1_ == '\0') {
    uStack_38 = uStack_38 & 0xffffffffffff;
    uVar2 = FUN_10069dca0(param_1);
    lVar1 = (long)&uStack_38 + 6;
    bVar4 = FUN_1006adb20(uVar2,*(undefined8 *)(param_1 + 0x20),PTR_s_checkedForStates_1021f5548,
                          lVar1);
    bVar3 = uStack_38._6_1_;
    bVar8 = uStack_38._6_1_ == 0;
    uVar2 = FUN_10069dca0(param_1);
    bVar5 = FUN_1006addc0(uVar2,*(undefined8 *)(param_1 + 0x20),PTR_s_checkedForView_1021f5568,lVar1
                         );
    bVar9 = uStack_38._6_1_ == 0;
    bVar7 = uStack_38._6_1_ ^ 1;
    uVar2 = FUN_10069dca0(param_1);
    bVar6 = FUN_1006adb20(uVar2,*(undefined8 *)(param_1 + 0x20),
                          PTR_s_checkedWithAttributes_1021f5588,lVar1);
    bVar3 = (bVar4 | bVar8) & (bVar9 | bVar5) & (uStack_38._6_1_ == 0 | bVar6) &
            (byte)((uStack_38._6_1_ ^ 1) & (bVar3 ^ 1) & bVar7) == 0;
  }
  return bVar3;
}

