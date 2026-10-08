
/* Function Stack Size: 0x18 bytes */

void StatusView::rightMouseDown_(ID param_1,SEL param_2,ID param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_clickCount_102269678);
  plVar1 = *(long **)(param_1 + cppItem);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100aba7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,(1 < lVar2) + 0x121 + (uint)(1 < lVar2));
    return;
  }
  return;
}

