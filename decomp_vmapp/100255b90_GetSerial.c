
/* Function Stack Size: 0x10 bytes */

QString CVideoDataAVF_objc::GetSerial(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_2,PTR_s_m_camera_100bed4d0);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_uniqueID_100bed4c0);
  pcVar3 = (char *)(*(code *)puVar1)(uVar2,PTR_s_UTF8String_100bed218);
  iVar5 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar5 = (int)sVar4;
  }
  uVar2 = QString::fromAscii_helper(pcVar3,iVar5);
  *(undefined8 *)param_1 = uVar2;
  return (QString)(QTypedArrayData<unsigned_short> *)param_1;
}

