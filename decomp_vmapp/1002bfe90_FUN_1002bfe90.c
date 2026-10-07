
uint FUN_1002bfe90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  bool bVar10;
  uint local_c4;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  undefined *local_40;
  undefined1 local_31;
  
  QString::QString(&local_68,0x7c);
  QString::section(&local_70,param_2,&local_68,1,2,0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bff13;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002bff13:
  iVar3 = QString::compare_helper
                    (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),"0fca|0004"
                     ,0xffffffff,1);
  if (iVar3 == 0) {
    bVar10 = false;
  }
  else {
    QString::QString(&local_60,0x7c);
    QString::section(&local_78,param_2,&local_60,1,2,0);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bffa0;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002bffa0:
    iVar3 = QString::compare_helper
                      (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),
                       "0fca|0001",0xffffffff,1);
    bVar10 = iVar3 != 0;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c0040;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1002c0040:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c0070;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002c0070:
  if (bVar10) {
    return 0xffffffff;
  }
  local_c4 = 0xffffffff;
  puVar9 = &DAT_1011c4aa0;
  uVar8 = 0;
  do {
    if ((*puVar9 < 5) && ((0x16U >> (*puVar9 & 0x1f) & 1) != 0)) {
      local_80 = *(QArrayData **)(puVar9 + 6);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      QString::QString(&local_58,0x7c);
      QString::section(&local_88,&local_80,&local_58,1,1,0);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c0131;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1002c0131:
      iVar3 = QString::compare_helper
                        (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),"0fca",
                         0xffffffff,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c0188;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1002c0188:
      if (iVar3 == 0) {
        QString::QString(&local_50,0x7c);
        QString::section(&local_90,&local_80,&local_50,0,1,0);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002c01f1;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1002c01f1:
        QString::QString(&local_48,0x7c);
        QString::section(&local_98,param_2,&local_48,0,1,0);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002c0251;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1002c0251:
        cVar2 = operator==(&local_90,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002c029d;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1002c029d:
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002c02d3;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1002c02d3:
        bVar10 = true;
        if (cVar2 == '\0') {
          lVar5 = FUN_1007d87f0();
          if ((ulong)(lVar5 - *(long *)(puVar9 + 2)) < 0x989681) {
            bVar10 = local_c4 != 0xffffffff;
            if (!bVar10) {
              local_c4 = (uint)uVar8;
            }
          }
          else {
            if (*puVar9 - 1 < 2) {
              FUN_1002bcd80();
            }
            if (-1 < DAT_1011c568c) {
              QString::toUtf8();
              lVar5 = *(long *)(local_a0 + 0x10);
              QString::toUtf8();
              FUN_1008e3970("","USB",0,"Release %s for %s (timed out)",local_a0 + lVar5);
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002c03b0;
                }
                QArrayData::deallocate(local_a8,1,8);
              }
LAB_1002c03b0:
              if (*(int *)local_a0 != -1) {
                if (*(int *)local_a0 != 0) {
                  LOCK();
                  *(int *)local_a0 = *(int *)local_a0 + -1;
                  local_31 = *(int *)local_a0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002c03e6;
                }
                QArrayData::deallocate(local_a0,1,8);
              }
            }
LAB_1002c03e6:
            FUN_1002b6210(uVar8 & 0xffffffff);
            bVar10 = false;
          }
        }
      }
      else {
        bVar10 = false;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c0440;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1002c0440:
      if (bVar10) {
        return 0xffffffff;
      }
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0xc;
  } while (uVar8 < 0x3d);
  if (local_c4 == 0xffffffff) {
    return 0xffffffff;
  }
  iVar3 = FUN_1002b8030(param_2);
  iVar6 = 3;
  if (local_c4 < 0x2f) {
    iVar6 = (0x1f < local_c4) + 1;
  }
  if (iVar3 == iVar6) {
    return 0xffffffff;
  }
  uVar4 = FUN_1002bd140(param_1,param_2);
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar7 = (ulong)uVar4;
  uVar8 = (ulong)local_c4;
  (&DAT_1011c4ab0)[uVar7 * 0xc] = (&DAT_1011c4ab0)[uVar8 * 0xc];
  uVar1 = (&DAT_1011c4aa8)[uVar8 * 6];
  *(undefined8 *)(&DAT_1011c4aa0 + uVar7 * 0xc) = *(undefined8 *)(&DAT_1011c4aa0 + uVar8 * 0xc);
  (&DAT_1011c4aa8)[uVar7 * 6] = uVar1;
  QString::operator=((QString *)(&DAT_1011c4ab8 + uVar7 * 6),(QString *)(&DAT_1011c4ab8 + uVar8 * 6)
                    );
  QString::operator=((QString *)(&DAT_1011c4ac0 + uVar7 * 0x30),
                     (QString *)(&DAT_1011c4ac0 + uVar8 * 0x30));
  FUN_10051afa0(&DAT_1011c4ac8 + uVar7 * 0x30,&DAT_1011c4ac8 + uVar8 * 0x30);
  local_40 = PTR_shared_null_100ba2188;
  FUN_10051afa0(&DAT_1011c4ac8 + uVar7 * 0x30,&local_40);
  FUN_100013180(&local_40);
  (&DAT_1011c4aa0)[uVar7 * 0xc] = 4;
  if (DAT_1011c568c < 0) {
    return uVar4;
  }
  QString::toUtf8();
  lVar5 = *(long *)(local_b0 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","USB",0,"Grabbing BlackBerry %s@%u due to %s@%u",local_b0 + lVar5,uVar4,
                local_b8 + *(long *)(local_b8 + 0x10),local_c4);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c060f;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1002c060f:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
  return uVar4;
}

