
void FUN_10007f620(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  if (param_2 != (long *)0x0) {
    local_30 = param_2;
    FUN_10008ba40(&local_38,param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = FUN_10008bad0(param_2);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar1,PTR_s_removeData_cleanupSavedPosition__102269f48,uVar2,1);
    FUN_100080fe0(param_1 + 0x20,&local_30);
    (**(code **)(*param_2 + 0x20))(param_2);
    FUN_100867630(*(undefined8 *)(param_1 + 0x10),&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}

