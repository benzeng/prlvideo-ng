
undefined8 FUN_100b13440(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar11 = (ulong)*(uint *)(param_2 + 1);
  uVar17 = *param_2 + -1 + uVar11;
  uVar17 = uVar17 - uVar17 % uVar11;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0x40;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  uVar8 = param_2[3];
  if ((uint)(uVar11 * uVar8) < 5) {
LAB_100b134ca:
    uVar15 = 0;
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","MaxCapacity != 0",
                  "DiskImageComp.cpp",0xe6a,"Create");
    uVar8 = param_2[3];
  }
  else {
    uVar15 = uVar11 * uVar8 & 0xffffffff;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15;
    lVar7 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x20000000000)) / auVar2,0);
    uVar11 = uVar15 + 0x3f + lVar7 * 4;
    uVar12 = lVar7 * uVar15;
    uVar11 = uVar11 - uVar11 % uVar15;
    uVar15 = uVar12 - uVar11;
    if (uVar12 < uVar11 || uVar15 == 0) goto LAB_100b134ca;
  }
  if (uVar15 / uVar8 < uVar17) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar11 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    if (uVar11 != 0) {
      uVar14 = (uint)(uVar11 * uVar8);
      if (4 < uVar14) {
        uVar12 = 0xffffffffffffffff;
        if (uVar1 - 1 < 0x7fffff) {
          uVar12 = uVar11 << 0x29;
        }
        uVar11 = uVar11 * uVar8 & 0xffffffff;
        uVar12 = uVar12 / uVar11;
        if (((uVar12 * 4 < 0xffffffffffffffc0) && ((ulong)(uVar14 - 1) <= uVar12 * -4 - 0x41)) &&
           (uVar16 = uVar11 + 0x3f + uVar12 * 4, uVar16 = uVar16 - uVar16 % uVar11,
           uVar15 = uVar12 * uVar11 - uVar16, uVar16 <= uVar12 * uVar11 && uVar15 != 0)) {
          if (uVar15 / uVar8 < uVar17) {
            FUN_100df99c0("","dimg",0,
                          "Error: max possible image capacity: %llu sect, requested capacity %llu sect"
                          ,uVar15 / uVar8,uVar17);
            return 0x80021011;
          }
          pcVar13 = "WithouFreSpacExt";
          goto LAB_100b13602;
        }
      }
    }
    FUN_100df99c0("","dimg",0,"Error: invalid BAT granularity = %u sectors");
    uVar10 = 0x80021011;
  }
  else {
    pcVar13 = "WithoutFreeSpace";
LAB_100b13602:
    *(ulong *)(param_1 + 0x70) = uVar17;
    FUN_100b0d040(uVar17,local_40,uVar15 % uVar8);
    uVar1 = *(uint *)(param_2 + 1);
    *(uint *)(param_1 + 0x68) = uVar1;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = local_3c;
    *(undefined4 *)(param_1 + 100) = local_38;
    uVar17 = *(ulong *)(param_1 + 0x70) / (ulong)uVar1;
    *(int *)(param_1 + 0x6c) = (int)uVar17;
    uVar10 = *(undefined8 *)pcVar13;
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(pcVar13 + 8);
    *(undefined8 *)(param_1 + 0x4c) = uVar10;
    *(undefined4 *)(param_1 + 0x78) = 0x746f6e59;
    *(undefined4 *)(param_1 + 0x80) = 1;
    uVar17 = uVar17 & 0xffffffff;
    *(ulong *)(param_1 + 0x40) = uVar17 * 4 + 0x40;
    lVar7 = FUN_100b1ffb0(param_1);
    uVar8 = FUN_100b1ffb0(param_1);
    lVar9 = FUN_100b1ffb0(param_1);
    uVar17 = lVar9 * ((lVar7 + 0x3f + uVar17 * 4) / uVar8);
    cVar5 = FUN_100b0d190(param_2 + 2,uVar17);
    uVar10 = 0x80021022;
    if (cVar5 != '\0') {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[3];
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17;
      iVar6 = SUB164(auVar4 / auVar3,0);
      *(int *)(param_1 + 0x7c) = iVar6;
      uVar17 = *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                         (long)*(long **)(param_1 + 0x38));
      if (iVar6 == 0) {
        uVar8 = (uVar17 - 1) + *(long *)(param_1 + 0x40);
        lVar7 = uVar8 - uVar8 % uVar17;
      }
      else {
        lVar7 = uVar17 * (SUB168(auVar4 / auVar3,0) & 0xffffffff);
      }
      *(long *)(param_1 + 0x20) = lVar7;
      uVar10 = 0;
    }
  }
  return uVar10;
}

