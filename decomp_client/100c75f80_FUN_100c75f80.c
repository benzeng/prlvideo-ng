
undefined8 FUN_100c75f80(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  undefined8 local_20;
  
  sVar2 = _strlen(param_2);
  local_30 = (undefined4)sVar2;
  local_20 = 0;
  local_2c = 0x17;
  local_28 = param_2;
  iVar1 = FUN_100c753b0(&local_30);
  if (iVar1 == 0) {
    local_2c = 0x18;
    iVar1 = FUN_100c758e0(&local_30);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_1 != 0) && (iVar1 = FUN_100c8b060(param_1,&local_30), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

