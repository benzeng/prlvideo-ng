
undefined1  [16] FUN_100ab40d0(void *param_1,void *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  while ((long)param_2 - (long)param_1 != 0) {
    lVar5 = param_4 - *param_3 >> 4;
    if (param_4 - *param_3 < 0x11) {
      lVar5 = 0x100 - lVar5;
      uVar2 = ((ulong)(lVar5 >> 0x3f) >> 0x38) + lVar5;
      lVar3 = param_3[-((long)uVar2 >> 8)];
      uVar2 = lVar5 - (uVar2 & 0xfffffffffffff00);
      lVar5 = 0xff;
    }
    else {
      lVar5 = lVar5 + -1;
      uVar1 = ((ulong)(lVar5 >> 0x3f) >> 0x38) + lVar5;
      uVar2 = uVar1 & 0xfffffffffffff00;
      lVar3 = param_3[(long)uVar1 >> 8];
    }
    lVar6 = (lVar5 - uVar2) * 0x10 + lVar3;
    lVar3 = (lVar6 + 0x10) - lVar3 >> 4;
    lVar5 = (long)param_2 - (long)param_1 >> 4;
    pvVar4 = param_1;
    if (lVar3 < lVar5) {
      pvVar4 = (void *)((long)param_2 + lVar3 * -0x10);
      lVar5 = lVar3;
    }
    _memmove((void *)(lVar6 + (1 - ((ulong)((long)param_2 - (long)pvVar4) >> 4)) * 0x10),pvVar4,
             (long)param_2 - (long)pvVar4);
    param_2 = pvVar4;
    if (lVar5 != 0) {
      lVar6 = param_4 - *param_3 >> 4;
      lVar3 = lVar6 - lVar5;
      if (lVar3 == 0 || lVar6 < lVar5) {
        lVar3 = 0xff - lVar3;
        uVar2 = ((ulong)(lVar3 >> 0x3f) >> 0x38) + lVar3;
        param_3 = param_3 + -((long)uVar2 >> 8);
        param_4 = (0xff - (lVar3 - (uVar2 & 0xfffffffffffff00))) * 0x10 + *param_3;
      }
      else {
        uVar2 = ((ulong)(lVar3 >> 0x3f) >> 0x38) + lVar3;
        lVar5 = (long)uVar2 >> 8;
        param_4 = (lVar3 - (uVar2 & 0xfffffffffffff00)) * 0x10 + param_3[lVar5];
        param_3 = param_3 + lVar5;
      }
    }
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}

