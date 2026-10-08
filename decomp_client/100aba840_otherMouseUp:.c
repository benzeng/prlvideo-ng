
/* Function Stack Size: 0x18 bytes */

void StatusView::otherMouseUp_(ID param_1,SEL param_2,ID param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + cppItem);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100aba861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,0x132);
    return;
  }
  return;
}

