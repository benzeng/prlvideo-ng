
long FUN_100176d4b(long *param_1,undefined8 param_2)

{
  int iVar1;
  long local_30;
  
  if (param_1 == (long *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_100176c5d(param_1,param_2);
    if (*param_1 == local_30) {
      local_30 = 0;
    }
    else {
      iVar1 = (*(code *)param_1[2])(*(undefined8 *)(local_30 + 0x10),param_2);
      if (iVar1 != 0) {
        local_30 = 0;
      }
    }
  }
  return local_30;
}

