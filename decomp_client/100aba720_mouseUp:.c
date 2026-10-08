
/* Function Stack Size: 0x18 bytes */

void StatusView::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + cppItem);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0x112);
  }
  *(undefined1 *)(param_1 + pressed) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100aba764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNeedsDisplay__1022692b8,1);
  return;
}

