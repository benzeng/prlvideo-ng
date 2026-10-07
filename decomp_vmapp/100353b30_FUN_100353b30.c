
undefined8 FUN_100353b30(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1d8 [2];
  undefined1 *local_1d0;
  undefined1 *local_1c0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1003a25c0(&local_1f8,param_1 + 0x78);
  puVar3 = param_3 + 1;
  local_1f8 = *param_3;
  if ((local_1f8 & 0x2000) != 0) {
    if ((*(uint *)**(undefined8 **)(param_1 + 0x38) & 0xfe00) != 0) {
      local_1f4 = param_3[1];
      puVar3 = param_3 + 2;
    }
  }
  if ((param_2 & 0x10000000) != 0) {
    uVar1 = *puVar3;
    if (local_1d0 == (undefined1 *)0x0) {
      local_1d0 = local_1c0;
    }
    *local_1d0 = 0;
    local_1d8[0] = 0;
    FUN_10038e8e0(local_1d8,"dst");
    local_1f0 = uVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = FUN_1003a2680(&local_1f8);
  uVar5 = FUN_1003a2750(&local_1f8);
  uVar6 = FUN_1003a2850(&local_1f8);
  FUN_10038e8e0(uVar2,"%s = %svec4(0.0, 0.0, 0.0, 1.0)%s;\n",uVar4,uVar5,uVar6);
  if (local_1d8[0] != 0) {
    FUN_1003a29e0(&local_1f8,*(undefined8 *)(param_1 + 0x30));
  }
  FUN_1003a2670(&local_1f8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

