
undefined8 FUN_1000cd260(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  QArrayData *pQVar4;
  long lVar5;
  long lVar6;
  QString local_40;
  QString local_38;
  long *local_30;
  undefined1 local_21;
  
  FUN_1000c81f0(param_1,0x20000000);
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) goto LAB_1000cd38b;
  FUN_10011a560(&local_30,param_2);
  lVar5 = 0;
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    lVar5 = local_30[2];
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  FUN_10012bf70(&local_38,lVar5);
  QString::operator=((QString *)(param_1 + 0x358),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cd31e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000cd31e:
  FUN_10012c030(&local_40,lVar5);
  QString::operator=((QString *)(param_1 + 0x440),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cd36a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000cd36a:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
LAB_1000cd38b:
  FUN_10008fa70(param_1,9);
  puVar2 = PTR_shared_null_100ba2188;
  if (*(int *)PTR_shared_null_100ba2188 != -1) {
    if (*(int *)PTR_shared_null_100ba2188 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba2188 = *(int *)PTR_shared_null_100ba2188 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return 0;
      }
    }
    lVar5 = *(long *)(puVar2 + 8);
    if ((int)((ulong)lVar5 >> 0x20) != (int)lVar5) {
      lVar6 = (long)(int)lVar5 * 8 + (lVar5 >> 0x20) * -8;
      puVar3 = (undefined8 *)(puVar2 + (lVar5 >> 0x20) * 8 + 8);
      do {
        pQVar4 = (QArrayData *)*puVar3;
        if (*(int *)pQVar4 == 0) {
LAB_1000cd410:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_21 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_21) {
            pQVar4 = (QArrayData *)*puVar3;
            goto LAB_1000cd410;
          }
        }
        puVar3 = puVar3 + -1;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_100ba2188);
  }
  return 0;
}

