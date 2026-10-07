
void FUN_100436a80(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar3 = (long *)param_1[0x73];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  puVar8 = param_1 + 0x73;
  do {
    puVar2 = puVar8 + -7;
    pQVar6 = (QArrayData *)puVar8[-7];
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        if (*(int *)pQVar6 != 0) goto LAB_100436b50;
        pQVar6 = (QArrayData *)*puVar2;
      }
      lVar7 = (long)*(int *)(pQVar6 + 4) << 3;
      if (lVar7 != 0) {
        pQVar5 = pQVar6 + *(long *)(pQVar6 + 0x10);
        do {
          plVar3 = *(long **)pQVar5;
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
          pQVar5 = pQVar5 + 8;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      QArrayData::deallocate(pQVar6,8,8);
    }
LAB_100436b50:
    puVar8 = puVar2;
    if (puVar2 == param_1 + 3) {
      pQVar6 = (QArrayData *)*param_1;
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          UNLOCK();
          if (*(int *)pQVar6 != 0) {
            return;
          }
          pQVar6 = (QArrayData *)*param_1;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
      return;
    }
  } while( true );
}

