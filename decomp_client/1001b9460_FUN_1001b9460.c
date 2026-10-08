
void FUN_1001b9460(undefined8 param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_15d;
  int local_15c [37];
  undefined1 *local_c8;
  char *local_c0;
  undefined1 local_b8 [136];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if ((param_3 & 800) == 0) goto LAB_1001b96f8;
  iVar2 = _CGGetActiveDisplayList(0x20,local_b8,local_15c);
  if (iVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"CGGetActiveDisplayList err = %d",iVar2);
    goto LAB_1001b96f8;
  }
  if (((param_3 & 0x100) == 0) || (local_15c[0] != 2)) {
LAB_1001b94f6:
    if ((param_3 & 0x220) == 0) goto LAB_1001b96f8;
    local_15d = 0;
  }
  else {
    iVar2 = _CGDisplayIsBuiltin(param_2);
    if (iVar2 != 0) goto LAB_1001b94f6;
    if (DAT_1023108e8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1001ba8c0(pvVar3);
      DAT_1022727a8 = 1;
      DAT_1023108e8 = pvVar3;
    }
    pvVar3 = DAT_1023108e8;
    iVar2 = _CGDisplayIsMain(param_2);
    *(uint *)(*(long *)((long)pvVar3 + 0x10) + 0x30) = (uint)(iVar2 != 0);
    local_15d = 1;
  }
  if (DAT_1023108e8 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001ba8c0(pvVar3);
    DAT_1022727a8 = 1;
    DAT_1023108e8 = pvVar3;
  }
  local_15c[0x21] = 0;
  local_15c[0x22] = 0;
  local_15c[0x23] = 0;
  local_15c[0x24] = 0;
  local_15c[0x1d] = 0;
  local_15c[0x1e] = 0;
  local_15c[0x1f] = 0;
  local_15c[0x20] = 0;
  local_15c[0x19] = 0;
  local_15c[0x1a] = 0;
  local_15c[0x1b] = 0;
  local_15c[0x1c] = 0;
  local_15c[0x15] = 0;
  local_15c[0x16] = 0;
  local_15c[0x17] = 0;
  local_15c[0x18] = 0;
  local_15c[0x11] = 0;
  local_15c[0x12] = 0;
  local_15c[0x13] = 0;
  local_15c[0x14] = 0;
  local_15c[0xd] = 0;
  local_15c[0xe] = 0;
  local_15c[0xf] = 0;
  local_15c[0x10] = 0;
  local_15c[9] = 0;
  local_15c[10] = 0;
  local_15c[0xb] = 0;
  local_15c[0xc] = 0;
  local_15c[5] = 0;
  local_15c[6] = 0;
  local_15c[7] = 0;
  local_15c[8] = 0;
  local_15c[1] = 0;
  local_15c[2] = 0;
  local_15c[3] = 0;
  local_15c[4] = 0;
  local_c8 = &local_15d;
  local_c0 = "bool";
  QMetaObject::invokeMethod
            (DAT_1023108e8,"togglePresentationMode",2,0,0,param_6,local_c8,"bool",0,0,0,0,0,0,0,0,0,
             0,0,0,0,0,0,0,0,0);
LAB_1001b96f8:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

