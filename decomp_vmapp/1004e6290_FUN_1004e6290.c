
undefined8 FUN_1004e6290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined **local_48;
  void *local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar1 = *param_1;
  FUN_1004c6f30(uVar1);
  local_48 = &PTR_FUN_10111ce50;
  local_30 = 0;
  local_38 = 0;
  local_40 = (void *)0x0;
  FUN_1004e7800(param_1,&local_48);
  FUN_1004e9090(&local_48);
  local_48 = &PTR_FUN_10111ce50;
  if (local_40 != (void *)0x0) {
    _free(local_40);
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",2,"SharedFolders state saved");
  }
  FUN_1004c6ee0(uVar1);
  return 1;
}

