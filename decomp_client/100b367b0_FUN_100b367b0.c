
undefined1
FUN_100b367b0(long param_1,QString *param_2,QRegExp *param_3,QString *param_4,QRegExp *param_5,
             long *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  long *local_40;
  undefined8 local_38;
  
  plVar8 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(plVar8 + 4);
  if (uVar1 != 0) {
    uVar6 = qHash(param_2,*(uint *)((long)plVar8 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar1;
    plVar11 = *(long **)(plVar8[1] + uVar4 * 8);
    if (plVar11 != plVar8) {
      plVar9 = (long *)(plVar8[1] + uVar4 * 8);
      do {
        plVar12 = plVar8;
        if (*(uint *)(plVar11 + 1) == uVar6) {
          cVar5 = operator==(param_2,(QString *)(plVar11 + 2));
          plVar8 = (long *)*plVar9;
          plVar12 = *(long **)(param_1 + 8);
          plVar11 = plVar8;
          if (cVar5 != '\0') break;
        }
        plVar8 = plVar12;
        plVar9 = plVar11;
        plVar11 = (long *)*plVar9;
        plVar12 = plVar8;
      } while (plVar11 != plVar8);
      if (plVar8 != plVar12) {
        return 0;
      }
    }
  }
  pvVar7 = operator_new(0x88,(nothrow_t *)PTR_nothrow_1021e1620);
  pvVar13 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    FUN_100b361c0(pvVar7);
    pvVar13 = pvVar7;
  }
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar8 == (long *)0x0) {
    if (pvVar13 != (void *)0x0) {
      FUN_100b3bf80(pvVar13);
      operator_delete(pvVar13);
    }
    uVar10 = 0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)pvVar13;
    *plVar8 = (long)&PTR_FUN_1022cf3a0;
    local_40 = plVar8;
    if (pvVar13 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      QString::operator=((QString *)plVar8[2],param_2);
      QRegExp::operator=((QRegExp *)(plVar8[2] + 8),param_3);
      QString::operator=((QString *)(plVar8[2] + 0x10),param_4);
      lVar2 = plVar8[2];
      QRegExp::operator=((QRegExp *)(lVar2 + 0x18),param_5);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_5 + 8);
      FUN_1002749f0(lVar2 + 0x28,param_5 + 0x10);
      QString::operator=((QString *)(lVar2 + 0x30),(QString *)(param_5 + 0x18));
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_5 + 0x20);
      FUN_1002749f0(lVar2 + 0x40,param_5 + 0x28);
      FUN_1002749f0(lVar2 + 0x48,param_5 + 0x30);
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_5 + 0x38);
      lVar2 = plVar8[2];
      if (*(long *)(lVar2 + 0x58) != *param_6) {
        FUN_100b3c440(&local_38,param_6);
        uVar3 = *(undefined8 *)(lVar2 + 0x58);
        *(undefined8 *)(lVar2 + 0x58) = local_38;
        local_38 = uVar3;
        FUN_100b2e680(&local_38);
      }
      plVar9 = (long *)FUN_100b3b1d0((undefined8 *)(param_1 + 8),param_2);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar11 = (long *)*plVar9;
      *plVar9 = (long)plVar8;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar9 = plVar11 + 1;
        lVar2 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      FUN_100b3b3a0(param_1 + 0x10,&local_40);
      uVar10 = 1;
      if (plVar8 == (long *)0x0) {
        return 1;
      }
    }
    LOCK();
    plVar11 = plVar8 + 1;
    lVar2 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return uVar10;
}

