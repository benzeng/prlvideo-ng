
/* Function Stack Size: 0x18 bytes */

bool CVideoDataAVF_objc::Open_secondValue_
               (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_RAX;
  undefined1 uVar9;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  code *local_40;
  dispatch_queue_t local_38;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___AVCaptureVideoDataOutput_100bedb90,PTR_s_alloc_100bed228);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_100bed248);
  (*(code *)puVar1)(param_1,PTR_s_setM_output__100bed610,uVar4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_100bedb98;
  uVar5 = (*(code *)puVar1)((double)param_3,PTR__OBJC_CLASS___NSNumber_100bedba0,
                            PTR_s_numberWithDouble__100bed618);
  uVar4 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_100ba2468;
  uVar6 = (*(code *)puVar1)((double)param_4,PTR__OBJC_CLASS___NSNumber_100bedba0,
                            PTR_s_numberWithDouble__100bed618);
  uVar8 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_100ba2458;
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_100bedba0,
                            PTR_s_numberWithUnsignedInt__100bed620,0x32767579);
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_dictionaryWithObjectsAndKeys__100bed628,uVar5,uVar4,uVar6,
                            uVar8,uVar7,
                            *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_100ba2460,0);
  uVar8 = (*(code *)puVar1)(param_1,PTR_s_m_output_100bed630);
  (*(code *)puVar1)(uVar8,PTR_s_setVideoSettings__100bed638,uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_m_output_100bed630);
  (*(code *)puVar1)(uVar4,PTR_s_setAlwaysDiscardsLateVideoFrames_100bed640,1);
  local_60 = 0;
  local_58 = &local_60;
  local_50 = 0x52000000;
  local_4c = 0x30;
  local_48 = FUN_100256030;
  local_40 = FUN_100256050;
  local_38 = _dispatch_queue_create("myQueue",(dispatch_queue_attr_t)0x0);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_m_output_100bed630);
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (uVar4,PTR_s_setSampleBufferDelegate_queue__100bed648,param_1,local_58[5]);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_session_100bed540);
  uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_output_100bed630);
  cVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_canAddOutput__100bed650,uVar8);
  if (cVar3 == '\0') {
    uVar9 = 0;
    FUN_1008e3970("","LocalDevices",0,"[CVideoDataAVF] Failed to get output");
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_session_100bed540);
    uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_output_100bed630);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_addOutput__100bed658,uVar8);
    cVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_StartSession__100bed660,1);
    uVar9 = 1;
    if (cVar3 == '\0') {
      (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_Close_100bed668);
      uVar9 = 0;
    }
  }
  __Block_object_dispose(&local_60,8);
  return (bool)CONCAT71((int7)((ulong)extraout_RAX >> 8),uVar9);
}

