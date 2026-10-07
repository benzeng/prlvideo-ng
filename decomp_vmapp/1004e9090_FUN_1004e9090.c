
/* WARNING: Removing unreachable block (ram,0x0001004e9429) */

void FUN_1004e9090(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30 [2];
  
  iVar1 = FUN_1000ed430(3);
  if (iVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_30[0] = QString::fromAscii_helper("SaReSubSystemStartWrite() failed",0x20);
    FUN_1004eb830(uVar2,local_30);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  local_34 = 0x12;
  iVar1 = FUN_1000ed5c0(&local_34,4);
  if (iVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_40 = QString::fromAscii_helper("CustomSubSystemContinueWrite() #0 failed",0x28);
    FUN_1004eb830(uVar2,&local_40);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  local_44 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = FUN_1000ed5c0(&local_44,4);
  if (iVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_50 = QString::fromAscii_helper("CustomSubSystemContinueWrite() #1 failed",0x28);
    FUN_1004eb830(uVar2,&local_50);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  iVar1 = FUN_1000ed5c0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    iVar1 = FUN_1000ed7d0();
    if (iVar1 != 0) {
      return;
    }
    uVar2 = ___cxa_allocate_exception(0x10);
    local_60 = QString::fromAscii_helper("SaReSubSystemStopWrite() failed",0x1f);
    FUN_1004eb830(uVar2,&local_60);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  uVar2 = ___cxa_allocate_exception(0x10);
  local_58 = QString::fromAscii_helper("CustomSubSystemContinueWrite() #2 failed",0x28);
  FUN_1004eb830(uVar2,&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

