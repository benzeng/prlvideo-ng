
void FUN_1000842c0(long param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr *p_Var3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  _func_void_Node_ptr *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar2 = FUN_1006915d0();
  FUN_100084410(&local_38);
  uVar6 = 0;
  if ((*(int *)(local_38 + 0x14) != 0) && (uVar6 = 0, *(uint *)(local_38 + 0x20) != 0)) {
    uVar6 = 0;
    for (p_Var3 = *(_func_void_Node_ptr **)
                   (*(long *)(local_38 + 8) +
                   ((ulong)(*(uint *)(local_38 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_38 + 0x20)) * 8); p_Var3 != local_38;
        p_Var3 = *(_func_void_Node_ptr **)p_Var3) {
      if ((*(uint *)(p_Var3 + 8) == (*(uint *)(local_38 + 0x24) ^ param_2)) &&
         (*(uint *)(p_Var3 + 0xc) == param_2)) {
        if (p_Var3 != local_38) {
          uVar6 = *(undefined4 *)(p_Var3 + 0x10);
        }
        break;
      }
    }
  }
  uVar4 = FUN_100060bb0();
  uVar4 = FUN_1000609c0(uVar4);
  lVar5 = FUN_100691620(uVar2,uVar6,uVar4);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000843a7;
    }
    QHashData::free_helper(local_38);
  }
LAB_1000843a7:
  if (lVar5 != 0) {
    QAction::activate(lVar5,0);
  }
  return;
}

