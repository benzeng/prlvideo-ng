
undefined8 FUN_10040aac0(void)

{
  long in_RCX;
  bool bVar1;
  
  if (((in_RCX == 0) && (DAT_1011cc6d0 != 0)) || ((DAT_1011cc6d8 != 0 && (in_RCX != 0)))) {
    bVar1 = in_RCX == 0;
    FUN_10040ffc0(DAT_1011cc6c8,bVar1,0);
    FUN_100410020(DAT_1011cc6c8,bVar1,0);
    FUN_10040ac60(&DAT_1011cc6a0,bVar1);
    FUN_10040ffc0(DAT_1011cc6c8,bVar1,1);
    FUN_100410020(DAT_1011cc6c8,bVar1,1);
    FUN_100410080(DAT_1011cc6c8,bVar1);
  }
  return 0;
}

