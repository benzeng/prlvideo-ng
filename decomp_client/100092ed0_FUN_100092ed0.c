
void FUN_100092ed0(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 local_870 [24];
  uint *local_858;
  int local_848;
  uint *local_38;
  int *local_30 [2];
  
  local_30[0] = (int *)PTR_shared_null_1021e15e8;
  FUN_100094c90(local_30);
  FUN_100091be0(&local_38,param_1,local_30,0,param_3);
  FUN_100099d90(local_870,5,param_4,0);
  if (1 < *local_38) {
    FUN_100036c40(&local_38,local_38[1]);
  }
  local_858 = local_38 + (long)(int)local_38[2] * 2 + 4;
  local_848 = 4;
  if (param_3 != 4) {
    local_848 = (uint)(param_3 != 0) + (uint)(param_3 != 0) * 4;
  }
  FUN_1003342c0(*(undefined8 *)(param_1 + 0x10),local_870);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_100039a80(&local_38);
  if (*local_30[0] != -1) {
    if (*local_30[0] != 0) {
      LOCK();
      *local_30[0] = *local_30[0] + -1;
      UNLOCK();
      if (*local_30[0] != 0) {
        return;
      }
      local_870[0] = 0;
    }
    FUN_10003cda0(local_30,local_30[0]);
  }
  return;
}

