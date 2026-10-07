
void FUN_10042d0a0(mach_port_name_t *param_1,undefined8 param_2)

{
  ipc_space_t task;
  uint in_EAX;
  mach_port_name_t mVar1;
  undefined8 uStack_28;
  
  task = *(ipc_space_t *)PTR__mach_task_self__100ba25d0;
  uStack_28._0_4_ = in_EAX;
  mVar1 = _mach_port_allocate(task,1,param_1);
  param_1[1] = mVar1;
  if (mVar1 == 0) {
    mVar1 = _mach_port_insert_right(task,*param_1,*param_1,0x14);
    param_1[1] = mVar1;
    if (mVar1 == 0) {
      uStack_28 = (ulong)(uint)uStack_28;
      mVar1 = _task_get_special_port(task,4,(mach_port_t *)((long)&uStack_28 + 4));
      param_1[1] = mVar1;
      if (mVar1 == 0) {
        mVar1 = FUN_10042d3c0(*(undefined4 *)PTR__bootstrap_port_100ba2358,param_2,*param_1);
        param_1[1] = mVar1;
      }
    }
  }
  return;
}

