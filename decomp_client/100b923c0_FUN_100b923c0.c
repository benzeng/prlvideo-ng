
uint FUN_100b923c0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  undefined8 **local_28;
  undefined8 **local_20;
  
  local_28 = &local_28;
  uVar3 = 0;
  if (param_1 != (char *)0x0) {
    local_20 = local_28;
    sVar2 = _strlen(param_1);
    uVar3 = 0;
    if ((int)sVar2 != 0) {
      iVar1 = FUN_100b9ad70(&local_28,param_1,sVar2 & 0xffffffff);
      if (iVar1 == 0) {
        uVar3 = *(uint *)((long)local_28 + 0x1d4) >> 1 & 1;
        FUN_100b98100(&local_28);
      }
    }
  }
  return uVar3;
}

