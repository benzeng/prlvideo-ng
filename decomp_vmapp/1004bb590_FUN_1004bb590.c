
undefined1
FUN_1004bb590(long *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  long lVar6;
  undefined1 uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_120 [9];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  uVar2 = *param_5;
  local_50 = (double)*(int *)(param_2 + 0x58);
  local_48 = (double)*(int *)(param_2 + 0x5c);
  local_40 = (double)(*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58));
  dVar8 = (double)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x5c));
  local_38 = dVar8;
  _CGRectIntersection(&local_70);
  uVar7 = 0;
  cVar5 = _CGRectIsNull();
  if (cVar5 == '\0') {
    _CGRectOffset((double)-*(int *)(param_2 + 0x58),(double)-*(int *)(param_2 + 0x5c),local_98);
    local_c0 = local_58;
    local_c8 = local_60;
    local_d0 = local_68;
    local_d8 = local_70;
    _CGRectOffset((double)-*(int *)(*param_1 + 0x980 + (ulong)param_3 * 0x8f0),
                  (double)-*(int *)(*param_1 + 0x984 + (ulong)param_3 * 0x8f0),local_b8);
    auVar9._8_8_ = (dVar8 - (double)local_98._8_8_) - local_88._8_8_;
    auVar9._0_8_ = local_98._0_8_;
    lVar6 = param_1[0x48];
    lVar1 = param_1[0x48];
    uVar10 = (undefined4)lVar1;
    uVar11 = (undefined4)((ulong)lVar1 >> 0x20);
    auVar3._8_4_ = uVar10;
    auVar3._0_8_ = lVar6;
    auVar3._12_4_ = uVar11;
    local_98 = divpd(auVar9,auVar3);
    auVar4._8_4_ = uVar10;
    auVar4._0_8_ = lVar6;
    auVar4._12_4_ = uVar11;
    local_88 = divpd(local_88,auVar4);
    cVar5 = FUN_1004bac80(*(undefined1 *)((long)param_1 + 0x249),*(undefined4 *)(param_2 + 8),
                          local_120);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_2 + 0x26) = 1;
      lVar6 = _CGImageCreateWithImageInRect(uVar2);
      if (lVar6 != 0) {
        FUN_1004bb910(param_1[0x48]);
        _CGContextDrawImage(local_120[0],lVar6);
        _CGImageRelease(lVar6);
      }
      FUN_1004baec0(local_120);
      uVar7 = 1;
    }
  }
  return uVar7;
}

