
/* WARNING: Removing unreachable block (ram,0x0001009d5f4e) */
/* WARNING: Removing unreachable block (ram,0x0001009d5f3e) */

undefined1 FUN_1009d5e40(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  ushort uVar9;
  undefined1 uVar10;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  size_t local_98;
  undefined1 local_8c [4];
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_80 = *(undefined4 *)(param_1 + 0x10);
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_38 = 1;
  local_88 = param_1 + 8;
  local_30 = lVar1;
  cVar6 = FUN_1009cf2f0(&local_88,0x38);
  if (cVar6 == '\0') {
    uVar10 = 0;
  }
  else {
    *param_2 = 7;
    *(ulong *)(param_2 + 1) = CONCAT44(local_80,(undefined4)local_78);
    local_98 = 4;
    _sysctlbyname("hw.ncpu",local_8c,&local_98,(void *)0x0,0);
    uVar5 = local_70;
    if ((*(uint *)(param_1 + 0x38) | 0x1000000) == 0x1000007) {
      uVar7 = 9;
      if (*(uint *)(param_1 + 0x38) == 7) {
        uVar7 = 0;
      }
      lVar2 = cpuid_basic_info(0);
      local_50 = *(undefined8 *)(lVar2 + 4);
      puVar3 = (uint *)cpuid_Version_info(1);
      uVar4 = *puVar3;
      local_48 = CONCAT44(uVar4,*(undefined4 *)(lVar2 + 0xc));
      local_40 = CONCAT44(local_40._4_4_,puVar3[2]);
      uVar8 = uVar4 >> 8 & 0xf;
      local_70._0_4_ = CONCAT22((short)uVar8,uVar7);
      uVar9 = (ushort)((uVar4 & 0xf0) << 4) | (ushort)uVar4 & 0xf;
      local_70._6_2_ = SUB82(uVar5,6);
      local_70._0_6_ = CONCAT24(uVar9,(undefined4)local_70);
      if ((uVar8 == 6) || (uVar8 == 0xf)) {
        local_70._0_6_ = CONCAT24(uVar9 | (ushort)(uVar4 >> 4) & 0xf000,(undefined4)local_70);
        if (uVar8 == 0xf) {
          local_70._0_4_ = CONCAT22(((ushort)(uVar4 >> 0x14) & 0xff) + 0xf,uVar7);
        }
      }
    }
    else {
      local_70 = CONCAT62(local_70._2_6_,0xffff);
    }
    local_70._0_7_ = CONCAT16(local_8c[0],(undefined6)local_70);
    uStack_5c = 0x8101;
    cVar6 = FUN_1009cf1f0(param_1 + 8,&DAT_102311270,0,local_a0);
    if (cVar6 == '\0') {
      uVar10 = 0;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,local_9c);
      local_68 = CONCAT44(DAT_102311284,DAT_102311280);
      local_60 = DAT_102311288;
      uVar10 = 1;
    }
  }
  if (local_38 != 2) {
    FUN_1009cf3f0(local_88,local_80,&local_70,0x38);
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

