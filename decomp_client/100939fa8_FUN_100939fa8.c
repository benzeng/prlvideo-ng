
undefined4 FUN_100939fa8(int *param_1,undefined8 param_2)

{
  undefined4 local_1c;
  
  if (param_1 == (int *)0x0) {
    local_1c = 0;
  }
  else if ((*param_1 == 1) || ((((uint)param_1[0x16] >> 0x16 ^ 1) & 1) == 0)) {
    local_1c = 0;
  }
  else if (*param_1 == 5) {
    local_1c = FUN_100939772(param_2,param_1);
  }
  else if (*param_1 == 4) {
    local_1c = FUN_100939568(param_2,param_1);
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}

