
undefined8 FUN_1004efe60(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if ((DAT_1011bc1a8 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1011bc1a8), iVar2 != 0)) {
    DAT_1011bc1a0 = (code *)FUN_1004f5e90("Tm9kZUNvcHlQcm9wZXJ0eUFzQ0ZTdHJpbmc=");
    pcVar4 = DAT_1011bc1a0;
    if ((DAT_1011bc1a0 == (code *)0x0) && (pcVar4 = (code *)0x0, 0 < DAT_1011b55f8)) {
      pcVar4 = (code *)0x0;
      FUN_1008e3970("","SharedFoldersHost",1,"failed to get %s",
                    "Tm9kZUNvcHlQcm9wZXJ0eUFzQ0ZTdHJpbmc=");
    }
    DAT_1011bc1a0 = pcVar4;
    ___cxa_guard_release(&DAT_1011bc1a8);
  }
  if (DAT_1011bc1a0 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    sVar1 = (*DAT_1011bc1a0)(param_1,param_2,&local_28,0);
    uVar3 = 0;
    if (sVar1 == 0) {
      uVar3 = local_28;
    }
  }
  return uVar3;
}

