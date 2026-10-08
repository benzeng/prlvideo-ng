
undefined8 FUN_100181b10(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  QRectF *pQVar4;
  double dVar5;
  double dVar6;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  if (*(uint *)(param_1 + 5) - 2 < 2) {
    if (*(uint *)(param_2 + 5) < 2) {
      return 0;
    }
    dVar1 = *param_1;
    local_a8 = param_1[2];
    dVar6 = dVar1;
    if (local_a8 <= dVar1) {
      dVar6 = local_a8;
    }
    dVar2 = param_1[1];
    if (local_a8 <= dVar1) {
      local_a8 = dVar1;
    }
    dVar1 = param_2[2];
    local_d8 = *param_2;
    dStack_c8 = dVar1;
    if (dVar1 <= local_d8) {
      dStack_c8 = local_d8;
      local_d8 = dVar1;
    }
    local_d8 = local_d8 + 0.0;
    local_d0 = param_2[1] + (dVar2 - param_2[1]);
    dStack_c8 = dStack_c8 + 0.0;
    local_c0 = local_d0;
    local_b8 = dVar6;
    local_b0 = dVar2;
    local_a0 = dVar2;
    local_e8 = QLineF::length();
    local_e0 = 0x3ff0000000000000;
    local_f8 = dVar6;
    local_f0 = dVar2;
    QLineF::length();
    pQVar4 = (QRectF *)&local_f8;
  }
  else {
    if (1 < *(uint *)(param_1 + 5)) {
      return 0;
    }
    if (((ulong)param_2[5] & 0xfffffffe) == 2) {
      return 0;
    }
    dVar2 = *param_1;
    dVar1 = param_1[1];
    dVar6 = param_1[3];
    local_20 = dVar6;
    if (dVar6 <= dVar1) {
      local_20 = dVar1;
      dVar1 = dVar6;
    }
    dVar6 = param_2[1];
    dVar5 = param_2[3];
    dStack_40 = dVar5;
    if (dVar5 <= dVar6) {
      dStack_40 = dVar6;
      dVar6 = dVar5;
    }
    dVar5 = (dVar2 - *param_2) + *param_2;
    dStack_40 = dStack_40 + 0.0;
    local_58 = dVar5;
    local_50 = dVar6 + 0.0;
    local_48 = dVar5;
    local_38 = dVar2;
    local_30 = dVar1;
    local_28 = dVar2;
    local_60 = QLineF::length();
    local_68 = 0x3ff0000000000000;
    local_78 = dVar2;
    local_70 = dVar1;
    local_80 = QLineF::length();
    local_88 = 0x3ff0000000000000;
    pQVar4 = (QRectF *)&local_78;
    local_98 = dVar5;
    local_90 = dVar6 + 0.0;
  }
  uVar3 = QRectF::intersects(pQVar4);
  return uVar3;
}

