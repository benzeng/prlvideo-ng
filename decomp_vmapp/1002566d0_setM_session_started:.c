
/* Function Stack Size: 0x18 bytes */

void CVideoDataAVF_objc::setM_session_started_(ID param_1,SEL param_2,QWaitCondition *param_3)

{
  *(QWaitCondition **)(param_1 + _m_session_started) = param_3;
  return;
}

