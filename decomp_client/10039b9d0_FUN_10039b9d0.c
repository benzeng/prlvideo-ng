
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

QImage * FUN_10039b9d0(QImage *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  QRect local_68 [32];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  QImage::QImage(param_1);
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  uVar4 = _UNK_100e14fe8;
  *(undefined8 *)(param_1 + 0x28) = DAT_100e14fe0;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  iVar2 = QImage::width();
  iVar2 = iVar2 / ((*(int *)(param_2 + 0x40) + 1) - *(int *)(param_2 + 0x38));
  iVar3 = QImage::height();
  iVar5 = (*(int *)(param_2 + 0x44) + 1) - *(int *)(param_2 + 0x3c);
  uVar1 = (long)(int)param_3 % (long)((iVar3 / iVar5) * iVar2);
  uVar1 = (ulong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  iVar3 = (*(int *)(param_2 + 0x40) + 1) - *(int *)(param_2 + 0x38);
  local_48 = (int)((long)uVar1 % (long)iVar2) * iVar3;
  local_44 = (int)((long)uVar1 / (long)iVar2) * iVar5;
  local_40 = iVar3 + -1 + local_48;
  local_3c = iVar5 + -1 + local_44;
  QImage::copy(local_68);
  QImage::operator=(param_1,(QImage *)local_68);
  QImage::~QImage((QImage *)local_68);
  QElapsedTimer::restart();
  auVar7._0_4_ = -(uint)((param_3 & _DAT_100e1a140) == 0);
  auVar7._4_4_ = 0xffffffff;
  auVar7._8_4_ = -(uint)((param_3 & _UNK_100e1a148) == 0);
  auVar7._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == 0);
  auVar6._4_4_ = auVar7._0_4_;
  auVar6._0_4_ = 0xffffffff;
  auVar6._8_4_ = auVar7._12_4_;
  auVar6._12_4_ = auVar7._8_4_;
  auVar9._8_4_ = 0xffffffff;
  auVar9._0_8_ = 0xffffffffffffffff;
  auVar9._12_4_ = 0xffffffff;
  auVar10._8_8_ = _UNK_100e11218;
  auVar10._0_8_ = _DAT_100e11210;
  auVar10 = ~(auVar9 ^ auVar6 & auVar7) & auVar10;
  dVar8 = auVar10._0_8_;
  dVar11 = auVar10._8_8_;
  local_a0 = _DAT_100e11210 - (dVar8 + dVar8);
  dStack_98 = _UNK_100e11218 - (dVar11 + dVar11);
  local_80 = DAT_100e1a190;
  if ((param_3 & 4) == 0) {
    local_80 = 0;
  }
  local_a8 = 0;
  local_90 = _DAT_100e1a150;
  uStack_88 = _UNK_100e1a158;
  local_78 = 0;
  local_70 = FUN_10039d4d0;
  uVar4 = FUN_10039d210(param_1 + 0x20,&local_a8);
  local_e8 = 1000;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = _DAT_100e11210;
  dStack_c8 = _UNK_100e11218;
  local_c0 = 0;
  local_b8 = 0x3ff0000000000000;
  local_b0 = FUN_10039d4f0;
  uVar4 = FUN_10039d210(uVar4,&local_e8);
  local_120 = (dVar8 + _DAT_100e1a160) * _DAT_100e1a170;
  dStack_118 = (dVar11 + _UNK_100e1a168) * _UNK_100e1a178;
  local_128 = 6000;
  local_110 = _DAT_100e1a180;
  uStack_108 = _UNK_100e1a188;
  local_100 = 0;
  local_f8 = 0x3ff0000000000000;
  local_f0 = FUN_10039d500;
  FUN_10039d210(uVar4,&local_128);
  return param_1;
}

