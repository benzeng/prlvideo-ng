
char FUN_1004185f0(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QRegExp local_38 [15];
  undefined1 local_29;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("^m([0-9a-f]{1,16}),([0-9a-f]{1,16})$",0x24);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10041865e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10041865e:
  lVar1 = *param_2;
  lVar7 = 0;
  pcVar8 = (char *)(*(long *)(lVar1 + 0x10) + lVar1);
  if ((pcVar8 != (char *)0x0) && (*(uint *)(lVar1 + 4) != 0)) {
    lVar7 = 0;
    do {
      if (pcVar8[lVar7] == '\0') break;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(lVar1 + 4));
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(pcVar8,(int)lVar7);
  iVar3 = QRegExp::indexIn(local_38,&local_48,0,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004186d9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004186d9:
  if (iVar3 != 0) {
    puVar9 = (uint *)*param_2;
    if ((1 < *puVar9) || (*(long *)(puVar9 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar9[1] + 1,puVar9[2] >> 0x1f);
      puVar9 = (uint *)*param_2;
    }
    FUN_1008e3970("","gdbstub",0,"invalid m command \'%s\'",(long)puVar9 + *(long *)(puVar9 + 4));
    cVar6 = '\0';
    goto LAB_100418833;
  }
  QRegExp::cap((int)&local_50);
  uVar5 = QString::toULongLong((bool *)&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100418783;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100418783:
  QRegExp::cap((int)&local_58);
  uVar4 = QString::toULong((bool *)&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004187d8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004187d8:
  QMutex::lock();
  iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x68))(*(long **)(param_1 + 0x10),uVar5,uVar4);
  cVar2 = '\0';
  if (iVar3 != 0) {
    cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
  }
  QMutex::unlock();
  cVar6 = '\0';
  if (cVar2 != '\0') {
    FUN_100418960(param_1);
    cVar6 = cVar2;
  }
LAB_100418833:
  QRegExp::~QRegExp(local_38);
  return cVar6;
}

