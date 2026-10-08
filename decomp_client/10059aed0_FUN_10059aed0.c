
undefined8 FUN_10059aed0(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  uint *puVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  
  if (DAT_1022743d8 == 0) {
    DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
  }
  uVar5 = DAT_1022743d8;
  uVar2 = QVariant::userType();
  if (uVar5 == uVar2) {
    puVar4 = (uint *)QVariant::constData();
    uVar5 = *puVar4;
  }
  else {
    cVar1 = QVariant::convert(param_2,(void *)(ulong)uVar5);
    local_28 = (uint)in_RAX;
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = local_28;
    }
  }
  if (DAT_1022743d8 == 0) {
    DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
  }
  uVar2 = DAT_1022743d8;
  uVar3 = QVariant::userType();
  if (uVar2 == uVar3) {
    puVar4 = (uint *)QVariant::constData();
    uVar2 = *puVar4;
  }
  else {
    cVar1 = QVariant::convert(param_3,(void *)(ulong)uVar2);
    local_24 = (uint)((ulong)in_RAX >> 0x20);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = local_24;
    }
  }
  if ((uVar5 < 2) && (uVar5 != uVar2)) {
    MacUtils::showAccessibilityUsagePromptIfNeeded(true);
  }
  return 0;
}

