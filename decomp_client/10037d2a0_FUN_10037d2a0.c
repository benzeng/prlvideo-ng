
void FUN_10037d2a0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x68);
  QDeclarativeView::rootObject();
  uVar2 = QGraphicsItem::isVisible();
                    /* WARNING: Could not recover jumptable at 0x00010037d2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
  return;
}

