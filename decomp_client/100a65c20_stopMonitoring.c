
/* Function Stack Size: 0x10 bytes */

void LocationDelegate::stopMonitoring(ID param_1,SEL param_2)

{
  if (*(long *)(param_1 + m_manager) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a65c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(long *)(param_1 + m_manager),PTR_s_stopUpdatingLocation_10226a388);
    return;
  }
  return;
}

