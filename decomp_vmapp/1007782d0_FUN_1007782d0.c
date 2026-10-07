
/* WARNING: Removing unreachable block (ram,0x0001007782dc) */

uint FUN_1007782d0(void)

{
  long lVar1;
  
  lVar1 = cpuid_Version_info(1);
  return *(uint *)(lVar1 + 4) >> 0x18;
}

