
int FUN_1008ba6d7(undefined8 param_1,long param_2,int param_3)

{
  int local_30;
  long local_18;
  int local_c;
  
  local_c = 0;
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    for (local_18 = *(long *)(param_2 + 0x58); local_18 != 0; local_18 = *(long *)(local_18 + 0x48))
    {
      if (((*(int *)(local_18 + 0x50) == 2) && (local_c = local_c + 1, 1 < local_c)) &&
         (param_3 != 0)) {
        FUN_1008b763a(param_1,param_2,0x208,"Element %s has too many ID attributes defined : %s\n",
                      *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(local_18 + 0x10),0);
      }
    }
    local_30 = local_c;
  }
  return local_30;
}

