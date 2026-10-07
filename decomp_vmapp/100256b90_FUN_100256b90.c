
undefined8 FUN_100256b90(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  if (param_1[3] == 0) {
    uVar4 = FUN_1002e59e0(param_1);
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1[3],PTR_s_m_session_100bed540);
    cVar3 = (*(code *)puVar2)(uVar4,PTR_s_isRunning_100bed5f8);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      cVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1[3],PTR_s_m_start_capturing_100bed6d8);
      if (cVar3 == '\0') {
        uVar4 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x38))(param_1);
        (*(code *)puVar2)(param_1[3],PTR_s_m_frame_mutex_100bed590);
        QMutex::lock();
        cVar3 = (*(code *)puVar2)(param_1[3],PTR_s_m_frame_is_old_100bed6e0);
        if (cVar3 == '\0') {
          plVar5 = (long *)(*(code *)puVar2)(param_1[3],PTR_s_GetFrame_100bed678);
          lVar1 = param_1[3];
          lVar6 = (*(code *)puVar2)(lVar1,PTR_s_m_frame_ptr_100bed680);
          (*(code *)puVar2)(lVar1,PTR_s_setM_frame_ptr__100bed5e0,*(undefined8 *)(lVar6 + 8));
          param_1[2] = *plVar5;
        }
        (*(code *)puVar2)(param_1[3],PTR_s_setM_frame_is_old__100bed5e8,1);
        (*(code *)puVar2)(param_1[3],PTR_s_m_frame_mutex_100bed590);
        QMutex::unlock();
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

