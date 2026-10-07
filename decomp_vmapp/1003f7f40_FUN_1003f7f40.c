
void FUN_1003f7f40(undefined8 param_1,QString *param_2,QString *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  QArrayData *pQVar6;
  QString *this;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  FUN_1003f7df0(&local_40,param_1,param_2);
  if ((local_40 == (long *)0x0) || (plVar5 = local_40, local_40[2] == 0)) {
    pauVar4 = operator_new(0x10);
    auVar9._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar9._0_8_ = PTR_shared_null_100ba20d0;
    auVar9._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    *pauVar4 = auVar9;
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar3 = PTR_shared_null_100ba20d0;
    if (plVar5 == (long *)0x0) {
      if (*(int *)PTR_shared_null_100ba20d0 != -1) {
        pQVar6 = (QArrayData *)PTR_shared_null_100ba20d0;
        if (*(int *)PTR_shared_null_100ba20d0 != 0) {
          LOCK();
          *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
          local_33 = *(int *)puVar3 != 0;
          UNLOCK();
          if ((bool)local_33) goto LAB_1003f8020;
          pQVar6 = *(QArrayData **)((long)*pauVar4 + 8);
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_1003f8020:
      pQVar6 = *(QArrayData **)*pauVar4;
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_32 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_1003f804e;
          pQVar6 = *(QArrayData **)*pauVar4;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_1003f804e:
      operator_delete(pauVar4);
      bVar2 = true;
      plVar5 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)pauVar4;
      *plVar5 = (long)&PTR_FUN_101119bd0;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar2 = false;
    }
    plVar8 = plVar5;
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        lVar7 = *local_40;
        local_40 = plVar5;
        (**(code **)(lVar7 + 0x10))();
        plVar8 = local_40;
      }
    }
    local_40 = plVar8;
    if (!bVar2) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    this = (QString *)0x0;
    if (plVar5 != (long *)0x0) {
      this = (QString *)plVar5[2];
    }
    QString::operator=(this,param_2);
    FUN_1003f8630(param_1,&local_40);
    plVar8 = (long *)0x0;
    lVar7 = 0;
    if (plVar5 == (long *)0x0) goto LAB_1003f80e3;
  }
  plVar8 = plVar5;
  lVar7 = plVar8[2];
LAB_1003f80e3:
  QString::operator=((QString *)(lVar7 + 8),param_3);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}

