
void FUN_1002961c0(bool param_1,bool param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _func_void_Node_ptr *p_Var3;
  uint uVar4;
  long lVar5;
  long lVar6;
  QArrayData *pQVar7;
  QVariant local_100;
  Data_conflict local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  QString local_d0 [2];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  QCryptographicHash local_58 [8];
  _func_void_Node_ptr *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  MacUtils::getActiveMonitorEDIDs();
  QCryptographicHash::QCryptographicHash(local_58,1);
  FUN_100298fa0(&local_80,&local_50);
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar5 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_78 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar5 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 == -1) {
LAB_1002962b8:
    puVar2 = PTR_shared_null_1021e1288;
    if (local_70 != local_68) {
      do {
        if ((*(int *)(local_50 + 0x14) != 0) && (*(uint *)(local_50 + 0x20) != 0)) {
          uVar4 = *(uint *)(local_50 + 0x24) ^ *(uint *)local_70;
          for (p_Var3 = *(_func_void_Node_ptr **)
                         (*(long *)(local_50 + 8) +
                         ((ulong)uVar4 % (ulong)*(uint *)(local_50 + 0x20)) * 8); p_Var3 != local_50
              ; p_Var3 = *(_func_void_Node_ptr **)p_Var3) {
            if ((*(uint *)(p_Var3 + 8) == uVar4) && (*(uint *)local_70 == *(uint *)(p_Var3 + 0xc)))
            {
              if (p_Var3 != local_50) {
                local_88 = *(QArrayData **)(p_Var3 + 0x10);
                if (1 < *(int *)local_88 + 1U) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + 1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                }
                goto LAB_100296354;
              }
              break;
            }
          }
        }
        local_88 = (QArrayData *)puVar2;
LAB_100296354:
        QCryptographicHash::addData((QByteArray *)local_58);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10029638f;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_10029638f:
        local_70 = local_70 + 8;
        local_60 = 1;
      } while (local_70 != local_68);
    }
  }
  else {
    if (*(int *)local_80 == 0) {
LAB_1002962a9:
      QListData::dispose(local_80);
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1002962a9;
    }
    if (local_60 != 0) goto LAB_1002962b8;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002963d2;
    }
    QListData::dispose(local_78);
  }
LAB_1002963d2:
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1/%2/",6);
  local_a8 = (QArrayData *)QString::fromAscii_helper("PresentationMode",0x10);
  QString::arg(&local_98,&local_a0,&local_a8,0,0x20);
  QCryptographicHash::result();
  QByteArray::toHex();
  lVar5 = 0;
  pQVar7 = local_b8 + *(long *)(local_b8 + 0x10);
  if ((pQVar7 != (QArrayData *)0x0) && (*(uint *)(local_b8 + 4) != 0)) {
    lVar5 = 0;
    do {
      if (pQVar7[lVar5] == (QArrayData)0x0) break;
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(local_b8 + 4));
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,(int)lVar5);
  QString::arg(&local_90,&local_98,&local_b0,0,0x20);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002964e1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1002964e1:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296517;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100296517:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10029654d;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_10029654d:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296583;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100296583:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002965b9;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002965b9:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002965ef;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002965ef:
  QSettings::QSettings((QSettings *)local_d0,(QObject *)0x0);
  local_d8.field15 = (QObject *)local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1de2c73);
  QString::append((QString *)&local_d8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296671;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100296671:
  QVariant::QVariant(&local_e8,param_1);
  QSettings::setValue(local_d0,(QVariant *)&local_d8);
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_d8.field15 != -1) {
    if (*(int *)local_d8.field15 != 0) {
      LOCK();
      *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
      local_31 = *(int *)local_d8.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002966dd;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
  }
LAB_1002966dd:
  local_f0.field15 = (QObject *)local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1de2c7a);
  QString::append((QString *)&local_f0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296751;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100296751:
  QVariant::QVariant(&local_100,param_2);
  QSettings::setValue(local_d0,(QVariant *)&local_f0);
  QVariant::~QVariant(&local_100);
  if (*(int *)local_f0.field15 != -1) {
    if (*(int *)local_f0.field15 != 0) {
      LOCK();
      *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
      local_31 = *(int *)local_f0.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002967c2;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
  }
LAB_1002967c2:
  QSettings::~QSettings((QSettings *)local_d0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100296804;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100296804:
  QCryptographicHash::~QCryptographicHash(local_58);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_50);
  }
  return;
}

