
undefined8 FUN_100509b50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 local_318;
  undefined1 local_316 [510];
  undefined1 local_118 [80];
  undefined1 local_c8 [84];
  ushort local_74;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  sVar2 = _FSGetCatalogInfo(param_1,0x800,local_c8,&local_318,0,local_118);
  if (sVar2 == 0) {
    FUN_1008ef550();
    _FSCreateResFile(local_118,local_318,local_316,0,0,0,0);
    sVar2 = _ResError();
    FUN_1008ef5a0();
    iVar5 = (int)sVar2;
    if ((iVar5 != -0x30) && (sVar2 != 0)) goto LAB_100509ba2;
    iVar5 = FUN_100509cb0(param_1,param_2);
    if (iVar5 == 0) {
      local_74 = local_74 & 0xfaff | 0x400;
      sVar2 = _FSSetCatalogInfo(param_1,0x800,local_c8);
      uVar3 = 0;
      if (sVar2 == 0) goto LAB_100509c45;
      iVar5 = (int)sVar2;
      pcVar4 = "FSSetCatalogInfo() err %i";
    }
    else {
      pcVar4 = "Failed to add custom icon to file resources, err=%i";
    }
  }
  else {
    iVar5 = (int)sVar2;
LAB_100509ba2:
    pcVar4 = "FSGetCatalogInfo() err %i";
  }
  FUN_1008e3970("MACFSICON","FileIconsMac",1,pcVar4,iVar5);
  uVar3 = 3;
LAB_100509c45:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

