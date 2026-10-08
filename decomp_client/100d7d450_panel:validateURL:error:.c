
/* Function Stack Size: 0x28 bytes */

char OpenPanel::panel_validateURL_error_(ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  char cVar1;
  
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_4,PTR_s_isEqual__10226a020,*(undefined8 *)(param_1 + m_url));
  if (cVar1 == '\0') {
    _NSBeep();
  }
  return cVar1 != '\0';
}

