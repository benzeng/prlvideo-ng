
undefined1 FUN_1004f0160(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0;
  local_28 = lVar1;
  iVar2 = _FSPathMakeRefWithOptions(param_1,1,local_78,0);
  if (iVar2 == 0) {
    if (DAT_1011bc1d8 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_1011bc1d8);
      if (iVar2 != 0) {
        DAT_1011bc1d0 = (code *)FUN_1004f5e90("R2V0RlNSZWZBc05vZGU=");
        pcVar6 = DAT_1011bc1d0;
        if ((DAT_1011bc1d0 == (code *)0x0) && (pcVar6 = (code *)0x0, 0 < DAT_1011b55f8)) {
          pcVar6 = (code *)0x0;
          FUN_1008e3970("","SharedFoldersHost",1,"failed to get %s","R2V0RlNSZWZBc05vZGU=");
        }
        DAT_1011bc1d0 = pcVar6;
        ___cxa_guard_release(&DAT_1011bc1d8);
      }
    }
    if (DAT_1011bc1e8 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_1011bc1e8);
      if (iVar2 != 0) {
        DAT_1011bc1e0 = (code *)FUN_1004f5e90("Tm9kZURpc3Bvc2VOb2RlUmVm");
        pcVar6 = DAT_1011bc1e0;
        if ((DAT_1011bc1e0 == (code *)0x0) && (pcVar6 = (code *)0x0, 0 < DAT_1011b55f8)) {
          pcVar6 = (code *)0x0;
          FUN_1008e3970("","SharedFoldersHost",1,"failed to get %s","Tm9kZURpc3Bvc2VOb2RlUmVm");
        }
        DAT_1011bc1e0 = pcVar6;
        ___cxa_guard_release(&DAT_1011bc1e8);
      }
    }
    uVar5 = 0;
    if ((DAT_1011bc1d0 != (code *)0x0) && (DAT_1011bc1e0 != (code *)0x0)) {
      lVar3 = (*DAT_1011bc1d0)(local_78);
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        lVar4 = FUN_1004efe60(lVar3,0x7074624c);
        (*DAT_1011bc1e0)(lVar3);
        if (lVar4 == 0) {
          uVar5 = 0;
        }
        else {
          _CFRelease(lVar4);
          uVar5 = 1;
        }
      }
    }
  }
  if (lVar1 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

