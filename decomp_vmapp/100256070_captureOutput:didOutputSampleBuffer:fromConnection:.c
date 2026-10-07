
/* Function Stack Size: 0x28 bytes */

void CVideoDataAVF_objc::captureOutput_didOutputSampleBuffer_fromConnection_
               (ID param_1,SEL param_2,ID param_3,opaqueCMSampleBuffer *param_4,ID param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar6 = _CMSampleBufferGetImageBuffer(param_4);
  _CVPixelBufferLockBaseAddress(uVar6,1);
  lVar7 = _CVPixelBufferGetBaseAddress(uVar6);
  puVar2 = PTR__objc_msgSend_100ba25e8;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_m_frame_size_100bed670);
  lVar8 = _CVPixelBufferGetDataSize(uVar6);
  uVar10 = lVar8 - 3U;
  if ((ulong)uVar4 < lVar8 - 3U) {
    uVar10 = (ulong)uVar4;
  }
  (*(code *)puVar2)(param_1,PTR_s_m_frame_mutex_100bed590);
  QMutex::lock();
  if (lVar7 != 0) {
    cVar3 = _CVPixelBufferIsPlanar(uVar6);
    if (cVar3 == '\0') {
      puVar9 = (undefined8 *)
               (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_GetFrame_100bed678);
      _memcpy((void *)*puVar9,(void *)(lVar7 + 3),uVar10);
      goto LAB_100256153;
    }
  }
  puVar9 = (undefined8 *)(*(code *)puVar2)(param_1,PTR_s_GetFrame_100bed678);
  uVar1 = *puVar9;
  uVar5 = (*(code *)puVar2)(param_1,PTR_s_m_frame_size_100bed670);
  ___bzero(uVar1,uVar5);
LAB_100256153:
  (*(code *)puVar2)(param_1,PTR_s_setM_frame_is_old__100bed5e8,0);
  (*(code *)puVar2)(param_1,PTR_s_m_frame_mutex_100bed590);
  QMutex::unlock();
  _CVPixelBufferUnlockBaseAddress(uVar6,1);
  (*(code *)puVar2)(param_1,PTR_s_setM_start_capturing__100bed520,1);
  return;
}

