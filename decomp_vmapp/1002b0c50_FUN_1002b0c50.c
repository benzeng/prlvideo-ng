
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b0c50(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 (*param_6) [16],undefined8 param_7,uint param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined4 local_78 [2];
  uint local_70 [2];
  undefined8 local_68 [2];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  uVar9 = (ulong)(int)param_8;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68[1] = 0x1002b0c95;
  local_50 = param_1;
  local_48 = param_5;
  (*DAT_1011c66f0)(0xcf2);
  local_68[1] = 0x1002b0ca7;
  (*DAT_1011c5e90)(1,&local_3c);
  local_68[1] = 0x1002b0cb5;
  (*DAT_1011c56a0)(0x84c0);
  local_68[1] = 0x1002b0cc6;
  (*DAT_1011c5768)(0xde1,local_3c);
  local_70[0] = 0x8367;
  local_78[0] = 0x80e1;
  uStack_80 = 0x1002b0cfc;
  local_68[0] = param_4;
  (*DAT_1011c6c98)(0xde1,0,0x8058,param_2,param_3,0);
  lVar1 = uVar9 * -0x10;
  pauVar8 = (undefined1 (*) [16])(auStack_58 + lVar1);
  if (0 < (long)uVar9) {
    auVar10._4_4_ = param_2;
    auVar10._0_4_ = param_2;
    auVar10._8_4_ = param_2;
    auVar10._12_4_ = param_3;
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._4_4_ = param_3;
    auVar12._0_4_ = param_2;
    auVar12 = _DAT_100b4add0 & auVar12 | _DAT_100b37950;
    auVar11._0_4_ = (float)(param_2 >> 0x10 | _DAT_100b37960) + _DAT_100b37970 + auVar12._0_4_;
    auVar11._4_4_ = (float)(param_3 >> 0x10 | _UNK_100b37964) + _UNK_100b37974 + auVar12._4_4_;
    auVar11._8_4_ = (float)(param_2 >> 0x10 | _UNK_100b37968) + _UNK_100b37978 + auVar12._8_4_;
    auVar11._12_4_ = (float)(param_3 >> 0x10 | _UNK_100b3796c) + _UNK_100b3797c + auVar12._12_4_;
    lVar5 = 0;
    if ((uVar9 & 3) != 0) {
      lVar5 = 0;
      pauVar4 = pauVar8;
      pauVar7 = param_6;
      do {
        auVar12 = divps(*pauVar7,auVar11);
        *pauVar4 = auVar12;
        lVar5 = lVar5 + -1;
        pauVar4 = pauVar4 + 1;
        pauVar7 = pauVar7 + 1;
      } while (-(param_8 & 3) != (int)lVar5);
      lVar5 = -lVar5;
    }
    if (2 < param_8 - 1) {
      lVar5 = lVar5 + 3;
      iVar6 = (param_8 + 3) - (int)lVar5;
      param_6 = param_6 + lVar5;
      pauVar4 = pauVar8 + lVar5;
      do {
        auVar12 = divps(param_6[-3],auVar11);
        pauVar4[-3] = auVar12;
        auVar12 = divps(param_6[-2],auVar11);
        pauVar4[-2] = auVar12;
        auVar12 = divps(param_6[-1],auVar11);
        pauVar4[-1] = auVar12;
        auVar12 = divps(*param_6,auVar11);
        *pauVar4 = auVar12;
        param_6 = param_6 + 4;
        pauVar4 = pauVar4 + 4;
        iVar6 = iVar6 + -4;
      } while (iVar6 != 0);
    }
  }
  *(undefined8 *)(auStack_58 + lVar1 + -8) = param_9;
  local_70[uVar9 * -4] = param_8;
  *(undefined8 *)(local_78 + uVar9 * -4) = param_7;
  *(undefined1 (**) [16])(local_78 + uVar9 * -4 + -2) = pauVar8;
  *(undefined4 *)(local_68 + uVar9 * -2) = 0;
  auStack_88[uVar9 * -4] = 0;
  uVar3 = local_48;
  uVar2 = local_50;
  (&uStack_90)[uVar9 * -2] = 0x1002b0e47;
  FUN_1002b0580(uVar2,local_3c,0xde1,0x2600,uVar3,0);
  *(undefined8 *)(auStack_58 + lVar1 + -8) = 0x1002b0e5d;
  (*DAT_1011c5b80)(1,&local_3c);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(auStack_58 + lVar1 + -8) = &UNK_1002b0e81;
  ___stack_chk_fail();
}

