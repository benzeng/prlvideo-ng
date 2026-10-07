
size_t FUN_10008cba0(ulong *param_1,void *param_2,ulong param_3,size_t param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = (uint)param_3 & 0x1fffff;
  sVar6 = param_4;
  if (0x200000 < uVar3 + param_4) {
    sVar6 = (size_t)(0x200000 - uVar3);
  }
  uVar3 = (uint)param_4;
  sVar5 = 0;
  uVar2 = param_4;
  while (uVar3 != 0) {
    uVar7 = param_3;
    if ((0xafffffff < param_3) && (uVar7 = param_3 - 0x50000000, param_3 < 0x100000000)) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = (void *)FUN_10008c320(param_1,uVar7,sVar6,0,0);
    sVar5 = 0xffffffff;
    if (pvVar4 == (void *)0x0) break;
    _memcpy(param_2,pvVar4,sVar6);
    if (*param_1 <= uVar7) {
      FUN_1008e3970("","vm",0,"[GuestMem] OutOfBound %llx > %llx");
    }
    uVar7 = (uVar2 & 0xffffffff) - sVar6;
    param_3 = param_3 + sVar6;
    param_2 = (void *)((long)param_2 + sVar6);
    sVar6 = (size_t)(uint)((int)uVar2 - (int)sVar6);
    uVar3 = (uint)uVar7;
    sVar5 = param_4;
    uVar2 = uVar7;
    if (0x1fffff < uVar3) {
      sVar6 = 0x200000;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar5;
}

