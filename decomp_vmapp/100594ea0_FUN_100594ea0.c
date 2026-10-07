
ulong FUN_100594ea0(long param_1,undefined8 param_2)

{
  long ****pppplVar1;
  char cVar2;
  long *plVar3;
  QString *pQVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  int iVar10;
  bool bVar11;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  long ***local_d0;
  long ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_88 [12];
  int local_7c;
  QArrayData *local_78;
  long *local_68;
  long *plStack_60;
  long *local_58;
  long local_48;
  undefined1 local_40;
  uint7 uStack_3f;
  uint local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_a8 = (ulong)*(uint *)(param_1 + 0x30);
  local_d0 = (long ***)&local_c8;
  local_c0 = 0;
  local_c8 = (long ***)0x0;
  plVar5 = (long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) >> 9) * 8);
  plVar3 = (long *)0x0;
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x40)) {
    plVar3 = (long *)((*(ulong *)(param_1 + 0x58) & 0x1ff) * 8 + *plVar5);
  }
  local_98 = param_2;
  while( true ) {
    plVar6 = (long *)0x0;
    if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x40)) {
      uVar7 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x60);
      plVar6 = (long *)((uVar7 & 0x1ff) * 8 +
                       *(long *)(*(long *)(param_1 + 0x40) + (uVar7 >> 9) * 8));
    }
    if (plVar3 == plVar6) break;
    (**(code **)(*(long *)*plVar3 + 0x38))((long *)*plVar3,local_88);
    (**(code **)(*(long *)*plVar3 + 0xd0))(&local_e0);
    FUN_100585d90(&local_d8,param_1,&local_e0);
    FUN_10059a630(&local_d0,&local_d8);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059501b;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10059501b:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100595051;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100595051:
    if (local_7c == 2) {
      if (*plVar3 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = ___dynamic_cast(*plVar3,&PTR_vtable_10111dd60,&PTR_vtable_100bca8b0,
                                   0xffffffffffffffff);
        if (local_48 != 0) {
          local_40 = 0;
          if (plStack_60 == local_58) {
            FUN_10059a740(&local_68,&local_48);
          }
          else {
            plStack_60[1] = (ulong)uStack_3f << 8;
            *plStack_60 = local_48;
            plStack_60 = plStack_60 + 2;
          }
          goto LAB_100595190;
        }
      }
      (**(code **)(*(long *)*plVar3 + 0xd0))(&local_f0);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Can\'t cast to compressed image: %s");
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100595141;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
LAB_100595141:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100595190;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
    }
