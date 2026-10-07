
long FUN_1008acc80(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long local_440;
  byte local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = FUN_100884d30(FUN_1008ad220);
  lVar7 = 0;
  local_440 = 0;
  if (lVar4 == 0) {
LAB_1008acf1a:
    if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return local_440;
  }
LAB_1008accf0:
  pbVar8 = local_438;
  iVar2 = FUN_10087d950(param_1,pbVar8,0x400);
  local_440 = lVar4;
  if (0 < iVar2) {
    if (lVar7 != 0) {
      if ((char)local_438[0] < '\0') {
        uVar3 = ___maskrune((uint)local_438[0],0x4000);
      }
      else {
        uVar3 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (ulong)local_438[0] * 4 + 0x3c) &
                0x4000;
      }
      iVar2 = 3;
      if (uVar3 != 0) goto LAB_1008acd58;
    }
    iVar2 = 1;
LAB_1008acd58:
    uVar5 = 0;
    pbVar9 = pbVar8;
LAB_1008acd63:
    bVar1 = *pbVar9;
    if (((ulong)bVar1 < 0xe) && ((0x2401UL >> ((ulong)bVar1 & 0x3f) & 1) != 0)) goto LAB_1008acec0;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar2) {
    case 2:
      iVar2 = 1;
      if (bVar1 == 0x3a) {
        *pbVar9 = 0;
        uVar5 = FUN_1008ad260(pbVar8);
        pbVar8 = pbVar9 + 1;
        iVar2 = 2;
        pbVar9 = pbVar9 + 1;
        goto LAB_1008acd63;
      }
      break;
    case 3:
      if (bVar1 == 0x28) {
        iVar2 = 6;
        pbVar9 = pbVar9 + 1;
        goto LAB_1008acd63;
      }
      iVar2 = 2;
      if (bVar1 == 0x3b) {
        *pbVar9 = 0;
        uVar6 = FUN_1008ad260(pbVar8);
        lVar7 = FUN_1008ad360(uVar5,uVar6);
        FUN_1008852e0(lVar4,lVar7);
        pbVar8 = pbVar9 + 1;
        iVar2 = 3;
        uVar5 = 0;
        pbVar9 = pbVar9 + 1;
        goto LAB_1008acd63;
      }
      break;
    case 4:
      iVar2 = 3;
      if (bVar1 != 0x3d) break;
      *pbVar9 = 0;
      uVar5 = FUN_1008ad260(pbVar8);
      pbVar8 = pbVar9 + 1;
      iVar2 = 4;
      pbVar9 = pbVar9 + 1;
      goto LAB_1008acd63;
    }
    pbVar9 = pbVar9 + 1;
    goto LAB_1008acd63;
  }
  goto LAB_1008acf1a;
LAB_1008acec0:
  if (iVar2 == 4) {
    uVar6 = FUN_1008ad260(pbVar8);
    FUN_1008ad4e0(lVar7,uVar5,uVar6);
  }
  else if (iVar2 == 2) {
    uVar6 = FUN_1008ad260(pbVar8);
    lVar7 = FUN_1008ad360(uVar5,uVar6);
    FUN_1008852e0(lVar4,lVar7);
  }
  if (pbVar9 == local_438) goto LAB_1008acf1a;
  goto LAB_1008accf0;
}

