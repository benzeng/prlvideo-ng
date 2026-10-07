
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1008985c0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_1 + 0x78);
  iVar3 = -1;
  local_38 = lVar1;
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined1 *)(lVar2 + 0x22c) = *(undefined1 *)((long)param_4 + 0xc);
        *(undefined4 *)(lVar2 + 0x228) = *(undefined4 *)(param_4 + 1);
        *(undefined8 *)(lVar2 + 0x220) = *param_4;
        *(undefined8 *)(lVar2 + 0x218) = 0xd;
        iVar3 = 0x14;
      }
      else {
        uVar6 = (uint)CONCAT11(*(undefined1 *)((long)param_4 + 0xb),
                               *(undefined1 *)((long)param_4 + 0xc));
        *(ulong *)(lVar2 + 0x218) = (ulong)uVar6;
        uVar4 = (uint)CONCAT11(*(undefined1 *)((long)param_4 + 9),
                               *(undefined1 *)((long)param_4 + 10));
        *(uint *)(lVar2 + 0x220) = uVar4;
        if (0x301 < uVar4) {
          uVar6 = uVar6 - 0x10;
          *(char *)((long)param_4 + 0xb) = (char)(uVar6 >> 8);
          *(char *)((long)param_4 + 0xc) = (char)uVar6;
        }
        puVar7 = (undefined4 *)(lVar2 + 0xf4);
        puVar8 = (undefined4 *)(lVar2 + 0x1b4);
        for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_1008987e0((undefined4 *)(lVar2 + 0x1b4),param_4,0xd);
        iVar3 = (uVar6 + 0x24 & 0xfffffff0) - uVar6;
      }
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
      lVar5 = lVar2 + 0xf4;
      FUN_100824260(lVar5);
      FUN_1008987e0(lVar5,param_4,(long)param_3);
      FUN_100824160(&local_78,lVar5);
    }
    local_78._0_4_ = (uint)local_78 ^ _DAT_100b52190;
    local_78._4_4_ = local_78._4_4_ ^ _UNK_100b52194;
    uStack_70._0_4_ = (uint)uStack_70 ^ _UNK_100b52198;
    uStack_70._4_4_ = uStack_70._4_4_ ^ _UNK_100b5219c;
    local_68._0_4_ = (uint)local_68 ^ _DAT_100b52190;
    local_68._4_4_ = local_68._4_4_ ^ _UNK_100b52194;
    uStack_60._0_4_ = (uint)uStack_60 ^ _UNK_100b52198;
    uStack_60._4_4_ = uStack_60._4_4_ ^ _UNK_100b5219c;
    local_58._0_4_ = (uint)local_58 ^ _DAT_100b52190;
    local_58._4_4_ = local_58._4_4_ ^ _UNK_100b52194;
    uStack_50._0_4_ = (uint)uStack_50 ^ _UNK_100b52198;
    uStack_50._4_4_ = uStack_50._4_4_ ^ _UNK_100b5219c;
    local_48._0_4_ = _DAT_100b52190 ^ (uint)local_48;
    local_48._4_4_ = _UNK_100b52194 ^ local_48._4_4_;
    uStack_40._0_4_ = _UNK_100b52198 ^ (uint)uStack_40;
    uStack_40._4_4_ = _UNK_100b5219c ^ uStack_40._4_4_;
    FUN_100824260(lVar2 + 0xf4);
    FUN_1008987e0(lVar2 + 0xf4,&local_78,0x40);
    local_78 = CONCAT44(local_78._4_4_ ^ _UNK_100b4dbd4,(uint)local_78 ^ _DAT_100b4dbd0);
    uStack_70 = CONCAT44(uStack_70._4_4_ ^ _UNK_100b4dbdc,(uint)uStack_70 ^ _UNK_100b4dbd8);
    local_68 = CONCAT44(local_68._4_4_ ^ _UNK_100b4dbd4,(uint)local_68 ^ _DAT_100b4dbd0);
    uStack_60 = CONCAT44(uStack_60._4_4_ ^ _UNK_100b4dbdc,(uint)uStack_60 ^ _UNK_100b4dbd8);
    local_58 = CONCAT44(local_58._4_4_ ^ _UNK_100b4dbd4,(uint)local_58 ^ _DAT_100b4dbd0);
    uStack_50 = CONCAT44(uStack_50._4_4_ ^ _UNK_100b4dbdc,(uint)uStack_50 ^ _UNK_100b4dbd8);
    local_48 = CONCAT44(_UNK_100b4dbd4 ^ local_48._4_4_,_DAT_100b4dbd0 ^ (uint)local_48);
    uStack_40 = CONCAT44(_UNK_100b4dbdc ^ uStack_40._4_4_,_UNK_100b4dbd8 ^ (uint)uStack_40);
    FUN_100824260(lVar2 + 0x154);
    FUN_1008987e0(lVar2 + 0x154,&local_78,0x40);
    _OPENSSL_cleanse(&local_78,0x40);
    iVar3 = 1;
  }
  if (lVar1 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

