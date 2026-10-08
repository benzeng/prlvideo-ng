
/* Function Stack Size: 0x18 bytes */

void CNotifier::onScreenDidUnlock_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 in_R9;
  
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + m_sender),"screenUnlocked",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,
             0,0,0,0,0,0,0,0,0);
  return;
}

