
void FUN_100643de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_2,PTR_s_object_100beda98);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_uniqueID_100bed4c0);
  pcVar3 = (char *)(*(code *)puVar1)(uVar2,PTR_s_UTF8String_100bed218);
  iVar5 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar5 = (int)sVar4;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar5);
  (**(code **)(param_1 + 0x20))(0x16,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

