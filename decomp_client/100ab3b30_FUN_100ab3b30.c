
undefined1  [16]
FUN_100ab3b30(undefined8 param_1,long *param_2,void *param_3,long *param_4,void *param_5,
             ulong *param_6,long *param_7,void *param_8)

{
  undefined1 auVar1 [16];
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  
  lVar8 = 0;
  if (param_5 != param_3) {
    lVar8 = (((long)param_5 - *param_4 >> 4) + ((long)param_4 - (long)param_2) * 0x20) -
            ((long)param_3 - *param_2 >> 4);
  }
  while (0 < lVar8) {
    lVar9 = *param_2;
    pvVar10 = (void *)(lVar9 + 0x1000);
    lVar2 = (long)pvVar10 - (long)param_3 >> 4;
    if (lVar8 < lVar2) {
      pvVar10 = (void *)(lVar8 * 0x10 + (long)param_3);
      lVar2 = lVar8;
    }
    pvVar3 = (void *)*param_6;
    pvVar7 = param_3;
    if ((param_3 <= pvVar3) && (pvVar3 < pvVar10)) {
      if ((param_3 != param_8) &&
         (lVar4 = ((long)param_8 - *param_7 >> 4) -
                  (((long)param_3 - lVar9 >> 4) + ((long)param_2 - (long)param_7) * 0x20),
         lVar4 != 0)) {
        lVar4 = ((long)pvVar3 - lVar9 >> 4) + lVar4;
        if (lVar4 < 1) {
          lVar4 = 0xff - lVar4;
          uVar5 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          pvVar3 = (void *)((0xff - (lVar4 - (uVar5 & 0xfffffffffffff00))) * 0x10 +
                           param_2[-((long)uVar5 >> 8)]);
        }
        else {
          uVar5 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          pvVar3 = (void *)((lVar4 - (uVar5 & 0xfffffffffffff00)) * 0x10 + param_2[(long)uVar5 >> 8]
                           );
        }
      }
      *param_6 = (ulong)pvVar3;
    }
    while (pvVar7 != pvVar10) {
      lVar4 = (*param_7 + 0x1000) - (long)param_8 >> 4;
      lVar9 = (long)pvVar10 - (long)pvVar7 >> 4;
      pvVar3 = pvVar10;
      if (lVar4 < lVar9) {
        pvVar3 = (void *)(lVar4 * 0x10 + (long)pvVar7);
        lVar9 = lVar4;
      }
      _memmove(param_8,pvVar7,(long)pvVar3 - (long)pvVar7);
      pvVar7 = pvVar3;
      if (lVar9 != 0) {
        lVar6 = (long)param_8 - *param_7 >> 4;
        lVar4 = lVar6 + lVar9;
        if (lVar4 == 0 || SCARRY8(lVar6,lVar9) != lVar4 < 0) {
          lVar4 = 0xff - lVar4;
          uVar5 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          param_7 = param_7 + -((long)uVar5 >> 8);
          param_8 = (void *)((0xff - (lVar4 - (uVar5 & 0xfffffffffffff00))) * 0x10 + *param_7);
        }
        else {
          uVar5 = ((ulong)(lVar4 >> 0x3f) >> 0x38) + lVar4;
          lVar9 = (long)uVar5 >> 8;
          param_8 = (void *)((lVar4 - (uVar5 & 0xfffffffffffff00)) * 0x10 + param_7[lVar9]);
          param_7 = param_7 + lVar9;
        }
      }
    }
    lVar8 = lVar8 - lVar2;
    if (lVar2 != 0) {
      lVar4 = (long)param_3 - *param_2 >> 4;
      lVar9 = lVar4 + lVar2;
      if (lVar9 == 0 || SCARRY8(lVar4,lVar2) != lVar9 < 0) {
        lVar9 = 0xff - lVar9;
        uVar5 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
        param_2 = param_2 + -((long)uVar5 >> 8);
        param_3 = (void *)((0xff - (lVar9 - (uVar5 & 0xfffffffffffff00))) * 0x10 + *param_2);
      }
      else {
        uVar5 = ((ulong)(lVar9 >> 0x3f) >> 0x38) + lVar9;
        lVar2 = (long)uVar5 >> 8;
        param_3 = (void *)((lVar9 - (uVar5 & 0xfffffffffffff00)) * 0x10 + param_2[lVar2]);
        param_2 = param_2 + lVar2;
      }
    }
  }
  auVar1._8_8_ = param_8;
  auVar1._0_8_ = param_7;
  return auVar1;
}

