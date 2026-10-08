
undefined1 FUN_1000b12d0(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  iVar2 = _LSFindApplicationForInfo(0x646f636b,&cf_com_apple_dock,0,local_78,0);
  if (iVar2 == 0) {
    iVar2 = _LSOpenFSRef(local_78,0);
    uVar4 = 1;
    if (iVar2 == 0) goto LAB_1000b137f;
    if (DAT_10230ffd0 < 1) {
      uVar4 = 0;
      goto LAB_1000b137f;
    }
    pcVar3 = "Failed to open Dock application, LSOpenFSRef() err %i";
  }
  else {
    if (DAT_10230ffd0 < 1) {
      uVar4 = 0;
      goto LAB_1000b137f;
    }
    pcVar3 = "Failed to locate Dock application, LSFindApplicationForInfo() err %i";
  }
  uVar4 = 0;
  FUN_100df99c0("SGAC","prl_client_app",1,pcVar3,iVar2);
LAB_1000b137f:
  if (lVar1 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

