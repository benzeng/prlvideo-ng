
/* Function Stack Size: 0x20 bytes */

CGRect * QLResponder::previewPanel_sourceFrameOnScreenForPreviewItem_
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID self;
  undefined local_78 [24];
  double dStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined local_38 [16];
  double local_28;
  
  if (param_1 != 0) {
    _objc_msgSend_stret(local_38,param_1,PTR_s_focusRect_10226a4c0);
    if ((local_28 != 0.0) || (NAN(local_28))) {
      _objc_msgSend_stret((undefined *)&local_58,param_1,PTR_s_focusRect_10226a4c0);
      puVar2 = PTR__objc_msgSend_1021e1c68;
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSScreen_10226a8e8,PTR_s_screens_102269810);
      self = (*(code *)puVar2)(uVar3,PTR_s_objectAtIndex__102269480,0);
      if (self == 0) {
        dStack_60 = 0.0;
      }
      else {
        _objc_msgSend_stret(local_78,self,PTR_s_frame_102268b50);
      }
      (__return_storage_ptr__->field1_0x10).field1_0x8 = local_40;
      (__return_storage_ptr__->field1_0x10).field0_0x0 = local_48;
      (__return_storage_ptr__->field0_0x0).field1_0x8 = dStack_60 - (local_50 + local_40);
      (__return_storage_ptr__->field0_0x0).field0_0x0 = local_58;
      return __return_storage_ptr__;
    }
  }
  puVar2 = PTR__NSZeroRect_1021e11b8;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(PTR__NSZeroRect_1021e11b8 + 0x18);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(puVar2 + 0x10);
  dVar1 = *(double *)puVar2;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(puVar2 + 8);
  (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  return __return_storage_ptr__;
}

