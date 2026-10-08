
void FUN_1001c6ee0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 local_b8;
  undefined2 local_b0;
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  iVar1 = _IOIteratorNext(param_2);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = _IOObjectGetClass(iVar1,&local_b8);
      if (iVar2 != 0) {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("AIRCTL","prl_client_app",1,"IOObjectGetClass() err %#x, serviceN=%u",iVar2,
                        iVar3);
        }
        local_b8 = 0x64656d616e6e753c;
        local_b0 = 0x3e;
      }
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("AIRCTL","prl_client_app",3,"Service terminated: \"%s\"",&local_b8);
      }
      _IOObjectRelease(iVar1);
      iVar3 = iVar3 + 1;
      iVar1 = _IOIteratorNext(param_2);
    } while (iVar1 != 0);
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
    if ((iVar3 != 0) && (DAT_1023120f9 == '\x01')) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("AIRCTL","prl_client_app",3,"\"%s\" service detached","AppleIRController");
      }
      (*DAT_102312100)(1,DAT_102312108);
      if (DAT_1023120fa != '\0') {
        FUN_1001c64a0(&DAT_1023120e0,DAT_1023120e8);
        DAT_1023120f0 = 0;
        DAT_1023120e0 = &DAT_1023120e8;
        DAT_1023120e8 = 0;
        (**(code **)(*DAT_102312120 + 0x18))();
        DAT_102312120 = (long *)0x0;
        DAT_1023120fa = '\0';
      }
      DAT_1023120f9 = '\0';
    }
  }
  if (lVar4 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

