
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fa050(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = DAT_100b396b8;
  local_38 = DAT_100b396b0;
  local_48 = _DAT_100b396a0;
  uVar5 = local_48;
  uStack_40 = _UNK_100b396a8;
  uVar6 = uStack_40;
  local_58 = _DAT_100b39690;
  uVar3 = local_58;
  uStack_50 = _UNK_100b39698;
  uVar4 = uStack_50;
  local_68 = _DAT_100b39680;
  uVar7 = local_68;
  uStack_60 = _UNK_100b39688;
  uVar2 = uStack_60;
  local_88 = 5;
  local_84 = 0x34;
  local_80 = 0x48;
  local_7c = 0x49;
  local_78 = 0;
  if (0x13f < *(uint *)(param_1 + 0x85c)) {
    local_78 = 99;
  }
  local_74 = 0x3200;
  local_70 = 0;
  local_90 = DAT_100b396b8;
  local_98 = DAT_100b396b0;
  local_68._0_4_ = (undefined4)_DAT_100b39680;
  local_68._4_4_ = (undefined4)((ulong)_DAT_100b39680 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulong)_UNK_100b39688 >> 0x20);
  local_58._0_4_ = (undefined4)_DAT_100b39690;
  local_58._4_4_ = (undefined4)((ulong)_DAT_100b39690 >> 0x20);
  uStack_50._0_4_ = (undefined4)_UNK_100b39698;
  uStack_50._4_4_ = (undefined4)((ulong)_UNK_100b39698 >> 0x20);
  local_48._0_4_ = (undefined4)_DAT_100b396a0;
  local_48._4_4_ = (undefined4)((ulong)_DAT_100b396a0 >> 0x20);
  uStack_40._0_4_ = (undefined4)_UNK_100b396a8;
  uStack_40._4_4_ = (undefined4)((ulong)_UNK_100b396a8 >> 0x20);
  local_a8 = (undefined4)local_48;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_b8 = (undefined4)local_58;
  uStack_b4 = local_58._4_4_;
  uStack_b0 = (undefined4)uStack_50;
  uStack_ac = uStack_50._4_4_;
  local_c8 = (undefined4)local_68;
  uStack_c4 = local_68._4_4_;
  uStack_bc = uStack_60._4_4_;
  uStack_c0 = 0x3200;
  local_68 = uVar7;
  uStack_60 = uVar2;
  local_58 = uVar3;
  uStack_50 = uVar4;
  local_48 = uVar5;
  uStack_40 = uVar6;
  local_28 = lVar1;
  uVar7 = FUN_1002ad660(param_1,(long)&local_68 + 4);
  *(undefined8 *)(param_1 + 0x11948) = uVar7;
  lVar8 = FUN_1002ad660(param_1,&local_68);
  *(long *)(param_1 + 0x11950) = lVar8;
  if ((lVar8 == 0) || (*(long *)(param_1 + 0x11948) == 0)) {
    FUN_1008e3970("","LocalDevices",0,"Failed to Create GL PixelFormat for GuestGL");
  }
  uVar7 = FUN_1002ad660(param_1,&uStack_c4);
  *(undefined8 *)(param_1 + 0x11958) = uVar7;
  lVar8 = FUN_1002ad660(param_1,&local_c8);
  *(long *)(param_1 + 0x11960) = lVar8;
  if ((lVar8 == 0) || (*(long *)(param_1 + 0x11958) == 0)) {
    FUN_1008e3970("","LocalDevices",0,"Failed to Create GL PixelFormat for GuestGL3");
  }
  uVar7 = FUN_1002ad660(param_1,&local_84);
  *(undefined8 *)(param_1 + 0x11938) = uVar7;
  lVar8 = FUN_1002ad660(param_1,&local_88);
  *(long *)(param_1 + 72000) = lVar8;
  if ((lVar8 == 0) || (*(long *)(param_1 + 0x11938) == 0)) {
    FUN_1008e3970("","LocalDevices",0,"Failed to Create GL PixelFormat for GuestDX");
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

