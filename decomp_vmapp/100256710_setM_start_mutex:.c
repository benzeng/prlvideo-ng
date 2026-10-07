
/* Function Stack Size: 0x18 bytes */

void CVideoDataAVF_objc::setM_start_mutex_(ID param_1,SEL param_2,QMutex *param_3)

{
  *(QMutex **)(param_1 + _m_start_mutex) = param_3;
  return;
}

