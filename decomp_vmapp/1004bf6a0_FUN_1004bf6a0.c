
void FUN_1004bf6a0(long *param_1,int *param_2)

{
  long local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  if (*param_1 != 0) {
    local_30 = (double)*param_2;
    local_28 = (double)param_2[1];
    local_20 = (double)(param_2[2] - *param_2);
    local_18 = (double)(param_2[3] - param_2[1]);
    local_38 = 0;
    (*DAT_1011ccc78)(*param_1,&local_30,&local_38);
    (*DAT_1011ccc48)(*param_1);
    *param_1 = local_38;
  }
  return;
}

