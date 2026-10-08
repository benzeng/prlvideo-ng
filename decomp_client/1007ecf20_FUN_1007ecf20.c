
void FUN_1007ecf20(long param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  QString *pQVar3;
  ulong uVar4;
  _func_void_Node_ptr *p_Var5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  _func_void_Node_ptr *p_Var13;
  long *plVar14;
  long lVar15;
  long lVar16;
  _func_void_Node_ptr *p_Var17;
  _func_void_Node_ptr *p_Var18;
  bool bVar19;
  long local_458;
  QArrayData *local_450;
  QArrayData *local_448;
  QArrayData *local_440;
  QString local_438;
  Data *local_430;
  Data *local_428;
  Data *local_420;
  undefined4 local_418;
  QArrayData *local_410;
  Data *local_408;
  Data *local_400;
  Data *local_3f8;
  Data *local_3f0;
  int local_3e8;
  _func_void_Node_ptr *local_3e0;
  QArrayData *local_3d8;
  QString local_3d0 [108];
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    uVar11 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",0,"(!)Error: guest OS information request failed %s",uVar11);
LAB_1007ed048:
    if (*(long *)(param_1 + 0x40) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_100867f10(*(undefined8 *)(param_1 + 0x10),0);
    FUN_100867f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40));
    return;
  }
  QObject::sender();
  lVar10 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar10 == 0) goto LAB_1007ed048;
  CSystemStatistics::CSystemStatistics((CSystemStatistics *)local_3d0);
  CSdkRequest::getResultAsString((int)&local_3d8);
  iVar7 = CSystemStatistics::fromString(local_3d0);
  bVar19 = true;
  if (iVar7 == 0) {
    lVar10 = CVmGuestOsInformation::getGuestToolsList();
    bVar19 = lVar10 == 0;
  }
  if (*(int *)local_3d8 != -1) {
    if (*(int *)local_3d8 != 0) {
      LOCK();
      *(int *)local_3d8 = *(int *)local_3d8 + -1;
      local_31 = *(int *)local_3d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ecfe0;
    }
    QArrayData::deallocate(local_3d8,2,8);
  }
