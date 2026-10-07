
void FUN_10029be70(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_1004096f0(*(undefined1 *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      pcVar2 = "output";
    }
    else {
      pcVar2 = "input";
    }
    FUN_1008e3970("","LocalDevices",0,"[CHostAudioBase] failed stopping of %s audio device",pcVar2);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