LAB_100595190:
    plVar3 = plVar3 + 1;
    if ((long)plVar3 - *plVar5 == 0x1000) {
      plVar3 = (long *)plVar5[1];
      plVar5 = plVar5 + 1;
    }
  }
  if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
    plVar5 = *(long **)(param_1 + 0x20);
    do {
      FUN_100585d90(&local_f8,param_1,plVar5 + 7);
      pppplVar1 = (long ****)local_c8;
      pppplVar9 = &local_c8;
      if ((long ****)local_c8 == (long ****)0x0) {
LAB_10059527c:
        pQVar4 = (QString *)FUN_100684400(&local_f8,0x403,(int)plVar5[6],&local_38,0);
        if (pQVar4 == (QString *)0x0) {
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Can\'t open image: %s, Error: 0x%x",
                        local_100 + *(long *)(local_100 + 0x10),local_38);
          iVar10 = 0x10;
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005954c0;
            }
            QArrayData::deallocate(local_100,1,8);
          }
        }
        else {
          (**(code **)(pQVar4->field0_0x0 + 0x38))(pQVar4,local_88);
          if (local_7c == 2) {
            local_48 = ___dynamic_cast(pQVar4,&PTR_vtable_10111dd60,&PTR_vtable_100bca8b0,
                                       0xffffffffffffffff);
            if (local_48 == 0) {
              (**(code **)(pQVar4->field0_0x0 + 0xd0))(&local_110,pQVar4);
              QString::toUtf8();
              FUN_1008e3970("","vdisk",0,"Can\'t cast to compressed image: %s, Error: 0x%x",
                            local_108 + *(long *)(local_108 + 0x10),local_38);
              if (*(int *)local_108 != -1) {
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_31 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100595452;
                }
                QArrayData::deallocate(local_108,1,8);
              }
LAB_100595452:
              if (*(int *)local_110 != -1) {
                if (*(int *)local_110 != 0) {
                  LOCK();
                  *(int *)local_110 = *(int *)local_110 + -1;
                  local_31 = *(int *)local_110 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100595488;
                }
                QArrayData::deallocate(local_110,2,8);
              }
LAB_100595488:
              (**(code **)(pQVar4->field0_0x0 + 0x28))(pQVar4);
              iVar10 = 0xd;
              (**(code **)(pQVar4->field0_0x0 + 0x20))(pQVar4);
            }
            else {
              local_40 = 1;
              if (plStack_60 == local_58) {
                iVar10 = 0;
                FUN_10059a740(&local_68,&local_48);
              }
              else {
                plStack_60[1] = CONCAT71(uStack_3f,1);
                *plStack_60 = local_48;
                plStack_60 = plStack_60 + 2;
                iVar10 = 0;
              }
            }
          }
          else {
            (**(code **)(pQVar4->field0_0x0 + 0x28))(pQVar4);
            iVar10 = 0xd;
            (**(code **)(pQVar4->field0_0x0 + 0x20))(pQVar4);
          }
        }
      }
      else {
        do {
          while (pppplVar8 = pppplVar1, cVar2 = operator<((QString *)(pppplVar8 + 4),&local_f8),
                cVar2 != '\0') {
            pppplVar1 = (long ****)pppplVar8[1];
            if ((long ****)pppplVar8[1] == (long ****)0x0) goto LAB_100595253;
          }
          pppplVar9 = pppplVar8;
          pppplVar1 = (long ****)*pppplVar8;
        } while ((long ****)*pppplVar8 != (long ****)0x0);
LAB_100595253:
        if (pppplVar9 == &local_c8) goto LAB_10059527c;
        pQVar4 = (QString *)(pppplVar9 + 4);
        cVar2 = operator<(&local_f8,pQVar4);
        iVar10 = 0xd;
        if (cVar2 != '\0') goto LAB_10059527c;
      }
LAB_1005954c0:
      if (*(int *)local_f8.field0_0x0 != -1) {
        if (*(int *)local_f8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
          local_31 = *(int *)local_f8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005954f6;
        }
        QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
      }
LAB_1005954f6:
      if (iVar10 != 0) {
        plVar3 = local_68;
        plVar6 = plStack_60;
        if (iVar10 == 0x10) goto LAB_100595794;
        if (iVar10 != 0xd) goto LAB_1005957c6;
      }
      plVar3 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar11 = (long *)*plVar6 != plVar5;
          plVar5 = plVar6;
        } while (bVar11);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      plVar5 = plVar6;
    } while (plVar6 != (long *)(param_1 + 0x28));
  }
  plVar3 = local_68;
  plVar6 = local_68;
  if (local_68 != plStack_60) {
    do {
      local_38 = FUN_100692f90(*plVar6,&local_b8);
      if ((int)local_38 < 0) {
        plVar5 = (long *)*plVar6;
        (**(code **)(*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18)) + 0xd0))
                  (&local_120,(long)plVar5 + *(long *)(*plVar5 + -0x18));
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error while converting image %s Error: %x",
                      local_118 + *(long *)(local_118 + 0x10),local_38);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100595733;
          }
          QArrayData::deallocate(local_118,1,8);
        }
LAB_100595733:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100595770;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
LAB_100595770:
      plVar6 = plVar6 + 2;
      plVar3 = local_68;
    } while (plVar6 != plStack_60);
  }
LAB_100595794:
  for (; plVar3 != plVar6; plVar3 = plVar3 + 2) {
    if ((char)plVar3[1] != '\0') {
      (**(code **)(*(long *)*plVar3 + 0x178))();
      (**(code **)(*(long *)*plVar3 + 0x160))();
      plVar6 = plStack_60;
    }
  }
  pQVar4 = (QString *)(ulong)local_38;
LAB_1005957c6:
  FUN_100599020(&local_d0,local_c8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100595809;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100595809:
  if (local_68 != (long *)0x0) {
    if (plStack_60 != local_68) {
      plStack_60 = (long *)((~((long)plStack_60 + (-0x10 - (long)local_68)) & 0xfffffffffffffff0U) +
                           (long)plStack_60);
    }
    operator_delete(local_68);
  }
  return (ulong)pQVar4 & 0xffffffff;
}

