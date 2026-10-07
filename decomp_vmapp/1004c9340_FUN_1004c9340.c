
int FUN_1004c9340(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  QArrayData *pQVar13;
  char cVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  QArrayData *pQVar18;
  QArrayData *local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_35;
  int local_34;
  
  if (*(short *)(param_2 + 0x14) != 0) {
    return -0xffffffd;
  }
  if (*(short *)(param_2 + 0x16) != 2) {
    return -0xffffffd;
  }
  lVar8 = FUN_1002a6120(param_2,0,0);
  lVar9 = FUN_1002a6120(param_2,1,1);
  if (lVar8 == 0) {
    return -0xffffffd;
  }
  if (lVar9 == 0) {
    return -0xffffffd;
  }
  if (*(uint *)(lVar8 + 8) < 10) {
    return -0xffffffd;
  }
  if (*(uint *)(lVar9 + 8) < 0x3e) {
    return -0xffffff7;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_1002a5990(lVar8,0,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4));
  pQVar18 = local_40;
  lVar8 = *(long *)(local_40 + 0x10);
  uVar10 = (ulong)*(uint *)(local_40 + lVar8 + 4);
  iVar7 = -0xffffffd;
  if ((ulong)(long)(int)*(uint *)(local_40 + 4) < uVar10 + 10) goto LAB_1004c9888;
  FUN_1004cf180(&local_48,*param_1 + 0x48,*(undefined4 *)(local_40 + lVar8));
  iVar7 = -0xfffffee;
  if (local_48 == (long *)0x0) goto LAB_1004c9888;
  iVar6 = (**(code **)(*local_48 + 0x18))();
  iVar7 = -0xfffffeb;
  if ((iVar6 == 2) && (iVar7 = -0xffffff1, *(char *)((long)local_48 + 0x29) == '\0')) {
    QString::QString(&local_50,(QChar *)(pQVar18 + lVar8 + 8),*(uint *)(pQVar18 + lVar8 + 4) >> 1);
    local_58 = (QArrayData *)QString::fromAscii_helper("\\",1);
    local_60 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::replace(&local_50,&local_58,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_35 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_35) goto LAB_1004c9522;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1004c9522:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_35 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_35) goto LAB_1004c9552;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1004c9552:
    uVar3 = *(uint *)(local_40 + 4);
    cVar14 = '\0';
    bVar16 = 0;
    bVar11 = 0;
    if ((ulong)(long)(int)uVar3 < uVar10 + 0x1a) {
LAB_1004c95dd:
      local_68 = (long *)0x0;
      iVar7 = FUN_1004da6a0(local_48,&local_50,bVar11,&local_68);
      if (iVar7 == 0) {
        cVar4 = (**(code **)(*local_68 + 0x18))();
        iVar7 = -0xfffffec;
        if (cVar4 == '\0') {
          uVar17 = *(uint *)(lVar9 + 8);
          local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
          QByteArray::resize((int)&local_70);
          if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
          }
          lVar8 = *(long *)(local_70 + 0x10);
          pQVar18 = local_70 + lVar8;
          if ((ulong)(long)(int)uVar3 < uVar10 + 0x1a) {
            lVar12 = lVar8 + 4;
            lVar15 = (ulong)uVar17 - 4;
            pQVar13 = (QArrayData *)0x0;
          }
          else {
            *(undefined8 *)(pQVar18 + 0x10) = 0;
            *(undefined8 *)(pQVar18 + 8) = 0;
            *(undefined8 *)pQVar18 = 0;
            *(undefined4 *)(local_70 + lVar8 + 4) = 0x18;
            *(undefined4 *)(local_70 + lVar8) = 0;
            lVar12 = lVar8 + 0x18;
            lVar15 = (ulong)uVar17 - 0x18;
            pQVar13 = pQVar18;
            pQVar18 = local_70 + lVar8 + 8;
          }
          iVar7 = (**(code **)(*local_68 + 0x20))(local_68,local_70 + lVar12,lVar15);
          bVar5 = (**(code **)(*local_68 + 0x18))();
          if (pQVar13 == (QArrayData *)0x0) {
LAB_1004c9736:
            if ((bVar5 & bVar16) != 1) goto LAB_1004c974f;
            *(int *)pQVar18 = 0;
          }
          else {
            if (bVar11 != 0) {
              pQVar13[0xc] = (QArrayData)((byte)pQVar13[0xc] | 1);
            }
            if (bVar16 != 0) {
              pQVar13[0xc] = (QArrayData)((byte)pQVar13[0xc] | 4);
            }
            if (cVar14 != '\0') {
              pQVar13[0xc] = (QArrayData)((byte)pQVar13[0xc] | 2);
            }
            *(int *)(pQVar13 + 0x10) = 1;
            if (bVar5 != 0) {
              pQVar13[0x14] = (QArrayData)((byte)pQVar13[0x14] | 1);
              goto LAB_1004c9736;
            }
LAB_1004c974f:
            *(byte *)((long)local_68 + 0xc) = bVar16;
            *(char *)((long)local_68 + 0xd) = cVar14;
            LOCK();
            piVar1 = (int *)(*param_1 + 0x40);
            local_34 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            local_34 = local_34 + 1;
            *(int *)pQVar18 = local_34;
            lVar8 = *param_1;
            QMutex::lock();
            FUN_1004d52a0(lVar8 + 0x78,&local_34,&local_68);
            *(long *)(DAT_1011cc970 + 0xf0) = *(long *)(DAT_1011cc970 + 0xf0) + 1;
            QMutex::unlock();
          }
          uVar3 = *(uint *)(local_70 + 4);
          FUN_1002a5a50(lVar9,0,local_70 + *(long *)(local_70 + 0x10));
          *(uint *)(lVar9 + 0x10) = (iVar7 - (int)lVar15) + uVar3;
          iVar7 = 0;
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_35 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_35) goto LAB_1004c9816;
            }
            QArrayData::deallocate(local_70,1,8);
            iVar7 = 0;
          }
        }
      }
LAB_1004c9816:
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    else {
      iVar7 = -0xffffff7;
      if (0x7b < *(uint *)(lVar9 + 8)) {
        uVar17 = 0;
        if (0xf < *(uint *)(local_40 + uVar10 + 10 + *(long *)(local_40 + 0x10))) {
          uVar17 = *(uint *)(local_40 + uVar10 + *(long *)(local_40 + 0x10) + 0xe);
          iVar7 = -0xffffffd;
          if ((uVar17 & 6) == 4) goto LAB_1004c9837;
        }
        cVar14 = (char)((uVar17 & 2) >> 1);
        bVar11 = (~(byte)uVar17 & 1 | DAT_10111cc6c == 0) ^ 1;
        bVar16 = (byte)((uVar17 & 4) >> 2);
        goto LAB_1004c95dd;
      }
    }
LAB_1004c9837:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_35 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_35) goto LAB_1004c9867;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1004c9867:
    if (local_48 == (long *)0x0) goto LAB_1004c9888;
  }
  LOCK();
  plVar2 = local_48 + 1;
  lVar8 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)(*local_48 + 0x10))();
  }
LAB_1004c9888:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar7;
      }
      local_35 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return iVar7;
}

