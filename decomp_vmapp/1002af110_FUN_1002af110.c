
void FUN_1002af110(long param_1,byte param_2,byte param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = 0x95c;
  if ((*(char *)(param_1 + 0x870) == '\0') && ((param_3 & param_2) == 1)) {
    do {
      if (*(int *)(param_1 + -0xc + lVar2) != 0) {
        *(undefined4 *)(param_1 + -0xc + lVar2) = 0;
      }
      if (*(int *)(param_1 + -8 + lVar2) != 0) {
        *(undefined4 *)(param_1 + -8 + lVar2) = 0;
      }
      if (*(uint *)(param_1 + -4 + lVar2) < 0x3fff) {
        *(undefined4 *)(param_1 + -4 + lVar2) = 0x3fff;
      }
      if (*(uint *)(param_1 + lVar2) < 0x3fff) {
        *(undefined4 *)(param_1 + lVar2) = 0x3fff;
      }
      lVar2 = lVar2 + 0x8f0;
    } while (lVar2 != 0x985c);
  }
  *(byte *)(param_1 + 0x870) = param_3 & param_2;
  if ((*(char *)(param_1 + 0x8d0) == '\0') && (param_2 == 1)) {
    pcVar3 = (char *)(param_1 + 0x9dc);
    cVar1 = '\0';
    lVar2 = 0;
    while( true ) {
      if ((cVar1 == '\0') && (*pcVar3 != '\x01')) {
        *pcVar3 = '\x01';
        QMutex::lock();
        *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) | 1 << ((byte)lVar2 & 0x1f);
        QWaitCondition::wakeOne();
        QMutex::unlock();
      }
      if (lVar2 == 0xf) break;
      lVar2 = lVar2 + 1;
      cVar1 = *(char *)(param_1 + 0x8d0);
      pcVar3 = pcVar3 + 0x8f0;
    }
  }
  *(byte *)(param_1 + 0x8d0) = param_2;
  return;
}

