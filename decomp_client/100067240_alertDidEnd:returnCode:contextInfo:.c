
/* Function Stack Size: 0x28 bytes */

void __thiscall
CAlertDelegate::alertDidEnd_returnCode_contextInfo_
          (CAlertDelegate *this,ID param_1,SEL param_2,ID param_3,long_long param_4,void *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  char *local_30;
  
  local_cc = 0;
  if (param_3 == 0x3e9) {
    local_cc = 2;
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
    if (param_3 == 1000) {
      local_cc = 1;
      uVar3 = 1;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"GUI_QUESTION_ENABLE_ACCESSIBILITY_MODE answered %i",uVar3);
  if (((*(long *)(this + m_task) != 0) && (*(int *)(*(long *)(this + m_task) + 4) != 0)) &&
     (*(long *)(this + m_task + 8) != 0)) {
    local_d0 = 0x3c4b;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = &local_cc;
    local_c0 = "Messaging::ButtonID";
    local_38 = &local_d0;
    local_30 = "PRL_RESULT";
    QMetaObject::invokeMethod
              (*(long *)(this + m_task + 8),"onQuestionCheckForAccessibilityModeClosed",2,0,0);
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_suppressionButton_102269bd8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_cell_1022690a8);
  lVar2 = (*(code *)puVar1)(uVar3,PTR_s_state_102269be0);
  if (lVar2 != 0) {
    MessageUtils::setMessageHidden(0x3c4b,local_cc);
  }
  (*(code *)puVar1)(param_4,PTR_s_setDelegate__102268f50,0);
  (*(code *)puVar1)(this,PTR_s_autorelease_102269a10);
  return;
}

