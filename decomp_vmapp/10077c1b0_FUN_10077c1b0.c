
/* WARNING: Removing unreachable block (ram,0x00010077c1bc) */

undefined1  [16] FUN_10077c1b0(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong in_XCR0;
  undefined1 auVar5 [16];
  
  lVar1 = cpuid_Version_info(1);
  uVar4 = (ulong)*(uint *)(lVar1 + 8);
  uVar3 = 0;
  if ((*(uint *)(lVar1 + 0xc) & 0x8000000) != 0) {
    uVar2 = xinuse(0);
    uVar2 = in_XCR0 & uVar2;
    uVar4 = uVar2 & 0xffffffff00000000;
    *param_1 = uVar2;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}

