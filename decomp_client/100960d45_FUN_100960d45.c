
void FUN_100960d45(undefined8 *param_1,long param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] == 0) {
      local_18 = param_1[1];
    }
    else {
      local_20 = param_1[3];
    }
    local_10 = *param_1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  if (param_2 == 0) {
    ___xmlRaiseError(local_20,local_18,local_10,0,0,0x13,2,3,0,0,0,0,0,0,0,
                     "Memory allocation failed\n");
  }
  else {
    ___xmlRaiseError(local_20,local_18,local_10,0,0,0x13,2,3,0,0,param_2,0,0,0,0,
                     "Memory allocation failed : %s\n",param_2);
  }
  return;
}

