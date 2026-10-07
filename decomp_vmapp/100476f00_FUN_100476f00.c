
undefined8 FUN_100476f00(long param_1,QString *param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  QString local_40;
  undefined1 local_31;
  
  plVar6 = *(long **)(param_1 + 0x20);
  plVar8 = (long *)(param_1 + 0x20);
  uVar1 = *(uint *)(plVar6 + 4);
  plVar9 = plVar8;
  if (uVar1 != 0) {
    uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar1;
    plVar3 = *(long **)(plVar6[1] + uVar2 * 8);
    plVar9 = (long *)(plVar6[1] + uVar2 * 8);
    while (plVar7 = plVar3, plVar7 != plVar6) {
      if (*(uint *)(plVar7 + 1) == uVar5) {
        cVar4 = operator==(param_2,(QString *)(plVar7 + 2));
        if (cVar4 != '\0') {
          plVar6 = (long *)*plVar8;
          break;
        }
        plVar7 = (long *)*plVar9;
        plVar6 = (long *)*plVar8;
      }
      plVar9 = plVar7;
      plVar3 = (long *)*plVar7;
    }
  }
  if (plVar6 != (long *)*plVar9) {
    QString::operator=(param_3,(QString *)((long *)*plVar9 + 3));
    return 1;
  }
  if (param_3->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return 0;
}

