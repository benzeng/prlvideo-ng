
void FUN_100599c60(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
    lVar5 = ((param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
            (param_2 - *param_1 >> 3);
    while (0 < lVar5) {
      lVar4 = *param_3;
      if (param_4 == lVar4) {
        lVar4 = param_3[-1];
        param_3 = param_3 + -1;
        param_4 = lVar4 + 0x1000;
      }
      lVar3 = param_4 - lVar4 >> 3;
      if (lVar5 < lVar3) {
        lVar4 = param_4 + lVar5 * -8;
        lVar3 = lVar5;
      }
      lVar1 = param_4 + -8;
      auVar6 = FUN_10059a000(lVar4,param_4,auVar6._0_8_,auVar6._8_8_,0);
      lVar5 = lVar5 - lVar3;
      param_4 = lVar1;
      if (lVar3 + -1 != 0) {
        lVar4 = (lVar1 - *param_3 >> 3) - (lVar3 + -1);
        if (lVar4 < 1) {
          lVar4 = 0x1ff - lVar4;
          uVar2 = ((ulong)(lVar4 >> 0x3f) >> 0x37) + lVar4;
          param_3 = param_3 + -((long)uVar2 >> 9);
          param_4 = (0x1ff - (lVar4 - (uVar2 & 0x1ffffffffffffe00))) * 8 + *param_3;
        }
        else {
          uVar2 = ((ulong)(lVar4 >> 0x3f) >> 0x37) + lVar4;
          lVar3 = (long)uVar2 >> 9;
          param_4 = (lVar4 - (uVar2 & 0x1ffffffffffffe00)) * 8 + param_3[lVar3];
          param_3 = param_3 + lVar3;
        }
      }
    }
  }
  return;
}

