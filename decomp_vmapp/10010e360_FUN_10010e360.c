
void FUN_10010e360(char param_1)

{
  kern_return_t kVar1;
  integer_t local_20 [2];
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"TaskPolicy::SetForeground %u",param_1);
  }
  local_20[0] = 7;
  if (param_1 != '\0') {
    local_20[0] = 1;
  }
  kVar1 = _task_policy_set(*(task_t *)PTR__mach_task_self__100ba25d0,1,local_20,1);
  if ((kVar1 != 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","vm",1,"task_policy_set failed");
  }
  return;
}

