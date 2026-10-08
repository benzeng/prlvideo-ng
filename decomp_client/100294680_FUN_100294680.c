
void FUN_100294680(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 in_EAX;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,in_EAX);
  lVar2 = *(long *)(param_1 + 0x40);
  uVar4 = (ulong)*(uint *)(lVar2 + 8);
  lVar6 = 0;
  if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    do {
      plVar3 = *(long **)(lVar2 + 0x10 + ((int)uVar4 + lVar6) * 8);
      lVar2 = *plVar3;
      if ((((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) || (lVar2 = plVar3[1], lVar2 == 0)) ||
         (plVar3 = (long *)___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&DAT_1021ef620,0),
         plVar3 == (long *)0x0)) {
        FUN_100df99c0("","prl_client_app",0,"watcher = %p, %s",0,"stopped",uVar7);
      }
      else {
        cVar1 = QFutureWatcherBase::isFinished();
        if (cVar1 == '\0') {
          cVar1 = QFutureWatcherBase::isFinished();
          pcVar5 = "running!";
          if (cVar1 != '\0') {
            pcVar5 = "stopped";
          }
          FUN_100df99c0("","prl_client_app",0,"watcher = %p, %s",plVar3,pcVar5);
        }
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      lVar6 = lVar6 + 1;
      lVar2 = *(long *)(param_1 + 0x40);
      uVar4 = (ulong)*(int *)(lVar2 + 8);
    } while (lVar6 < (long)((long)*(int *)(lVar2 + 0xc) - uVar4));
  }
  CAbstractTask::finish((int)param_1);
  return;
}

