
/* Function Stack Size: 0x14 bytes */

bool CVideoDataAVF_objc::StartSession_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  ID IVar3;
  undefined8 uVar4;
  QMutex *pQVar5;
  QMutex *pQVar6;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  IVar3 = m_session(param_1,PTR_s_m_session_100bed540);
  uVar4 = (*(code *)puVar1)(IVar3,PTR_s_isRunning_100bed5f8);
  uVar2 = 1;
  if ((char)uVar4 == '\0') {
    IVar3 = m_session(param_1,PTR_s_m_session_100bed540);
    uVar4 = (*(code *)puVar1)(IVar3,PTR_s_startRunning_100bed600);
    if ((char)param_3 != '\0') {
      m_start_mutex(param_1,PTR_s_m_start_mutex_100bed560);
      QMutex::lock();
      pQVar5 = (QMutex *)m_session_started(param_1,PTR_s_m_session_started_100bed568);
      pQVar6 = m_start_mutex(param_1,PTR_s_m_start_mutex_100bed560);
      uVar2 = QWaitCondition::wait(pQVar5,(ulong)pQVar6);
      m_start_mutex(param_1,PTR_s_m_start_mutex_100bed560);
      uVar4 = QMutex::unlock();
    }
  }
  return (bool)CONCAT71((int7)((ulong)uVar4 >> 8),uVar2);
}