LAB_1007ecfe0:
  if (bVar19) {
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      FUN_100867f10(*(undefined8 *)(param_1 + 0x10),0);
      FUN_100867f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40));
    }
    goto LAB_1007ed85f;
  }
  local_3e0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CAntivirusInfo::availableAntiviruses(&local_408,1);
  local_400 = local_408;
  if (*(int *)local_408 != -1) {
    if (*(int *)local_408 == 0) {
      QListData::detach((int)&local_400);
      lVar10 = (long)*(int *)(local_400 + 8);
      if ((local_408 + (long)*(int *)(local_408 + 8) * 8 != local_400 + lVar10 * 8) &&
         (lVar15 = *(int *)(local_400 + 0xc) - lVar10,
         lVar15 != 0 && lVar10 <= *(int *)(local_400 + 0xc))) {
        _memcpy(local_400 + lVar10 * 8 + 0x10,local_408 + (long)*(int *)(local_408 + 8) * 8 + 0x10,
                lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + 1;
      local_31 = *(int *)local_408 != 0;
      UNLOCK();
    }
  }
  local_3f8 = local_400 + (long)*(int *)(local_400 + 8) * 8 + 0x10;
  local_3f0 = local_400 + (long)*(int *)(local_400 + 0xc) * 8 + 0x10;
  local_3e8 = 1;
  if (*(int *)local_408 == -1) {
LAB_1007ed183:
    if (local_3f8 != local_3f0) {
      do {
        uVar11 = *(undefined8 *)local_3f8;
        CAntivirusInfo::tisUuid();
        puVar12 = (undefined8 *)FUN_1007efa00(&local_3e0,&local_410);
        *puVar12 = uVar11;
        if (*(int *)local_410 != -1) {
          if (*(int *)local_410 != 0) {
            LOCK();
            *(int *)local_410 = *(int *)local_410 + -1;
            local_31 = *(int *)local_410 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ed202;
          }
          QArrayData::deallocate(local_410,2,8);
        }
LAB_1007ed202:
        local_3f8 = local_3f8 + 8;
        local_3e8 = 1;
      } while (local_3f8 != local_3f0);
    }
  }
  else {
    if (*(int *)local_408 == 0) {
LAB_1007ed171:
      QListData::dispose(local_408);
    }
    else {
      LOCK();
      *(int *)local_408 = *(int *)local_408 + -1;
      local_31 = *(int *)local_408 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ed171;
    }
    if (local_3e8 != 0) goto LAB_1007ed183;
  }
  if (*(int *)local_400 != -1) {
    if (*(int *)local_400 != 0) {
      LOCK();
      *(int *)local_400 = *(int *)local_400 + -1;
      local_31 = *(int *)local_400 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ed253;
    }
    QListData::dispose(local_400);
  }
LAB_1007ed253:
  lVar10 = CVmGuestOsInformation::getGuestToolsList();
  local_430 = *(Data **)(lVar10 + 0x98);
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 == 0) {
      QListData::detach((int)&local_430);
      lVar15 = (long)*(int *)(local_430 + 8);
      lVar10 = *(long *)(lVar10 + 0x98);
      if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_430 + lVar15 * 8) &&
         (lVar16 = *(int *)(local_430 + 0xc) - lVar15,
         lVar16 != 0 && lVar15 <= *(int *)(local_430 + 0xc))) {
        _memcpy(local_430 + lVar15 * 8 + 0x10,
                (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar16 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + 1;
      local_31 = *(int *)local_430 != 0;
      UNLOCK();
    }
  }
  local_428 = local_430 + (long)*(int *)(local_430 + 8) * 8 + 0x10;
  local_420 = local_430 + (long)*(int *)(local_430 + 0xc) * 8 + 0x10;
  local_418 = 1;
  iVar7 = 10;
  local_458 = 0;
  if (*(int *)(local_430 + 8) != *(int *)(local_430 + 0xc)) {
    local_458 = 0;
    do {
      local_418 = 1;
      CGuestToolInfo::getToolId();
      p_Var5 = local_3e0;
      uVar2 = *(uint *)(local_3e0 + 0x20);
      if (uVar2 == 0) {
        bVar19 = false;
      }
      else {
        uVar8 = qHash(&local_438,*(uint *)(local_3e0 + 0x24));
        uVar4 = (ulong)uVar8 % (ulong)uVar2;
        p_Var18 = *(_func_void_Node_ptr **)(*(long *)(p_Var5 + 8) + uVar4 * 8);
        if (p_Var18 == p_Var5) {
          bVar19 = false;
        }
        else {
          p_Var17 = (_func_void_Node_ptr *)(*(long *)(p_Var5 + 8) + uVar4 * 8);
          do {
            if (*(uint *)(p_Var18 + 8) == uVar8) {
              cVar6 = operator==(&local_438,(QString *)(p_Var18 + 0x10));
              p_Var13 = *(_func_void_Node_ptr **)p_Var17;
              p_Var18 = *(_func_void_Node_ptr **)p_Var17;
              if (cVar6 != '\0') break;
            }
            p_Var17 = p_Var18;
            p_Var18 = *(_func_void_Node_ptr **)p_Var17;
            p_Var13 = p_Var5;
          } while (p_Var18 != p_Var5);
          if (p_Var13 == p_Var5) {
            bVar19 = false;
          }
          else {
            iVar7 = CGuestToolInfo::getToolState();
            bVar19 = iVar7 == 1;
          }
        }
      }
      if (*(int *)local_438.field0_0x0 != -1) {
        if (*(int *)local_438.field0_0x0 != 0) {
          LOCK();
          *(int *)local_438.field0_0x0 = *(int *)local_438.field0_0x0 + -1;
          local_31 = *(int *)local_438.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ed436;
        }
        QArrayData::deallocate((QArrayData *)local_438.field0_0x0,2,8);
      }
LAB_1007ed436:
      if (bVar19) {
        CGuestToolInfo::getToolId();
        iVar7 = QString::compare_helper
                          (local_440 + *(long *)(local_440 + 0x10),*(undefined4 *)(local_440 + 4),
                           "parallels.Antivirus.guest.win.thirdparty",0xffffffff,1);
        if (*(int *)local_440 != -1) {
          if (*(int *)local_440 != 0) {
            LOCK();
            *(int *)local_440 = *(int *)local_440 + -1;
            local_31 = *(int *)local_440 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ed4ad;
          }
          QArrayData::deallocate(local_440,2,8);
        }
LAB_1007ed4ad:
        if (iVar7 != 0) {
          CGuestToolInfo::getToolId();
          puVar12 = (undefined8 *)FUN_1007efa00(&local_3e0,&local_450);
          FUN_1007ec650(param_1,*puVar12,0);
          iVar7 = 1;
          if (*(int *)local_450 == -1) goto LAB_1007ed7a8;
          if (*(int *)local_450 != 0) {
            LOCK();
            *(int *)local_450 = *(int *)local_450 + -1;
            local_31 = *(int *)local_450 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ed7a8;
          }
          QArrayData::deallocate(local_450,2,8);
          goto LAB_1007ed7a8;
        }
        CGuestToolInfo::getToolId();
        plVar14 = (long *)FUN_1007efa00(&local_3e0,&local_448);
        local_458 = *plVar14;
        if (*(int *)local_448 != -1) {
          if (*(int *)local_448 != 0) {
            LOCK();
            *(int *)local_448 = *(int *)local_448 + -1;
            local_31 = *(int *)local_448 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ed517;
          }
          QArrayData::deallocate(local_448,2,8);
        }
LAB_1007ed517:
        CAntivirusInfo::availableAntiviruses(&local_60,1);
        local_58 = local_60;
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 == 0) {
            QListData::detach((int)&local_58);
            lVar10 = (long)*(int *)(local_58 + 8);
            if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar10 * 8) &&
               (lVar15 = *(int *)(local_58 + 0xc) - lVar10,
               lVar15 != 0 && lVar10 <= *(int *)(local_58 + 0xc))) {
              _memcpy(local_58 + lVar10 * 8 + 0x10,
                      local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,lVar15 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + 1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
          }
        }
        local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
        local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
        local_40 = 1;
        if (*(int *)local_60 == -1) {
LAB_1007ed5ea:
          uVar9 = 3;
          if (local_50 != local_48) {
            do {
              pQVar3 = *(QString **)local_50;
              CGuestToolInfo::getToolStringData();
              CAntivirusInfo::producerName();
              iVar7 = QString::indexOf(&local_68,&local_70,0,0);
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007ed65d;
                }
                QArrayData::deallocate(local_70,2,8);
              }
LAB_1007ed65d:
              if (*(int *)local_68 != -1) {
                if (*(int *)local_68 != 0) {
                  LOCK();
                  *(int *)local_68 = *(int *)local_68 + -1;
                  local_31 = *(int *)local_68 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007ed68d;
                }
                QArrayData::deallocate(local_68,2,8);
              }
LAB_1007ed68d:
              if (iVar7 != -1) {
                uVar9 = CAntivirusInfo::developer(pQVar3);
                break;
              }
              local_50 = local_50 + 8;
              local_40 = 1;
            } while (local_50 != local_48);
          }
        }
        else {
          if (*(int *)local_60 == 0) {
LAB_1007ed5cd:
            QListData::dispose(local_60);
          }
          else {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1007ed5cd;
          }
          uVar9 = 3;
          if (local_40 != 0) goto LAB_1007ed5ea;
        }
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ed6ea;
          }
          QListData::dispose(local_58);
        }
LAB_1007ed6ea:
        CAntivirusInfo::setDeveloper(local_458,uVar9,param_1 + 0x18);
      }
      local_428 = local_428 + 8;
      local_418 = 1;
    } while (local_428 != local_420);
    iVar7 = 10;
  }
LAB_1007ed7a8:
  if (*(int *)local_430 != -1) {
    if (*(int *)local_430 != 0) {
      LOCK();
      *(int *)local_430 = *(int *)local_430 + -1;
      local_31 = *(int *)local_430 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ed7d4;
    }
    QListData::dispose(local_430);
  }
LAB_1007ed7d4:
  if (iVar7 == 10) {
    if (local_458 == 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        FUN_100867f10(*(undefined8 *)(param_1 + 0x10),0);
        FUN_100867f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40));
      }
    }
    else {
      FUN_1007ec820(param_1 + 0x18);
      FUN_1007ec650(param_1,local_458,1);
    }
  }
  if (*(int *)(local_3e0 + 0x10) != -1) {
    if (*(int *)(local_3e0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_3e0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ed85f;
    }
    QHashData::free_helper(local_3e0);
  }
LAB_1007ed85f:
  CSystemStatistics::~CSystemStatistics((CSystemStatistics *)local_3d0);
  return;
}

