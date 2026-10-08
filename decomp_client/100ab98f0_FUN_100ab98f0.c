
undefined4 FUN_100ab98f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_81;
  undefined1 local_80 [80];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  iVar2 = _FSPathMakeRef(param_1,local_80,&local_81);
  if (iVar2 != -0x2b) {
    if (iVar2 == 0) {
      if (local_81 == '\0') {
        iVar2 = FUN_100ab96b0(local_80,param_2);
        uVar3 = 0;
        if (iVar2 != 0) {
          if (iVar2 == 8) {
            pcVar4 = "File has no custom icon, err=%i";
            uVar3 = 8;
            iVar2 = 8;
          }
          else {
            pcVar4 = "Failed to get custom icon from file resources, err=%i";
            uVar3 = 3;
          }
          FUN_100df99c0("MACFSICON","FileIconsMac",3,pcVar4,iVar2);
        }
      }
      else {
        uVar3 = FUN_100ab97e0(local_80,param_2);
      }
      goto LAB_100ab9a04;
    }
    if (iVar2 != -0x23) {
      FUN_100df99c0("MACFSICON","FileIconsMac",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1
                   );
      uVar3 = 3;
      goto LAB_100ab9a04;
    }
  }
  FUN_100df99c0("MACFSICON","FileIconsMac",3,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1);
  uVar3 = 0xc;
LAB_100ab9a04:
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

