
/* Function Stack Size: 0x18 bytes */

void CVideoDataAVF_objc::setM_frame_ptr_(ID param_1,SEL param_2,avf_frame *param_3)

{
  *(avf_frame **)(param_1 + _m_frame_ptr) = param_3;
  return;
}

