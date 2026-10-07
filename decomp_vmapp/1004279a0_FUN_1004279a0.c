
undefined8 FUN_1004279a0(void)

{
  mach_port_t mVar1;
  kern_return_t kVar2;
  mach_port_t mVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long lVar5;
  undefined1 uVar6;
  uint local_2c;
  thread_act_array_t local_28;
  undefined8 uVar4;
  
  kVar2 = _task_threads(*(task_t *)PTR__mach_task_self__100ba25d0,&local_28,&local_2c);
  uVar4 = CONCAT44(extraout_var,kVar2);
  if (kVar2 == 0) {
    uVar6 = 1;
    lVar5 = 0;
    if (local_2c != 0) {
      do {
        mVar1 = local_28[lVar5];
        mVar3 = _mach_thread_self();
        uVar4 = CONCAT44(extraout_var_00,mVar3);
        if (mVar1 != mVar3) {
          kVar2 = _thread_suspend(local_28[lVar5]);
          uVar4 = CONCAT44(extraout_var_01,kVar2);
          if (kVar2 != 0) {
            uVar6 = 0;
            break;
          }
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < local_2c);
    }
  }
  else {
    uVar6 = 0;
  }
  return CONCAT71((int7)((ulong)uVar4 >> 8),uVar6);
}

