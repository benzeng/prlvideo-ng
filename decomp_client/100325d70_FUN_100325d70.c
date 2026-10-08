
void FUN_100325d70(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  QObject *pQVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pQVar2 = (QObject *)FUN_1003423b0();
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 == 0) {
LAB_100325dff:
    piVar5 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) goto LAB_100325e06;
  }
  else {
    if (((*(int *)(lVar7 + 4) == 0) || (pQVar2 == (QObject *)0x0)) ||
       (*(undefined8 **)(param_1 + 0x78) == (undefined8 *)0x0)) {
LAB_100325de9:
      if ((*(int *)(lVar7 + 4) != 0) && (*(long **)(param_1 + 0x78) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
      }
      goto LAB_100325dff;
    }
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
    pcVar3 = (char *)QMetaObject::className();
    (*(code *)**(undefined8 **)pQVar2)(pQVar2);
    pcVar4 = (char *)QMetaObject::className();
    iVar1 = qstrcmp(pcVar3,pcVar4);
    lVar7 = *(long *)(param_1 + 0x70);
    if (iVar1 == 0) {
      uVar9 = 0;
      if ((lVar7 != 0) && (uVar9 = 0, *(int *)(lVar7 + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x78);
      }
      uVar8 = 0;
      FUN_1003439d0(uVar9,0);
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x78);
      }
      FUN_1003439d0(uVar8,0);
      (**(code **)(*(long *)pQVar2 + 0x20))(pQVar2);
      goto LAB_100325ebd;
    }
    if (lVar7 != 0) goto LAB_100325de9;
LAB_100325e06:
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar6 = *(int **)(param_1 + 0x70);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x70);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if ((*piVar6 == 0) && (*(void **)(param_1 + 0x70) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x70));
      }
    }
    *(int **)(param_1 + 0x70) = piVar5;
    *(QObject **)(param_1 + 0x78) = pQVar2;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      operator_delete(piVar5);
    }
  }
LAB_100325ebd:
  if (((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
       (*(long *)(param_1 + 0x78) != 0)) &&
      ((*(long *)(param_1 + 0x20) != 0 && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)))) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    FUN_100343d10();
    if (param_3 == 3) {
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x78);
      }
      FUN_1003439d0(uVar9,1);
    }
    else if (param_3 == 2) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x78))();
    }
    else if (param_3 == 1) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x70))();
    }
  }
  return;
}

