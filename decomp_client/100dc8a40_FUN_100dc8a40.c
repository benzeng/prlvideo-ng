
/* WARNING: Removing unreachable block (ram,0x000100dc8a4c) */

uint FUN_100dc8a40(void)

{
  long lVar1;
  
  lVar1 = cpuid_Version_info(1);
  return *(uint *)(lVar1 + 4) >> 0x18;
}

