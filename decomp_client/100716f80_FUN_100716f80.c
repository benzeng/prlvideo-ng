
QKeySequence * FUN_100716f80(QKeySequence *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar5 = DAT_100e271f8;
  iVar2 = CKmKeyCombination::getCustomKey();
  iVar3 = DAT_100e271fc;
  if (iVar5 != iVar2) {
    iVar2 = CKmKeyCombination::getCustomKey();
    iVar5 = DAT_100e27200;
    if (iVar3 != iVar2) {
      iVar3 = CKmKeyCombination::getCustomKey();
      if (iVar5 != iVar3) {
        iVar5 = CKmKeyCombination::getUseCtrl();
        uVar4 = (uint)(iVar5 != 0) * 0x10000000;
        iVar5 = CKmKeyCombination::getUseAlt();
        uVar1 = uVar4 + 0x8000000;
        if (iVar5 == 0) {
          uVar1 = uVar4;
        }
        iVar5 = CKmKeyCombination::getUseShift();
        uVar4 = uVar1 | 0x2000000;
        if (iVar5 == 0) {
          uVar4 = uVar1;
        }
        iVar5 = CKmKeyCombination::getUseCmd();
        uVar1 = uVar4 | 0x4000000;
        if (iVar5 == 0) {
          uVar1 = uVar4;
        }
        uVar6 = CKmKeyCombination::getCustomKey();
        uVar4 = uVar6;
        if ((param_3 != '\0') && (uVar4 = 0, uVar6 != 0)) {
          uVar7 = CKmKeyCombination::getCustomKey();
          uVar6 = FUN_100cdf5a0(uVar7);
          uVar4 = 0;
          if (uVar6 != 0x1ffffff) {
            uVar4 = uVar6;
          }
        }
        uVar4 = uVar4 | uVar1;
        goto LAB_100716fde;
      }
    }
  }
  uVar4 = CKmKeyCombination::getCustomKey();
LAB_100716fde:
  QKeySequence::QKeySequence(param_1,uVar4,0,0,0);
  return param_1;
}

