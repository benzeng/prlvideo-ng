
void FUN_100477360(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  QArrayData *pQVar7;
  uint uVar8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QDateTime local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  (**(code **)(*param_1 + 0x70))(&local_40,param_1);
  QDateTime::currentDateTime();
  QDateTime::toString(&local_50,local_58,1);
  QString::toLocal8Bit();
  FUN_1008e3970("","TISCommon",0,"[TIS database dump at %s]",local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100477402;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100477402:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100477432;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100477432:
  QDateTime::~QDateTime(local_58);
  uVar5 = (ulong)*(uint *)(local_40 + 8);
  if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
    lVar6 = 0;
    do {
      plVar1 = *(long **)(local_40 + ((int)uVar5 + lVar6) * 8 + 0x10);
      lVar2 = *plVar1;
      local_68 = *(QArrayData **)(lVar2 + 8);
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar7 = local_60 + *(long *)(local_60 + 0x10);
      puVar4 = (undefined8 *)FUN_100472bf0(*plVar1 + 0x58);
      local_78 = (QArrayData *)*puVar4;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"uid = \"%s\" [%s]",pQVar7,
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477531;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100477531:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477561;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100477561:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477594;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100477594:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004775ce;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004775ce:
      local_88 = *(QArrayData **)(*plVar1 + 0x10);
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"\tname     = \"%s\"",local_80 + *(long *)(local_80 + 0x10));
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477646;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_100477646:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477676;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100477676:
      uVar8 = *(uint *)(lVar2 + 0x24);
      if ((int)uVar8 < 0) {
        uVar3 = uVar8 & 0x7fffffff;
        uVar8 = *(uint *)(lVar2 + 0x20);
        FUN_1008e3970("","TISCommon",0,"\tinfo.ver = %u.%u.%u-%u",*(undefined4 *)(lVar2 + 0x18),
                      *(undefined4 *)(lVar2 + 0x1c),uVar3,uVar8);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0x20);
        FUN_1008e3970("","TISCommon",0,"\tinfo.ver = %u.%u.%u.%u",*(undefined4 *)(lVar2 + 0x18),
                      *(undefined4 *)(lVar2 + 0x1c),uVar3,uVar8);
      }
      FUN_1008e3970("","TISCommon",0,"\tinfo.intVer = %u.%u",*(undefined4 *)(lVar2 + 0x28),
                    *(undefined4 *)(lVar2 + 0x2c),uVar3,uVar8);
      local_98 = *(QArrayData **)(*plVar1 + 0x40);
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"\ttext     = \"%s\"",local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477783;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100477783:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004777b9;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004777b9:
      FUN_1008e3970("","TISCommon",0,"\tdata.sz  = %i",
                    *(undefined4 *)(*(long *)(*plVar1 + 0x48) + 4));
      QDateTime::toString(&local_a8,*plVar1 + 0x50,1);
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"\ttime     = %s",local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477856;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_100477856:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047788c;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_10047788c:
      local_b8 = *(QArrayData **)(*plVar1 + 0x60);
      if (1 < *(int *)local_b8 + 1U) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + 1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"\towner = %s",local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477916;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_100477916:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047794c;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_10047794c:
      QString::number((uint)&local_c8,*(int *)(*plVar1 + 0x68));
      QString::toLocal8Bit();
      FUN_1008e3970("","TISCommon",0,"\tflags = %s",local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004779ce;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_1004779ce:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100477a04;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100477a04:
      lVar6 = lVar6 + 1;
      uVar5 = (ulong)*(int *)(local_40 + 8);
    } while (lVar6 < (long)((long)*(int *)(local_40 + 0xc) - uVar5));
  }
  FUN_1008e3970("","TISCommon",0,"[/TIS database dump]");
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100479b10(&local_40,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                  local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
    QListData::dispose(local_40);
  }
  return;
}

