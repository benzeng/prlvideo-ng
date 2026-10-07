
undefined8 FUN_0040e6e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != *(int *)PTR_OTG_LINK_VALIDITY_MAGIC_0061bd10) {
      return 0xfffffff7;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != -0x29a) {
      if (iVar1 < -0x299) {
        if (iVar1 != -0x309) {
          return 0xfffffff7;
        }
      }
      else if (0xe < iVar1 + 0xbU) {
        return 0xfffffff7;
      }
    }
    uVar2 = 0xfffffff6;
    if (iVar1 != -0xb) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

