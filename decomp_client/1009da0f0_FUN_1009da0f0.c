
void FUN_1009da0f0(mach_port_t *param_1,char *param_2)

{
  mach_port_t mVar1;
  mach_port_t local_1c;
  
  local_1c = 0;
  mVar1 = _task_get_special_port(*(task_t *)PTR__mach_task_self__1021e1c58,4,&local_1c);
  param_1[1] = mVar1;
  if (mVar1 == 0) {
    mVar1 = _bootstrap_look_up(local_1c,param_2,param_1);
    param_1[1] = mVar1;
  }
  return;
}

