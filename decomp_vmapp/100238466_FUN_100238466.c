
int FUN_100238466(int param_1,int param_2)

{
  int local_14;
  
  if ((param_1 == -1) || (param_2 == -1)) {
    local_14 = -1;
  }
  else {
    local_14 = param_2;
    if ((param_1 != 0) && (local_14 = param_1, param_2 != 0)) {
      if ((param_1 == 2) && (param_2 == 2)) {
        local_14 = 2;
      }
      else {
        local_14 = -1;
      }
    }
  }
  return local_14;
}

