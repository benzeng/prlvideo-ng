
undefined8 FUN_1000522a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  undefined8 uVar7;
  long *local_40;
  long local_38;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x60) == param_2) {
    bVar6 = true;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar7 = 0xf0000000;
  }
  else {
    bVar6 = false;
    QMutex::unlock();
    local_40 = &local_38;
    local_38 = param_2;
    iVar4 = FUN_100059d20(*(undefined8 *)(param_1 + 0x58),FUN_100059ed0,&local_40);
    uVar7 = 0xf0000000;
    if (iVar4 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      plVar5 = operator_new(0x20);
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = param_1;
      *plVar5 = (long)&PTR_FUN_100bef508;
      plVar5[3] = param_2;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      cVar3 = FUN_100041750(uVar7,plVar5);
      if (cVar3 == '\0') {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      uVar7 = 0xffffffff;
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (bVar6) {
    QMutex::unlock();
  }
  return uVar7;
}

