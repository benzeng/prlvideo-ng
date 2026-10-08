
undefined4 FUN_100ab9cd0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_79;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  iVar2 = _FSPathMakeRef(param_1,local_78,&local_79);
  if (iVar2 != -0x2b) {
    if (iVar2 == 0) {
      if (local_79 == '\0') {
        iVar2 = FUN_100ab9a90(local_78);
        uVar3 = 0;
        if (iVar2 != 0) {
          if (iVar2 == 8) {
            pcVar4 = "File has no custom icon, err=%i";
            uVar3 = 8;
            iVar2 = 8;
          }
          else {
            pcVar4 = "Failed to reset custom icon in file resources, err=%i";
            uVar3 = 3;
          }
          FUN_100df99c0("MACFSICON","FileIconsMac",3,pcVar4,iVar2);
        }
      }
      else {
        uVar3 = FUN_100ab9bc0(local_78);
      }
      goto LAB_100ab9dd8;
    }
    if (iVar2 != -0x23) {
      FUN_100df99c0("MACFSICON","FileIconsMac",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1
                   );
      uVar3 = 3;
      goto LAB_100ab9dd8;
    }
  }
  FUN_100df99c0("MACFSICON","FileIconsMac",3,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1);
  uVar3 = 0xc;
LAB_100ab9dd8:
  if (lVar1 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

