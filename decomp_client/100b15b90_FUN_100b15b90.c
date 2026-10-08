
int FUN_100b15b90(long param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = *(undefined8 *)(param_1 + 0x84);
  uStack_3c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x74) >> 0x20);
  local_68 = *(undefined8 *)(param_1 + 0x4c);
  local_60 = *(undefined8 *)(param_1 + 0x54);
  local_50._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20);
  uStack_44 = (ulong)local_50._4_4_ * (ulong)param_2;
  local_58._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20);
  local_50 = CONCAT44(local_50._4_4_,param_2 / local_58._4_4_);
  local_38 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20),param_3);
  local_58 = *(undefined8 *)(param_1 + 0x5c);
  local_48 = param_2;
  local_28 = lVar4;
  iVar6 = FUN_100b25e80(*(undefined8 *)(param_1 + 0x38),&local_68,0x40);
  if (iVar6 < 0) {
    FUN_100df99c0("","dimg",0,"Write header failed %x",iVar6);
    FUN_100b1b9d0();
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x84) = local_30;
    *(undefined8 *)(param_1 + 0x7c) = local_38;
    *(ulong *)(param_1 + 0x74) = CONCAT44(uStack_3c,uStack_44._4_4_);
    *(ulong *)(param_1 + 0x6c) = CONCAT44((undefined4)uStack_44,local_48);
    *(undefined8 *)(param_1 + 100) = local_50;
    *(undefined8 *)(param_1 + 0x5c) = local_58;
    *(undefined8 *)(param_1 + 0x54) = local_60;
    *puVar1 = local_68;
    *(undefined8 *)(param_1 + 0x54) = local_60;
    *puVar1 = local_68;
    *(undefined8 *)(param_1 + 0x18) = 0x40;
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    iVar6 = _memcmp(puVar1,"WithouFreSpacExt",0x10);
    uVar7 = 1;
    if (iVar6 == 0) {
      uVar7 = uVar3;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    *(ulong *)(param_1 + 0x40) = (ulong)*(uint *)(param_1 + 0x6c) * 4 + 0x40;
    uVar5 = *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                      (long)*(long **)(param_1 + 0x38));
    if ((ulong)*(uint *)(param_1 + 0x7c) == 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x6c) * 4 + 0x3f + uVar5;
      lVar8 = uVar2 - uVar2 % uVar5;
    }
    else {
      lVar8 = *(uint *)(param_1 + 0x7c) * uVar5;
    }
    *(long *)(param_1 + 0x20) = lVar8;
    iVar6 = 0;
  }
  if (lVar4 == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

