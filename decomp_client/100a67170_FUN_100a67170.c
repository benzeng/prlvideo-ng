
void FUN_100a67170(long param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  
  piVar2 = *(int **)(*param_2 + 0x10);
  if (*piVar2 == 3) {
    if (piVar2[1] != 0) {
      cVar3 = FUN_100a66f00(param_1);
      if (cVar3 != '\0') {
        QTimer::stop();
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x28);
        }
        uVar4 = FUN_100319390(uVar4);
        FUN_100193650(uVar4,1,0xc9,0);
        return;
      }
    }
  }
  else if (*piVar2 == 1) {
    iVar1 = piVar2[1];
    *(bool *)(param_1 + 0x3a) = iVar1 != 0;
    if (((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x39) == '\0')) && (iVar1 != 0)
       ) {
      QTimer::start();
      return;
    }
    QTimer::stop();
    return;
  }
  return;
}

