
char * FUN_1003a2850(long param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x1a0);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_1 + 0x1b0);
    }
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_1003a28c0(param_1,param_1 + 0x198);
    pcVar1 = *(char **)(param_1 + 0x1a0);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 0x1b0);
    }
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}

