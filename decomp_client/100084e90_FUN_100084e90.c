
void FUN_100084e90(long param_1,uint param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  _func_void_Node_ptr *p_Var4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar3 = FUN_1006915d0();
  FUN_100084410(&local_40);
  uVar7 = 0;
  if ((*(int *)(local_40 + 0x14) != 0) && (uVar7 = 0, *(uint *)(local_40 + 0x20) != 0)) {
    uVar7 = 0;
    for (p_Var4 = *(_func_void_Node_ptr **)
                   (*(long *)(local_40 + 8) +
                   ((ulong)(*(uint *)(local_40 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_40 + 0x20)) * 8); p_Var4 != local_40;
        p_Var4 = *(_func_void_Node_ptr **)p_Var4) {
      if ((*(uint *)(p_Var4 + 8) == (*(uint *)(local_40 + 0x24) ^ param_2)) &&
         (*(uint *)(p_Var4 + 0xc) == param_2)) {
        if (p_Var4 != local_40) {
          uVar7 = *(undefined4 *)(p_Var4 + 0x10);
        }
        break;
      }
    }
  }
  uVar5 = FUN_100060bb0();
  uVar5 = FUN_1000609c0(uVar5);
  lVar6 = FUN_100691620(uVar3,uVar7,uVar5);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100084f75;
    }
    QHashData::free_helper(local_40);
  }
LAB_100084f75:
  if (lVar6 != 0) {
    uVar2 = QAction::isEnabled();
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_setEnabled__102268dc8,uVar2);
  }
  return;
}

