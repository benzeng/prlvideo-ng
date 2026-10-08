
/* Function Stack Size: 0x14 bytes */

void PDDeviceStatusView::setStatusVisible_(ID param_1,SEL param_2,char param_3)

{
  if (*(char *)(param_1 + _statusVisible) == param_3) {
    return;
  }
  *(char *)(param_1 + _statusVisible) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001000215e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNeedsDisplay__1022692b8,1);
  return;
}

