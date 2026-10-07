
undefined8 FUN_10050a2e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_70 [80];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  sVar2 = _FSMakeFSRefUnicode(param_1,5,L"Icon\r",0xffff,local_70);
  if (sVar2 != -0x2b) {
    if (sVar2 == 0) {
      iVar3 = FUN_10050a1b0(local_70,param_2);
      uVar5 = 0;
      if (iVar3 != 0) {
        if (iVar3 == 8) {
          pcVar4 = "Folder has no custom icon, err=%i";
          uVar5 = 8;
          iVar3 = 8;
        }
        else {
          pcVar4 = "Failed to get custom icon from folder resources, err=%i";
          uVar5 = 3;
        }
        FUN_1008e3970("MACFSICON","FileIconsMac",3,pcVar4,iVar3);
      }
      goto LAB_10050a3da;
    }
    if (sVar2 != -0x23) {
      FUN_1008e3970("MACFSICON","FileIconsMac",1,"FSPathMakeRef() err %i");
      uVar5 = 3;
      goto LAB_10050a3da;
    }
  }
  FUN_1008e3970("MACFSICON","FileIconsMac",3,"FSPathMakeRef() err %i");
  uVar5 = 8;
LAB_10050a3da:
  if (lVar1 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

