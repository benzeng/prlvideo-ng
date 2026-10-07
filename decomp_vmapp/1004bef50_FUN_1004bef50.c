
void FUN_1004bef50(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_1011ccc70)();
  if ((iVar1 != 0) && (*param_1 = 0, 0 < DAT_1011b55f8)) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create empty CGSRegion object. err = %d");
    return;
  }
  return;
}

