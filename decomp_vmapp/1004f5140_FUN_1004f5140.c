
QString * FUN_1004f5140(QString *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined6 uVar12;
  QTypedArrayData<unsigned_short> *pQVar13;
  uint local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar13 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar10 = *(int *)(*param_2 + 4);
  uVar4 = QString::lastIndexOf(param_2,0x2e,0xffffffff,1);
  local_4c = 0xffffffff;
  if (uVar4 != iVar10 - 1U) {
    local_4c = uVar4;
  }
  local_4c = -(uint)(uVar4 == 0) | local_4c;
  uVar4 = local_4c;
  if ((int)local_4c < 0) {
    uVar4 = *(uint *)(*param_2 + 4);
  }
  lVar9 = 0;
  do {
    lVar9 = (long)(int)lVar9;
    do {
      if ((int)uVar4 <= (int)lVar9) {
        cVar2 = '\0';
        goto LAB_1004f5230;
      }
      uVar3 = *(ushort *)(*param_2 + *(long *)(*param_2 + 0x10) + lVar9 * 2);
      cVar2 = (char)uVar3;
      lVar9 = lVar9 + 1;
    } while ((uVar3 == 0x2e) || (0x5d < (ushort)(uVar3 - 0x21)));
    if ((ushort)(uVar3 - 0x61) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    else if ((*(uint *)(&DAT_100b457a0 + (ulong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
      cVar2 = '_';
    }
LAB_1004f5230:
    if (cVar2 == '\0') {
      if (*(int *)(pQVar13 + 4) == 0) {
        lVar9 = *param_2;
        lVar6 = (long)*(int *)(lVar9 + 4);
        lVar1 = *(long *)(lVar9 + 0x10);
        uVar11 = (ulong)*(ushort *)(lVar9 + lVar1);
        if ((lVar6 != 1) &&
           (uVar11 = (ulong)((uint)*(ushort *)(lVar1 + 2 + lVar9) +
                            (uint)*(ushort *)(lVar9 + lVar1) * 0x100), 2 < *(int *)(lVar9 + 4))) {
          lVar7 = 3;
          do {
            uVar4 = (uint)uVar11 & 0xffff;
            uVar4 = (uint)*(ushort *)(lVar9 + lVar1 + -2 + lVar7 * 2) * 0x100 +
                    (uVar4 >> 1 | uVar4 << 0xf);
            if (lVar7 < lVar6) {
              uVar4 = uVar4 + *(ushort *)(lVar9 + lVar1 + lVar7 * 2);
            }
            uVar11 = (ulong)uVar4;
            lVar8 = lVar7 + 1;
            lVar7 = lVar7 + 2;
          } while (lVar8 < lVar6);
        }
        uVar4 = (uint)uVar11;
        iVar10 = 0x37;
        if ((uVar4 & 0xf) < 10) {
          iVar10 = 0x30;
        }
        QString::append(param_1,iVar10 + (uVar4 & 0xf));
        uVar5 = (uint)(uVar11 >> 4) & 0xf;
        iVar10 = 0x37;
        if (uVar5 < 10) {
          iVar10 = 0x30;
        }
        QString::append(param_1,iVar10 + uVar5);
        uVar5 = (uint)(uVar11 >> 8) & 0xf;
        iVar10 = 0x37;
        if (uVar5 < 10) {
          iVar10 = 0x30;
        }
        uVar11 = (ulong)(iVar10 + uVar5);
        QString::append(param_1,uVar11);
        uVar12 = (undefined6)(uVar11 >> 0x10);
        iVar10 = (int)CONCAT62(uVar12,0x37);
        if ((uVar4 & 0xffff) < 0xa000) {
          iVar10 = (int)CONCAT62(uVar12,0x30);
        }
        QString::append(param_1,iVar10 + ((uVar4 & 0xf000) >> 0xc));
      }
      break;
    }
    QString::append(param_1,(int)cVar2);
    pQVar13 = param_1->field0_0x0;
  } while (*(int *)(pQVar13 + 4) != 4);
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (0 < (int)local_4c) {
    iVar10 = *(int *)(*param_2 + 4);
LAB_1004f5390:
    do {
      if ((int)local_4c < iVar10) {
        uVar3 = *(ushort *)(*param_2 + *(long *)(*param_2 + 0x10) + (long)(int)local_4c * 2);
        local_4c = local_4c + 1;
        if ((uVar3 == 0x2e) || (0x5d < (ushort)(uVar3 - 0x21))) goto LAB_1004f5390;
        if ((ushort)(uVar3 - 0x61) < 0x1a) {
          cVar2 = (char)uVar3 + -0x20;
        }
        else {
          if ((*(uint *)(&DAT_100b457a0 + (ulong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
            uVar3 = 0x5f;
          }
          cVar2 = (char)uVar3;
        }
      }
      else {
        cVar2 = '\0';
      }
      if ((cVar2 == '\0') || (QString::append(&local_40,(int)cVar2), *(int *)(local_40 + 4) == 3))
      break;
    } while( true );
  }
  QString::append(param_1,0x7e);
  FUN_1004f49a0(&local_48,param_2);
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004f5472;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004f5472:
  if (*(int *)(local_40 + 4) != 0) {
    QString::append(param_1,0x2e);
    QString::append(param_1);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

