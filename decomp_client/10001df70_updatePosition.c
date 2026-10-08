
/* Function Stack Size: 0x10 bytes */

void TitleBarButton::updatePosition(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  ID self_00;
  long lVar5;
  undefined local_d0 [16];
  double local_c0;
  double local_b0 [4];
  double local_90 [4];
  undefined local_70 [16];
  double local_60;
  double local_50 [4];
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_standardWindowButton__102269228,0);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_window_102268c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_standardWindowButton__102269228,1);
  self_00 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(uVar3);
  if ((self != 0) && (self_00 != 0)) {
    _objc_msgSend_stret((undefined *)local_50,self_00,PTR_s_frame_102268b50);
    _objc_msgSend_stret(local_70,self_00,PTR_s_frame_102268b50);
    _objc_msgSend_stret((undefined *)local_90,self,PTR_s_frame_102268b50);
    _objc_msgSend_stret((undefined *)local_b0,self,PTR_s_frame_102268b50);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_position_102269340);
    _objc_msgSend_stret(local_d0,self,PTR_s_frame_102268b50);
    local_b0[0] = (((local_50[0] - local_60) - local_90[0]) + local_c0) * (double)lVar5 +
                  local_b0[0];
    (*(code *)puVar1)(param_1,PTR_s_setFrame__102268fc0);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(self_00);
  (*(code *)puVar1)(self);
  return;
}

