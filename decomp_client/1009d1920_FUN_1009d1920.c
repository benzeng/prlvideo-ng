
undefined8 FUN_1009d1920(task_name_t *param_1)

{
  kern_return_t kVar1;
  undefined8 uVar2;
  mach_msg_type_number_t local_24;
  undefined8 local_20 [3];
  
  local_24 = 5;
  kVar1 = _task_info(*param_1,0x11,(task_info_t)local_20,&local_24);
  uVar2 = 0;
  if (kVar1 == 0) {
    uVar2 = local_20[0];
  }
  return uVar2;
}

