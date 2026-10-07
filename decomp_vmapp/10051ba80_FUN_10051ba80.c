
void FUN_10051ba80(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      plVar3 = operator_new(0x10);
      plVar1 = *(long **)(param_4 + lVar4);
      lVar2 = *plVar1;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(int *)(plVar3 + 1) = (int)plVar1[1];
      *(long **)(param_2 + lVar4) = plVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

