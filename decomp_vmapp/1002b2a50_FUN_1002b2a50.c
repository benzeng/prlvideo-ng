
void FUN_1002b2a50(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 local_138;
  int iStack_134;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (param_2 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0xf0);
    *plVar1 = *plVar1 + 1;
    QMutex::lock();
    lVar2 = DAT_1011c3620;
    if (DAT_1011c3620 == 0) {
      QMutex::unlock();
      plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    else {
      DAT_1011c3628 = DAT_1011c3628 + 1;
      QMutex::unlock();
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      uStack_130 = 0;
      _local_138 = CONCAT44((param_3 & 0xff) * 2 + 1,4);
      local_128 = (ulong)param_2 << 0x20;
      FUN_1000502d0(lVar2,&local_138,0x100,1,0);
      FUN_100080ba0(&DAT_1011c3610);
    }
    lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

