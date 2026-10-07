
undefined8 FUN_1003e4f20(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (param_1[0x1a] == 0x800) {
    uVar2 = FUN_1003e1360(param_1);
    return uVar2;
  }
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar3 = (ulong)*(uint *)(param_1 + 0x19), *(uint *)(param_1 + 0x19) == 0xffffffff)) {
    uVar3 = (ulong)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 3),
                            (char)((ushort)*(undefined2 *)(param_1[0xb] + 3) >> 8));
  }
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_58 = 0;
  uStack_50 = 0;
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  if ((*(byte *)(param_1[0xb] + 1) & 1) == 0) {
    local_58 = 0x1f21008000;
    uStack_50 = 0x2020202020202020;
    local_48._0_8_ = s_Virtual_DVD_ROM_100a319f0._0_8_;
    local_48._8_8_ = s_Virtual_DVD_ROM_100a319f0._8_8_;
    builtin_strncpy(local_48 + 0x10,"R103",4);
    uVar6 = uVar3 & 0xffff;
    uVar5 = (uint)uVar3 & 0xffff;
    sVar4 = 0x24;
    if (uVar5 < 0x25) {
      sVar4 = uVar6;
    }
    _memcpy((void *)param_1[9],&local_58,sVar4);
    uVar3 = 0x60;
    if (uVar5 < 0x60) {
      uVar3 = uVar6;
    }
    (**(code **)(*param_1 + 0x278))(param_1,uVar3,uVar6);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  }
  if (lVar1 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

