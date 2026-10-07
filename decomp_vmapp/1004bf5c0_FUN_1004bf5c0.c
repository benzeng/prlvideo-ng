
void FUN_1004bf5c0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if (*param_2 != 0) {
    iVar1 = (*DAT_1011ccc90)(*param_2,param_1);
    if ((iVar1 != 0) && (*param_1 = 0, 0 < DAT_1011b55f8)) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "Failed to create CGSRegion object from another CGSRegion. err = %d");
      return;
    }
  }
  return;
}

