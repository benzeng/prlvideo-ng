
undefined8 * FUN_10094f2a2(undefined8 *param_1)

{
  undefined8 *local_28;
  
  local_28 = (undefined8 *)FUN_100947ed5(*(undefined4 *)param_1);
  if (local_28 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    *local_28 = *param_1;
    local_28[1] = param_1[1];
    local_28[2] = param_1[2];
    local_28[3] = param_1[3];
    local_28[4] = param_1[4];
    local_28[5] = param_1[5];
    local_28[1] = 0;
  }
  return local_28;
}

