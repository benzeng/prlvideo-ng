
void FUN_10037dc00(long param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
      }
      uVar3 = FUN_100323e00(uVar3);
      lVar4 = FUN_100319390(uVar3);
      if (lVar4 != 0) {
        FUN_10018c220(lVar4,2,0);
        return;
      }
    }
    else {
      if (param_3 == 1) {
        FUN_10037d2e0(param_1,*(undefined8 *)(param_4 + 8));
        return;
      }
      if (param_3 == 0) {
        plVar1 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x68);
        QDeclarativeView::rootObject();
        uVar2 = QGraphicsItem::isVisible();
                    /* WARNING: Could not recover jumptable at 0x00010037dc92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
        return;
      }
    }
  }
  return;
}

