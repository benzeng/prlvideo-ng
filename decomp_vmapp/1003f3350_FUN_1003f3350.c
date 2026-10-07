
undefined8 FUN_1003f3350(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  size_t sVar6;
  undefined1 local_68 [24];
  int local_50;
  undefined1 local_4a [34];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar3 = (ulong)*(uint *)(param_1 + 0x19), *(uint *)(param_1 + 0x19) == 0xffffffff)) {
    uVar3 = (ulong)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                            (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  sVar6 = uVar3 & 0xffff;
  uVar5 = (uint)sVar6;
  local_28 = lVar1;
  if (uVar5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0001003f33bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
    return uVar4;
  }
  if (uVar5 == 2) {
    *(undefined1 *)param_1[9] = 0;
    *(undefined1 *)(param_1[9] + 1) = 0x20;
                    /* WARNING: Could not recover jumptable at 0x0001003f33f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x278))(param_1,2);
    return uVar4;
  }
  if (0x22 < uVar5) {
    sVar6 = 0x22;
  }
  iVar2 = (**(code **)(*(long *)param_1[1] + 0x70))
                    ((long *)param_1[1],local_4a,sVar6,&local_50,local_68);
  if (iVar2 == 0) {
    if (local_50 != 4) {
      if (local_50 == 2) {
        sVar6 = 0x12;
        if ((ulong)*(uint *)(param_1 + 0xd) < 0x12) {
          sVar6 = (ulong)*(uint *)(param_1 + 0xd);
        }
        _memcpy((void *)param_1[0xc],local_68,sVar6);
        uVar4 = 0xffffffff;
        goto LAB_1003f34db;
      }
      if (local_50 == 0) {
        _memcpy((void *)param_1[9],local_4a,sVar6);
        uVar4 = (**(code **)(*param_1 + 0x278))(param_1,sVar6,(int)param_1[0x19]);
        goto LAB_1003f34db;
      }
      goto LAB_1003f34a1;
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 2;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
  }
  else {
LAB_1003f34a1:
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 2;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x268))(param_1,0x23a00,param_1[0xc]);
LAB_1003f34db:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

