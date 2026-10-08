
void FUN_1007a8340(QEvent *param_1,long param_2)

{
  QEvent *pQVar1;
  double dVar2;
  ushort uVar3;
  QObject *pQVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  QObject *pQVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  uVar3 = *(ushort *)(param_2 + 0x10);
  if (uVar3 < 5) {
    if (uVar3 == 2) {
      dVar2 = *(double *)(param_2 + 0x20);
      if (0.0 <= dVar2) {
        iVar6 = (int)(dVar2 + DAT_100e110f0);
      }
      else {
        iVar6 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar2);
      }
      dVar2 = *(double *)(param_2 + 0x28);
      if (0.0 <= dVar2) {
        iVar13 = (int)(dVar2 + DAT_100e110f0);
      }
      else {
        iVar13 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar2);
      }
      local_48 = CONCAT44(iVar13,iVar6);
      plVar8 = (long *)FUN_1007a8860(param_1,&local_48);
      if (plVar8 != (long *)0x0) {
        FUN_1007a7a20(param_1,plVar8);
        if (*(int *)(param_2 + 0x50) == 2) {
          uVar9 = (**(code **)(*plVar8 + 0x1a0))(plVar8);
          dVar2 = *(double *)(param_2 + 0x40);
          if (0.0 <= dVar2) {
            iVar6 = (int)(dVar2 + DAT_100e110f0);
          }
          else {
            iVar6 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + dVar2);
          }
          dVar2 = *(double *)(param_2 + 0x48);
          if (0.0 <= dVar2) {
            iVar13 = (int)(dVar2 + DAT_100e110f0);
          }
          else {
            iVar13 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                     (int)(DAT_100e110e0 + dVar2);
          }
          local_50 = CONCAT44(iVar13,iVar6);
          FUN_100862090(param_1,uVar9,&local_50);
        }
      }
    }
    else if (uVar3 == 4) {
      dVar2 = *(double *)(param_2 + 0x20);
      if (0.0 <= dVar2) {
        iVar6 = (int)(dVar2 + DAT_100e110f0);
      }
      else {
        iVar6 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + dVar2);
      }
      dVar2 = *(double *)(param_2 + 0x28);
      if (0.0 <= dVar2) {
        iVar13 = (int)(dVar2 + DAT_100e110f0);
      }
      else {
        iVar13 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dVar2);
      }
      local_58 = CONCAT44(iVar13,iVar6);
      lVar12 = FUN_1007a8860(param_1,&local_58);
      if (lVar12 != 0) {
        FUN_100862070(param_1);
      }
    }
  }
  else if (uVar3 == 5) {
    dVar2 = *(double *)(param_2 + 0x20);
    if (0.0 <= dVar2) {
      iVar6 = (int)(dVar2 + DAT_100e110f0);
    }
    else {
      iVar6 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar2);
    }
    dVar2 = *(double *)(param_2 + 0x28);
    if (0.0 <= dVar2) {
      iVar13 = (int)(dVar2 + DAT_100e110f0);
    }
    else {
      iVar13 = (int)((dVar2 - (double)(int)(DAT_100e110e0 + dVar2)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar2);
    }
    local_40 = CONCAT44(iVar13,iVar6);
    pQVar10 = (QObject *)FUN_1007a8860(param_1,&local_40);
    if (pQVar10 != (QObject *)0x0) {
      cVar5 = (**(code **)(*(long *)pQVar10 + 0x1e0))(pQVar10);
      if (cVar5 == '\0') {
        (**(code **)(*(long *)pQVar10 + 0x1b0))(pQVar10);
      }
    }
    if ((((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
        (pQVar4 = *(QObject **)(param_1 + 0x58), pQVar4 != (QObject *)0x0)) && (pQVar4 != pQVar10))
    {
      (**(code **)(*(long *)pQVar4 + 0x1b8))();
    }
    if (pQVar10 == (QObject *)0x0) {
      piVar11 = (int *)0x0;
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (piVar11 = (int *)0x0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0)) {
        piVar11 = (int *)0x0;
        if (*(long **)(param_1 + 0x68) != (long *)0x0) {
          pQVar1 = param_1 + 0x60;
          (**(code **)(**(long **)(param_1 + 0x68) + 0x1c8))();
          piVar7 = *(int **)pQVar1;
          piVar11 = (int *)0x0;
          if (piVar7 != (int *)0x0) {
            LOCK();
            *piVar7 = *piVar7 + -1;
            local_31 = *piVar7 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (*(void **)pQVar1 != (void *)0x0)) {
              operator_delete(*(void **)pQVar1);
            }
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined8 *)pQVar1 = 0;
            piVar11 = (int *)0x0;
          }
        }
      }
    }
    else {
      piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
    }
    piVar7 = *(int **)(param_1 + 0x50);
    if (piVar7 != piVar11) {
      if (piVar11 != (int *)0x0) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        local_31 = *piVar11 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x50);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x50));
        }
      }
      *(int **)(param_1 + 0x50) = piVar11;
      *(QObject **)(param_1 + 0x58) = pQVar10;
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar11);
      }
    }
  }
  else if (uVar3 == 0x6e) {
    pQVar10 = (QObject *)FUN_1007a8860(param_1,param_2 + 0x14);
    if (pQVar10 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
      piVar11 = *(int **)(param_1 + 0x60);
      if (piVar11 != piVar7) {
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          local_31 = *piVar7 != 0;
          UNLOCK();
          piVar11 = *(int **)(param_1 + 0x60);
        }
        if (piVar11 != (int *)0x0) {
          LOCK();
          *piVar11 = *piVar11 + -1;
          local_31 = *piVar11 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x60));
          }
        }
        *(int **)(param_1 + 0x60) = piVar7;
        *(QObject **)(param_1 + 0x68) = pQVar10;
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar7);
        }
      }
      (**(code **)(**(long **)(param_1 + 0x68) + 0x1c0))(*(long **)(param_1 + 0x68),param_2 + 0x1c);
    }
  }
  QWidget::event(param_1);
  return;
}

