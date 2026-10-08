
/* Function Stack Size: 0x10 bytes */

CAppResumeManagerPrivate * CRestorationSharedData::manager(ID param_1,SEL param_2)

{
  return *(CAppResumeManagerPrivate **)(param_1 + m_mng);
}

