
void FUN_10029a5f0(long *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (2 < DAT_1011b55f8) {
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    piVar1 = (int *)param_1[0x14];
    if (*piVar1 == 1) {
      pcVar4 = "PCM";
    }
    else {
      pcVar4 = "Non-pcm";
    }
    FUN_1008e3970("AudioAS","LocalDevices",3,
                  "[CSoundDevice] [%s] Change ICH format (ch: %u, type: %s%d)",uVar3,piVar1[2],
                  pcVar4,piVar1[1]);
  }
  QMutex::lock();
  cVar2 = FUN_10029a130(param_1);
  QMutex::unlock();
  if (cVar2 != '\0') {
    return;
  }
  FUN_100299500(param_1);
  return;
}

