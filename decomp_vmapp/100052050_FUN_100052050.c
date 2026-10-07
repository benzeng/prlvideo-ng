
void FUN_100052050(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar4 = CVmTools::getDragAndDrop();
  cVar5 = CVmTools::getDragAndDrop();
  bVar6 = CVmTools::isIsolatedVm();
  CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar4 + '\x10'));
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar5 + '\x10'));
  cVar4 = operator==(&local_40,&local_48);
  bVar7 = 1;
  if (cVar4 != '\0') {
    bVar7 = CVmTools::isIsolatedVm();
    bVar7 = bVar7 ^ bVar6;
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100052128;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100052128:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005215c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10005215c:
  if (bVar7 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    plVar8 = operator_new(0x20);
    bVar7 = DragAndDrop::isEnabled();
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = param_1;
    *plVar8 = (long)&PTR_FUN_100bef4b8;
    *(byte *)(plVar8 + 3) = bVar7 & (bVar6 ^ 1);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    cVar4 = FUN_100041750(uVar2,plVar8);
    if (cVar4 == '\0') {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}

