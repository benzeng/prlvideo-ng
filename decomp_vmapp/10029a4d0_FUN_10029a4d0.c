
void FUN_10029a4d0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (2 < DAT_1011b55f8) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_1008e3970("AudioAS","LocalDevices",3,
                  "[CSoundDevice] [%s] Change AC97 samplerate (sw_rate: %u)",uVar2,
                  *(undefined4 *)(param_1[0x14] + 0xc));
  }
  QMutex::lock();
  cVar1 = FUN_10029a130(param_1);
  QMutex::unlock();
  if (cVar1 != '\0') {
    return;
  }
  FUN_100299500(param_1);
  return;
}

