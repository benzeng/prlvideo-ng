
QKeySequence * FUN_100718da0(QKeySequence *param_1,undefined8 *param_2)

{
  code *pcVar1;
  _func_void_Node_ptr *p_Var2;
  char cVar3;
  uint uVar4;
  _func_void_Node_ptr *p_Var5;
  Data *pDVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  uint local_ac;
  QKeySequence local_a8 [8];
  QKeySequence local_a0 [8];
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  _func_void_Node_ptr *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    QKeySequence::QKeySequence(param_1);
    goto LAB_100719313;
  }
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Switch_Language_10226f920);
  cVar3 = operator==(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100718e3e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100718e3e:
  if (cVar3 != '\0') {
    QKeySequence::QKeySequence(param_1,DAT_100e27200,0,0,0);
LAB_100719313:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    return param_1;
  }
  FUN_100717ee0(&local_50);
  FUN_10071af70(&local_78,&local_50);
  FUN_10071bdd0(&local_70,&local_78);
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 == -1) {
LAB_100718f34:
    p_Var2 = local_50;
    local_ac = 0;
    if (local_68 != local_60) {
      do {
        if (local_58 == 0) {
LAB_100719107:
          local_68 = local_68 + 8;
          local_58 = 1;
        }
        else {
          uVar4 = **(uint **)local_68;
          if ((*(int *)(p_Var2 + 0x14) != 0) && (*(uint *)(p_Var2 + 0x20) != 0)) {
            for (p_Var5 = *(_func_void_Node_ptr **)
                           (*(long *)(p_Var2 + 8) +
                           ((ulong)(*(uint *)(p_Var2 + 0x24) ^ uVar4) %
                           (ulong)*(uint *)(p_Var2 + 0x20)) * 8); p_Var5 != p_Var2;
                p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
              if ((*(uint *)(p_Var5 + 8) == (*(uint *)(p_Var2 + 0x24) ^ uVar4)) &&
                 (uVar4 == *(uint *)(p_Var5 + 0xc))) {
                if (p_Var5 != p_Var2) {
                  local_80 = *(QArrayData **)(p_Var5 + 0x10);
                  if (1 < *(int *)local_80 + 1U) {
                    LOCK();
                    *(int *)local_80 = *(int *)local_80 + 1;
                    local_31 = *(int *)local_80 != 0;
                    UNLOCK();
                  }
                  goto LAB_100718feb;
                }
                break;
              }
            }
          }
          local_80 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_100718feb:
          cVar3 = QString::endsWith(&local_40,&local_80,1);
          iVar8 = 0;
          if ((cVar3 != '\0') &&
             ((*(int *)(local_40.field0_0x0 + 4) - *(int *)(local_80 + 4) == 0 ||
              (*(short *)(local_40.field0_0x0 +
                         (long)(*(int *)(local_40.field0_0x0 + 4) - *(int *)(local_80 + 4)) * 2 +
                         *(long *)(local_40.field0_0x0 + 0x10)) == 0x2b)))) {
            QString::left((int)&local_88);
            QString::operator=(&local_40,&local_88);
            iVar8 = 5;
            local_ac = uVar4;
            if (*(int *)local_88.field0_0x0 != -1) {
              if (*(int *)local_88.field0_0x0 != 0) {
                LOCK();
                *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                local_31 = *(int *)local_88.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007190a0;
              }
              QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
            }
          }
LAB_1007190a0:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007190d0;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_1007190d0:
          if (iVar8 == 0) goto LAB_100719107;
          local_68 = local_68 + 8;
          uVar4 = local_58 ^ 1;
          bVar9 = local_58 == 1;
          local_58 = uVar4;
          if (bVar9) break;
        }
      } while (local_68 != local_60);
    }
  }
  else {
    if (*(int *)local_78 == 0) {
LAB_100718edc:
      iVar8 = *(int *)(local_78 + 0xc);
      if (iVar8 != *(int *)(local_78 + 8)) {
        lVar7 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar8 * -8;
        pDVar6 = local_78 + (long)iVar8 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100718edc;
    }
    local_ac = 0;
    if (local_58 != 0) goto LAB_100718f34;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100719190;
    }
    iVar8 = *(int *)(local_70 + 0xc);
    if (iVar8 != *(int *)(local_70 + 8)) {
      lVar7 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar8 * -8;
      pDVar6 = local_70 + (long)iVar8 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_100719190:
  do {
    local_90 = (QArrayData *)QString::fromAscii_helper("+",1);
    cVar3 = QString::endsWith(&local_40,&local_90,1);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007191f5;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1007191f5:
    if (cVar3 == '\0') break;
    QString::left((int)&local_98);
    QString::operator=(&local_40,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100719190;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
  } while( true );
  QKeySequence::QKeySequence(local_a0,&local_40,0);
  if (local_ac != 0) {
    uVar4 = QKeySequence::operator[]((uint)local_a0);
    QKeySequence::QKeySequence(local_a8,uVar4 | local_ac,0,0,0);
    QKeySequence::operator=(local_a0,local_a8);
    QKeySequence::~QKeySequence(local_a8);
  }
  QKeySequence::QKeySequence(param_1,local_a0);
  QKeySequence::~QKeySequence(local_a0);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100719313;
    }
    QHashData::free_helper(local_50);
  }
  goto LAB_100719313;
}

