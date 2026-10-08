
undefined8 FUN_100b09c00(void)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint local_2c;
  void *local_28;
  
  local_28 = (void *)0x0;
  local_2c = 0;
  iVar3 = FUN_100b09ce0(&local_28,&local_2c);
  pvVar2 = local_28;
  uVar5 = local_2c;
  pvVar1 = DAT_102313bc0;
  uVar4 = 0xffffffff;
  if (iVar3 == 0) {
    if ((DAT_102313bb8 == local_2c) &&
       (iVar3 = _memcmp(DAT_102313bc0,local_28,(ulong)DAT_102313bb8), iVar3 == 0)) {
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      _free(pvVar2);
      return 0;
    }
    if (pvVar1 != (void *)0x0) {
      _free(pvVar1);
      uVar5 = local_2c;
    }
    DAT_102313bc0 = local_28;
    uVar4 = 1;
    DAT_102313bb8 = uVar5;
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlPCSC",3,"PCSC: Reader list is modified. New size is %d",uVar5);
    }
  }
  return uVar4;
}

