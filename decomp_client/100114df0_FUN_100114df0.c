
undefined8 * FUN_100114df0(undefined8 *param_1)

{
  undefined1 local_40 [8];
  uint *local_38 [2];
  
  FUN_100114f00();
  local_38[0] = (uint *)*param_1;
  if (1 < *local_38[0]) {
    FUN_100036c40(param_1,local_38[0][1]);
    local_38[0] = (uint *)*param_1;
  }
  local_38[0] = local_38[0] + (long)(int)local_38[0][3] * 2 + 2;
  FUN_1000557c0(local_40,param_1,local_38);
  return param_1;
}

