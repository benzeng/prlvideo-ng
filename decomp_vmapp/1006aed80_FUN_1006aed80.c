
undefined1
FUN_1006aed80(int *param_1,undefined8 param_2,long param_3,QString *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QString QVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  QString *pQVar9;
  QString *pQVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  QArrayData *local_78;
  QArrayData *local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_3 + 0x10);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  iVar12 = 0;
  QRegExp::indexIn(param_3 + 0x28,&local_40,0,0);
  lVar14 = *(long *)(param_3 + 0x20);
  lVar2 = *param_5;
  iVar7 = (int)(param_3 + 0x28);
  iVar13 = 0;
  if (lVar14 != lVar2) {
    iVar6 = *(int *)(lVar14 + 0xc);
    iVar1 = *(int *)(lVar14 + 8);
    iVar13 = iVar12;
    if (iVar6 - iVar1 == *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8)) {
      if (iVar6 != iVar1) {
        pQVar10 = (QString *)(lVar14 + 0x10 + (long)iVar1 * 8);
        pQVar9 = (QString *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
        lVar14 = (long)iVar6 * 8 + (long)iVar1 * -8;
        do {
          cVar5 = operator==(pQVar10,pQVar9);
          if (cVar5 == '\0') goto LAB_1006aee72;
          pQVar10 = pQVar10 + 1;
          pQVar9 = pQVar9 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
    }
    else {
LAB_1006aee72:
      if (*(int *)(*(long *)(param_3 + 0x50) + 8) < *(int *)(*(long *)(param_3 + 0x50) + 0xc)) {
        uVar11 = 0;
        iVar13 = 0;
        do {
          if ((long)*(int *)(*param_5 + 0xc) - (long)*(int *)(*param_5 + 8) <= (long)uVar11) break;
          FUN_10052c020((long *)(param_3 + 0x50),uVar11 & 0xffffffff);
          iVar6 = QRegExp::pos(iVar7);
          lVar14 = *param_5;
          iVar12 = *(int *)(lVar14 + 8);
          QRegExp::cap((int)&local_48);
          QString::replace((int)&local_40,iVar6 + iVar13,(QString *)(ulong)*(uint *)(local_48 + 4));
          iVar12 = *(int *)(*(long *)(lVar14 + 0x10 + ((long)iVar12 + uVar11) * 8) + 4);
          iVar6 = *(int *)(local_48 + 4);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006aef6e;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1006aef6e:
          iVar13 = (iVar12 + iVar13) - iVar6;
          uVar11 = uVar11 + 1;
          lVar14 = *(long *)(param_3 + 0x50);
        } while ((long)uVar11 < (long)*(int *)(lVar14 + 0xc) - (long)*(int *)(lVar14 + 8));
      }
    }
  }
  cVar5 = operator==((QString *)(param_3 + 0x18),param_4);
  if (cVar5 == '\0') {
    iVar7 = QRegExp::pos(iVar7);
    QRegExp::cap((int)&local_50);
    QString::replace((int)&local_40,iVar7 + iVar13,(QString *)(ulong)*(uint *)(local_50 + 4));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006af042;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1006af042:
  pQVar10 = (QString *)(param_3 + 0x10);
  if ((*param_1 == 2) || (*(int *)(local_40.field0_0x0 + 4) == *(int *)(pQVar10->field0_0x0 + 4))) {
    cVar5 = FUN_1006af510();
    QVar4.field0_0x0 = local_40.field0_0x0;
    if (cVar5 != '\0') {
      uVar8 = 1;
      QString::operator=(pQVar10,&local_40);
      goto LAB_1006af2a7;
    }
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar14 = *(long *)(local_68 + 0x10);
    pQVar3 = (QArrayData *)pQVar10->field0_0x0;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","KeyValueDataParser",0,
                  "Error: can\'t validate string \'%s\' after update, original \'%s\'",
                  local_68 + lVar14,local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006af14e;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1006af14e:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006af17e;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1006af17e:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006af1ae;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1006af1ae:
    if (*(int *)QVar4.field0_0x0 == -1) {
      uVar8 = 0;
    }
    else {
      if (*(int *)QVar4.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar4.field0_0x0 = *(int *)QVar4.field0_0x0 + -1;
        local_31 = *(int *)QVar4.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar8 = 0;
          goto LAB_1006af2a7;
        }
      }
      QArrayData::deallocate((QArrayData *)QVar4.field0_0x0,2,8);
      uVar8 = 0;
    }
    goto LAB_1006af2a7;
  }
  pQVar3 = (QArrayData *)((QString *)(param_3 + 0x18))->field0_0x0;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","KeyValueDataParser",0,
                "Error: update line by key \'%s\' with line size change is not permitted!",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006af240;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1006af240:
  if (*(int *)pQVar3 == -1) {
    uVar8 = 0;
  }
  else {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        uVar8 = 0;
        goto LAB_1006af2a7;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
    uVar8 = 0;
  }
LAB_1006af2a7:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

