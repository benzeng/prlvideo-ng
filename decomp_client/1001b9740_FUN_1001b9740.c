
void FUN_1001b9740(long param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if (param_2 != '\0') {
    pQVar3 = (QObject *)FUN_1001b98c0();
    if (pQVar3 == (QObject *)0x0) {
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    }
    else {
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      piVar5 = *(int **)(param_1 + 0x20);
      if (piVar5 != piVar4) {
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          piVar5 = *(int **)(param_1 + 0x20);
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if ((*piVar5 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x20));
          }
        }
        *(int **)(param_1 + 0x20) = piVar4;
        *(QObject **)(param_1 + 0x28) = pQVar3;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          operator_delete(piVar4);
        }
      }
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
      }
      FUN_10018c2b0(uVar6);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getVmFullScreen();
      uVar1 = CVmFullScreen::isUseAllDisplays();
      *(undefined1 *)(param_1 + 0x19) = uVar1;
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
        }
        uVar6 = FUN_10018c280(uVar6);
        uVar2 = FUN_100319ae0(uVar6);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
      }
      FUN_1001b9c70(param_1,uVar6,1,0,1);
    }
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1001b9c70(param_1,uVar6,0,*(int *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x19));
  return;
}

