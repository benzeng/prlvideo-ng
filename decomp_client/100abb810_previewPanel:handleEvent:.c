
/* Function Stack Size: 0x20 bytes */

char QLResponder::previewPanel_handleEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + m_forwarder);
  pcVar2 = *(code **)*puVar1;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_eventRef_102269b50);
  cVar3 = (*pcVar2)(puVar1,uVar4);
  return cVar3;
}

