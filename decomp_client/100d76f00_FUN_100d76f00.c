
int FUN_100d76f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char local_89;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar1 = _FSPathMakeRef(param_1,local_88,&local_89);
  iVar2 = 0xc;
  if ((iVar1 != -0x2b) && (iVar1 != -0x23)) {
    if (iVar1 == 0) {
      iVar2 = 0xd;
      if (local_89 == '\0') {
        iVar1 = FUN_100d76e30(local_88,param_2,param_3,param_4);
        iVar2 = 0;
        if ((iVar1 != 0) && (iVar2 = iVar1, 0 < DAT_10230ffd0)) {
          FUN_100df99c0("PLISTFILE","PropertyListFile",1,"PropertyList::ReadFromFSRef() err %i",
                        iVar1);
        }
      }
    }
    else {
      iVar2 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("PLISTFILE","PropertyListFile",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar1,
                      param_1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

