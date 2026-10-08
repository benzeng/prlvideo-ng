
undefined8 FUN_10073e510(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  QString local_60;
  QString local_58;
  QLocale local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QLocale::QLocale(local_50);
  QLocale::name();
  QString::fromUtf8_helper((char *)&local_40,0x1e03ba8);
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073e594;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10073e594:
  QLocale::~QLocale(local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  plVar7 = (long *)(param_2 + 0x50);
  plVar9 = (long *)*plVar7;
  uVar1 = *(uint *)(plVar9 + 4);
  plVar10 = plVar9;
  if (uVar1 != 0) {
    uVar4 = qHash(&local_58,*(uint *)((long)plVar9 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar5 = *(long **)(plVar9[1] + uVar2 * 8);
    if (plVar5 != plVar9) {
      plVar8 = (long *)(plVar9[1] + uVar2 * 8);
      do {
        plVar6 = plVar5;
        plVar10 = plVar9;
        if (*(uint *)(plVar5 + 1) == uVar4) {
          cVar3 = operator==(&local_58,(QString *)(plVar5 + 2));
          plVar6 = (long *)*plVar8;
          plVar9 = plVar6;
          plVar10 = (long *)*plVar7;
          if (cVar3 != '\0') break;
        }
        plVar9 = plVar10;
        plVar5 = (long *)*plVar6;
        plVar8 = plVar6;
        plVar10 = plVar9;
      } while (plVar5 != plVar9);
    }
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073e685;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10073e685:
  if (plVar9 == plVar10) {
    FUN_10002c180(param_1,plVar7,param_3);
  }
  else {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_60);
    FUN_10002c180(param_1,plVar7,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10073e6fe;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_10073e6fe:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

