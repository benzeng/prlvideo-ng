
void FUN_100751b60(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  
  iVar2 = (int)param_1 + 0x40;
  QSemaphore::acquire(iVar2);
  if (*(char *)(param_1 + 0x73) == '\0') {
    do {
      pcVar4 = *(code **)(param_1 + 0x18);
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x20));
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *plVar3 + -1);
      }
      uVar1 = (*pcVar4)(plVar3,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined4 *)(param_1 + 0x60),param_1 + 100,
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x68));
      *(undefined1 *)(param_1 + 0x70) = uVar1;
      *(undefined1 *)(param_1 + 0x71) = 0;
      QSemaphore::release((int)*(undefined8 *)(param_1 + 0x10) + 0x18);
      QSemaphore::acquire(iVar2);
    } while (*(char *)(param_1 + 0x73) == '\0');
  }
  return;
}

