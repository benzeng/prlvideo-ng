
/* Function Stack Size: 0x14 bytes */

bool CVideoDataAVF_objc::initialize_(ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_38;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDeviceInput_100bedb88;
  puVar2 = PTR__objc_msgSend_100ba25e8;
  local_38 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_camera_100bed4d0);
  uVar4 = (*(code *)puVar2)(puVar1,PTR_s_deviceInputWithDevice_error__100bed5a0,uVar4,&local_38);
  (*(code *)puVar2)(param_1,PTR_s_setM_input__100bed5a8,uVar4);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
  uVar5 = (*(code *)puVar2)(param_1,PTR_s_m_input_100bed5b0);
  cVar3 = (*(code *)puVar2)(uVar4,PTR_s_canAddInput__100bed5b8,uVar5);
  if (cVar3 == '\0') {
    uVar4 = (*(code *)puVar2)(local_38,PTR_s_localizedDescription_100bed5c8);
    uVar4 = (*(code *)puVar2)(uVar4,PTR_s_UTF8String_100bed218);
    uVar4 = FUN_1008e3970("","LocalDevices",0,"[CVideoDataAVF] Failed to get input: %s (%ld)",uVar4,
                          local_38);
  }
  else {
    uVar4 = (*(code *)puVar2)(param_1,PTR_s_m_session_100bed540);
    uVar5 = (*(code *)puVar2)(param_1,PTR_s_m_input_100bed5b0);
    (*(code *)puVar2)(uVar4,PTR_s_addInput__100bed5c0,uVar5);
    (*(code *)puVar2)(param_1,PTR_s_setM_frame_size__100bed528,param_3);
    puVar1 = PTR_nothrow_100ba21c8;
    pvVar6 = operator_new__(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    (*(code *)puVar2)(param_1,PTR_s_setM_frames__100bed5d0,pvVar6);
    pvVar6 = operator_new__((ulong)param_3,(nothrow_t *)puVar1);
    puVar7 = (undefined8 *)(*(code *)puVar2)(param_1,PTR_s_m_frames_100bed5d8);
    *puVar7 = pvVar6;
    puVar1 = PTR_s_m_frames_100bed5d8;
    lVar8 = (*(code *)puVar2)(param_1);
    lVar9 = (*(code *)puVar2)(param_1,puVar1);
    *(long *)(lVar9 + 8) = lVar8 + 0x10;
    pvVar6 = operator_new__((ulong)param_3,(nothrow_t *)PTR_nothrow_100ba21c8);
    lVar8 = (*(code *)puVar2)(param_1,puVar1);
    *(void **)(lVar8 + 0x10) = pvVar6;
    uVar4 = (*(code *)puVar2)(param_1,puVar1);
    lVar8 = (*(code *)puVar2)(param_1,puVar1);
    *(undefined8 *)(lVar8 + 0x18) = uVar4;
    uVar4 = (*(code *)puVar2)(param_1,PTR_s_m_frames_100bed5d8);
    (*(code *)puVar2)(param_1,PTR_s_setM_frame_ptr__100bed5e0,uVar4);
    uVar4 = (*(code *)puVar2)(param_1,PTR_s_setM_frame_is_old__100bed5e8,1);
  }
  return (bool)CONCAT71((int7)((ulong)uVar4 >> 8),cVar3 != '\0');
}

