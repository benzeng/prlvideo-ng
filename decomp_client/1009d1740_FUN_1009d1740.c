
void FUN_1009d1740(task_name_t *param_1,task_name_t param_2)

{
  task_name_t tVar1;
  kern_return_t kVar2;
  mach_msg_type_number_t local_3c;
  long local_38 [3];
  
  *param_1 = param_2;
  tVar1 = FUN_1009d1800(param_2);
  param_1[1] = tVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_3c = 5;
  kVar2 = _task_info(*param_1,0x11,(task_info_t)local_38,&local_3c);
  if ((kVar2 == 0) && (local_38[0] != 0)) {
    if ((*(byte *)((long)param_1 + 7) & 1) == 0) {
      FUN_1009d2310(param_1);
    }
    else {
      FUN_1009d1d90(param_1);
    }
  }
  return;
}

