
undefined8 FUN_100ab9350(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  short sVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_118 [80];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_80 = 0x69636f6e00000000;
  local_78 = 0x40004d414353;
  local_30 = lVar1;
  FUN_100d77820();
  _FSCreateResFile(param_1,5,L"Icon\r",0x800,&local_c8,local_118,0);
  sVar2 = _ResError();
  FUN_100d77870();
  iVar5 = (int)sVar2;
  if (iVar5 == 0) {
LAB_100ab9458:
    iVar5 = FUN_100ab91b0(local_118,param_2);
    if (iVar5 == 0) {
      uVar4 = 0;
      sVar2 = _FSGetCatalogInfo(param_1,0x800,&local_c8,0,0,0);
      if (sVar2 == 0) {
        local_78 = local_78 & 0xfffffaffffffffff | 0x40000000000;
        sVar2 = _FSSetCatalogInfo(param_1,0x800,&local_c8);
        if (sVar2 == 0) goto LAB_100ab953e;
        iVar5 = (int)sVar2;
        pcVar3 = "FSSetCatalogInfo() err %i";
      }
      else {
        iVar5 = (int)sVar2;
        pcVar3 = "FSGetCatalogInfo() err %i";
      }
    }
    else {
      pcVar3 = "Failed to add custom icon to file resources, err=%i";
    }
  }
  else if (iVar5 == -0x30) {
    sVar2 = _FSMakeFSRefUnicode(param_1,5,L"Icon\r",0xffff,local_118);
    if (sVar2 == 0) goto LAB_100ab9458;
    iVar5 = (int)sVar2;
    pcVar3 = "FSMakeFSRefUnicode() err %i";
  }
  else {
    pcVar3 = "FSCreateResFile() err %i";
  }
  FUN_100df99c0("MACFSICON","FileIconsMac",1,pcVar3,iVar5);
  uVar4 = 3;
LAB_100ab953e:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

