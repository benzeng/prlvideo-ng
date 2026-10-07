
undefined1  [16] FUN_10059a000(void *param_1,void *param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  while ((long)param_2 - (long)param_1 != 0) {
    lVar1 = param_4 - *param_3 >> 3;
    if (param_4 - *param_3 < 9) {
      lVar1 = 0x200 - lVar1;
      uVar4 = ((ulong)(lVar1 >> 0x3f) >> 0x37) + lVar1;
      lVar6 = param_3[-((long)uVar4 >> 9)];
      uVar4 = lVar1 - (uVar4 & 0x1ffffffffffffe00);
      lVar1 = 0x1ff;
    }
    else {
      lVar1 = lVar1 + -1;
      uVar2 = ((ulong)(lVar1 >> 0x3f) >> 0x37) + lVar1;
      uVar4 = uVar2 & 0x1ffffffffffffe00;
      lVar6 = param_3[(long)uVar2 >> 9];
    }
    lVar1 = lVar6 + (lVar1 - uVar4) * 8;
    lVar5 = (lVar1 + 8) - lVar6 >> 3;
    lVar6 = (long)param_2 - (long)param_1 >> 3;
    pvVar3 = param_1;
    if (lVar5 < lVar6) {
      pvVar3 = (void *)((long)param_2 + lVar5 * -8);
      lVar6 = lVar5;
    }
    _memmove((void *)(lVar1 + (1 - ((ulong)((long)param_2 - (long)pvVar3) >> 3)) * 8),pvVar3,
             (long)param_2 - (long)pvVar3);
    param_2 = pvVar3;
    if (lVar6 != 0) {
      lVar5 = param_4 - *param_3 >> 3;
      lVar1 = lVar5 - lVar6;
      if (lVar1 == 0 || lVar5 < lVar6) {
        lVar1 = 0x1ff - lVar1;
        uVar4 = ((ulong)(lVar1 >> 0x3f) >> 0x37) + lVar1;
        param_3 = param_3 + -((long)uVar4 >> 9);
        param_4 = (0x1ff - (lVar1 - (uVar4 & 0x1ffffffffffffe00))) * 8 + *param_3;
      }
      else {
        uVar4 = ((ulong)(lVar1 >> 0x3f) >> 0x37) + lVar1;
        lVar6 = (long)uVar4 >> 9;
        param_4 = (lVar1 - (uVar4 & 0x1ffffffffffffe00)) * 8 + param_3[lVar6];
        param_3 = param_3 + lVar6;
      }
    }
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}

