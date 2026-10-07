
undefined8 FUN_1006185f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  QMutex::lock();
  puVar5 = DAT_1011cca58;
  while (puVar5 != &DAT_1011cca60) {
    lVar1 = puVar5[6];
    plVar4 = (long *)FUN_100619260((long *)(lVar1 + 0x18),param_1,0);
    if (*plVar4 != *(long *)(lVar1 + 0x18)) {
      plVar4 = operator_new(0x20);
      lVar2 = *(long *)(lVar1 + 8);
      plVar4[3] = *(long *)(lVar1 + 0x10);
      plVar4[2] = lVar2;
      plVar4[1] = (long)param_2;
      lVar1 = *param_2;
      *plVar4 = lVar1;
      *(long **)(lVar1 + 8) = plVar4;
      *param_2 = (long)plVar4;
      param_2[2] = param_2[2] + 1;
    }
    puVar3 = (undefined8 *)puVar5[1];
    if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
      do {
        puVar3 = (undefined8 *)puVar5[2];
        bVar6 = (undefined8 *)*puVar3 != puVar5;
        puVar5 = puVar3;
      } while (bVar6);
    }
    else {
      do {
        puVar5 = puVar3;
        puVar3 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
  }
  QMutex::unlock();
  return 0;
}

