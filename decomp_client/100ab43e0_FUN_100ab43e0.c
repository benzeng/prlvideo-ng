
undefined1  [16]
FUN_100ab43e0(long *param_1,void *param_2,long *param_3,void *param_4,long *param_5,void *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  
  lVar3 = 0;
  if (param_4 != param_2) {
    lVar3 = (((long)param_4 - *param_3 >> 4) + ((long)param_3 - (long)param_1) * 0x20) -
            ((long)param_2 - *param_1 >> 4);
  }
  while (0 < lVar3) {
    pvVar9 = (void *)(*param_1 + 0x1000);
    lVar1 = (long)pvVar9 - (long)param_2 >> 4;
    pvVar6 = param_2;
    if (lVar3 < lVar1) {
      pvVar9 = (void *)(lVar3 * 0x10 + (long)param_2);
      lVar1 = lVar3;
    }
    while (pvVar6 != pvVar9) {
      lVar2 = (*param_5 + 0x1000) - (long)param_6 >> 4;
      lVar8 = (long)pvVar9 - (long)pvVar6 >> 4;
      pvVar7 = pvVar9;
      if (lVar2 < lVar8) {
        pvVar7 = (void *)(lVar2 * 0x10 + (long)pvVar6);
        lVar8 = lVar2;
      }
      _memmove(param_6,pvVar6,(long)pvVar7 - (long)pvVar6);
      pvVar6 = pvVar7;
      if (lVar8 != 0) {
        lVar5 = (long)param_6 - *param_5 >> 4;
        lVar2 = lVar5 + lVar8;
        if (lVar2 == 0 || SCARRY8(lVar5,lVar8) != lVar2 < 0) {
          lVar2 = 0xff - lVar2;
          uVar4 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
          param_5 = param_5 + -((long)uVar4 >> 8);
          param_6 = (void *)((0xff - (lVar2 - (uVar4 & 0xfffffffffffff00))) * 0x10 + *param_5);
        }
        else {
          uVar4 = ((ulong)(lVar2 >> 0x3f) >> 0x38) + lVar2;
          lVar8 = (long)uVar4 >> 8;
          param_6 = (void *)((lVar2 - (uVar4 & 0xfffffffffffff00)) * 0x10 + param_5[lVar8]);
          param_5 = param_5 + lVar8;
        }
      }
    }
    lVar3 = lVar3 - lVar1;
    if (lVar1 != 0) {
      lVar2 = (long)param_2 - *param_1 >> 4;
      lVar8 = lVar2 + lVar1;
      if (lVar8 == 0 || SCARRY8(lVar2,lVar1) != lVar8 < 0) {
        lVar8 = 0xff - lVar8;
        uVar4 = ((ulong)(lVar8 >> 0x3f) >> 0x38) + lVar8;
        param_1 = param_1 + -((long)uVar4 >> 8);
        param_2 = (void *)((0xff - (lVar8 - (uVar4 & 0xfffffffffffff00))) * 0x10 + *param_1);
      }
      else {
        uVar4 = ((ulong)(lVar8 >> 0x3f) >> 0x38) + lVar8;
        lVar1 = (long)uVar4 >> 8;
        param_2 = (void *)((lVar8 - (uVar4 & 0xfffffffffffff00)) * 0x10 + param_1[lVar1]);
        param_1 = param_1 + lVar1;
      }
    }
  }
  auVar10._8_8_ = param_6;
  auVar10._0_8_ = param_5;
  return auVar10;
}

