
void FUN_100061e60(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  long *local_60;
  QString local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  if (*param_2 == 0) {
    return;
  }
  lVar8 = *(long *)(*param_2 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x4c) == 0) {
    return;
  }
  uVar9 = *(uint *)(lVar8 + 0x40);
  uVar11 = 0;
  uVar10 = 0;
  if (0x804 < (int)uVar9) {
    if (uVar9 == 0x805) {
      uVar9 = 0x4e3c;
      uVar7 = 0;
      uVar11 = uVar10;
      goto switchD_100061edf_caseD_3eb;
    }
    if (uVar9 == 0xfaf) {
      uVar9 = 0x4e3b;
      uVar7 = 0;
      uVar11 = uVar10;
      goto switchD_100061edf_caseD_3eb;
    }
    goto switchD_100061edf_default;
  }
  if ((int)uVar9 < 0x3fd) {
    uVar7 = 0;
    switch(uVar9) {
    case 0x3e9:
switchD_100061edf_caseD_3e9:
      uVar9 = 0x4e21;
      break;
    case 0x3ea:
      FUN_10011a560(&local_50,param_2);
      CDispCommonPreferences::getWorkspacePreferences();
      cVar4 = CDispWorkspacePreferences::isAllowVmForceShutdown();
      if (local_50 == (long *)0x0) {
LAB_100061f42:
        lVar8 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pCmdStop","CVmController.cpp",
                      0x159,"innerHandlePackage");
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        lVar8 = local_50[2];
        LOCK();
        plVar1 = local_50 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
        if (lVar8 == 0) goto LAB_100061f42;
      }
      uVar9 = FUN_100123840(lVar8);
      uVar11 = uVar9 | 0x800;
      if ((uVar9 & 0x1000) != 0) {
        uVar11 = uVar9;
      }
      if (cVar4 == '\0') {
        uVar11 = uVar9;
      }
      uVar9 = 0x4e29;
      if ((uVar11 & 0xff) != 1) {
        if ((uVar11 & 0xff) == 2) {
          uVar9 = 0x4e2a;
        }
        else {
          uVar9 = 0x4e27;
          FUN_100062ab0(param_1);
        }
      }
      uVar11 = uVar11 >> 0xb & 1;
      uVar7 = 1;
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    case 0x3eb:
    case 0x3ec:
    case 0x3ee:
    case 0x3f0:
    case 0x3f1:
    case 0x3f2:
      goto switchD_100061edf_caseD_3eb;
    case 0x3ed:
switchD_100061edf_caseD_3ed:
      uVar7 = 1;
      uVar9 = 0x4e37;
      uVar11 = 4;
      goto switchD_100061edf_caseD_3eb;
    case 0x3ef:
      FUN_10011a560(&local_48,param_2);
      cVar4 = (**(code **)(*(long *)local_48[2] + 0x10))();
      if (cVar4 == '\0') {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pCmd->IsValid()",
                      "CVmController.cpp",0x143,"innerHandlePackage");
      }
      if (local_48 == (long *)0x0) {
LAB_1000625c9:
        lVar8 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pCmdWithAcpi",
                      "CVmController.cpp",0x147,"innerHandlePackage");
      }
      else {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        lVar8 = local_48[2];
        LOCK();
        plVar1 = local_48 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_48 + 0x10))();
        }
        if (lVar8 == 0) goto LAB_1000625c9;
      }
      bVar3 = FUN_100123260(lVar8);
      uVar9 = bVar3 | 0x4e22;
      if (local_48 != (long *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        iVar5 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_40 = local_48;
LAB_1000626a6:
        uVar11 = 0;
        if (iVar5 == 1) {
          (**(code **)(*local_40 + 0x10))();
          uVar7 = 0;
          goto switchD_100061edf_caseD_3eb;
        }
      }
      break;
    case 0x3f3:
      FUN_10011a560(&local_40,param_2);
      lVar8 = 0;
      if (local_40 != (long *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        lVar8 = local_40[2];
        LOCK();
        plVar1 = local_40 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      uVar6 = FUN_10011d660(lVar8);
      uVar9 = 0x4e2c;
      if ((uVar6 & 0x800) == 0) {
        uVar9 = 0x3f3;
      }
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        iVar5 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        goto LAB_1000626a6;
      }
    }
  }
  else {
    if ((int)uVar9 < 0x40a) {
      uVar7 = 0;
      if (uVar9 == 0x3fd) {
        return;
      }
      goto switchD_100061edf_caseD_3eb;
    }
    if ((int)uVar9 < 0x41e) {
      if (uVar9 == 0x40a) {
        uVar9 = 0x4e2e;
        uVar7 = 0;
        goto switchD_100061edf_caseD_3eb;
      }
      if (uVar9 == 0x40c) goto switchD_100061edf_caseD_3e9;
      goto switchD_100061edf_default;
    }
    if (uVar9 == 0x41e) goto switchD_100061edf_caseD_3ed;
    if (uVar9 != 0x421) goto switchD_100061edf_default;
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    FUN_10011a560(&local_60,param_2);
    if (local_60 == (long *)0x0) {
LAB_1000620cb:
      lVar8 = 0;
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pInternalCmd",
                    "CVmController.cpp",0x185,"innerHandlePackage");
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      lVar8 = local_60[2];
      LOCK();
      plVar1 = local_60 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
      if (lVar8 == 0) goto LAB_1000620cb;
    }
    FUN_10012baf0(&local_68,lVar8);
    QString::operator=(&local_58,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100062158;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100062158:
    local_70 = (QArrayData *)QString::fromAscii_helper("dbgdumpstop",0xb);
    iVar5 = QString::compare(&local_58,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000621b1;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1000621b1:
    uVar9 = 0x4e4c;
    if (iVar5 != 0) {
      local_78 = (QArrayData *)QString::fromAscii_helper("dbgdump",7);
      iVar5 = QString::compare(&local_58,&local_78,1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100062218;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100062218:
      uVar9 = 0x4e30;
      if (iVar5 != 0) {
        local_80 = (QArrayData *)QString::fromAscii_helper("ballooning",10);
        iVar5 = QString::compare(&local_58,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10006227f;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10006227f:
        uVar9 = 0x4e31;
        if (iVar5 != 0) {
          local_88 = (QArrayData *)QString::fromAscii_helper("teststat",8);
          iVar5 = QString::compare(&local_58,&local_88,1);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000622e6;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_1000622e6:
          uVar9 = 0x4e32;
          if (iVar5 != 0) {
            local_90 = (QArrayData *)QString::fromAscii_helper("etrace",6);
            iVar5 = QString::compare(&local_58,&local_90,1);
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100062359;
              }
              QArrayData::deallocate(local_90,2,8);
            }
LAB_100062359:
            uVar9 = 0x4e33;
            if (iVar5 != 0) {
              local_98 = (QArrayData *)QString::fromAscii_helper("guestdebugger",0xd);
              iVar5 = QString::compare(&local_58,&local_98,1);
              if (*(int *)local_98 != -1) {
                if (*(int *)local_98 != 0) {
                  LOCK();
                  *(int *)local_98 = *(int *)local_98 + -1;
                  local_31 = *(int *)local_98 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000623cc;
                }
                QArrayData::deallocate(local_98,2,8);
              }
LAB_1000623cc:
              uVar9 = 0x4e34;
              if (iVar5 != 0) {
                local_a0 = (QArrayData *)QString::fromAscii_helper("showcrystaledu",0xe);
                iVar5 = QString::compare(&local_58,&local_a0,1);
                if (*(int *)local_a0 != -1) {
                  if (*(int *)local_a0 != 0) {
                    LOCK();
                    *(int *)local_a0 = *(int *)local_a0 + -1;
                    local_31 = *(int *)local_a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10006243f;
                  }
                  QArrayData::deallocate(local_a0,2,8);
                }
LAB_10006243f:
                uVar9 = 0x4e36;
                if (iVar5 != 0) {
                  local_a8 = (QArrayData *)QString::fromAscii_helper("vmprofiler",10);
                  iVar5 = QString::compare(&local_58,&local_a8,1);
                  if (*(int *)local_a8 != -1) {
                    if (*(int *)local_a8 != 0) {
                      LOCK();
                      *(int *)local_a8 = *(int *)local_a8 + -1;
                      local_31 = *(int *)local_a8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000624b2;
                    }
                    QArrayData::deallocate(local_a8,2,8);
                  }
LAB_1000624b2:
                  uVar9 = 0x4e3a;
                  if (iVar5 != 0) {
                    uVar9 = 0x421;
                    FUN_100062bc0(param_1,param_2,0x80000008);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_100061edf_default;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      uVar7 = 0;
      uVar11 = uVar10;
      goto switchD_100061edf_caseD_3eb;
    }
  }
switchD_100061edf_default:
  uVar7 = 0;
  uVar11 = 0;
switchD_100061edf_caseD_3eb:
  cVar4 = FUN_10008fa90(DAT_1011c3698,uVar9,param_2,0,uVar7,uVar11);
  if (cVar4 == '\0') {
    FUN_100062bc0(param_1,param_2,0x80000009);
  }
  return;
}

