
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ada20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = _DAT_100b38100;
  uStack_40 = _UNK_100b38108;
  local_58 = _DAT_100b380f0;
  uStack_50 = _UNK_100b380f8;
  local_68 = _DAT_100b380e0;
  uStack_60 = _UNK_100b380e8;
  local_78[0] = _DAT_100b380d0;
  local_78[1] = _UNK_100b380d4;
  local_78[2] = _UNK_100b380d8;
  local_78[3] = _UNK_100b380dc;
  lVar3 = 9;
  if (*(uint *)(param_1 + 0x85c) < 0x140) {
    puVar4 = &local_58;
  }
  else {
    puVar4 = &uStack_50;
    local_58 = 0x320000000063;
    lVar3 = 0xb;
  }
  *(undefined4 *)puVar4 = 0;
  local_38 = lVar1;
  uVar2 = FUN_1002ad660(param_1,local_78);
  *(undefined8 *)(param_1 + 0x848) = uVar2;
  *(undefined4 *)puVar4 = 0x4c;
  local_78[lVar3] = 0;
  lVar3 = FUN_1002ad660(param_1,local_78);
  *(long *)(param_1 + 0x850) = lVar3;
  if ((lVar3 == 0) || (*(long *)(param_1 + 0x848) == 0)) {
    FUN_1008e3970("","LocalDevices",0,
                  "Failed to create PixelFormat for additional GL context version %u",
                  *(undefined4 *)(param_1 + 0x85c));
  }
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

