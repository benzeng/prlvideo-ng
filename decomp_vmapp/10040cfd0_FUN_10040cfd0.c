
bool FUN_10040cfd0(double *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_2[2] == *(int *)((long)param_1 + 0x1c)) && ((double)(uint)param_2[3] == *param_1)) &&
     (!NAN((double)(uint)param_2[3]) && !NAN(*param_1))) {
    bVar1 = *param_2 != 2;
  }
  return bVar1;
}

