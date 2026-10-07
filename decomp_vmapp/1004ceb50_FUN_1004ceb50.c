
long * FUN_1004ceb50(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 *puVar5;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  lVar2 = *(long *)(param_2 + 8);
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    puVar5 = (undefined8 *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    do {
      plVar3 = *(long **)*puVar5;
      if (plVar3 != (long *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      QString::toUpper_helper(&local_40);
      QString::toUpper_helper(&local_48);
      cVar4 = operator==(&local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cec0c;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1004cec0c:
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cec3c;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1004cec3c:
      if (cVar4 != '\0') {
        cVar4 = FUN_1004d84c0(plVar3);
        if (cVar4 == '\0') {
          *param_1 = 0;
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        else {
          *param_1 = (long)plVar3;
          if (plVar3 != (long *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar3 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        goto LAB_1004cec8b;
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(param_2 + 8) + 0x10 +
                       (long)*(int *)(*(long *)(param_2 + 8) + 0xc) * 8));
  }
  *param_1 = 0;
LAB_1004cec8b:
  QMutex::unlock();
  return param_1;
}

