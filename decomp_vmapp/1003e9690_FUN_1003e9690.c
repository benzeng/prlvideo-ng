
undefined8 FUN_1003e9690(long *param_1,long param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined4 uStack_46;
  undefined1 uStack_42;
  undefined1 uStack_41;
  uint uStack_40;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0;
  local_38 = lVar4;
  if ((param_2 != 0) && (uVar5 = 0, param_3 != 0)) {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    uVar5 = 0;
    uStack_41 = (undefined1)(param_3 >> 8);
    uStack_42 = 0;
    local_48 = 0x28;
    uStack_47 = 8;
    uStack_46 = 0;
    uStack_40 = param_3 & 0xff;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    pcVar1 = *(code **)(*param_1 + 0xb0);
    uVar2 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    iVar3 = (*pcVar1)(param_1,uVar2,&local_48,2,param_2,param_3 << 0xb,&local_68,0x12,0);
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (-1 < iVar3) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(uint *)((long)param_1 + 0x44) = param_3;
      uVar5 = 1;
    }
  }
  if (lVar4 == local_38) {
    return CONCAT71((int7)((ulong)lVar4 >> 8),uVar5);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

