
undefined8 FUN_100c75560(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_38;
  
  local_3c = 0x17;
  sVar2 = _strlen(param_2);
  local_40 = (undefined4)sVar2;
  local_38 = param_2;
  iVar1 = FUN_100c753b0(&local_40);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (param_1 != 0) {
      iVar1 = FUN_100c8b0b0(param_1,param_2,sVar2 & 0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x17;
    }
    uVar3 = 1;
  }
  return uVar3;
}

