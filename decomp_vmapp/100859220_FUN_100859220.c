
undefined8 FUN_100859220(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_48 [6];
  long local_30;
  ulong uVar9;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar9 = (ulong)*(uint *)(param_3 + 1);
  local_30 = lVar1;
  if (*(uint *)(param_3 + 1) == 0) {
LAB_1008592f2:
    FUN_100887ce0(3,0x83,0x6a,"bn_gf2m.c",0x1de);
    uVar6 = 0;
LAB_100859315:
    if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return uVar6;
  }
  iVar7 = 0;
  do {
    iVar8 = (int)uVar9;
    uVar9 = (ulong)iVar8;
    lVar4 = (long)(iVar8 + -1) << 3;
    do {
      if ((long)uVar9 < 1) {
        if (iVar7 < 6) {
          local_48[iVar7] = -1;
          iVar7 = iVar7 + 1;
        }
        if ((iVar7 == 0) || (6 < iVar7)) goto LAB_1008592f2;
        uVar6 = FUN_100858e10(param_1,param_2,local_48);
        goto LAB_100859315;
      }
      uVar2 = *(ulong *)(*param_3 + lVar4);
      uVar9 = uVar9 - 1;
      lVar4 = lVar4 + -8;
    } while (uVar2 == 0);
    uVar5 = 0x8000000000000000;
    iVar8 = 0x3f;
    do {
      if ((uVar2 & uVar5) != 0) {
        if (iVar7 < 6) {
          local_48[iVar7] = (int)uVar9 * 0x40 + iVar8;
        }
        iVar7 = iVar7 + 1;
      }
      uVar5 = uVar5 >> 1;
      bVar3 = 0 < iVar8;
      iVar8 = iVar8 + -1;
    } while (bVar3);
  } while( true );
}

