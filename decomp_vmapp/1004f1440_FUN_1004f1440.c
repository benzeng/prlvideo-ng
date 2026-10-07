
undefined1 FUN_1004f1440(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar3 = QString::indexOf(param_1,&DAT_1011cc840,0,0);
  if (iVar3 < 1) {
LAB_1004f1497:
    uVar7 = FUN_1004efcd0(param_1);
    uVar7 = uVar7 & 0xffffffff;
LAB_1004f14a1:
    if ((int)uVar7 == 0) {
      return 0;
    }
  }
  else {
    uVar7 = (long)iVar3 + (long)*(int *)(DAT_1011cc840 + 4);
    lVar1 = *param_1;
    iVar3 = (int)uVar7;
    if (iVar3 != *(int *)(lVar1 + 4)) {
      if ((iVar3 == 0) || (*(short *)(lVar1 + *(long *)(lVar1 + 0x10) + uVar7 * 2) != 0x2f))
      goto LAB_1004f1497;
      goto LAB_1004f14a1;
    }
    if (iVar3 == 0) goto LAB_1004f1497;
  }
  QString::insert((int)param_1,(QChar *)(uVar7 & 0xffffffff),
                  (int)*(undefined8 *)(DAT_1011cc838 + 0x10) + (int)DAT_1011cc838);
  uVar6 = (int)uVar7 + *(int *)(DAT_1011cc838 + 4);
  uVar7 = (ulong)uVar6;
  QString::left((int)&local_30);
  QString::toUtf8_helper(&local_38);
  iVar4 = _mkdir((char *)(local_38.field0_0x0 + *(long *)(local_38.field0_0x0 + 0x10)),0x1ff);
  iVar3 = 0;
  if (iVar4 == -1) {
    piVar5 = ___error();
    iVar3 = *piVar5;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004f153d;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
  }
LAB_1004f153d:
  if ((0 < DAT_1011b55f8) && (iVar3 != 0x11 && (iVar3 != 0 && iVar3 != 2))) {
    QString::toUtf8_helper(&local_40);
    FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to create %s",iVar3,
                  (QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)));
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004f15cc;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
    }
  }
LAB_1004f15cc:
  lVar1 = *param_1;
  uVar8 = *(uint *)(lVar1 + 4);
  if ((int)uVar6 < (int)uVar8) {
    uVar7 = (ulong)(int)uVar6;
    do {
      if (((long)*(int *)(lVar1 + 4) <= (long)uVar7) ||
         (*(short *)(*(long *)(lVar1 + 0x10) + lVar1 + uVar7 * 2) != 0x2f)) break;
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar8);
  }
  uVar6 = QString::indexOf(param_1,0x2f,uVar7 & 0xffffffff,1);
  if (-1 < (int)uVar6) {
    uVar8 = uVar6;
  }
  if ((int)uVar7 < (int)uVar8) {
    QString::left((int)&local_48);
    cVar2 = FUN_1004f1030(&local_48);
    if (cVar2 != '\0') {
      QString::replace((int)param_1,0,(QString *)(ulong)uVar8);
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004f1679;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1004f1679:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 1;
}

