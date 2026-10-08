
int FUN_100b50530(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  char local_48 [8];
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  lVar3 = FUN_100b526f0(param_1,param_2,*(undefined8 *)PTR__kSCPropNetInterfaceDeviceName_1021e1a78)
  ;
  iVar5 = -1;
  if (lVar3 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    uStack_40 = 0;
    pcVar4 = (char *)_CFStringGetCStringPtr(lVar3,0);
    if (pcVar4 == (char *)0x0) {
      _CFStringGetCString(lVar3,local_48,0x10,0);
    }
    else {
      _strncpy(local_48,pcVar4,0x10);
    }
    uStack_40 = uStack_40 & 0xffffffffffffff;
    iVar2 = _ioctl(DAT_1022cf3fc,0xc02069c1,local_48);
    if ((-1 < iVar2) && (0x5056532f < (int)local_38)) {
      iVar5 = -1;
      if ((int)local_38 + -0x50565330 < 9) {
        iVar5 = (int)local_38 + -0x50565330;
      }
    }
  }
  if (lVar1 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

