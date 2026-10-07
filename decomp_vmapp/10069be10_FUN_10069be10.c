
undefined1 FUN_10069be10(long *param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = *(long *)(*param_1 + -0x108) +
          *(long *)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x108)) + -0x18);
  if (*(char *)((long)param_1 + lVar1 + 0x48) == '\0') {
    pcVar2 = "Compacting impossible: image is not openned correctly";
  }
  else {
    if ((*(byte *)((long)param_1 + lVar1 + 0x18) & 2) != 0) {
      return 1;
    }
    pcVar2 = "Compacting impossible: image is not writable";
  }
  FUN_1008e3970("Compact","dimg",0,pcVar2);
  return 0;
}

