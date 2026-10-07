
void FUN_100720d10(void *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined1 *)((long)param_1 + 0x96) = 0;
    *(undefined2 *)((long)param_1 + 0x94) = 0;
    *(undefined4 *)((long)param_1 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = 0;
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + 0x70) = 0;
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    *(undefined1 *)((long)param_1 + 0x56) = 0;
    *(undefined2 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    if (*(long *)((long)param_1 + 0xb0) != 0) {
      FUN_10087e280();
    }
    pcVar1 = *(char **)((long)param_1 + 0x10);
    if (pcVar1 != (char *)0x0) {
      sVar2 = _strlen(pcVar1);
      ___bzero(pcVar1,sVar2);
      _free(*(void **)((long)param_1 + 0x10));
    }
    if (*(void **)((long)param_1 + 8) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 8));
    }
    if (*(void **)((long)param_1 + 0x98) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0x98));
    }
    if (*(void **)((long)param_1 + 0xd8) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0xd8));
      *(undefined8 *)((long)param_1 + 0xe8) = 0;
      *(undefined8 *)((long)param_1 + 0xe0) = 0;
      *(undefined8 *)((long)param_1 + 0xd8) = 0;
    }
    if (*(void **)((long)param_1 + 0xb8) != (void *)0x0) {
      _free(*(void **)((long)param_1 + 0xb8));
      *(undefined8 *)((long)param_1 + 200) = 0;
      *(undefined8 *)((long)param_1 + 0xc0) = 0;
      *(undefined8 *)((long)param_1 + 0xb8) = 0;
    }
    _free(param_1);
    return;
  }
  return;
}

