
undefined8 FUN_1003e1240(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  undefined1 local_48;
  undefined1 local_47;
  byte local_46;
  undefined4 local_45;
  undefined1 local_41;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_3a;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar4 = (ulong)*(uint *)(param_1 + 0x19), *(uint *)(param_1 + 0x19) == 0xffffffff)) {
    uVar4 = (ulong)*(byte *)(param_1[0xb] + 4);
  }
  local_28 = lVar2;
  if ((uint)uVar4 != 0) {
    sVar5 = 0x12;
    if ((uint)uVar4 < 0x13) {
      sVar5 = uVar4;
    }
    (**(code **)(*param_1 + 0x278))(param_1,sVar5);
    local_48 = 0xf0;
    local_47 = 0;
    uVar1 = (undefined4)param_1[0x15];
    local_46 = (byte)((uint)uVar1 >> 0x10) & 0xf;
    local_45 = 0;
    local_41 = 10;
    local_40 = 0;
    local_3c = (undefined1)((uint)uVar1 >> 8);
    local_3b = (undefined1)uVar1;
    local_3a = 0;
    _memcpy((void *)param_1[9],&local_48,sVar5);
    *(undefined2 *)((long)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    if (lVar2 != local_28) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e1345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  return uVar3;
}

