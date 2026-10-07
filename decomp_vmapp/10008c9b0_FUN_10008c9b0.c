
ulong FUN_10008c9b0(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = (uint)param_2 & 0x1fffff;
  uVar6 = param_4;
  if (0x200000 < uVar3 + param_4) {
    uVar6 = (ulong)(0x200000 - uVar3);
  }
  uVar3 = (uint)param_4;
  uVar5 = 0;
  uVar2 = param_4;
  while (uVar3 != 0) {
    uVar7 = param_2;
    if ((0xafffffff < param_2) && (uVar7 = param_2 - 0x50000000, param_2 < 0x100000000)) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = (void *)FUN_10008c320(param_1,uVar7,uVar6,1,0);
    uVar5 = 0xffffffff;
    if (pvVar4 == (void *)0x0) break;
    _memcpy(pvVar4,param_3,uVar6);
    if (uVar7 < *param_1) {
      if (param_1[0xc] != 0) {
        FUN_10008c230(param_1,uVar7,uVar6 & 0xffffffff,0);
      }
    }
    else {
      FUN_1008e3970("","vm",0,"[GuestMem] OutOfBound %llx > %llx");
    }
    uVar7 = (uVar2 & 0xffffffff) - uVar6;
    param_2 = param_2 + uVar6;
    param_3 = (void *)((long)param_3 + uVar6);
    uVar6 = (ulong)(uint)((int)uVar2 - (int)uVar6);
    uVar3 = (uint)uVar7;
    uVar5 = param_4;
    uVar2 = uVar7;
    if (0x1fffff < uVar3) {
      uVar6 = 0x200000;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

