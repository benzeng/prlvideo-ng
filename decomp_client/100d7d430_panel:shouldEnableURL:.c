
/* Function Stack Size: 0x20 bytes */

char OpenPanel::panel_shouldEnableURL_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100d7d44a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_4,PTR_s_isEqual__10226a020,*(undefined8 *)(param_1 + m_url));
  return cVar1;
}

