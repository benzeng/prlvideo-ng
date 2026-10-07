
void _aesni_encrypt(uint *param_1,undefined1 (*param_2) [16],uint *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar2 = param_3[0x3c];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  pauVar3 = (undefined1 (*) [16])(param_3 + 8);
  auVar8._0_4_ = *param_1 ^ *param_3;
  auVar8._4_4_ = param_1[1] ^ param_3[1];
  auVar8._8_4_ = param_1[2] ^ param_3[2];
  auVar8._12_4_ = param_1[3] ^ param_3[3];
  do {
    auVar1._4_4_ = uVar5;
    auVar1._0_4_ = uVar4;
    auVar1._8_4_ = uVar6;
    auVar1._12_4_ = uVar7;
    auVar8 = aesenc(auVar8,auVar1);
    uVar2 = uVar2 - 1;
    auVar1 = *pauVar3;
    uVar4 = auVar1._0_4_;
    uVar5 = auVar1._4_4_;
    uVar6 = auVar1._8_4_;
    uVar7 = auVar1._12_4_;
    pauVar3 = pauVar3 + 1;
  } while (uVar2 != 0);
  auVar8 = aesenclast(auVar8,auVar1);
  *param_2 = auVar8;
  return;
}

