
int FUN_10060cc70(long param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_80038 [524296];
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = CONCAT44(0,*(uint *)(param_1 + 0x48));
  uVar9 = param_4 * uVar8 >> 0x13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0x80000);
  ___bzero(auStack_80038,0x80000,SUB168(auVar4 % auVar3,0));
  if (uVar9 == 0) {
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10060cde6:
    uVar9 = param_4 * uVar8 & 0x7ffff;
    iVar5 = 0;
    if (uVar9 != 0) {
      uVar1 = *(uint *)(param_1 + 0x48);
      uVar8 = (**(code **)(*param_2 + 0x2e0))(param_2);
      iVar5 = FUN_100603fb0(param_1,param_2,((ulong)uVar1 * param_3) / uVar8,auStack_80038,uVar9);
      if (iVar5 < 0) {
        FUN_1008e3970("","vdisk",0,"Zeroing of the tail failed");
      }
    }
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x2e0))(param_2);
    iVar5 = FUN_100603fb0(param_1,param_2,(uVar8 * param_3) / uVar6,auStack_80038,0x80000);
    uVar6 = 0;
    while (-1 < iVar5) {
      param_3 = param_3 + SUB168(auVar4 / auVar3,0);
      uVar6 = uVar6 + 1;
      if (uVar9 <= uVar6) {
        lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_10060cde6;
      }
      uVar1 = *(uint *)(param_1 + 0x48);
      uVar7 = (**(code **)(*param_2 + 0x2e0))(param_2);
      iVar5 = FUN_100603fb0(param_1,param_2,((ulong)uVar1 * param_3) / uVar7,auStack_80038,0x80000);
    }
    FUN_1008e3970("","vdisk",0,"Zeroing failed at [%llu]",uVar6);
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar10 == lVar2) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

