
/* Function Stack Size: 0x14 bytes */

void TitleBarButton::setHovered_(ID param_1,SEL param_2,char param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(param_1 + _hovered) == param_3) {
    return;
  }
  *(char *)(param_1 + _hovered) = param_3;
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateSystemButtons_1022692b0);
                    /* WARNING: Could not recover jumptable at 0x00010001d27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setNeedsDisplay__1022692b8,1);
  return;
}

