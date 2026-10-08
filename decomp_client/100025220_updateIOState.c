
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarButtonItem::updateIOState(ID param_1,SEL param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  
  lVar1 = _deviceActionSet;
  if (((*(long *)(param_1 + PDBarButtonItem::_vm) != 0) &&
      (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) != 0)) &&
     (*(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0)) {
    if (((*(long *)(param_1 + _deviceActionSet) != 0) &&
        (*(int *)(*(long *)(param_1 + _deviceActionSet) + 4) != 0)) &&
       (*(long *)(_deviceActionSet + 8 + param_1) != 0)) {
      uVar3 = FUN_10018c280();
      uVar3 = FUN_100319be0(uVar3);
      auVar4 = FUN_10032b910(uVar3);
      uVar3 = 0;
      if ((*(long *)(param_1 + lVar1) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
        uVar3 = *(undefined8 *)(lVar1 + 8 + param_1);
      }
      iVar2 = FUN_1007bd980(uVar3);
      if (iVar2 == auVar4._0_4_) {
        uVar3 = 0;
        if ((*(long *)(param_1 + lVar1) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + lVar1) + 4) != 0)) {
          uVar3 = *(undefined8 *)(lVar1 + 8 + param_1);
        }
        iVar2 = FUN_1007bd990(uVar3);
        if (iVar2 == auVar4._4_4_) {
                    /* WARNING: Could not recover jumptable at 0x000100025305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_setActiveIO__102269598,auVar4._8_4_ != 0);
          return;
        }
      }
    }
  }
  return;
}

