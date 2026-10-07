
undefined8 * FUN_1004c74e0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  QArrayData *pQVar8;
  bool bVar9;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QArrayData *local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba20d0;
  pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (*(int *)(*(long *)(*param_2 + 0x40) + 4) != 0) {
    QString::split(&local_48,*param_2 + 0x40,0x3b,0,1);
    local_50 = (QArrayData *)QString::fromAscii_helper("psfhost:",8);
    local_70 = local_48;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_70);
        iVar1 = local_70[2];
        if (iVar1 != local_70[3]) {
          local_48 = local_48 + (long)local_48[2] * 2 + 4;
          piVar7 = local_70 + (long)iVar1 * 2 + 4;
          lVar5 = (long)local_70[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_48;
            *(int **)piVar7 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar7 = piVar7 + 2;
            local_48 = local_48 + 2;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_31 = *local_48 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)local_70[2] * 2 + 4;
    local_60 = local_70 + (long)local_70[3] * 2 + 4;
    local_58 = 1;
    if (local_70[2] != local_70[3]) {
      do {
        local_78 = *(QArrayData **)local_68;
        if (1 < *(int *)local_78 + 1U) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + 1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
        }
        if (local_58 != 0) {
          cVar4 = QString::startsWith(&local_78,&local_50,1);
          if (cVar4 == '\0') {
            local_58 = 0;
          }
          else {
            QString::mid((int)&local_88,(int)&local_78);
            QString::trimmed_helper(&local_80);
            pQVar8 = (QArrayData *)*param_1;
            *param_1 = local_80.field0_0x0;
            local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
            if (*(int *)pQVar8 != -1) {
              if (*(int *)pQVar8 != 0) {
                LOCK();
                *(int *)pQVar8 = *(int *)pQVar8 + -1;
                local_31 = *(int *)pQVar8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004c76a8;
              }
              QArrayData::deallocate(pQVar8,2,8);
            }
LAB_1004c76a8:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004c76e7;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
        }
LAB_1004c76e7:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004c7717;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1004c7717:
        local_68 = local_68 + 2;
        uVar6 = local_58 ^ 1;
        bVar9 = local_58 != 1;
        local_58 = uVar6;
      } while ((bVar9) && (local_68 != local_60));
    }
    FUN_100013180(&local_70);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004c7776;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1004c7776:
    FUN_100013180(&local_48);
    pQVar8 = (QArrayData *)*param_1;
  }
  if (*(int *)(pQVar8 + 4) != 0) {
    return param_1;
  }
  uVar6 = (*(uint *)(*param_2 + 0x28) & 0xff) << 8 | (uint)*(byte *)(*param_2 + 0x2c);
  if (0x3ff < uVar6) {
    return param_1;
  }
  QString::fromUtf8_helper((char *)&local_40,0xa3a588);
  pQVar3 = local_40;
  *param_1 = local_40;
  local_40 = pQVar8;
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c77fc;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1004c77fc:
  if (uVar6 < 0x200) {
    QString::fromUtf8_helper((char *)&local_40,0xa3a58c);
    *param_1 = local_40;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  return param_1;
}

