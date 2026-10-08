
void FUN_1009d9f80(mach_port_name_t *param_1)

{
  ipc_space_t task;
  mach_port_name_t mVar1;
  
  task = *(ipc_space_t *)PTR__mach_task_self__1021e1c58;
  mVar1 = _mach_port_allocate(task,1,param_1);
  param_1[1] = mVar1;
  if (mVar1 == 0) {
    mVar1 = _mach_port_insert_right(task,*param_1,*param_1,0x14);
    param_1[1] = mVar1;
  }
  return;
}

