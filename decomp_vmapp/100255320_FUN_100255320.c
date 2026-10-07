
void FUN_100255320(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_m_stop_mutex_100bed548);
  QMutex::lock();
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_session_stopped_100bed550);
  QWaitCondition::wakeAll();
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_setM_start_capturing__100bed520,0);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_stop_mutex_100bed548);
  QMutex::unlock();
  uVar2 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_camera_100bed4d0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_uniqueID_100bed4c0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_UTF8String_100bed218);
  FUN_1008e3970("","LocalDevices",0,"[CVideoDataAVF] Session %s was stoped",uVar2);
  return;
}

