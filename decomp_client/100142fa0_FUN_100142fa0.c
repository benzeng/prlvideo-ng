
void FUN_100142fa0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long local_30 [2];
  
  local_30[1] = 0;
  plVar1 = *(long **)(param_1 + 0x38);
  if (*(int *)((long)plVar1 + 0x14) == 0) {
    local_30[0] = 0;
    *(uint *)(param_1 + 0x40) = param_2;
    goto LAB_1001430d1;
  }
  if (*(uint *)(plVar1 + 4) == 0) {
LAB_100143007:
    lVar5 = 0;
    local_30[0] = 0;
LAB_10014304b:
    plVar2 = plVar1;
    if (*(uint *)(plVar1 + 4) != 0) {
      uVar4 = *(uint *)((long)plVar1 + 0x24) ^ param_2;
      for (plVar3 = *(long **)(plVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar1 + 4)) * 8);
          (plVar2 = plVar1, plVar3 != plVar1 &&
          ((*(uint *)(plVar3 + 1) != uVar4 ||
           (plVar2 = plVar3, *(uint *)((long)plVar3 + 0xc) != param_2)))); plVar3 = (long *)*plVar3)
      {
      }
    }
    plVar3 = local_30;
    if (plVar2 != plVar1) {
      plVar3 = plVar2 + 2;
    }
    lVar6 = *plVar3;
  }
  else {
    uVar4 = *(uint *)((long)plVar1 + 0x24) ^ *(uint *)(param_1 + 0x40);
    plVar2 = *(long **)(plVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(plVar1 + 4)) * 8);
    if (plVar2 == plVar1) goto LAB_100143007;
    do {
      if ((*(uint *)(plVar2 + 1) == uVar4) &&
         (plVar3 = plVar2, *(uint *)(param_1 + 0x40) == *(uint *)((long)plVar2 + 0xc))) break;
      plVar2 = (long *)*plVar2;
      plVar3 = plVar1;
    } while (plVar2 != plVar1);
    plVar2 = local_30 + 1;
    if (plVar3 != plVar1) {
      plVar2 = plVar3 + 2;
    }
    lVar6 = 0;
    lVar5 = *plVar2;
    local_30[0] = 0;
    if (*(int *)((long)plVar1 + 0x14) != 0) goto LAB_10014304b;
  }
  local_30[0] = 0;
  *(uint *)(param_1 + 0x40) = param_2;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0xf8) = 0;
    QWidget::repaint();
  }
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0xf8) = *(undefined1 *)(param_1 + 0x44);
    QWidget::repaint();
    return;
  }
LAB_1001430d1:
  FUN_100df99c0("","prl_client_app",0,"(!)Error: no button with specified color exists");
  return;
}

