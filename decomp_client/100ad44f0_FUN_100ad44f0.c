
undefined8 FUN_100ad44f0(undefined8 param_1,double param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  int local_20;
  int local_1c;
  
  local_20 = *param_4 - *(int *)(param_3 + 0x9b0);
  local_1c = param_4[1] - *(int *)(param_3 + 0x9b4);
  auVar12 = FUN_100ae6120(param_3 + 0x990,&local_20);
  uVar5 = auVar12._8_8_;
  uVar3 = auVar12._0_8_;
  lVar1 = *(long *)(param_3 + 0xad8);
  lVar7 = (long)*(int *)(lVar1 + 4) * 0x18;
  if (lVar7 != 0) {
    piVar9 = (int *)(lVar1 + *(long *)(lVar1 + 0x10));
    dVar10 = *(double *)(param_3 + 0xac0);
    dVar11 = (double)auVar12._0_4_;
    uVar8 = uVar3 >> 0x20;
    param_2 = (double)auVar12._4_4_;
    do {
      if (((double)*piVar9 / dVar10 == dVar11) && (!NAN((double)*piVar9 / dVar10) && !NAN(dVar11)))
      {
        if (((double)piVar9[1] / dVar10 == param_2) &&
           (!NAN((double)piVar9[1] / dVar10) && !NAN(param_2))) {
          if (piVar9[2] != 0) {
            uVar3 = (ulong)(uint)(int)(dVar11 + (double)(uint)piVar9[2] / dVar10);
          }
          if (piVar9[3] != 0) {
            param_2 = param_2 + (double)(uint)piVar9[3] / dVar10;
            uVar8 = (ulong)(uint)(int)param_2;
          }
          uVar6 = uVar5 >> 0x20;
          if (piVar9[4] != 0) {
            param_2 = (double)auVar12._8_4_ - (double)(uint)piVar9[4] / dVar10;
            uVar5 = (ulong)(uint)(int)param_2;
          }
          if (piVar9[5] != 0) {
            param_2 = (double)auVar12._12_4_ - (double)(uint)piVar9[5] / dVar10;
            uVar6 = (ulong)(uint)(int)param_2;
          }
          auVar12._8_8_ = uVar6 << 0x20 | uVar5 & 0xffffffff;
          auVar12._0_8_ = uVar8 << 0x20 | uVar3 & 0xffffffff;
          break;
        }
      }
      piVar9 = piVar9 + 6;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  local_40 = (double)auVar12._0_4_;
  local_38 = (double)auVar12._4_4_;
  local_30 = (double)((auVar12._8_4_ + 1) - auVar12._0_4_);
  local_28 = (double)((auVar12._12_4_ + 1) - auVar12._4_4_);
  local_50 = (double)local_20;
  local_48 = (double)local_1c;
  dVar10 = (double)WidgetUtils::makePointInside((QRectF *)&local_40,(QPointF *)&local_50);
  if (0.0 <= dVar10) {
    iVar2 = (int)(dVar10 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar10);
  }
  if (0.0 <= param_2) {
    iVar4 = (int)(param_2 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((param_2 - (double)(int)(DAT_100e110e0 + param_2)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_2);
  }
  return CONCAT44((int)((double)iVar4 * *(double *)(param_3 + 0xac0)),
                  (int)((double)iVar2 * *(double *)(param_3 + 0xac0)));
}

