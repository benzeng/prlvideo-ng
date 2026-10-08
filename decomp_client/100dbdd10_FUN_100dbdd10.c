
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100dbdd10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_2 + 8) != '\0') {
    piVar3 = *(int **)(param_2 + 0x78);
    *param_1 = piVar3;
    if (*piVar3 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    return param_1;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  auVar6._8_4_ = (int)((ulong)uVar1 >> 0x20);
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = _UNK_100e11114;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  auVar8._8_4_ = (int)((ulong)uVar2 >> 0x20);
  auVar8._0_8_ = uVar2;
  auVar8._12_4_ = _UNK_100e11114;
  dVar7 = (double)CONCAT44(_DAT_100e11110,(int)uVar2) - _DAT_100e11120;
  dVar9 = auVar8._8_8_ - _UNK_100e11128;
  dVar10 = dVar7 + dVar9;
  dVar7 = (dVar7 + dVar9) / DAT_101db3910 +
          (((double)CONCAT44(_DAT_100e11110,(int)uVar1) - _DAT_100e11120) +
          (auVar6._8_8_ - _UNK_100e11128)) / DAT_101db3910;
  iVar4 = (int)(dVar7 / DAT_101db3918);
  iVar5 = (int)((dVar7 - (double)(iVar4 * 0xe10)) / DAT_101db3920);
  if (iVar4 == 0) {
    if (iVar5 != 0) {
      local_90 = (QArrayData *)QString::fromAscii_helper("%1",2);
      QString::arg(&local_88,&local_90,(long)iVar5,0,10,0x20,dVar7,dVar10);
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_30,0x1e31af0);
      QString::append(&local_80);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100dbe117;
        }
        QArrayData::deallocate(local_30,2,8);
      }
LAB_100dbe117:
      QString::append(&local_48);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_21 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100dbe154;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100dbe154:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100dbe184;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100dbe184:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_21 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100dbe1ba;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    }
  }
  else {
    local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_58,&local_60,(long)iVar4,0,10,0x20,dVar7,dVar10);
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1e31af0);
    QString::append(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbde82;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100dbde82:
    QString::append(&local_48);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbdebf;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100dbdebf:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbdeef;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100dbdeef:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbdf1f;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100dbdf1f:
    local_78 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_70,&local_78,(long)iVar5,2,10,0x30);
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1e31af0);
    QString::append(&local_68);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbdfc0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100dbdfc0:
    QString::append(&local_48);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbdffd;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100dbdffd:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbe02d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100dbe02d:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100dbe1ba;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100dbe1ba:
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg((dVar7 - (double)iVar4 * DAT_101db3918) - (double)iVar5 * DAT_101db3920,&local_98,
               &local_a0,5,0x66,2,0x30);
  QString::append(&local_48);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100dbe26f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100dbe26f:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100dbe2a5;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100dbe2a5:
  *param_1 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_21 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

