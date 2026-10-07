
void FUN_1000ab820(long param_1,int *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 local_150 [24];
  QArrayData *local_138;
  QArrayData *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ushort local_102;
  long *local_100;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(0,0x16,*param_2);
  }
  puVar2 = (ulong *)(param_2 + 1);
  iVar7 = *param_2;
  if (iVar7 < 0x195) {
    if (iVar7 < 0xd5) {
      if (iVar7 - 0x65U < 2) {
        QMutex::lock();
        lVar9 = DAT_1011cc808;
        if (DAT_1011cc808 != 0) {
          DAT_1011cc810 = DAT_1011cc810 + 1;
        }
        QMutex::unlock();
        if (*(long *)(lVar9 + 0xd8) != 0) {
          FUN_100520b40(*(long *)(lVar9 + 0xd8),*param_2 == 0x66,puVar2);
        }
        FUN_100026030(&DAT_1011cc7f8);
        return;
      }
    }
    else if (iVar7 < 0xe7) {
      switch(iVar7) {
      case 0xd5:
        FUN_100091b80(param_1,param_2[2]);
        return;
      case 0xd7:
        FUN_1000e7880();
        return;
      case 0xd8:
        local_102 = (ushort)*puVar2;
        FUN_1000da040(&local_102,*(undefined8 *)(param_1 + 0x1938));
        *puVar2 = (ulong)local_102;
        return;
      case 0xd9:
        if (*(long *)(param_1 + 0x1ac8) == 0) {
          return;
        }
        FUN_1000f9f60(*(long *)(param_1 + 0x1ac8),(char)param_2[1],param_2[2]);
        return;
      }
    }
    else if (iVar7 < 0x133) {
      if (iVar7 - 0xe7U < 2) {
        plVar11 = *(long **)(param_1 + 0x1a18);
        if (plVar11 == (long *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x40);
LAB_1000abad4:
                    /* WARNING: Could not recover jumptable at 0x0001000abae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar11,param_2);
        return;
      }
      if (iVar7 == 0x101) {
        FUN_1008e3970("","vm",0,"Booting from USB. Disable suspend.");
        *(byte *)(param_1 + 0x1ab1) = *(byte *)(param_1 + 0x1ab1) | 0x40;
        return;
      }
      if (iVar7 == 0x104) {
        uVar10 = FUN_1000915f0(param_1);
        FUN_1002c0b00(uVar10);
        return;
      }
    }
    else {
      if (iVar7 == 0x133) {
        FUN_100259060(&local_58,0,(uint)*puVar2);
        local_50 = local_58;
        if (*(long *)(local_58[2] + 8) != 0) {
          uVar10 = ___dynamic_cast(*(long *)(local_58[2] + 8),&PTR_vtable_100baea70,
                                   &PTR_vtable_100bef9d0,0x68);
          FUN_10026b3f0(uVar10);
          local_50 = local_58;
        }
        if (local_50 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar11 = local_50 + 1;
        iVar7 = (int)*plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
LAB_1000abca3:
        if (iVar7 != 1) {
          return;
        }
        (**(code **)(*local_50 + 0x10))();
        return;
      }
      if (iVar7 == 0x135) {
        if (*(int *)(param_1 + 0x584) != 0) {
          FUN_1002592b0(FUN_1000acc70,0);
          return;
        }
        if (*(long *)(param_1 + 0x1988) == 0) {
          return;
        }
        FUN_10027fb20();
        return;
      }
    }
  }
  else if (iVar7 < 0x25c) {
    if (iVar7 < 0x200) {
      if (iVar7 == 0x195) {
        FUN_1008e3970("","vm",0,"Guest ask to force enable virtual USB mouse and keyboard");
        FUN_1000979a0(param_1);
        return;
      }
      if (iVar7 == 0x1f5) {
        FUN_100258cd0(&local_40,3,0);
        plVar11 = local_40;
        if ((*(long *)(local_40[2] + 8) != 0) &&
           (lVar9 = ___dynamic_cast(*(long *)(local_40[2] + 8),&PTR_vtable_100baea70,
                                    &PTR_vtable_100baf770,0x68), lVar9 != 0)) {
          FUN_1002724a0(lVar9);
          plVar11 = local_40;
        }
        if (plVar11 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar11 + 1;
        iVar7 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
LAB_1000aba89:
        if (iVar7 != 1) {
          return;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
        return;
      }
      if (iVar7 == 0x1f6) {
        uVar10 = 0;
        FUN_100259060(&local_50,0,(uint)*puVar2);
        if (*(long *)(local_50[2] + 8) != 0) {
          uVar10 = ___dynamic_cast(*(long *)(local_50[2] + 8),&PTR_vtable_100baea70,
                                   &PTR_vtable_100baf600,0x68);
        }
        FUN_100270f00(uVar10);
        if (local_50 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar11 = local_50 + 1;
        iVar7 = (int)*plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        goto LAB_1000abca3;
      }
    }
    else {
      switch(iVar7) {
      case 0x200:
        FUN_100258cd0(&local_48,0xb,(short)*puVar2);
        plVar11 = local_48;
        if ((*(long *)(local_48[2] + 8) != 0) &&
           (lVar9 = ___dynamic_cast(*(long *)(local_48[2] + 8),&PTR_vtable_100baea70,
                                    &PTR_vtable_100baf0f0,0x68), lVar9 != 0)) {
          FUN_100264110(lVar9);
          plVar11 = local_48;
        }
        if (plVar11 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar11 + 1;
        iVar7 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        goto LAB_1000aba89;
      case 0x201:
        FUN_1000dda80(*puVar2 >> 0x20,*puVar2 & 0xffff);
        return;
      case 0x202:
        uVar6 = 0xffffffff;
        if (*(long *)(param_1 + 0x1ac8) != 0) {
          uVar6 = (uint)*(ushort *)(*(long *)(param_1 + 0x1ac8) + 0x20);
        }
LAB_1000ac3e3:
        *(uint *)puVar2 = uVar6;
        return;
      case 0x203:
        if (*(long *)(param_1 + 0x1ac8) != 0) {
          bVar4 = FUN_1000f9a90(*(long *)(param_1 + 0x1ac8),0);
          *(ushort *)puVar2 = (ushort)bVar4;
          return;
        }
        *(undefined2 *)puVar2 = 0;
        return;
      }
    }
  }
  else if (iVar7 < 700) {
    if (iVar7 < 0x276) {
      if (iVar7 == 0x25c) {
        if (*(long *)(param_1 + 0x1a30) == 0) {
          return;
        }
        FUN_100533870(*(long *)(param_1 + 0x1a30),*puVar2);
LAB_1000ab9ee:
        FUN_10008fa70(param_1,0x4e49);
        return;
      }
      if (iVar7 == 0x25d) {
        if (*(long *)(param_1 + 0x1a30) == 0) {
          return;
        }
        FUN_1005338b0(*(long *)(param_1 + 0x1a30),(uint)*puVar2 != 0);
        if ((uint)*puVar2 != 0) {
          return;
        }
        goto LAB_1000ab9ee;
      }
    }
    else {
      if (iVar7 == 0x276) {
        FUN_1000a4cd0(param_1,param_2[1],param_2[2],param_2[3]);
        return;
      }
      if (iVar7 == 0x277) {
        FUN_1000a5b20(param_1,param_2[1],param_2[2]);
        return;
      }
    }
  }
  else if (iVar7 < 900) {
    if (799 < iVar7) {
      switch(iVar7) {
      case 800:
        local_78 = (void *)0x0;
        pvStack_70 = (void *)0x0;
        local_68 = 0;
        local_98 = 0;
        puStack_90 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
        if (param_2[3] != 0) {
          lVar9 = 0;
          do {
            local_a8 = (QArrayData *)QString::fromAscii_helper("%1",2);
            QString::arg(&local_a0,&local_a8,param_2[lVar9 + 4],0,10,0x20);
            if (puStack_90 == local_88) {
              FUN_1000b5140(&local_98,&local_a0);
            }
            else {
              *puStack_90 = local_a0;
              if (1 < *(int *)local_a0 + 1U) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + 1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
              }
              puStack_90 = puStack_90 + 1;
            }
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000abe28;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
LAB_1000abe28:
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000abe5e;
              }
              QArrayData::deallocate(local_a8,2,8);
            }
LAB_1000abe5e:
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < (uint)param_2[3]);
        }
        if ((uint)*puVar2 != 0x80010015) {
          CVmConfiguration::getVmIdentification();
          CVmIdentification::getVmName();
          if (puStack_90 == local_88) {
            FUN_1000b5140(&local_98,&local_b0);
          }
          else {
            *puStack_90 = local_b0;
            if (1 < *(int *)local_b0 + 1U) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + 1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
            }
            puStack_90 = puStack_90 + 1;
          }
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ac6f4;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_1000ac6f4:
        uVar10 = DAT_1011c3650;
        uVar3 = *puVar2;
        FUN_10002ddb0(local_e0,&local_98);
        FUN_10006a5d0(local_c8,local_e0);
        FUN_1000648b0(uVar10,(uint)uVar3,&local_78,local_c8);
        FUN_10006a680(local_c8);
        FUN_10002d9d0(local_e0);
        if (param_2[2] == 1) {
          cVar5 = QThread::isRunning();
          if ((cVar5 != '\0') && ((uint)*puVar2 == 0x80010013)) {
            *(undefined4 *)(*(long *)(param_1 + 0x109c8) + 500) = 0x80010013;
          }
          *(undefined4 *)(param_1 + 0x1948) = 3;
          FUN_100062ab0(DAT_1011c3650);
          FUN_10008fa70(param_1,0x4e27);
          uVar6 = 0;
          while( true ) {
            uVar8 = *(uint *)(param_1 + 0x1164);
            if (uVar8 == 0) {
              uVar8 = *(uint *)(param_1 + 0x5d8);
              *(uint *)(param_1 + 0x1164) = uVar8;
            }
            if (uVar8 <= uVar6) break;
            FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + (ulong)uVar6 * 8),4);
            uVar6 = uVar6 + 1;
          }
        }
        FUN_10002d9d0(&local_98);
        if (local_78 == (void *)0x0) {
          return;
        }
        if (pvStack_70 != local_78) {
          pvStack_70 = (void *)((~((long)pvStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU)
                               + (long)pvStack_70);
        }
        operator_delete(local_78);
        return;
      case 0x321:
        uVar3 = *puVar2;
        FUN_1008e3970("","vm",0,"Guest is going to sleep for %u s",(uint)uVar3);
        *(undefined4 *)(param_1 + 0x109d0) = 1;
        FUN_10008fa90(param_1,0x4e22,&DAT_1011ccb98,0,1,(uint)uVar3);
        FUN_1000acd00(param_1,0x80000000,0,0);
        uVar6 = FUN_1000d9ed0(*(int *)(param_1 + 0xb60) != 0);
        goto LAB_1000ac3e3;
      default:
        goto switchD_1000ab995_caseD_d6;
      case 0x324:
        QMutex::lock();
        QWaitCondition::wakeOne();
        break;
      case 0x325:
        QMutex::lock();
        bVar13 = *(int *)(param_1 + 0x109b0) != 3;
        if (bVar13) {
          FUN_1008e3970("","vm",0,"Ignoring unexpected WS protection response (state %u)",
                        *(undefined4 *)(param_1 + 0x109b0));
        }
        else {
          QWaitCondition::wakeOne();
        }
        *(uint *)puVar2 = (uint)bVar13;
        break;
      case 0x326:
        QMutex::lock();
        if ((uint)*puVar2 != 0) {
          lVar9 = 0;
          do {
            FUN_1000cb9f0(*(undefined8 *)(param_1 + 0x109c8),param_2[lVar9 + 3] * param_2[2]);
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < (uint)*puVar2);
        }
      }
      QMutex::unlock();
      return;
    }
    if (iVar7 == 700) {
      if (*(long *)(param_1 + 0x1990 + (ulong)(uint)*puVar2 * 8) != 0) {
        FUN_1002736e0();
        return;
      }
      pcVar12 = "NETEVENT for unpresent card %u";
LAB_1000ac1a5:
      FUN_1008e3970("","vm",0,pcVar12);
      return;
    }
  }
  else if (iVar7 < 0x708) {
    if (iVar7 < 0x514) {
      if (iVar7 == 900) {
        FUN_1008e3970("","vm",0,"Virtual machine is ready to boot!");
        uVar10 = DAT_1011c3650;
        local_f8 = (void *)0x0;
        pvStack_f0 = (void *)0x0;
        local_e8 = 0;
        plVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        local_100 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          *(undefined4 *)(plVar11 + 1) = 1;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_100bef0d0;
          local_100 = plVar11;
        }
        FUN_100063770(uVar10,0x18b50,0,&local_f8,0xbbb,&local_100);
        if (local_100 != (long *)0x0) {
          LOCK();
          plVar11 = local_100 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)(*local_100 + 0x10))();
          }
        }
        if (local_f8 == (void *)0x0) {
          return;
        }
        if (pvStack_f0 != local_f8) {
          pvStack_f0 = (void *)((~((long)pvStack_f0 + (-8 - (long)local_f8)) & 0xfffffffffffffff8U)
                               + (long)pvStack_f0);
        }
        operator_delete(local_f8);
        return;
      }
      if (iVar7 == 1000) {
        uVar10 = *(undefined8 *)(param_1 + 0x1a28);
LAB_1000ac48f:
        FUN_1002a5650(uVar10,puVar2);
        return;
      }
      if (iVar7 == 0x3e9) {
        uVar10 = *(undefined8 *)(param_1 + 0x1a28);
LAB_1000ac2fb:
        FUN_1002a5850(uVar10,puVar2);
        return;
      }
    }
    else if (iVar7 < 0x641) {
      if (iVar7 < 0x574) {
        if (iVar7 == 0x514) {
          uVar10 = *(undefined8 *)(param_1 + 0x1a38);
          goto LAB_1000ac48f;
        }
        if (iVar7 == 0x515) {
          uVar10 = *(undefined8 *)(param_1 + 0x1a38);
          goto LAB_1000ac2fb;
        }
        if (iVar7 == 0x546) {
          FUN_1002af3b0(*(undefined8 *)(param_1 + 0x1a38),puVar2);
          return;
        }
      }
      else {
        switch(iVar7) {
        case 0x574:
          FUN_1008e3970("","vm",0,"Guest Mac OS Version on VM APP: 0x%x",(uint)*puVar2);
          FUN_100097c20(param_1,(uint)*puVar2);
          return;
        case 0x576:
          *(undefined1 *)((long)param_2 + 0x32) = 0;
          FUN_10010e8d0(puVar2);
          return;
        case 0x577:
          FUN_100786570(puVar2);
          return;
        case 0x579:
          plVar11 = *(long **)(param_1 + 0x1a40);
          param_2 = (int *)(*(long *)(param_1 + 0x1938) + 0xd440 + (ulong)(uint)param_2[1] * 0x1040)
          ;
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x10);
          goto LAB_1000abad4;
        }
      }
    }
    else if (iVar7 == 0x641) {
      FUN_100259060(&local_60,2,param_2[1] * 0x20 + param_2[2]);
      plVar11 = (long *)0x0;
      if (*(long *)(local_60[2] + 8) != 0) {
        plVar11 = (long *)___dynamic_cast(*(long *)(local_60[2] + 8),&PTR_vtable_100baea70,
                                          &PTR_vtable_100bb1340,0x68);
      }
      iVar7 = param_2[3];
      if (iVar7 == 2) {
        bVar13 = true;
        if (plVar11 != (long *)0x0) {
          iVar7 = (**(code **)(*plVar11 + 0x78))(plVar11,param_2 + 5);
          bVar13 = iVar7 != 0;
        }
        param_2[10] = (uint)bVar13;
      }
      else if (iVar7 == 1) {
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
          (**(code **)(*plVar11 + 0x38))(plVar11);
          (**(code **)(*plVar11 + 0x30))(plVar11);
          (**(code **)(*plVar11 + 0x40))(plVar11);
        }
      }
      else if ((iVar7 == 0) && (plVar11 != (long *)0x0)) {
        FUN_10028df30(plVar11);
      }
      if (local_60 == (long *)0x0) {
        return;
      }
      LOCK();
      plVar11 = local_60 + 1;
      iVar7 = (int)*plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      local_50 = local_60;
      goto LAB_1000abca3;
    }
  }
  else {
    if (iVar7 - 0x76eU < 2) {
LAB_1000ac0b9:
      if (*(long *)(param_1 + 0x1a38) == 0) {
        return;
      }
      FUN_1002b1e90(*(long *)(param_1 + 0x1a38),param_2);
      return;
    }
    if (iVar7 == 0x708) {
      *(uint *)(param_1 + 0x1168) = (uint)*puVar2;
      pcVar12 = "Online CPU mask has been changed: 0x%x";
      goto LAB_1000ac1a5;
    }
    if (iVar7 == 0x76c) goto LAB_1000ac0b9;
  }
switchD_1000ab995_caseD_d6:
  iVar7 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x40))(*(long **)(param_1 + 0x1950),param_2);
  if (iVar7 != 0) {
    return;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_138 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_130,&local_138,*param_2,0,10,0x20);
  FUN_1000b5140(&local_128,&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ac582;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1000ac582:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ac5b8;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000ac5b8:
  FUN_10002ddb0(local_150,&local_128);
  FUN_100408ff0(param_1 + 0x10b0,0x80000182,local_150);
  FUN_10002d9d0(local_150);
  FUN_10002d9d0(&local_128);
  return;
}

