
void FUN_100583b70(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  QArrayData *pQVar5;
  
  plVar4 = (long *)param_1[3];
  do {
    if (plVar4 == param_1 + 3) {
      (**(code **)(*param_1 + 0xe0))(param_1);
      return;
    }
    lVar1 = *plVar4;
    plVar2 = (long *)plVar4[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar4 = 0x112233;
    plVar4[1] = (long)&DAT_00445566;
    pvVar3 = (void *)plVar4[-2];
    if (pvVar3 != (void *)0x0) {
      pQVar5 = *(QArrayData **)((long)pvVar3 + 0x18);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 != 0) goto LAB_100583bfb;
          pQVar5 = *(QArrayData **)((long)pvVar3 + 0x18);
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100583bfb:
      operator_delete(pvVar3);
    }
    operator_delete(plVar4 + -2);
    plVar4 = (long *)param_1[3];
  } while( true );
}

