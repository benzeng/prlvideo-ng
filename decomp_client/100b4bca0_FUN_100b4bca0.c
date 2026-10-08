
undefined8 FUN_100b4bca0(undefined4 param_1,char param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar4 = 0;
  local_30 = lVar1;
  if (param_2 != '\0') {
    iVar2 = QHostAddress::protocol();
    if (iVar2 != 1) {
      uVar3 = QHostAddress::toIPv4Address();
      if (lVar1 == local_30) {
        uVar4 = FUN_100b4daa0(param_1,0x80206919,uVar3,0);
        return uVar4;
      }
      goto LAB_100b4bd43;
    }
    local_50 = QHostAddress::toIPv6Address();
    uVar4 = FUN_100b4dc30(param_1,0x81206919,local_50,local_40);
  }
  if (lVar1 == local_30) {
    return uVar4;
  }
LAB_100b4bd43:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

