
void FUN_100c8b470(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 local_55 [13];
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  FUN_100c5d5b0(local_48,0x18,"%lu",param_1);
  FUN_100c5d5b0(local_55,0xd,"%d",param_2);
  FUN_100c642a0(4,"address=",local_48," offset=",local_55);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

