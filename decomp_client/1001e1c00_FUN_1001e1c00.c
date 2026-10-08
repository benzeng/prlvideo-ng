
void FUN_1001e1c00(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x40) != 0)) {
    QWidget::close();
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x40), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001e1c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return;
    }
  }
  return;
}

