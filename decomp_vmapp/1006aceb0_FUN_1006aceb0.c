
undefined1
FUN_1006aceb0(long param_1,QString *param_2,QString *param_3,QRegExp *param_4,long *param_5)

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
  QRegExp local_48 [8];
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
  pvVar7 = operator_new(0x88,(nothrow_t *)PTR_nothrow_100ba21c8);
  pvVar13 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    FUN_1006ac5f0(pvVar7);
    pvVar13 = pvVar7;
  }
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar8 == (long *)0x0) {
    if (pvVar13 != (void *)0x0) {
      FUN_1006b2470(pvVar13);
      operator_delete(pvVar13);
    }
    uVar10 = 0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)pvVar13;
    *plVar8 = (long)&PTR_FUN_10116d4e0;
    local_40 = plVar8;
    if (pvVar13 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      QString::operator=((QString *)plVar8[2],param_2);
      lVar2 = plVar8[2];
      QRegExp::QRegExp(local_48,param_3,1,0);
      QRegExp::operator=((QRegExp *)(lVar2 + 8),local_48);
      QRegExp::~QRegExp(local_48);
      QString::operator=((QString *)(plVar8[2] + 0x10),param_3);
      lVar2 = plVar8[2];
      QRegExp::operator=((QRegExp *)(lVar2 + 0x18),param_4);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_4 + 8);
      FUN_1006b1310(lVar2 + 0x28,param_4 + 0x10);
      QString::operator=((QString *)(lVar2 + 0x30),(QString *)(param_4 + 0x18));
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_4 + 0x20);
      FUN_1006b1310(lVar2 + 0x40,param_4 + 0x28);
      FUN_1006b1310(lVar2 + 0x48,param_4 + 0x30);
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_4 + 0x38);
      lVar2 = plVar8[2];
      if (*(long *)(lVar2 + 0x58) != *param_5) {
        FUN_1006b2930(&local_38,param_5);
        uVar3 = *(undefined8 *)(lVar2 + 0x58);
        *(undefined8 *)(lVar2 + 0x58) = local_38;
        local_38 = uVar3;
        FUN_1006a6010(&local_38);
      }
      plVar9 = (long *)FUN_1006b16c0((undefined8 *)(param_1 + 8),param_2);
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
      FUN_1006b1890(param_1 + 0x10,&local_40);
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

