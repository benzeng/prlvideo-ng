
undefined4 FUN_100b09ce0(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar1 = _SCardEstablishContext(2,0,0,&local_34);
  uVar4 = local_34;
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 3) {
      return 0xffffffff;
    }
    uVar2 = _pcsc_stringify_error(iVar1);
    FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Can\'t establish context 0x%x %s",iVar1,uVar2);
    return 0xffffffff;
  }
  *param_1 = 0;
  *param_2 = 0;
  iVar1 = _SCardListReaders(local_34,0,0,param_2);
  if (iVar1 == 0) {
    if ((ulong)*param_2 < 2) {
      *param_2 = 0;
    }
    else {
      pvVar3 = _malloc((ulong)*param_2);
      *param_1 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0xffffffff;
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("","PrlPCSC",3,"PCSC: Can\'t allocate memory for reader list");
        }
        goto LAB_100b09e95;
      }
      iVar1 = _SCardListReaders(uVar4,0,pvVar3,param_2);
      if (iVar1 == 0) {
        uVar4 = 0;
        if (1 < *param_2) goto LAB_100b09e95;
      }
      else {
        if (iVar1 != -0x7fefffd2) {
          if (DAT_10230ffd0 < 3) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar2 = _pcsc_stringify_error(iVar1);
            FUN_100df99c0("","PrlPCSC",3,"PCSC: Can\'t get reader list second 0x%x %s",iVar1,uVar2);
            uVar4 = 0xffffffff;
          }
          goto LAB_100b09e95;
        }
        *param_2 = 0;
      }
      *param_2 = 0;
      _free((void *)*param_1);
      *param_1 = 0;
    }
  }
  else {
    if (iVar1 != -0x7fefffd2) {
      uVar4 = 0xffffffff;
      if (2 < DAT_10230ffd0) {
        uVar2 = _pcsc_stringify_error(iVar1);
        FUN_100df99c0("","PrlPCSC",3,"PCSC: Can\'t get reader list first 0x%x %s",iVar1,uVar2);
      }
      goto LAB_100b09e95;
    }
    *param_2 = 0;
    *param_2 = 0;
  }
  uVar4 = 0;
LAB_100b09e95:
  iVar1 = _SCardReleaseContext(local_34);
  if ((iVar1 != 0) && (2 < DAT_10230ffd0)) {
    FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Failed SCardReleaseContext\n");
  }
  return uVar4;
}

