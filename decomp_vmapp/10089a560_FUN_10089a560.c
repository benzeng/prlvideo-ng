
undefined8 FUN_10089a560(long param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_38;
  
  local_3c = 0x18;
  sVar2 = _strlen(param_2);
  local_40 = (undefined4)sVar2;
  local_38 = param_2;
  iVar1 = FUN_10089a360(&local_40);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (param_1 != 0) {
      iVar1 = FUN_1008afb30(param_1,param_2,sVar2 & 0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x18;
    }
    uVar3 = 1;
  }
  return uVar3;
}

