
void FUN_1000996b0(long param_1)

{
  long *plVar1;
  long lVar2;
  CHwPrinter *pCVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  CHwPrinter *this;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  bool bVar14;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  long *local_88;
  QString local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QString local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVirtualPrintersInfo();
  cVar5 = CVmVirtualPrintersInfo::isUseHostPrinters();
  if (cVar5 == '\0') {
    return;
  }
  FUN_100090a50(&local_40,DAT_1011c3698);
  FUN_10009a4e0(&local_48);
  if ((local_48 == (long *)0x0) || ((long *)local_48[2] == (long *)0x0)) {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  }
  else {
    (**(code **)(*(long *)local_48[2] + 0xb8))(&local_50);
  }
  QString::operator=((QString *)(param_1 + 0x10),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100099789;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100099789:
  plVar7 = operator_new(0x18);
  *plVar7 = param_1;
  plVar7[1] = param_1 + 8;
  *(undefined4 *)(plVar7 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(plVar7 + 2) = 1;
  plVar8 = (long *)FUN_10009f2a0(plVar7);
  FUN_10009e520(*(undefined8 *)(plVar8[2] + 8));
  plVar7 = *(long **)(local_40[2] + 0x188);
  local_70 = (Data *)*plVar7;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar11 = (long)*(int *)(local_70 + 8);
      lVar2 = *plVar7;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_70 + lVar11 * 8) &&
         (lVar12 = *(int *)(local_70 + 0xc) - lVar11,
         lVar12 != 0 && lVar11 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar11 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      pCVar3 = *(CHwPrinter **)local_68;
      (**(code **)(*(long *)pCVar3 + 0xb8))(&local_78,pCVar3);
      iVar6 = QString::compare_helper
                        (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),
                         "Default printer",0xffffffff,1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000998ee;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1000998ee:
      if (iVar6 != 0) {
        this = operator_new(0xc0);
        CHwPrinter::CHwPrinter(this,pCVar3);
        plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        bVar14 = plVar7 == (long *)0x0;
        if (bVar14) {
          (**(code **)(*(long *)this + 0x88))(this);
          plVar7 = (long *)0x0;
          this = (CHwPrinter *)0x0;
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar7[2] = (long)this;
          *plVar7 = (long)&PTR_FUN_100bef8f0;
        }
        (**(code **)(*(long *)this + 0xb8))(&local_80,this);
        cVar5 = operator==(&local_80,(QString *)(param_1 + 0x10));
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000999ba;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1000999ba:
        if (cVar5 != '\0') {
          uVar13 = false;
          if (!bVar14) {
            uVar13 = (undefined1)plVar7[2];
          }
          CHwPrinter::setDefault((bool)uVar13);
        }
        uVar4 = *(undefined8 *)(plVar8[2] + 8);
        puVar9 = operator_new(0x10);
        *puVar9 = 0;
        *(long **)(puVar9 + 2) = plVar7;
        if (!bVar14) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        plVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (plVar10 == (long *)0x0) {
          plVar10 = *(long **)(puVar9 + 2);
          if (plVar10 != (long *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar2 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
          operator_delete(puVar9);
          plVar10 = (long *)0x0;
        }
        else {
          *(undefined4 *)(plVar10 + 1) = 1;
          plVar10[2] = (long)puVar9;
          *plVar10 = (long)&PTR_FUN_100bef918;
        }
        local_88 = plVar10;
        FUN_10009e600(uVar4,&local_88);
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (3 < DAT_1011b55f8) {
          CBaseNode::toString(SUB81(&local_98,0),SUB81(pCVar3,0));
          local_a0 = (QArrayData *)QString::fromAscii_helper(" ",1);
          QString::replace(&local_98,10,&local_a0,1);
          QString::toUtf8();
          FUN_1008e3970("","vm",4,"[UPRN] Add printer: %s",local_90 + *(long *)(local_90 + 0x10));
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100099b6f;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100099b6f:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100099ba5;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_100099ba5:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100099be0;
            }
            QArrayData::deallocate(local_98,2,8);
          }
        }
LAB_100099be0:
        if (!bVar14) {
          LOCK();
          plVar10 = plVar7 + 1;
          lVar2 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100099c71;
    }
    QListData::dispose(local_70);
  }
LAB_100099c71:
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) goto LAB_100099eb2;
  uVar4 = *(undefined8 *)(plVar8[2] + 8);
  puVar9 = operator_new(0x10);
  *puVar9 = 0;
  *(long *)(puVar9 + 2) = lVar2;
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar7 == (long *)0x0) {
    plVar7 = *(long **)(puVar9 + 2);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar2 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    operator_delete(puVar9);
    plVar7 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = (long)puVar9;
    *plVar7 = (long)&PTR_FUN_100bef918;
  }
  local_a8 = plVar7;
  FUN_10009e600(uVar4);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar2 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (DAT_1011b55f8 < 4) goto LAB_100099eb2;
  uVar13 = false;
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar13 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
  }
  CBaseNode::toString(SUB81(&local_b8,0),(bool)uVar13);
  local_c0 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::replace(&local_b8,10,&local_c0,1);
  QString::toUtf8();
  FUN_1008e3970("","vm",4,"[UPRN] Add printer: %s",local_b0 + *(long *)(local_b0 + 0x10));
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100099e46;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_100099e46:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100099e7c;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100099e7c:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100099eb2;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100099eb2:
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

