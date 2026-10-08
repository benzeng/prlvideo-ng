
/* Function Stack Size: 0x10 bytes */

unsigned_long_long TitleBarButton::alternateImageTypeForCurrentState(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSColor_10226a890,PTR_s_currentControlTint_102269378);
  return (ulong)(lVar1 == 6) * 3 + 4;
}

