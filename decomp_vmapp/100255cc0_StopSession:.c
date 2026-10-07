
/* Function Stack Size: 0x14 bytes */

void CVideoDataAVF_objc::StopSession_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  QMutex *pQVar4;
  QMutex *pQVar5;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  IVar3 = m_session(param_1,PTR_s_m_session_100bed540);
  cVar2 = (*(code *)puVar1)(IVar3,PTR_s_isRunning_100bed5f8);
  if (cVar2 != '\0') {
    IVar3 = m_session(param_1,PTR_s_m_session_100bed540);
    (*(code *)puVar1)(IVar3,PTR_s_stopRunning_100bed608);
    if ((char)param_3 != '\0') {
      m_stop_mutex(param_1,PTR_s_m_stop_mutex_100bed548);
      QMutex::lock();
      pQVar4 = (QMutex *)m_session_stopped(param_1,PTR_s_m_session_stopped_100bed550);
      pQVar5 = m_stop_mutex(param_1,PTR_s_m_stop_mutex_100bed548);
      QWaitCondition::wait(pQVar4,(ulong)pQVar5);
      m_stop_mutex(param_1,PTR_s_m_stop_mutex_100bed548);
      QMutex::unlock();
      return;
    }
  }
  return;
}

