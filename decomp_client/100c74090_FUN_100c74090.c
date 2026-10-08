
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c74090(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = *(long *)(param_1 + 0x78);
  uVar4 = 0xffffffff;
  local_38 = lVar1;
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)(param_4 + 0xb),*(undefined1 *)(param_4 + 0xc));
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar3 = uVar3 - 0x10;
        *(char *)(param_4 + 0xb) = (char)(uVar3 >> 8);
        *(char *)(param_4 + 0xc) = (char)uVar3;
      }
      *(ulong *)(lVar2 + 0x218) = (ulong)uVar3;
      puVar6 = (undefined4 *)(lVar2 + 0x104);
      puVar7 = (undefined4 *)(lVar2 + 0x1bc);
      for (lVar5 = 0x17; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_100bf9460((undefined4 *)(lVar2 + 0x1bc),param_4,0xd);
      uVar4 = 0x10;
    }
  }
  else if (param_2 == 0x17) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (param_3 < 0x41) {
      ___memcpy_chk(&local_78,param_4,(long)param_3,0x40);
    }
    else {
      lVar5 = lVar2 + 0x104;
      FUN_100bf96c0(lVar5);
      FUN_100bf9460(lVar5,param_4,(long)param_3);
      FUN_100bf95d0(&local_78,lVar5);
    }
    local_78._0_4_ = (uint)local_78 ^ s_6666666666666666_________________101da6e00._0_4_;
    local_78._4_4_ = local_78._4_4_ ^ s_6666666666666666_________________101da6e00._4_4_;
    uStack_70._0_4_ = (uint)uStack_70 ^ s_6666666666666666_________________101da6e00._8_4_;
    uStack_70._4_4_ = uStack_70._4_4_ ^ s_6666666666666666_________________101da6e00._12_4_;
    local_68._0_4_ = (uint)local_68 ^ s_6666666666666666_________________101da6e00._0_4_;
    local_68._4_4_ = local_68._4_4_ ^ s_6666666666666666_________________101da6e00._4_4_;
    uStack_60._0_4_ = (uint)uStack_60 ^ s_6666666666666666_________________101da6e00._8_4_;
    uStack_60._4_4_ = uStack_60._4_4_ ^ s_6666666666666666_________________101da6e00._12_4_;
    local_58._0_4_ = (uint)local_58 ^ s_6666666666666666_________________101da6e00._0_4_;
    local_58._4_4_ = local_58._4_4_ ^ s_6666666666666666_________________101da6e00._4_4_;
    uStack_50._0_4_ = (uint)uStack_50 ^ s_6666666666666666_________________101da6e00._8_4_;
    uStack_50._4_4_ = uStack_50._4_4_ ^ s_6666666666666666_________________101da6e00._12_4_;
    local_48._0_4_ = s_6666666666666666_________________101da6e00._0_4_ ^ (uint)local_48;
    local_48._4_4_ = s_6666666666666666_________________101da6e00._4_4_ ^ local_48._4_4_;
    uStack_40._0_4_ = s_6666666666666666_________________101da6e00._8_4_ ^ (uint)uStack_40;
    uStack_40._4_4_ = s_6666666666666666_________________101da6e00._12_4_ ^ uStack_40._4_4_;
    FUN_100bf96c0(lVar2 + 0x104);
    FUN_100bf9460(lVar2 + 0x104,&local_78,0x40);
    local_78 = CONCAT44(local_78._4_4_ ^ _UNK_101dae8a4,(uint)local_78 ^ _DAT_101dae8a0);
    uStack_70 = CONCAT44(uStack_70._4_4_ ^ _UNK_101dae8ac,(uint)uStack_70 ^ _UNK_101dae8a8);
    local_68 = CONCAT44(local_68._4_4_ ^ _UNK_101dae8a4,(uint)local_68 ^ _DAT_101dae8a0);
    uStack_60 = CONCAT44(uStack_60._4_4_ ^ _UNK_101dae8ac,(uint)uStack_60 ^ _UNK_101dae8a8);
    local_58 = CONCAT44(local_58._4_4_ ^ _UNK_101dae8a4,(uint)local_58 ^ _DAT_101dae8a0);
    uStack_50 = CONCAT44(uStack_50._4_4_ ^ _UNK_101dae8ac,(uint)uStack_50 ^ _UNK_101dae8a8);
    local_48 = CONCAT44(_UNK_101dae8a4 ^ local_48._4_4_,_DAT_101dae8a0 ^ (uint)local_48);
    uStack_40 = CONCAT44(_UNK_101dae8ac ^ uStack_40._4_4_,_UNK_101dae8a8 ^ (uint)uStack_40);
    FUN_100bf96c0(lVar2 + 0x160);
    FUN_100bf9460(lVar2 + 0x160,&local_78,0x40);
    uVar4 = 1;
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

