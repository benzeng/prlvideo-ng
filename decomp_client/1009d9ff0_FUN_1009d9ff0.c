
void FUN_1009d9ff0(mach_port_name_t *param_1)

{
  if (param_1[1] != 0) {
    return;
  }
  _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__1021e1c58,*param_1);
  return;
}

