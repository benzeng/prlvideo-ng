
undefined1 FUN_1004ab040(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_ac;
  undefined4 local_a8 [34];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_ac = 0x20;
  local_20 = lVar1;
  iVar3 = _CGGetDisplaysWithPoint(0x20,local_a8,&local_ac);
  if ((iVar3 == 0) && (local_ac != 0)) {
    _CGDisplayBounds(&local_d0,local_a8[0]);
    param_3[3] = local_b8;
    param_3[2] = local_c0;
    param_3[1] = local_c8;
    *param_3 = local_d0;
    uVar4 = 1;
    cVar2 = _CGRectIsEmpty();
    if (cVar2 == '\0') goto LAB_1004ab159;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970(param_1,param_2,"CHRSRV_DESKTOP_IMAGE","ChrToolSrv",1,
                  "Unable to detect display at host point [%f;%f]");
  }
  uVar4 = 0;
LAB_1004ab159:
  if (lVar1 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

