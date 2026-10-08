
/* Function Stack Size: 0x18 bytes */

void CNotifier::setSender_(ID param_1,SEL param_2,CNotificationCentre *param_3)

{
  *(CNotificationCentre **)(param_1 + m_sender) = param_3;
  return;
}

