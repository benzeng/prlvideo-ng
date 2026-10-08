
QString * FUN_100a5cea0(QString *param_1,long *param_2)

{
  Node *pNVar1;
  undefined *puVar2;
  char cVar3;
  Node *pNVar4;
  int iVar5;
  long *plVar6;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pNVar1 = (Node *)*param_2;
  iVar5 = *(int *)(pNVar1 + 0x20);
  if (iVar5 == 0) {
    return param_1;
  }
  plVar6 = *(long **)(pNVar1 + 8);
  while (pNVar4 = (Node *)*plVar6, pNVar4 == pNVar1) {
    iVar5 = iVar5 + -1;
    plVar6 = plVar6 + 1;
    if (iVar5 == 0) {
      return param_1;
    }
  }
  do {
    local_48 = (QArrayData *)puVar2;
    if ((*(long *)(pNVar4 + 0x18) != 0) &&
       (cVar3 = FUN_100a5a520(*(long *)(pNVar4 + 0x18),&local_48), cVar3 != '\0')) {
      QString::fromUtf8_helper((char *)&local_58,0x1e3d327);
      QString::append(&local_58);
      local_50.field0_0x0 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
      QString::append(&local_50);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5cfbd;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a5cfbd:
      QString::append(param_1);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5cff9;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100a5cff9:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5d030;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
LAB_100a5d030:
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a5d06b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a5d06b:
    if (pNVar4 == (Node *)*param_2) {
      return param_1;
    }
  } while( true );
}

