
void FUN_1008c4d1f(long *param_1)

{
  int local_c;
  
  if ((int)param_1[0x25] != 0) {
    local_c = (int)param_1[0x25];
    while (local_c = local_c + -1, -1 < local_c) {
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
        (**(code **)(*param_1 + 0x78))(param_1[1],param_1[0x24]);
      }
      FUN_1008c419c(param_1);
    }
  }
  return;
}

