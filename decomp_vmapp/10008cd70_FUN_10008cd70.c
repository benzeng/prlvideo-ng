
ulong FUN_10008cd70(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = (uint)param_2 & 0x1fffff;
  uVar7 = param_3;
  if (0x200000 < uVar3 + param_3) {
    uVar7 = (ulong)(0x200000 - uVar3);
  }
  uVar3 = (uint)param_3;
  uVar5 = 0;
  uVar2 = param_3;
  while (uVar3 != 0) {
    uVar6 = param_2;
    if ((0xafffffff < param_2) && (uVar6 = param_2 - 0x50000000, param_2 < 0x100000000)) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar4 = FUN_10008c320(param_1,uVar6,uVar7,1,0);
    uVar5 = 0xffffffff;
    if (lVar4 == 0) break;
    ___bzero(lVar4,uVar7);
    if (uVar6 < *param_1) {
      if (param_1[0xc] != 0) {
        FUN_10008c230(param_1,uVar6,uVar7 & 0xffffffff,0);
      }
    }
    else {
      FUN_1008e3970("","vm",0,"[GuestMem] OutOfBound %llx > %llx");
    }
    uVar6 = (uVar2 & 0xffffffff) - uVar7;
    param_2 = param_2 + uVar7;
    uVar7 = (ulong)(uint)((int)uVar2 - (int)uVar7);
    uVar3 = (uint)uVar6;
    uVar5 = param_3;
    uVar2 = uVar6;
    if (0x1fffff < uVar3) {
      uVar7 = 0x200000;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

