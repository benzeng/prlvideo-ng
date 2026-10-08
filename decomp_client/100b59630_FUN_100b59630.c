
undefined1 FUN_100b59630(long param_1)

{
  int iVar1;
  QThread *this;
  undefined1 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_20 = DAT_101cdba68;
  local_28 = DAT_101cdba60;
  local_30 = 0;
  iVar1 = _AudioObjectSetPropertyData(1,&local_28,0,0,8,&local_30);
  if (iVar1 != 0) {
    FUN_100df99c0("","PrlAudioDeviceManager",0,"Failed to set up NULL run loop: %d",iVar1);
  }
  local_38 = DAT_101cdba74;
  local_40 = DAT_101cdba6c;
  iVar1 = _AudioObjectAddPropertyListener(1,&local_40,FUN_100b597b0,0);
  if (iVar1 == 0) {
    this = operator_new(0x10,(nothrow_t *)PTR_nothrow_1021e1620);
    if (this == (QThread *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_100df99c0("","PrlAudioDeviceManager",0,"[CAudioDeviceManager] ERROR: OOM!");
      this = *(QThread **)(param_1 + 0x28);
    }
    else {
      QThread::QThread(this,(QObject *)0x0);
      *(undefined ***)this = &PTR_FUN_10223f518;
      *(QThread **)(param_1 + 0x28) = this;
    }
    QObject::moveToThread(this);
    QThread::start(*(undefined8 *)(param_1 + 0x28),7);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    FUN_100df99c0("","PrlAudioDeviceManager",0,
                  "Failed to add listener for audio device list\'s configuration: %d",iVar1);
  }
  return uVar2;
}

