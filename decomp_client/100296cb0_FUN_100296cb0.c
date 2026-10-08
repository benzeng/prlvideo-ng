
char FUN_100296cb0(undefined1 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  _func_void_Node_ptr *p_Var5;
  uint uVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  QVariant local_130;
  QString local_120;
  QVariant local_118;
  QVariant local_108;
  QString local_f8;
  QVariant local_f0;
  QString local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  QCryptographicHash local_60 [8];
  _func_void_Node_ptr *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  MacUtils::getActiveMonitorEDIDs();
  QCryptographicHash::QCryptographicHash(local_60,1);
  FUN_100298fa0(&local_88,&local_58);
  local_80 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_80);
      lVar7 = (long)*(int *)(local_80 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_80 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar7 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 == -1) {
LAB_100296da9:
    puVar2 = PTR_shared_null_1021e1288;
    if (local_78 != local_70) {
      do {
        if ((*(int *)(local_58 + 0x14) != 0) && (*(uint *)(local_58 + 0x20) != 0)) {
          uVar6 = *(uint *)(local_58 + 0x24) ^ *(uint *)local_78;
          for (p_Var5 = *(_func_void_Node_ptr **)
                         (*(long *)(local_58 + 8) +
                         ((ulong)uVar6 % (ulong)*(uint *)(local_58 + 0x20)) * 8); p_Var5 != local_58
              ; p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
            if ((*(uint *)(p_Var5 + 8) == uVar6) && (*(uint *)local_78 == *(uint *)(p_Var5 + 0xc)))
            {
              if (p_Var5 != local_58) {
                local_90 = *(QArrayData **)(p_Var5 + 0x10);
                if (1 < *(int *)local_90 + 1U) {
                  LOCK();
                  *(int *)local_90 = *(int *)local_90 + 1;
                  local_31 = *(int *)local_90 != 0;
                  UNLOCK();
                }
                goto LAB_100296e47;
              }
              break;
            }
          }
        }
        local_90 = (QArrayData *)puVar2;
LAB_100296e47:
        QCryptographicHash::addData((QByteArray *)local_60);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100296e88;
          }
          QArrayData::deallocate(local_90,1,8);
        }
LAB_100296e88:
        local_78 = local_78 + 8;
        local_68 = 1;
      } while (local_78 != local_70);
    }
  }
  else {
    if (*(int *)local_88 == 0) {
LAB_100296d9a:
      QListData::dispose(local_88);
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100296d9a;
    }
    if (local_68 != 0) goto LAB_100296da9;
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296ecb;
    }
    QListData::dispose(local_80);
  }
LAB_100296ecb:
  local_a8 = (QArrayData *)QString::fromAscii_helper("%1/%2/",6);
  local_b0 = (QArrayData *)QString::fromAscii_helper("PresentationMode",0x10);
  QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
  QCryptographicHash::result();
  QByteArray::toHex();
  lVar7 = 0;
  pQVar9 = local_c0 + *(long *)(local_c0 + 0x10);
  if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_c0 + 4) != 0)) {
    lVar7 = 0;
    do {
      if (pQVar9[lVar7] == (QArrayData)0x0) break;
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(local_c0 + 4));
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper((char *)pQVar9,(int)lVar7);
  QString::arg(&local_98,&local_a0,&local_b8,0,0x20);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296fd1;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100296fd1:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100297007;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100297007:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029703d;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_10029703d:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100297073;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100297073:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002970a9;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1002970a9:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002970df;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002970df:
  QSettings::QSettings((QSettings *)&local_d8,(QObject *)0x0);
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_31 = *(int *)local_98 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1de2c73);
  QString::append(&local_e0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100297161;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100297161:
  cVar3 = QSettings::contains((QString *)&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002971ac;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1002971ac:
  if (cVar3 != '\0') {
    if (param_1 != (undefined1 *)0x0) {
      local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0x1de2c73);
      QString::append(&local_f8);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100297231;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100297231:
      QVariant::QVariant(&local_108,true);
      QSettings::value((QString *)&local_f0,&local_d8);
      uVar4 = QVariant::toBool();
      *param_1 = uVar4;
      QVariant::~QVariant(&local_f0);
      QVariant::~QVariant(&local_108);
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002972c0;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
    }
LAB_1002972c0:
    if (param_2 != (undefined1 *)0x0) {
      local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1de2c7a);
      QString::append(&local_120);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100297342;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100297342:
      QVariant::QVariant(&local_130,false);
      QSettings::value((QString *)&local_118,&local_d8);
      uVar4 = QVariant::toBool();
      *param_2 = uVar4;
      QVariant::~QVariant(&local_118);
      QVariant::~QVariant(&local_130);
      if (*(int *)local_120.field0_0x0 != -1) {
        if (*(int *)local_120.field0_0x0 != 0) {
          LOCK();
          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
          local_31 = *(int *)local_120.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002973d4;
        }
        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
      }
    }
  }
LAB_1002973d4:
  QSettings::~QSettings((QSettings *)&local_d8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100297416;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100297416:
  QCryptographicHash::~QCryptographicHash(local_60);
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return cVar3;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_58);
  }
  return cVar3;
}

