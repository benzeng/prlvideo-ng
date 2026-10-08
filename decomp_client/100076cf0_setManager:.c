
/* Function Stack Size: 0x18 bytes */

void CRestorationSharedData::setManager_(ID param_1,SEL param_2,CAppResumeManagerPrivate *param_3)

{
  *(CAppResumeManagerPrivate **)(param_1 + m_mng) = param_3;
  return;
}

