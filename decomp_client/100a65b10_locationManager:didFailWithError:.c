
/* Function Stack Size: 0x20 bytes */

void LocationDelegate::locationManager_didFailWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100a65b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + m_callback) + 8))();
  return;
}

