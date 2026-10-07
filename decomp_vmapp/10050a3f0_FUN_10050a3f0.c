
undefined4 FUN_10050a3f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_81;
  undefined1 local_80 [80];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  iVar2 = _FSPathMakeRef(param_1,local_80,&local_81);
  if (iVar2 != -0x2b) {
    if (iVar2 == 0) {
      if (local_81 == '\0') {
        iVar2 = FUN_10050a1b0(local_80,param_2);
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
          FUN_1008e3970("MACFSICON","FileIconsMac",3,pcVar4,iVar2);
        }
      }
      else {
        uVar3 = FUN_10050a2e0(local_80,param_2);
      }
      goto LAB_10050a504;
    }
    if (iVar2 != -0x23) {
      FUN_1008e3970("MACFSICON","FileIconsMac",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1
                   );
      uVar3 = 3;
      goto LAB_10050a504;
    }
  }
  FUN_1008e3970("MACFSICON","FileIconsMac",3,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,param_1);
  uVar3 = 0xc;
LAB_10050a504:
  if (lVar1 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

