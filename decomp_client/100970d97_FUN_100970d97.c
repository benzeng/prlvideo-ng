
undefined4 FUN_100970d97(long param_1)

{
  char *local_10;
  
  local_10 = *(char **)(*(long *)(param_1 + 0x60) + 0x20);
  if ((local_10 == (char *)0x0) || (*(long *)(*(long *)(param_1 + 0x60) + 0x28) == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = 0;
  }
  else {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
    }
    for (; (*(char **)(*(long *)(param_1 + 0x60) + 0x28) != local_10 && (*local_10 == '\0'));
        local_10 = local_10 + 1) {
    }
    if (*(char **)(*(long *)(param_1 + 0x60) + 0x28) == local_10) {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = 0;
    }
    else {
      *(char **)(*(long *)(param_1 + 0x60) + 0x20) = local_10;
    }
  }
  return 0;
}

