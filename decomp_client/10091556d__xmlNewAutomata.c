
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlAutomataPtr _xmlNewAutomata(void)

{
  int iVar1;
  undefined8 uVar2;
  xmlAutomataPtr local_20;
  
  local_20 = (xmlAutomataPtr)FUN_10090c1c9(0);
  if (local_20 == (xmlAutomataPtr)0x0) {
    local_20 = (xmlAutomataPtr)0x0;
  }
  else {
    *(undefined8 *)(local_20 + 0x20) = 0;
    uVar2 = FUN_10090c4db(local_20);
    *(undefined8 *)(local_20 + 0x28) = uVar2;
    *(undefined8 *)(local_20 + 0x18) = *(undefined8 *)(local_20 + 0x28);
    **(undefined4 **)(local_20 + 0x18) = 1;
    if (*(long *)(local_20 + 0x18) == 0) {
      _xmlFreeAutomata(local_20);
      local_20 = (xmlAutomataPtr)0x0;
    }
    else {
      iVar1 = FUN_10090dd21(local_20,*(undefined8 *)(local_20 + 0x18));
      if (iVar1 < 0) {
        FUN_10090c55a(*(undefined8 *)(local_20 + 0x18));
        _xmlFreeAutomata(local_20);
        local_20 = (xmlAutomataPtr)0x0;
      }
    }
  }
  return local_20;
}

