
void FUN_10009b7b0(long param_1,long *param_2,int param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  QArrayData *pQVar11;
  undefined1 uVar12;
  bool bVar13;
  uint local_c4;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pDev","VirtualPCPrinters.cpp",0xd8
                  ,"onHostPrinterChange");
  }
  lVar4 = FUN_1000915f0(DAT_1011c3698);
  if (lVar4 == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar3 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar3 == '\0') {
    return;
  }
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  plVar7 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_100bef918;
    plVar7 = plVar5;
  }
  local_40 = plVar7;
  if (param_3 == 0) {
    puVar6 = operator_new(0x10);
    *puVar6 = 1;
    lVar4 = *param_2;
    *(long *)(puVar6 + 2) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar5 == (long *)0x0) {
      plVar5 = *(long **)(puVar6 + 2);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      operator_delete(puVar6);
      bVar13 = true;
      plVar5 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)puVar6;
      *plVar5 = (long)&PTR_FUN_100bef918;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar13 = false;
    }
    local_40 = plVar5;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (!bVar13) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    uVar8 = 0;
    if (*param_2 != 0) {
      uVar8 = *(undefined8 *)(*param_2 + 0x10);
    }
    FUN_10009aa90(param_1,8,uVar8);
  }
  else {
    plVar5 = plVar7;
    if (param_3 == 2) {
      if ((param_4 & 2) != 0) {
        puVar6 = operator_new(0x10);
        *puVar6 = 2;
        lVar4 = *param_2;
        *(long *)(puVar6 + 2) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (plVar5 == (long *)0x0) {
          plVar5 = *(long **)(puVar6 + 2);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          operator_delete(puVar6);
          bVar13 = true;
          plVar5 = (long *)0x0;
        }
        else {
          *(undefined4 *)(plVar5 + 1) = 1;
          plVar5[2] = (long)puVar6;
          *plVar5 = (long)&PTR_FUN_100bef918;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          bVar13 = false;
        }
        local_40 = plVar5;
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (!bVar13) {
          LOCK();
          plVar7 = plVar5 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else if (param_3 == 1) {
      puVar6 = operator_new(0x10);
      *puVar6 = 0;
      lVar4 = *param_2;
      *(long *)(puVar6 + 2) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar5 == (long *)0x0) {
        plVar5 = *(long **)(puVar6 + 2);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        operator_delete(puVar6);
        bVar13 = true;
        plVar5 = (long *)0x0;
      }
      else {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = (long)puVar6;
        *plVar5 = (long)&PTR_FUN_100bef918;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar13 = false;
      }
      local_40 = plVar5;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (!bVar13) {
        LOCK();
        plVar7 = plVar5 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      uVar8 = 0;
      if (*param_2 != 0) {
        uVar8 = *(undefined8 *)(*param_2 + 0x10);
      }
      FUN_10009aa90(param_1,7,uVar8);
    }
  }
  FUN_10009a4e0(&local_48);
  plVar7 = local_48;
  local_c4 = param_4;
  if (local_48 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if ((long *)local_48[2] != (long *)0x0) {
    (**(code **)(*(long *)local_48[2] + 0xb8))(&local_50);
    cVar3 = operator==(&local_50,(QString *)(param_1 + 0x10));
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009bc74;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10009bc74:
    if (cVar3 == '\0') {
      if ((plVar5 != (long *)0x0) && (plVar5[2] != 0)) {
        if (1 < DAT_1011b55f8) {
          uVar12 = false;
          if (*param_2 != 0) {
            uVar12 = (undefined1)*(undefined8 *)(*param_2 + 0x10);
          }
          CBaseNode::toString(SUB81(&local_60,0),(bool)uVar12);
          local_68 = (QArrayData *)QString::fromAscii_helper(" ",1);
          QString::replace(&local_60,10,&local_68,1);
          QString::toUtf8();
          FUN_1008e3970("","vm",2,
                        "%s: Twice action! ( + change default). First: state = %d, uiDevChangedFlags = %d, Printer %s"
                        ,"onHostPrinterChange",param_3,param_4,local_58 + *(long *)(local_58 + 0x10)
                       );
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10009bd6d;
            }
            QArrayData::deallocate(local_58,1,8);
          }
LAB_10009bd6d:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10009bd9d;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10009bd9d:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10009bdcd;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
LAB_10009bdcd:
        plVar7 = operator_new(0x18);
        *plVar7 = param_1;
        plVar7[1] = param_1 + 8;
        *(undefined4 *)(plVar7 + 2) = 0;
        QMutex::lock();
        *(undefined4 *)(plVar7 + 2) = 1;
        plVar5 = (long *)FUN_10009f2a0(plVar7);
        FUN_10009e600(*(undefined8 *)(plVar5[2] + 8),&local_40);
        LOCK();
        plVar7 = plVar5 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        FUN_10009c930();
      }
      puVar6 = operator_new(0x10);
      plVar7 = local_48;
      *puVar6 = 3;
      *(long **)(puVar6 + 2) = local_48;
      if (local_48 != (long *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar5 == (long *)0x0) {
        plVar5 = *(long **)(puVar6 + 2);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        operator_delete(puVar6);
        bVar13 = true;
        plVar5 = (long *)0x0;
      }
      else {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = (long)puVar6;
        *plVar5 = (long)&PTR_FUN_100bef918;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        bVar13 = false;
      }
      plVar2 = plVar5;
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          lVar4 = *local_40;
          local_40 = plVar5;
          (**(code **)(lVar4 + 0x10))();
          plVar2 = local_40;
        }
      }
      local_40 = plVar2;
      if (!bVar13) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        pQVar11 = local_70 + *(long *)(local_70 + 0x10);
        (**(code **)(*(long *)plVar7[2] + 0xb8))(&local_80);
        QString::toUtf8();
        FUN_1008e3970("","vm",2,"Default printer was changed: old: \'%s\', new: \'%s\'",pQVar11,
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009bfce;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10009bfce:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009bffe;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10009bffe:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009c032;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
LAB_10009c032:
      (**(code **)(*(long *)plVar7[2] + 0xb8))(&local_88);
      QString::operator=((QString *)(param_1 + 0x10),&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009c081;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_10009c081:
      local_c4 = param_4 | 4;
    }
  }
  uVar9 = local_c4 == 1 | 2;
  if ((int)uVar9 <= DAT_1011b55f8) {
    uVar12 = false;
    if (*param_2 != 0) {
      uVar12 = (undefined1)*(undefined8 *)(*param_2 + 0x10);
    }
    CBaseNode::toString(SUB81(&local_98,0),(bool)uVar12);
    local_a0 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QString::replace(&local_98,10,&local_a0,1);
    QString::toUtf8();
    FUN_1008e3970("","vm",uVar9,"%s: state = %d, uiDevChangedFlags = %d, Printer %s",
                  "onHostPrinterChange",param_3,local_c4,local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009c186;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_10009c186:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009c1bc;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10009c1bc:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009c1f2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_10009c1f2:
  if ((plVar5 != (long *)0x0) && (plVar5[2] != 0)) {
    plVar7 = operator_new(0x18);
    *plVar7 = param_1;
    plVar7[1] = param_1 + 8;
    *(undefined4 *)(plVar7 + 2) = 0;
    QMutex::lock();
    *(undefined4 *)(plVar7 + 2) = 1;
    plVar5 = (long *)FUN_10009f2a0(plVar7);
    FUN_10009e600(*(undefined8 *)(plVar5[2] + 8),&local_40);
    LOCK();
    plVar7 = plVar5 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    FUN_10009c930();
    plVar7 = local_48;
    goto LAB_10009c3e5;
  }
  bVar13 = local_c4 == 1;
  iVar10 = (uint)bVar13 + (uint)bVar13 * 2;
  if ((bVar13) && (DAT_1011b55f8 < iVar10)) goto LAB_10009c3e5;
  uVar12 = false;
  if (*param_2 != 0) {
    uVar12 = (undefined1)*(undefined8 *)(*param_2 + 0x10);
  }
  CBaseNode::toString(SUB81(&local_b0,0),(bool)uVar12);
  local_b8 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::replace(&local_b0,10,&local_b8,1);
  QString::toUtf8();
  FUN_1008e3970("","vm",iVar10,
                "%s: NOTHING TO BE DONE!: state = %d, uiDevChangedFlags = %d, Printer %s",
                "onHostPrinterChange",param_3,local_c4,local_a8 + *(long *)(local_a8 + 0x10));
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009c379;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_10009c379:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009c3af;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10009c3af:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009c3e5;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10009c3e5:
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

