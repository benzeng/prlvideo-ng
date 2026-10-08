
void FUN_100a30ed0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",3,"CPTOOL_UPDATE_BUFFER is received");
  }
  local_38 = param_2;
  local_34 = param_3;
  FUN_100a30890(param_1 + 0x30,0,&local_38,8);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

