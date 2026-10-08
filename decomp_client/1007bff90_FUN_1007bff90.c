
void FUN_1007bff90(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  CHwNetAdapter *this;
  QObject *pQVar9;
  int *piVar10;
  Data *pDVar11;
  long lVar12;
  Data *pDVar13;
  Data *local_f8;
  QArrayData *local_f0;
  CHwNetAdapter *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  int *local_d0;
  QObject *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined8 local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  Data *local_88;
  uint local_7c;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  Data *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_1007bf8a0(param_1,1);
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001547d0(uVar6,param_1 + 0x30);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance");
    return;
  }
  FUN_1001241b0(&local_40,lVar7);
  plVar8 = operator_new(0x10);
  FUN_1007b5f00(plVar8,param_1);
  QActionGroup::setExclusive(SUB81(plVar8,0));
  pDVar11 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_4c = 1;
  FUN_1007c58c0(&local_48,&local_4c);
  local_50 = 0;
  FUN_1007c58c0(&local_48,&local_50);
  cVar5 = FUN_100d80630(1);
  if (cVar5 == '\0') {
    local_54 = 2;
    FUN_1007c58c0(&local_48,&local_54);
  }
  FUN_1007c6200(&local_78,&local_48);
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      uVar1 = **(uint **)local_70;
      local_88 = pDVar11;
      local_7c = uVar1;
      uVar6 = FUN_100129b20(&local_40,&local_7c);
      FUN_10012c3d0(&local_a8,uVar6);
      local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
      local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
      if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
        do {
          local_90 = 1;
          local_b0 = *(undefined8 *)local_a0;
          FUN_1007c5970(&local_88,&local_b0);
          local_a0 = local_a0 + 8;
        } while (local_a0 != local_98);
      }
      pDVar11 = local_a8;
      local_90 = 1;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007c01e5;
        }
        iVar2 = *(int *)(local_a8 + 0xc);
        if (iVar2 != *(int *)(local_a8 + 8)) {
          lVar12 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar2 * -8;
          pDVar13 = local_a8 + (long)iVar2 * 8 + 8;
          do {
            if (*(long **)pDVar13 != (long *)0x0) {
              (**(code **)(**(long **)pDVar13 + 0x88))();
            }
            pDVar13 = pDVar13 + -8;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0);
        }
        QListData::dispose(pDVar11);
      }
LAB_1007c01e5:
      if (uVar1 == 2) {
        this = operator_new(0x120);
        CHwNetAdapter::CHwNetAdapter(this);
        CHwNetAdapter::setSysIndex((int)this);
        pcVar4 = *(code **)(*(long *)this + 0xb0);
        QMetaObject::tr((char *)&local_d8,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Default_Adapter_10226e7b8);
        (*pcVar4)(this,&local_d8);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c02cf;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1007c02cf:
        pcVar4 = *(code **)(*(long *)this + 0xa0);
        QMetaObject::tr((char *)&local_e0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Default_Adapter_10226e7b8);
        (*pcVar4)(this,&local_e0);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c0340;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1007c0340:
        CHwNetAdapter::setNetAdapterType(this,0);
        CHwNetAdapter::setEnabled(SUB81(this,0));
        local_e8 = this;
        FUN_1007c59d0(&local_88,&local_e8);
        QMetaObject::tr((char *)&local_f0,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Bridged_Network_10226e760);
        FUN_1007c1750(param_1,&local_88,&local_f0,param_2,0);
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c03e6;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_1007c03e6:
        (**(code **)(*(long *)this + 0x88))(this);
      }
      else if (uVar1 < 2) {
        if (*(int *)(local_88 + 0xc) - *(int *)(local_88 + 8) < 2) {
          pQVar9 = operator_new(0x18);
          if (uVar1 == 1) {
            QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Shared_Network_10226e770);
          }
          else {
            QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Host_Only_Network_10226e768);
          }
          FUN_1007b5750(pQVar9,(uVar1 == 1) + '\a',param_1,&local_c0);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007c054a;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1007c054a:
          QAction::setCheckable(SUB81(pQVar9,0));
          piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
          local_d0 = piVar10;
          local_c8 = pQVar9;
          FUN_1007c57e0(param_1 + 0x38,&local_d0);
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + -1;
            local_31 = *piVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar10);
            }
          }
          FUN_1007b5f30(plVar8,pQVar9);
        }
        else {
          if (uVar1 == 1) {
            QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Shared_Network_10226e770);
          }
          else {
            QMetaObject::tr((char *)&local_b8,PTR_staticMetaObject_1021e1520,
                            (int)PTR_s_Host_Only_Network_10226e768);
          }
          FUN_1007c1750(param_1,&local_88,&local_b8,param_2,0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007c05ad;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
      }
LAB_1007c05ad:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007c05d3;
        }
        QListData::dispose(local_88);
      }
LAB_1007c05d3:
      local_70 = local_70 + 8;
      pDVar11 = (Data *)PTR_shared_null_1021e15e8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c0746;
    }
    iVar2 = *(int *)(local_78 + 0xc);
    if (iVar2 != *(int *)(local_78 + 8)) {
      lVar12 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar2 * -8;
      pDVar11 = local_78 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_1007c0746:
  QActionGroup::actions();
  iVar2 = *(int *)(local_f8 + 0xc);
  iVar3 = *(int *)(local_f8 + 8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c0788;
    }
    QListData::dispose(local_f8);
  }
LAB_1007c0788:
  if (iVar2 == iVar3) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  cVar5 = FUN_1001754c0(lVar7,0x13);
  if ((cVar5 != '\0') && (cVar5 = FUN_100d80630(1), cVar5 == '\0')) {
    FUN_1007c30b0(param_1);
  }
  pDVar11 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c082f;
    }
    iVar2 = *(int *)(local_48 + 0xc);
    if (iVar2 != *(int *)(local_48 + 8)) {
      lVar7 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar2 * -8;
      pDVar13 = local_48 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar13 != (void *)0x0) {
          operator_delete(*(void **)pDVar13);
        }
        pDVar13 = pDVar13 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_1007c082f:
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
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_10012bff0();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return;
}

