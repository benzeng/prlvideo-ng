
void FUN_100079a70(double param_1,QWidget *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_f8;
  long lStack_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QWidget::setWindowOpacity(param_1);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar3 = MacUtils::getWindowRef(param_2);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_childWindows_102269ec0);
  uVar4 = (*(code *)puVar2)(uVar3,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                            local_b8,0x10);
  if (uVar4 != 0) {
    lVar1 = *local_e8;
    do {
      uVar6 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        lVar5 = MacUtils::getQtWindow(*(NSWindow **)(lStack_f0 + uVar6 * 8));
        if (lVar5 != 0) {
          QWidget::setWindowOpacity(param_1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10);
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

