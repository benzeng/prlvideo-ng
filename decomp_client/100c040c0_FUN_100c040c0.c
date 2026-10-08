
undefined * FUN_100c040c0(long param_1,ulong param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  puVar3 = &DAT_1023161e0;
  if (param_3 != (undefined *)0x0) {
    puVar3 = param_3;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_48 = 0;
  local_38 = lVar4;
  if (param_2 >> 0x3c != 0) {
    uVar1 = param_2 + 0xf000000000000000;
    uVar2 = uVar1 & 0xf000000000000000;
    lVar4 = param_1;
    do {
      FUN_100c03b80(&local_e8,lVar4,0x8000000000000000);
      param_2 = param_2 + 0xf000000000000000;
      lVar4 = lVar4 + 0x1000000000000000;
    } while (0xfffffffffffffff < param_2);
    param_1 = param_1 + uVar2 + 0x1000000000000000;
    param_2 = uVar1 - uVar2;
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (param_2 != 0) {
    FUN_100c03b80(&local_e8,param_1,param_2 << 3);
  }
  FUN_100c03eb0(puVar3,&local_e8);
  if (lVar4 == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

