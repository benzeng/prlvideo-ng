
undefined8
FUN_100310f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_2e20 [11752];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  cVar1 = FUN_1002fa360(*param_1);
  if (cVar1 == '\0') {
    ___bzero(local_2e20,0x2de8);
    uVar3 = FUN_1002adb30(*param_1,param_2);
    FUN_10030bd30(local_2e20,param_4);
    FUN_1002adb30(*param_1,param_3);
    FUN_10030e520(local_2e20,param_4);
    do {
      iVar2 = (*(code *)DAT_1011c4a88[0x67])(*DAT_1011c4a88);
    } while (iVar2 != 0);
    FUN_1002adb30(*param_1,uVar3);
    lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar4 == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

