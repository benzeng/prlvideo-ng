
void FUN_1004bf150(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_30 = (double)param_2;
  local_28 = (double)param_3;
  local_20 = (double)param_4;
  local_18 = (double)param_5;
  iVar1 = (*DAT_1011ccc50)(&local_30,param_1);
  if ((iVar1 != 0) && (*param_1 = 0, 0 < DAT_1011b55f8)) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create rectangle CGSRegion object. err = %d"
                 );
  }
  return;
}

