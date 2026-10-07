
size_t FUN_100256ca0(long param_1,void *param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (*(long *)(param_1 + 0x18),PTR_s_m_session_100bed540);
    cVar2 = (*(code *)puVar1)(uVar3,PTR_s_isRunning_100bed5f8);
    uVar6 = 0;
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (*(undefined8 *)(param_1 + 0x18),PTR_s_m_start_capturing_100bed6d8);
      if (cVar2 != '\0') {
        uVar5 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        uVar6 = (ulong)uVar5;
        if (param_3 < uVar5) {
          uVar6 = (ulong)param_3;
        }
        (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_m_frame_mutex_100bed590);
        QMutex::lock();
        _memcpy(param_2,(void *)((ulong)*(uint *)(param_1 + 8) + *(long *)(param_1 + 0x10)),uVar6);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)uVar6;
        (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_m_frame_mutex_100bed590);
        QMutex::unlock();
      }
    }
    return uVar6;
  }
  sVar4 = FUN_1002e5a30(param_1,param_2,(ulong)param_3);
  return sVar4;
}

