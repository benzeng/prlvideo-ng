
char FUN_1004173d0(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  undefined8 *puVar10;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QRegExp local_40 [15];
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("^P([0-9a-f]{1,2})=([0-9a-f]{1,16})$",0x23);
  QRegExp::QRegExp(local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041743d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10041743d:
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  if ((*(int *)(param_1 + 0x98) == 0) ||
     (((uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(),
       *(int *)(param_1 + 0x18 + (ulong)uVar3 * 4) != 3 ||
       (cVar6 = '\0', *(int *)(param_1 + 0x98) == 3)) &&
      ((uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(),
       *(int *)(param_1 + 0x18 + (ulong)uVar3 * 4) == 3 ||
       (cVar6 = '\0', *(int *)(param_1 + 0x98) != 3)))))) {
    lVar1 = *(long *)(param_1 + 0x668);
    lVar7 = 0;
    pcVar8 = (char *)(*(long *)(lVar1 + 0x10) + lVar1);
    if ((pcVar8 != (char *)0x0) && (*(uint *)(lVar1 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pcVar8[lVar7] == '\0') break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(lVar1 + 4));
    }
    local_58 = (QArrayData *)QString::fromAscii_helper(pcVar8,(int)lVar7);
    iVar4 = QRegExp::indexIn(local_40,&local_58,0,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100417529;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100417529:
    if (iVar4 == 0) {
      QRegExp::cap((int)&local_60);
      uVar5 = QString::toUInt((bool *)&local_60,0);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004175dc;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1004175dc:
      QRegExp::cap((int)&local_70);
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_50,(QByteArray *)&local_68);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100417638;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100417638:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100417668;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100417668:
      FUN_10041fa10(&local_50);
      QMutex::lock();
      iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
      cVar2 = '\0';
      if (iVar4 != 0) {
        cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648U);
      }
      QMutex::unlock();
      cVar6 = '\0';
      if (cVar2 != '\0') {
        FUN_100417920(param_1,*(undefined8 *)(param_1 + 0x640));
        if (*(void **)(param_1 + 0x640) != (void *)0x0) {
          _free(*(void **)(param_1 + 0x640));
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
        QMutex::lock();
        iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
                          (*(long **)(param_1 + 0x10),uVar5,&local_50);
        cVar2 = '\0';
        if (iVar4 != 0) {
          cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648U);
        }
        QMutex::unlock();
        cVar6 = '\0';
        if (cVar2 != '\0') {
          FUN_100416cc0(param_1);
          cVar6 = cVar2;
        }
      }
    }
    else {
      puVar10 = (undefined8 *)(param_1 + 0x668);
      puVar9 = (uint *)*puVar10;
      if ((1 < *puVar9) || (*(long *)(puVar9 + 4) != 0x18)) {
        QByteArray::reallocData(puVar10,puVar9[1] + 1,puVar9[2] >> 0x1f);
        puVar9 = (uint *)*puVar10;
      }
      FUN_1008e3970("","gdbstub",0,"invalid P command \'%s\'",(long)puVar9 + *(long *)(puVar9 + 4));
      cVar6 = '\0';
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100417777;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100417777:
  QRegExp::~QRegExp(local_40);
  return cVar6;
}

