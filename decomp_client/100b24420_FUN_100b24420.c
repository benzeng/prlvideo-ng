
undefined1 FUN_100b24420(long *param_1)

{
  char *pcVar1;
  
  if (*(char *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) == '\0') {
    pcVar1 = "Compacting impossible: image is not openned correctly";
  }
  else {
    if ((*(byte *)(*(long *)(*param_1 + -0x18) + 0x18 + (long)param_1) & 2) != 0) {
      return 1;
    }
    pcVar1 = "Compacting impossible: image is not writable";
  }
  FUN_100df99c0("Compact","dimg",0,pcVar1);
  return 0;
}

