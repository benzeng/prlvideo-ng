
void FUN_1006139a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
    puVar3 = (undefined8 *)plVar4[-2];
    if (puVar3 != (undefined8 *)0x0) {
      pQVar5 = (QArrayData *)*puVar3;
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          UNLOCK();
          if (*(int *)pQVar5 != 0) goto LAB_100613a29;
          pQVar5 = (QArrayData *)*puVar3;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100613a29:
      operator_delete(puVar3);
    }
    operator_delete(plVar4 + -2);
    plVar4 = (long *)param_1[3];
  } while( true );
}

