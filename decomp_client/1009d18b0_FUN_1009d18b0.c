
void FUN_1009d18b0(task_name_t *param_1)

{
  kern_return_t kVar1;
  mach_msg_type_number_t local_2c;
  long local_28 [3];
  
  local_2c = 5;
  kVar1 = _task_info(*param_1,0x11,(task_info_t)local_28,&local_2c);
  if ((kVar1 == 0) && (local_28[0] != 0)) {
    if ((*(byte *)((long)param_1 + 7) & 1) == 0) {
      FUN_1009d2310(param_1);
    }
    else {
      FUN_1009d1d90(param_1);
    }
  }
  return;
}

