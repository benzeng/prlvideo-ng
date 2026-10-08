
void FUN_1007d5730(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_30 [8];
  undefined *local_28;
  
  local_28 = PTR_shared_null_1021e15e8;
  ClientStatistics::getKasperskyAntivirusInWindowsGuest();
  FUN_1000e5fc0(&local_28,local_30);
  FUN_100039a80(local_30);
  cVar1 = QtPrivate::QStringList_contains(&local_28,param_2,1);
  if (cVar1 == '\0') {
    FUN_1000341d0(&local_28,param_2);
  }
  FUN_1007d5210(param_1,&local_28);
  FUN_100039a80(&local_28);
  return;
}

