
undefined1  [16] FUN_100ac8ae0(QWidget *param_1)

{
  undefined *puVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  ID IVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  double dStack_20;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSScreen_10226a8e8,PTR_s_screens_102269810);
  IVar5 = (*(code *)puVar1)(uVar4,PTR_s_objectAtIndex__102269480,0);
  if (IVar5 == 0) {
    local_28 = 0;
    dStack_20 = 0.0;
    local_38 = 0;
    uStack_30 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,IVar5,PTR_s_frame_102268b50);
  }
  dVar2 = dStack_20;
  uVar4 = MacUtils::getWindowRef(param_1);
  IVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_screen_10226a530);
  if (IVar5 == 0) {
    dStack_40 = 0.0;
    iVar6 = 0;
    dStack_50 = 0.0;
    iVar7 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,IVar5,PTR_s_visibleFrame_10226a548);
    iVar7 = (int)local_58;
    iVar6 = (int)local_48;
  }
  iVar3 = (int)(dVar2 - (dStack_50 + dStack_40));
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar7;
  auVar8._12_4_ = (int)dStack_40 + -1 + iVar3;
  auVar8._8_4_ = iVar7 + -1 + iVar6;
  return auVar8;
}

