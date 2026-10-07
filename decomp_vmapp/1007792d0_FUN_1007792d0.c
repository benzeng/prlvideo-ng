
/* WARNING: Removing unreachable block (ram,0x0001007792dc) */

ulong FUN_1007792d0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)cpuid(0x80000008);
  uVar2 = *puVar1 & 0xff;
  if ((param_1 != 0) && (param_1 < uVar2)) {
    uVar2 = param_1;
  }
  return (1L << ((byte)uVar2 & 0x3f)) + 0xfffffb0000000U >> 0x14;
}

