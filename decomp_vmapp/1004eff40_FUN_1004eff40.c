
ushort * FUN_1004eff40(ushort *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined2 local_838;
  undefined1 local_836 [2054];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (DAT_1011bc1b8 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1011bc1b8);
    if (iVar3 != 0) {
      DAT_1011bc1b0 = (code *)FUN_1004f5e90("R2V0RlNSZWZBc05vZGU=");
      pcVar6 = DAT_1011bc1b0;
      if ((DAT_1011bc1b0 == (code *)0x0) && (pcVar6 = (code *)0x0, 0 < DAT_1011b55f8)) {
        pcVar6 = (code *)0x0;
        FUN_1008e3970("","SharedFoldersHost",1,"failed to get %s","R2V0RlNSZWZBc05vZGU=");
      }
      DAT_1011bc1b0 = pcVar6;
      ___cxa_guard_release(&DAT_1011bc1b8);
    }
  }
  if (DAT_1011bc1c8 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_1011bc1c8);
    if (iVar3 != 0) {
      DAT_1011bc1c0 = (code *)FUN_1004f5e90("Tm9kZURpc3Bvc2VOb2RlUmVm");
      pcVar6 = DAT_1011bc1c0;
      if ((DAT_1011bc1c0 == (code *)0x0) && (pcVar6 = (code *)0x0, 0 < DAT_1011b55f8)) {
        pcVar6 = (code *)0x0;
        FUN_1008e3970("","SharedFoldersHost",1,"failed to get %s","Tm9kZURpc3Bvc2VOb2RlUmVm");
      }
      DAT_1011bc1c0 = pcVar6;
      ___cxa_guard_release(&DAT_1011bc1c8);
    }
  }
  if ((DAT_1011bc1b0 != (code *)0x0) && (DAT_1011bc1c0 != (code *)0x0)) {
    lVar4 = (*DAT_1011bc1b0)(param_2);
    if (lVar4 != 0) {
      lVar5 = FUN_1004efe60(lVar4,0x7074624c);
      (*DAT_1011bc1c0)(lVar4);
      if (lVar5 != 0) {
        ___bzero(&local_838,0x800);
        local_838 = 0x2f;
        cVar2 = _CFStringGetCString(lVar5,local_836,0x7fe,0x100);
        _CFRelease(lVar5);
        if (cVar2 != '\0') {
          QString::fromUtf16(param_1,(int)&local_838);
          goto LAB_1004f0113;
        }
      }
    }
  }
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
LAB_1004f0113:
  if (lVar1 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

