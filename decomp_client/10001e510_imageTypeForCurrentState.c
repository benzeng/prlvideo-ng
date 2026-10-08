
/* Function Stack Size: 0x10 bytes */

unsigned_long_long TitleBarButton::imageTypeForCurrentState(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  unsigned_long_long uVar7;
  bool bVar8;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = (*(code *)puVar1)(uVar3,PTR_s_isMainWindow_102269360);
  bVar8 = true;
  if (cVar2 == '\0') {
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_window_102268c08);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_parentWindow_102269368);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = (*(code *)puVar1)(uVar5,PTR_s_isMainWindow_102269360);
    bVar8 = cVar2 != '\0';
    (*(code *)PTR__objc_release_1021e1c70)(uVar5);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isEnabled_102269370);
  if (cVar2 == '\0') {
    uVar7 = (ulong)bVar8 + 1;
  }
  else {
    lVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_10226a890,PTR_s_currentControlTint_102269378
                             );
    cVar2 = (*(code *)puVar1)(param_1,PTR_s_hovered_102269308);
    if (cVar2 == '\0') {
      uVar7 = 1;
      if (bVar8 != false) {
        uVar7 = (ulong)(lVar6 == 6) * 5;
      }
    }
    else {
      uVar7 = (ulong)(lVar6 == 6) * 3 + 3;
    }
  }
  return uVar7;
}

