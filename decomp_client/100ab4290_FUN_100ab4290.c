
void FUN_100ab4290(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_6;
  auVar6._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar5 = ((param_4 - *param_3 >> 4) + ((long)param_3 - (long)param_1) * 0x20) -
            (param_2 - *param_1 >> 4);
    while (0 < lVar5) {
      lVar4 = *param_3;
      if (param_4 == lVar4) {
        lVar4 = param_3[-1];
        param_3 = param_3 + -1;
        param_4 = lVar4 + 0x1000;
      }
      lVar3 = param_4 - lVar4 >> 4;
      if (lVar5 < lVar3) {
        lVar4 = param_4 + lVar5 * -0x10;
        lVar3 = lVar5;
      }
      lVar1 = param_4 + -0x10;
      auVar6 = FUN_100ab40d0(lVar4,param_4,auVar6._0_8_,auVar6._8_8_,0);
      lVar5 = lVar5 - lVar3;
      param_4 = lVar1;
      if (lVar3 + -1 != 0) {
        lVar4 = (lVar1 - *param_3 >> 4) - (lVar3 + -1);
        if (lVar4 < 1) {
          lVar4 = 0xff - lVar4;
          uVar2 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          param_3 = param_3 + -((long)uVar2 >> 8);
          param_4 = (0xff - (lVar4 - (uVar2 & 0xfffffffffffff00))) * 0x10 + *param_3;
        }
        else {
          uVar2 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          lVar3 = (long)uVar2 >> 8;
          param_4 = (lVar4 - (uVar2 & 0xfffffffffffff00)) * 0x10 + param_3[lVar3];
          param_3 = param_3 + lVar3;
        }
      }
    }
  }
  return;
}

