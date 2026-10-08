
long * FUN_100ab3e80(undefined8 param_1,long *param_2,ulong param_3,ulong *param_4,ulong param_5,
                    ulong *param_6,long *param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_8;
  auVar10._0_8_ = param_7;
  if (param_5 != param_3) {
    lVar8 = (((long)(param_5 - *param_4) >> 4) + ((long)param_4 - (long)param_2) * 0x20) -
            ((long)(param_3 - *param_2) >> 4);
    while (0 < lVar8) {
      param_8 = auVar10._8_8_;
      param_7 = auVar10._0_8_;
      uVar5 = *param_4;
      if (param_5 == uVar5) {
        uVar5 = param_4[-1];
        param_4 = param_4 + -1;
        param_5 = uVar5 + 0x1000;
      }
      lVar9 = (long)(param_5 - uVar5) >> 4;
      uVar7 = uVar5;
      if (lVar8 < lVar9) {
        uVar7 = param_5 + lVar8 * -0x10;
        lVar9 = lVar8;
      }
      uVar1 = param_5 - 0x10;
      uVar4 = *param_6;
      if ((uVar7 <= uVar4) && (uVar4 < param_5)) {
        lVar6 = -1;
        if ((param_8 == uVar1) ||
           (lVar6 = (((long)param_7 - (long)param_4) * 0x20 + -1 + ((long)(param_8 - *param_7) >> 4)
                    ) - ((long)(uVar1 - uVar5) >> 4), lVar6 != 0)) {
          lVar2 = (long)(uVar4 - uVar5) >> 4;
          lVar3 = lVar2 + lVar6;
          if (lVar3 == 0 || SCARRY8(lVar2,lVar6) != lVar3 < 0) {
            lVar3 = 0xff - lVar3;
            uVar5 = ((ulong)(lVar3 >> 0x3f) >> 0x38) + lVar3;
            uVar4 = (0xff - (lVar3 - (uVar5 & 0xfffffffffffff00))) * 0x10 +
                    param_4[-((long)uVar5 >> 8)];
          }
          else {
            uVar5 = ((ulong)(lVar3 >> 0x3f) >> 0x38) + lVar3;
            uVar4 = (lVar3 - (uVar5 & 0xfffffffffffff00)) * 0x10 + param_4[(long)uVar5 >> 8];
          }
        }
        *param_6 = uVar4;
      }
      auVar10 = FUN_100ab40d0(uVar7,param_5,param_7,param_8,0);
      param_7 = auVar10._0_8_;
      lVar8 = lVar8 - lVar9;
      param_5 = uVar1;
      if (lVar9 + -1 != 0) {
        lVar9 = ((long)(uVar1 - *param_4) >> 4) - (lVar9 + -1);
        if (lVar9 < 1) {
          lVar9 = 0xff - lVar9;
          uVar5 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
          param_4 = param_4 + -((long)uVar5 >> 8);
          param_5 = (0xff - (lVar9 - (uVar5 & 0xfffffffffffff00))) * 0x10 + *param_4;
        }
        else {
          uVar5 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
          lVar6 = (long)uVar5 >> 8;
          param_5 = (lVar9 - (uVar5 & 0xfffffffffffff00)) * 0x10 + param_4[lVar6];
          param_4 = param_4 + lVar6;
        }
      }
    }
  }
  return param_7;
}

