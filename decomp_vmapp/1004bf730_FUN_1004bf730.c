
void FUN_1004bf730(long *param_1,undefined8 param_2)

{
  int iVar1;
  long local_28;
  undefined8 local_20;
  
  if (*param_1 != 0) {
    local_20 = 0;
    iVar1 = (*DAT_1011ccc50)(param_2,&local_20);
    if (iVar1 == 0) {
      local_28 = 0;
      (*DAT_1011ccc80)(*param_1,local_20,&local_28);
      (*DAT_1011ccc48)(local_20);
      (*DAT_1011ccc48)(*param_1);
      *param_1 = local_28;
    }
    else if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "Failed to create rectangle region to subtract it from region. err = %d");
    }
  }
  return;
}

