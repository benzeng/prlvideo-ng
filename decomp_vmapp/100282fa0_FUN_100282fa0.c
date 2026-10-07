
undefined8 FUN_100282fa0(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(uint *)param_1[0x1e] <
      (uint)CONCAT11((char)*(undefined2 *)(param_1[0x1a] + 3),
                     (char)((ushort)*(undefined2 *)(param_1[0x1a] + 3) >> 8))) {
    uVar2 = *(uint *)param_1[0x1e];
  }
  else {
    uVar2 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0x1a] + 3),
                           (char)((ushort)*(undefined2 *)(param_1[0x1a] + 3) >> 8));
  }
  local_18 = lVar1;
  if (*(uint *)((long)param_1 + 0xec) < 2) {
    local_48 = 0x2020000;
    if (3 < uVar2) {
      local_48 = (ulong)CONCAT14((char)uVar2 + -5,0x2020000);
    }
    local_48 = CONCAT26(0x200,(undefined6)local_48);
    uStack_40 = 0x2020202020202020;
    uStack_30 = 0x2020202020444448;
    local_38 = 0x206c617574726956;
    local_28 = 0x31303030;
    uVar4 = 0x24;
    if (uVar2 < 0x24) {
      uVar4 = uVar2;
    }
    FUN_10008c9b0(DAT_1011c3688,*(undefined4 *)(param_1[0x1e] + 4),&local_48,uVar4);
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
  }
  if (lVar1 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

