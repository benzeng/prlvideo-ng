
undefined8 FUN_10029bee0(long *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if (cVar1 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"[CHostAudioPlayback] Already started");
    }
    FUN_1008e3970("","LocalDevices",0,"Start: Stop first");
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  cVar1 = FUN_100409630((char)param_1[3]);
  if (cVar1 == '\0') {
    if ((char)param_1[3] == '\0') {
      pcVar2 = "output";
    }
    else {
      pcVar2 = "input";
    }
    FUN_1008e3970("","LocalDevices",0,"[CHostAudioBase] failed starting of %s audio device",pcVar2);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return 1;
}

