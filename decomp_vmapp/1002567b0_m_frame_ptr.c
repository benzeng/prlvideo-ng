
/* Function Stack Size: 0x10 bytes */

avf_frame * CVideoDataAVF_objc::m_frame_ptr(ID param_1,SEL param_2)

{
  return *(avf_frame **)(param_1 + _m_frame_ptr);
}

