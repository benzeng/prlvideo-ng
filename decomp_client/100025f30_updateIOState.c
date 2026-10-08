
/* Function Stack Size: 0x10 bytes */

void PDSharedFoldersBarButtonItem::updateIOState(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_EDX;
  
  if (((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
      (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) &&
     (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0)) {
    uVar2 = FUN_10018c280();
    uVar2 = FUN_100319be0(uVar2);
    iVar1 = FUN_10032b910(uVar2);
    if (iVar1 == 0x15) {
                    /* WARNING: Could not recover jumptable at 0x000100025f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setActiveIO__102269598,extraout_EDX != 0)
      ;
      return;
    }
  }
  return;
}

