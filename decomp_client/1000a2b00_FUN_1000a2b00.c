
void FUN_1000a2b00(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  Data *pDVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  QString QVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  long *local_e8;
  Data *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  undefined1 local_88 [32];
  int local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QVar9.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68 = FUN_100a68200(local_88,param_2,param_3,0);
  if (local_68 == 0) {
    local_68 = 0;
    do {
      iVar2 = FUN_100a683a0(local_88);
      if (iVar2 < 0x2014) {
        if (iVar2 == 0x200b) {
          pcVar4 = (char *)FUN_100a68370(local_88);
          iVar2 = FUN_100a68390(local_88);
          if ((pcVar4 != (char *)0x0) && (iVar2 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_98,(int)pcVar4);
          QString::normalized(&local_90,&local_98,1,0);
          QString::operator=(&local_40,&local_90);
          if (*(int *)local_90.field0_0x0 != -1) {
            if (*(int *)local_90.field0_0x0 != 0) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a2c3c;
            }
            QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
          }
LAB_1000a2c3c:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto switchD_1000a2c95_default;
            }
            QArrayData::deallocate(local_98,2,8);
          }
        }
      }
      else {
        switch(iVar2) {
        case 0x2014:
          pcVar4 = (char *)FUN_100a68370(local_88);
          iVar2 = FUN_100a68390(local_88);
          if ((pcVar4 != (char *)0x0) && (iVar2 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_a8,(int)pcVar4);
          QString::normalized(&local_a0,&local_a8,1,0);
          QString::operator=(&local_48,&local_a0);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a2d2c;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_1000a2d2c:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
          break;
        case 0x2015:
          pcVar4 = (char *)FUN_100a68370(local_88);
          iVar2 = FUN_100a68390(local_88);
          if ((pcVar4 != (char *)0x0) && (iVar2 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_b8,(int)pcVar4);
          QString::normalized(&local_b0,&local_b8,1,0);
          QString::operator=(&local_50,&local_b0);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a2e04;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_1000a2e04:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
          break;
        case 0x2016:
          pcVar4 = (char *)FUN_100a68370(local_88);
          iVar2 = FUN_100a68390(local_88);
          if ((pcVar4 != (char *)0x0) && (iVar2 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_c8,(int)pcVar4);
          QString::normalized(&local_c0,&local_c8,1,0);
          QString::operator=(&local_58,&local_c0);
          if (*(int *)local_c0.field0_0x0 != -1) {
            if (*(int *)local_c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
              local_31 = *(int *)local_c0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a2edc;
            }
            QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
          }
LAB_1000a2edc:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
          break;
        case 0x2017:
          pcVar4 = (char *)FUN_100a68370(local_88);
          iVar2 = FUN_100a68390(local_88);
          if ((pcVar4 != (char *)0x0) && (iVar2 == -1)) {
            _strlen(pcVar4);
          }
          QString::fromUtf8_helper((char *)&local_d8,(int)pcVar4);
          QString::normalized(&local_d0,&local_d8,1,0);
          QString::operator=(&local_60,&local_d0);
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a2fb4;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
LAB_1000a2fb4:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
        }
      }
switchD_1000a2c95_default:
      local_68 = FUN_100a682f0(local_88);
    } while (local_68 == 0);
    if (local_68 != -7) {
      piVar3 = (int *)___cxa_allocate_exception(4);
      *piVar3 = local_68;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar3,&PTR_vtable_10226c9d0,0);
    }
    local_68 = -7;
    QVar9.field0_0x0 = local_40.field0_0x0;
  }
  else if (local_68 != -7) {
    piVar3 = (int *)___cxa_allocate_exception(4);
    *piVar3 = local_68;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar3,&PTR_vtable_10226c9d0,0);
  }
  if (((*(int *)(QVar9.field0_0x0 + 4) != 0) && (*(int *)(local_48.field0_0x0 + 4) != 0)) &&
     (*(int *)(local_58.field0_0x0 + 4) != 0)) {
    uVar5 = FUN_1000a4ac0();
    FUN_1000a5590(uVar5,&local_40);
    local_e0 = (Data *)PTR_shared_null_1021e15e8;
    FUN_1000341d0(&local_e0,&local_48);
    FUN_1000341d0(&local_e0,&local_58);
    FUN_1000341d0(&local_e0,&local_60);
    plVar6 = operator_new(0x28);
    *plVar6 = (long)&PTR_FUN_10226c9f0;
    lVar7 = 0;
    if (param_1 != (QObject *)0x0) {
      lVar7 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    }
    plVar6[1] = lVar7;
    plVar6[2] = (long)param_1;
    plVar6[3] = (long)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    plVar6[4] = (long)local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      plVar8[2] = (long)plVar6;
      *plVar8 = (long)&PTR_FUN_10226ca80;
    }
    uVar5 = FUN_100152280();
    uVar5 = FUN_1001548f0(uVar5,param_1 + 0x20);
    uVar5 = FUN_10018c280(uVar5);
    uVar5 = FUN_100319c30(uVar5);
    if (plVar8 != (long *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_e8 = plVar8;
    FUN_10032fbd0(uVar5,&local_e8,&local_e0);
    if (local_e8 != (long *)0x0) {
      LOCK();
      plVar6 = local_e8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_e8 + 0x10))();
      }
    }
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    pDVar1 = local_e0;
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a33d0;
      }
      iVar2 = *(int *)(local_e0 + 0xc);
      if (iVar2 != *(int *)(local_e0 + 8)) {
        lVar7 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar2 * -8;
        pDVar10 = local_e0 + (long)iVar2 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_1000a33af:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_1000a33af;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar1);
    }
  }
LAB_1000a33d0:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a3400;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000a3400:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a3430;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000a3430:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a3460;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000a3460:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000a3490;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000a3490:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

