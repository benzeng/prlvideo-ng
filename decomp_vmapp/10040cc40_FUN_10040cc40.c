
undefined1 FUN_10040cc40(long param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *(char *)(param_1 + 0x38);
  if (cVar2 != '\0') {
    FUN_10040c4b0(param_1);
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    pcVar3 = "Lazy stream pbject not intialized yet, unable to process change format";
  }
  else {
    if (param_2 == '\0') {
      FUN_10040c630(param_1);
      cVar1 = FUN_10040c710(param_1,*(undefined8 *)(param_1 + 0x68));
      if (cVar1 == '\0') {
        pcVar3 = "Can\'t re-attach audio stream at host format change";
        goto LAB_10040ccf5;
      }
    }
    else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = FUN_10040c8a0(param_1);
    if (cVar2 != '\0') {
      return 1;
    }
    pcVar3 = "Can\'t re-start audio unit";
  }
LAB_10040ccf5:
  FUN_1008e3970("","PrlAudioCore",0,pcVar3);
  return 0;
}

