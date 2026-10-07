
void FUN_1004bf330(undefined8 *param_1,int *param_2)

{
  int iVar1;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  local_38 = (double)*param_2;
  local_30 = (double)param_2[1];
  local_28 = (double)((param_2[2] + 1) - *param_2);
  local_20 = (double)((param_2[3] + 1) - param_2[1]);
  iVar1 = (*DAT_1011ccc50)(&local_38,param_1);
  if ((iVar1 != 0) && (*param_1 = 0, 0 < DAT_1011b55f8)) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create rectangle CGSRegion object. err = %d"
                  ,iVar1);
  }
  return;
}

