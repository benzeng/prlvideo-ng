
char FUN_10041b9b0(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint *puVar14;
  ulong uVar15;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QRegExp local_40 [15];
  undefined1 local_31;
  
  local_48 = (QArrayData *)
             QString::fromAscii_helper("^[zZ]([0-4]),([0-9a-f]{1,16}),([0-9a-f]{1,16})$",0x2f);
  QRegExp::QRegExp(local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041ba21;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10041ba21:
  lVar2 = *param_2;
  lVar12 = 0;
  pcVar13 = (char *)(*(long *)(lVar2 + 0x10) + lVar2);
  if ((pcVar13 != (char *)0x0) && (*(uint *)(lVar2 + 4) != 0)) {
    lVar12 = 0;
    do {
      if (pcVar13[lVar12] == '\0') break;
      lVar12 = lVar12 + 1;
    } while ((uint)lVar12 < *(uint *)(lVar2 + 4));
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(pcVar13,(int)lVar12);
  iVar7 = QRegExp::indexIn(local_40,&local_50,0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041ba99;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10041ba99:
  if (iVar7 != 0) {
    puVar14 = (uint *)*param_2;
    if ((1 < *puVar14) || (*(long *)(puVar14 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar14[1] + 1,puVar14[2] >> 0x1f);
      puVar14 = (uint *)*param_2;
    }
    FUN_1008e3970("","gdbstub",0,"invalid command \'%s\'",(long)puVar14 + *(long *)(puVar14 + 4));
    cVar10 = '\0';
    goto LAB_10041bd49;
  }
  QRegExp::cap((int)&local_58);
  bVar5 = QString::toUInt((bool *)&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041bb45;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10041bb45:
  QRegExp::cap((int)&local_60);
  uVar9 = QString::toULongLong((bool *)&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041bb9b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10041bb9b:
  QRegExp::cap((int)&local_68);
  uVar8 = QString::toInt((bool *)&local_68,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041bbf0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10041bbf0:
  if (bVar5 < 5) {
    cVar1 = *(char *)(*param_2 + *(long *)(*param_2 + 0x10));
    uVar15 = 0x101010100 >> (bVar5 << 3 & 0x3f);
    uVar11 = 0x301020000 >> (bVar5 << 3 & 0x3f);
    QMutex::lock();
    plVar3 = *(long **)(param_1 + 0x10);
    if (cVar1 == 'z') {
      iVar7 = (**(code **)(*plVar3 + 0x90))(plVar3,uVar9,uVar8,uVar15 & 0xff,uVar11 & 0xff);
    }
    else {
      iVar7 = (**(code **)(*plVar3 + 0x88))(plVar3,uVar9,uVar8,uVar15 & 0xff,uVar11 & 0xff);
    }
    cVar6 = '\0';
    if (iVar7 != 0) {
      cVar6 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
    }
    QMutex::unlock();
    cVar10 = '\0';
    if (cVar6 != '\0') {
      pvVar4 = *(void **)(param_1 + 0x640);
      iVar7 = *(int *)((long)pvVar4 + 0x10);
      cVar10 = cVar6;
      if (cVar1 == 'z') {
        if (pvVar4 != (void *)0x0) {
          _free(pvVar4);
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
        if (iVar7 == 0) {
          FUN_100416cc0(param_1);
        }
        else {
          FUN_10041cf30(param_1);
        }
      }
      else {
        if (pvVar4 != (void *)0x0) {
          _free(pvVar4);
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
        if (iVar7 == 0) {
          FUN_100416cc0(param_1);
        }
        else {
          FUN_10041cf30(param_1);
        }
      }
    }
  }
  else {
    cVar10 = '\x01';
    FUN_10041a500(param_1);
  }
LAB_10041bd49:
  QRegExp::~QRegExp(local_40);
  return cVar10;
}

