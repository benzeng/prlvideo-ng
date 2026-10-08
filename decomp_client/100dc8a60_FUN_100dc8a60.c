
/* WARNING: Removing unreachable block (ram,0x000100dc8a87) */
/* WARNING: Removing unreachable block (ram,0x000100dc8adb) */

ulong FUN_100dc8a60(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    lVar1 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar1 + 4);
    lVar1 = rdtsc();
    lVar4 = FUN_100ddba70();
    do {
      lVar5 = FUN_100ddba70();
    } while (lVar5 == lVar4);
    do {
      uVar6 = FUN_100ddba70();
      lVar4 = rdtsc();
    } while (uVar6 < lVar5 + 20000U);
    lVar2 = cpuid_Version_info(1);
  } while ((0xffffff < (*(uint *)(lVar2 + 4) ^ uVar3)) && (uVar7 = uVar7 + 1, uVar7 < 0x32));
  if (uVar7 == 0x32) {
    uVar6 = 0;
    if (0 < DAT_10230ffd0) {
      uVar6 = 0;
      FUN_100df99c0("","HostUtils",1,"Can\'t calibrate TSC for %u iterations",0x32);
    }
  }
  else {
    uVar6 = (ulong)((lVar4 - lVar1) * 1000000) / (uVar6 - lVar5);
  }
  return uVar6;
}

