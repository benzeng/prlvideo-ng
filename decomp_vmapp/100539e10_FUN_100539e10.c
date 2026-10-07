
undefined8 FUN_100539e10(undefined8 *param_1,long *param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  bool bVar7;
  
  QMutex::lock();
  bVar7 = true;
  uVar6 = 0;
  if ((*(char *)(param_1 + 5) != '\0') || (param_3 != '\0')) {
    lVar2 = param_1[4];
    param_1[4] = 0;
    if (param_3 == '\0') {
      FUN_100540e80(param_1 + 2);
    }
    else if (lVar2 == 0) {
      lVar4 = *param_2;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (long *)param_1[3];
      param_1[3] = lVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    bVar7 = false;
    QMutex::unlock();
    if (lVar2 != 0) {
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar4 = FUN_1002a6010(lVar2);
      pvVar5 = (void *)0x0;
      if (*(long *)plVar3[2] != 0) {
        pvVar5 = *(void **)(*(long *)plVar3[2] + 0x10);
      }
      _memcpy((void *)(lVar4 + 0xc),pvVar5,0x808);
      *(undefined1 *)(plVar3[2] + 0x18) = 1;
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      FUN_1004c07d0(*param_1,lVar2,0);
    }
    uVar6 = 0;
    if (**(long **)(*param_2 + 0x10) != 0) {
      uVar6 = *(undefined8 *)(**(long **)(*param_2 + 0x10) + 0x10);
    }
  }
  if (bVar7) {
    QMutex::unlock();
  }
  return uVar6;
}

