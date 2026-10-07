
/* Function Stack Size: 0x18 bytes */

void CVideoDataAVF_objc::setM_frame_mutex_(ID param_1,SEL param_2,QMutex *param_3)

{
  *(QMutex **)(param_1 + _m_frame_mutex) = param_3;
  return;
}

