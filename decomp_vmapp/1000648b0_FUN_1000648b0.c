
undefined4 FUN_1000648b0(long param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  CVmEventParameter *pCVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  long *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  Data *local_2c0;
  Data *local_2b8;
  Data *local_2b0;
  uint local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  CVmEvent local_290 [8];
  CBaseNode local_288 [216];
  QEvent local_1b0 [24];
  long *local_198;
  long *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  lVar14 = *param_3;
  lVar10 = param_3[1];
  local_140 = *(QArrayData **)(param_1 + 0x18);
  lVar13 = lVar10;
  lVar11 = lVar14;
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
    lVar11 = *param_3;
    lVar13 = param_3[1];
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,lVar14 != lVar10 | 0x18896,&local_140,0,param_2,lVar11 != lVar13,
                     &local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006499f;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10006499f:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000649d5;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000649d5:
  lVar14 = *param_3;
  if (param_3[1] != lVar14) {
    uVar15 = 0;
    uVar16 = 1;
    do {
      pCVar7 = operator_new(0xd0);
      QString::number((uint)&local_150,*(int *)(lVar14 + uVar15 * 4));
      local_160 = (QArrayData *)QString::fromAscii_helper("vm_message_choice_%1",0x14);
      QString::arg(&local_158,&local_160,uVar15,0,10);
      CVmEventParameter::CVmEventParameter(pCVar7,0,&local_150);
      CVmEvent::addEventParameter((CVmEventParameter *)local_138);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100064ac5;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100064ac5:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100064afe;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_100064afe:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100064b37;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100064b37:
      lVar14 = *param_3;
      bVar17 = uVar16 < (ulong)(param_3[1] - lVar14 >> 2);
      uVar15 = uVar16;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (bVar17);
  }
  for (uVar12 = 0; uVar4 = FUN_10006a910(param_4), uVar12 < uVar4; uVar12 = uVar12 + 1) {
    FUN_10006a930(&local_168,param_4,uVar12);
    FUN_10006a960(&local_170,param_4,uVar12);
    pCVar7 = operator_new(0xd0);
    local_178 = local_170;
    if (1 < *(int *)local_170 + 1U) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + 1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
    }
    local_180 = local_168;
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
    }
    CVmEventParameter::CVmEventParameter(pCVar7,1,&local_178,&local_180);
    CVmEvent::addEventParameter((CVmEventParameter *)local_138);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100064c51;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_100064c51:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100064c87;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100064c87:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100064cbd;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100064cbd:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100064b70;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_100064b70:
  }
  CBaseNode::toString(SUB81(&local_188,0),SUB81(local_130,0));
  uVar8 = FUN_1007dd120(param_2);
  FUN_1008e3970("","vm",0,"Sending question = %s",uVar8);
  if (*param_3 == param_3[1]) {
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_2d8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_100bef0d0;
      local_2d8 = plVar9;
    }
    FUN_100063e20(param_1,&local_188,0xbbb,&local_2d8,0);
    uVar6 = 0x80000009;
    if (local_2d8 != (long *)0x0) {
      LOCK();
      plVar9 = local_2d8 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)(*local_2d8 + 0x10))();
      }
    }
  }
  else {
    local_190 = (long *)0x0;
    cVar3 = FUN_100065780(param_1,&local_188,0xbbb,&local_190);
    FUN_1008e3970("","vm",0);
    plVar9 = local_190;
    uVar6 = 0x80000009;
    if (cVar3 != '\0') {
      if (((local_190 == (long *)0x0) || (local_190[2] == 0)) ||
         (*(int *)(local_190[2] + 0x4c) == 0)) {
        FUN_1008e3970("","vm",0,"Invalid response package!");
      }
      else {
        CVmEvent::CVmEvent(local_290);
        iVar5 = 0;
        if (*(long *)(plVar9[2] + 0x80) != 0) {
          pcVar2 = *(char **)(*(long *)(plVar9[2] + 0x80) + 0x10);
          iVar5 = 0;
          if (pcVar2 != (char *)0x0) {
            _strlen(pcVar2);
            iVar5 = (int)pcVar2;
          }
        }
        QString::fromUtf8_helper((char *)&local_2a0,iVar5);
        QString::normalized(&local_298,&local_2a0,1);
        CBaseNode::fromString
                  (local_288,(QTypedArrayData<unsigned_short> *)&local_298,false,(QString *)0x0,
                   (int *)0x0,(int *)0x0);
        if (*(int *)local_298 != -1) {
          if (*(int *)local_298 != 0) {
            LOCK();
            *(int *)local_298 = *(int *)local_298 + -1;
            local_31 = *(int *)local_298 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100064e9a;
          }
          QArrayData::deallocate(local_298,2,8);
        }
LAB_100064e9a:
        if (*(int *)local_2a0 != -1) {
          if (*(int *)local_2a0 != 0) {
            LOCK();
            *(int *)local_2a0 = *(int *)local_2a0 + -1;
            local_31 = *(int *)local_2a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100064ed0;
          }
          QArrayData::deallocate(local_2a0,2,8);
        }
LAB_100064ed0:
        local_2c0 = (Data *)*local_198;
        if (*(int *)local_2c0 != -1) {
          if (*(int *)local_2c0 == 0) {
            QListData::detach((int)&local_2c0);
            lVar10 = (long)*(int *)(local_2c0 + 8);
            lVar14 = *local_198;
            if (((Data *)(lVar14 + (long)*(int *)(lVar14 + 8) * 8) != local_2c0 + lVar10 * 8) &&
               (lVar11 = *(int *)(local_2c0 + 0xc) - lVar10,
               lVar11 != 0 && lVar10 <= *(int *)(local_2c0 + 0xc))) {
              _memcpy(local_2c0 + lVar10 * 8 + 0x10,
                      (void *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),lVar11 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_2c0 = *(int *)local_2c0 + 1;
            local_31 = *(int *)local_2c0 != 0;
            UNLOCK();
          }
        }
        local_2b8 = local_2c0 + (long)*(int *)(local_2c0 + 8) * 8 + 0x10;
        local_2b0 = local_2c0 + (long)*(int *)(local_2c0 + 0xc) * 8 + 0x10;
        local_2a8 = 1;
        uVar6 = 0x80000009;
        if (*(int *)(local_2c0 + 8) != *(int *)(local_2c0 + 0xc)) {
          uVar6 = 0x80000009;
          do {
            if (local_2a8 != 0) {
              CVmEventParameter::getParamName();
              iVar5 = QString::compare_helper
                                (local_2c8 + *(long *)(local_2c8 + 0x10),
                                 *(undefined4 *)(local_2c8 + 4),"vm_message_choice_0",0xffffffff,1);
              if (*(int *)local_2c8 != -1) {
                if (*(int *)local_2c8 != 0) {
                  LOCK();
                  *(int *)local_2c8 = *(int *)local_2c8 + -1;
                  local_31 = *(int *)local_2c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000650d7;
                }
                QArrayData::deallocate(local_2c8,2,8);
              }
LAB_1000650d7:
              if (iVar5 == 0) {
                CVmEventParameter::getParamValue();
                uVar6 = QString::toInt((bool *)&local_2d0,0);
                if (*(int *)local_2d0 != -1) {
                  if (*(int *)local_2d0 != 0) {
                    LOCK();
                    *(int *)local_2d0 = *(int *)local_2d0 + -1;
                    local_31 = *(int *)local_2d0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100065150;
                  }
                  QArrayData::deallocate(local_2d0,2,8);
                }
              }
              else {
                local_2a8 = 0;
              }
            }
LAB_100065150:
            local_2b8 = local_2b8 + 8;
            uVar12 = local_2a8 ^ 1;
            bVar17 = local_2a8 != 1;
            local_2a8 = uVar12;
          } while ((bVar17) && (local_2b8 != local_2b0));
        }
        if (*(int *)local_2c0 != -1) {
          if (*(int *)local_2c0 != 0) {
            LOCK();
            *(int *)local_2c0 = *(int *)local_2c0 + -1;
            local_31 = *(int *)local_2c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000651b1;
          }
          QListData::dispose(local_2c0);
        }
LAB_1000651b1:
        uVar8 = FUN_1007dd120(uVar6);
        FUN_1008e3970("","vm",0,"Received response = %s",uVar8);
        QEvent::~QEvent(local_1b0);
        CVmEventBase::~CVmEventBase((CVmEventBase *)local_290);
      }
    }
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006524c;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10006524c:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return uVar6;
}

