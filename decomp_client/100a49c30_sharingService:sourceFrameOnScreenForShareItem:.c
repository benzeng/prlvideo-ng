
/* Function Stack Size: 0x20 bytes */

CGRect * SSBaseDelegate::sharingService_sourceFrameOnScreenForShareItem_
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  undefined *puVar2;
  
  puVar2 = PTR__NSZeroRect_1021e11b8;
  if (*(long *)(param_1 + m_screenshot) == 0) {
    (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(PTR__NSZeroRect_1021e11b8 + 0x18)
    ;
    (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(puVar2 + 0x10);
    dVar1 = *(double *)puVar2;
    (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(puVar2 + 8);
    (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + m_screenshot),PTR_s_size_102268ef8);
    if (*(ID *)(param_1 + m_parentWnd) == 0) {
      (__return_storage_ptr__->field1_0x10).field1_0x8 = 0.0;
      (__return_storage_ptr__->field1_0x10).field0_0x0 = 0.0;
      (__return_storage_ptr__->field0_0x0).field1_0x8 = 0.0;
      (__return_storage_ptr__->field0_0x0).field0_0x0 = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)__return_storage_ptr__,*(ID *)(param_1 + m_parentWnd),
                          PTR_s_convertRectToScreen__10226a298);
    }
  }
  return __return_storage_ptr__;
}

