
long FUN_1003e6550(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  local_38 = 0;
  local_50 = 0;
  local_40 = 0x25;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  lVar5 = 0;
  local_30 = lVar1;
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar2)(param_1,uVar3,&local_40,2,&local_48,8,0,0,&local_50);
  if ((0 < iVar4) && (5 < local_50)) {
    lVar5 = (ulong)(local_48._4_4_ >> 0x18 | (local_48._4_4_ & 0xff0000) >> 8 |
                    (local_48._4_4_ & 0xff00) << 8 | local_48._4_4_ << 0x18) *
            (ulong)((uint)local_48 >> 0x18 | ((uint)local_48 & 0xff0000) >> 8 |
                    ((uint)local_48 & 0xff00) << 8 | (uint)local_48 << 0x18);
  }
  if (lVar1 == local_30) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

