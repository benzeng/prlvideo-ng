
void FUN_100255420(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_m_start_mutex_100bed560);
  QMutex::lock();
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_session_started_100bed568);
  QWaitCondition::wakeAll();
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_start_mutex_100bed560);
  QMutex::unlock();
  uVar2 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_m_camera_100bed4d0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_uniqueID_100bed4c0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_UTF8String_100bed218);
  FUN_1008e3970("","LocalDevices",0,"[CVideoDataAVF] Session %s was started",uVar2);
  return;
}

