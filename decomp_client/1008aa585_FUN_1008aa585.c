
long FUN_1008aa585(long *param_1,undefined8 param_2)

{
  int iVar1;
  long local_30;
  long local_10;
  
  if (param_1 == (long *)0x0) {
    local_30 = 0;
  }
  else {
    for (local_10 = *(long *)(*param_1 + 8); *param_1 != local_10;
        local_10 = *(long *)(local_10 + 8)) {
      iVar1 = (*(code *)param_1[2])(*(undefined8 *)(local_10 + 0x10),param_2);
      if (iVar1 < 1) break;
    }
    local_30 = local_10;
  }
  return local_30;
}

