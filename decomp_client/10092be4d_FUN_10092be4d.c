
void FUN_10092be4d(long param_1,long param_2)

{
  undefined8 local_10;
  
  local_10 = *(long **)(param_1 + 0x28);
  if (local_10 == (long *)0x0) {
    *(long *)(param_1 + 0x28) = param_2;
  }
  else {
    for (; *local_10 != 0; local_10 = (long *)*local_10) {
    }
    *local_10 = param_2;
  }
  return;
}

