
void FUN_10027f9d0(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  void *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  bVar1 = *(byte *)(param_2 + 3);
  uVar6 = 0x12;
  if (bVar1 < 0x13) {
    uVar6 = (uint)bVar1;
  }
  local_38 = lVar2;
  if ((bVar1 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_10008d2d0(&local_78,*(int *)(param_2 + 0x24),uVar6);
    uVar5 = uStack_50;
    uVar3 = local_58;
    local_58 = CONCAT71(local_58._1_7_,0xf0);
    uVar4 = local_58;
    local_58._3_5_ = SUB85(uVar3,3);
    local_58._0_3_ = CONCAT12(4,(short)uVar4);
    local_58 = CONCAT17((char)uVar6 + -8,(undefined7)local_58);
    uStack_50._6_2_ = SUB82(uVar5,6);
    uStack_50._0_6_ = CONCAT15(1,CONCAT14(8,(undefined4)uStack_50));
    if ((uVar6 != 0) && (local_78 != (void *)0x0)) {
      _memcpy(local_78,&local_58,(ulong)uVar6);
    }
    FUN_10008d3f0(&local_78);
  }
  *(undefined2 *)(param_2 + 0xe) = 0x211;
  *param_4 = *param_3;
  param_4[1] = 0x4000200;
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

