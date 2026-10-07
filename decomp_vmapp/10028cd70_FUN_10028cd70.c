
void FUN_10028cd70(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  
  QMutex::lock();
  ppuVar3 = &PTR_LOOP_101115e70;
  do {
    ppuVar3 = (undefined **)*ppuVar3;
    if (ppuVar3 == &PTR_LOOP_101115e70) goto LAB_10028cdb0;
  } while (*(int *)(ppuVar3 + 2) != param_1);
  puVar1 = *ppuVar3;
  plVar2 = (long *)ppuVar3[1];
  *(long **)(puVar1 + 8) = plVar2;
  *plVar2 = (long)puVar1;
  _free(ppuVar3);
LAB_10028cdb0:
  QMutex::unlock();
  return;
}

