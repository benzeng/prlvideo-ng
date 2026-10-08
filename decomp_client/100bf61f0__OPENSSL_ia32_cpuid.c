
/* WARNING: Removing unreachable block (ram,0x000100bf62d1) */
/* WARNING: Removing unreachable block (ram,0x000100bf62bc) */
/* WARNING: Removing unreachable block (ram,0x000100bf628a) */
/* WARNING: Removing unreachable block (ram,0x000100bf627c) */
/* WARNING: Removing unreachable block (ram,0x000100bf6262) */
/* WARNING: Removing unreachable block (ram,0x000100bf6251) */
/* WARNING: Removing unreachable block (ram,0x000100bf61f5) */

undefined1  [16] _OPENSSL_ia32_cpuid(void)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong in_XCR0;
  undefined1 auVar13 [16];
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar11 = (uint)((puVar1[1] != 0x756e6547 || puVar1[2] != 0x49656e69) || puVar1[3] != 0x6c65746e);
  if ((uVar11 == 0) ||
     ((puVar1[1] != 0x68747541 || puVar1[2] != 0x69746e65) || puVar1[3] != 0x444d4163)) {
LAB_100bf62a6:
    uVar12 = 0xffffffff;
    if (3 < *puVar1) {
      puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
      uVar12 = *puVar1 >> 0xe & 0xfff;
    }
    puVar5 = (undefined4 *)cpuid_Version_info(1);
    uVar7 = puVar5[3];
    uVar8 = puVar5[2] & 0xbfefffff;
    uVar9 = (ulong)uVar8;
    if ((uVar11 == 0) &&
       (uVar9 = (ulong)(uVar8 | 0x40000000), ((byte)((uint)*puVar5 >> 8) & 0xf) == 0xf)) {
      uVar9 = (ulong)(uVar8 | 0x40100000);
    }
    if (((uint)uVar9 >> 0x1c & 1) != 0) {
      uVar8 = (uint)uVar9 & 0xefffffff;
      uVar9 = (ulong)uVar8;
      if ((uVar12 != 0) &&
         (uVar9 = (ulong)(uVar8 | 0x10000000), (byte)((uint)puVar5[1] >> 0x10) < 2)) {
        uVar9 = (ulong)uVar8;
      }
    }
  }
  else {
    puVar2 = (uint *)cpuid(0x80000000);
    if (*puVar2 < 0x80000001) goto LAB_100bf62a6;
    lVar3 = cpuid(0x80000001);
    uVar11 = uVar11 | *(uint *)(lVar3 + 0xc) & 0x801;
    if (*puVar2 < 0x80000008) goto LAB_100bf62a6;
    lVar3 = cpuid(0x80000008);
    lVar4 = cpuid_Version_info(1);
    uVar12 = *(uint *)(lVar4 + 8);
    uVar9 = (ulong)uVar12;
    uVar7 = *(uint *)(lVar4 + 0xc);
    if (((uVar12 >> 0x1c & 1) != 0) &&
       ((byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x10) <=
        (byte)((char)*(undefined4 *)(lVar3 + 0xc) + 1U))) {
      uVar9 = (ulong)(uVar12 & 0xefffffff);
    }
  }
  uVar11 = uVar11 & 0x800 | uVar7 & 0xfffff7ff;
  uVar10 = uVar9;
  if ((uVar7 & 0x8000000) != 0) {
    uVar6 = xinuse(0);
    uVar10 = (in_XCR0 & uVar6) >> 0x20;
    if (((uint)(in_XCR0 & uVar6) & 6) == 6) goto LAB_100bf6348;
  }
  uVar11 = uVar7 & 0xefffe7ff;
LAB_100bf6348:
  auVar13._0_8_ = uVar9 | (ulong)uVar11 << 0x20;
  auVar13._8_8_ = uVar10;
  return auVar13;
}

