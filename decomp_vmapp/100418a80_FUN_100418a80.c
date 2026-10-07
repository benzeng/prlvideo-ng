
char FUN_100418a80(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QRegExp local_40 [15];
  undefined1 local_31;
  
  local_48 = (QArrayData *)
             QString::fromAscii_helper("^M([0-9a-f]{1,16}),([0-9a-f]{1,16}):([0-9a-f]+)$",0x30);
  QRegExp::QRegExp(local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418af0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100418af0:
  lVar1 = *param_2;
  lVar8 = 0;
  pcVar9 = (char *)(*(long *)(lVar1 + 0x10) + lVar1);
  if ((pcVar9 != (char *)0x0) && (*(uint *)(lVar1 + 4) != 0)) {
    lVar8 = 0;
    do {
      if (pcVar9[lVar8] == '\0') break;
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(lVar1 + 4));
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(pcVar9,(int)lVar8);
  iVar5 = QRegExp::indexIn(local_40,&local_50,0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418b69;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100418b69:
  if (iVar5 != 0) {
    puVar10 = (uint *)*param_2;
    if ((1 < *puVar10) || (*(long *)(puVar10 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar10[1] + 1,puVar10[2] >> 0x1f);
      puVar10 = (uint *)*param_2;
    }
    cVar4 = '\0';
    FUN_1008e3970("","gdbstub",0,"invalid M command \'%s\'",(long)puVar10 + *(long *)(puVar10 + 4));
    goto LAB_100418d98;
  }
  QRegExp::cap((int)&local_58);
  uVar6 = QString::toULongLong((bool *)&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418c14;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100418c14:
  QRegExp::cap((int)&local_60);
  uVar7 = QString::toULong((bool *)&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418c69;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100418c69:
  QRegExp::cap((int)&local_70);
  QString::toLatin1();
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418cb8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100418cb8:
  FUN_10041fa10(&local_68);
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x10);
  pcVar3 = *(code **)(*plVar2 + 0x70);
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  iVar5 = (*pcVar3)(plVar2,uVar6,uVar7,local_68 + *(long *)(local_68 + 0x10));
  cVar4 = '\0';
  if (iVar5 != 0) {
    cVar4 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
  }
  QMutex::unlock();
  if (cVar4 != '\0') {
    if (*(void **)(param_1 + 0x640) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x640));
      *(undefined8 *)(param_1 + 0x640) = 0;
    }
    FUN_100416cc0(param_1);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418d98;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100418d98:
  QRegExp::~QRegExp(local_40);
  return cVar4;
}

