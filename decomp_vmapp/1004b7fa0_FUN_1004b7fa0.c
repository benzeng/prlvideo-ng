
void FUN_1004b7fa0(long param_1)

{
  char cVar1;
  char cVar2;
  
  _free(*(void **)(param_1 + 0x1020));
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1020) = 0;
  cVar1 = FUN_1004b9e10(param_1,param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x1018) = 0;
  cVar2 = FUN_1004b9e10(param_1,param_1 + 0x818);
  if ((cVar1 != '\0') || (cVar2 != '\0')) {
    FUN_1002af2c0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50),0);
  }
  FUN_1004bfaa0(param_1 + 0x1030);
  FUN_1004b8670(param_1,param_1 + 0x1038,0);
  FUN_1004ba180(param_1 + 0x1040);
  return;
}

