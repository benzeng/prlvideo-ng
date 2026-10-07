
void FUN_10074fcb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != param_1 + 0x20) {
    do {
      if (*(char *)(*(long *)(lVar1 + 0x10) + 0x72) != '\0') {
        *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x72) = 0;
        QSemaphore::release((int)param_1 + 0x18);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1 + 0x20);
  }
  return;
}

