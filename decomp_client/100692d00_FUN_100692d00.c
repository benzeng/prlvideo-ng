
long FUN_100692d00(long param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  _func_void_Node_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  uint uVar7;
  long lVar8;
  _func_void_Node_ptr *p_Var9;
  undefined8 *puVar10;
  _func_void_Node_ptr *local_78;
  _func_void_Node_ptr *local_70;
  _func_void_Node_ptr *local_68;
  _func_void_Node_ptr *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    iVar4 = FUN_100695a10(param_2);
    if (iVar4 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
        uVar7 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)puVar2 + 0x24);
        for (puVar10 = *(undefined8 **)
                        (puVar2[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar2 + 4)) * 8);
            puVar10 != puVar2; puVar10 = (undefined8 *)*puVar10) {
          if ((*(uint *)(puVar10 + 1) == uVar7) && (puVar10[2] == param_3)) {
            if (puVar10 != puVar2) {
              FUN_100694130(&local_60,puVar10 + 3);
              goto LAB_100692e68;
            }
            break;
          }
        }
      }
      local_60 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_100692e68:
      p_Var6 = local_60;
      p_Var9 = local_60;
      if (*(uint *)(local_60 + 0x20) != 0) {
        for (p_Var5 = *(_func_void_Node_ptr **)
                       (*(long *)(local_60 + 8) +
                       ((ulong)(*(uint *)(local_60 + 0x24) ^ param_2) %
                       (ulong)*(uint *)(local_60 + 0x20)) * 8);
            (p_Var9 = local_60, p_Var5 != local_60 &&
            ((*(uint *)(p_Var5 + 8) != (*(uint *)(local_60 + 0x24) ^ param_2) ||
             (p_Var9 = p_Var5, *(uint *)(p_Var5 + 0xc) != param_2))));
            p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
        }
      }
      if (*(int *)(local_60 + 0x10) != -1) {
        if (*(int *)(local_60 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_60 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if (local_31) goto LAB_100692ed4;
        }
        QHashData::free_helper(local_60);
      }
LAB_100692ed4:
      puVar3 = PTR_shared_null_1021e15d0;
      if (p_Var9 == p_Var6) {
        do {
          param_3 = *(ulong *)(*(long *)(param_3 + 8) + 0x10);
          if (param_3 == 0) {
            return 0;
          }
          puVar2 = *(undefined8 **)(param_1 + 0x10);
          if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
            uVar7 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)puVar2 + 0x24);
            for (puVar10 = *(undefined8 **)
                            (puVar2[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar2 + 4)) * 8);
                puVar10 != puVar2; puVar10 = (undefined8 *)*puVar10) {
              if ((*(uint *)(puVar10 + 1) == uVar7) && (param_3 == puVar10[2])) {
                if (puVar10 != puVar2) {
                  FUN_100694130(&local_70,puVar10 + 3);
                  goto LAB_1006930f7;
                }
                break;
              }
            }
          }
          local_70 = (_func_void_Node_ptr *)puVar3;
LAB_1006930f7:
          p_Var6 = local_70;
          p_Var9 = local_70;
          if (*(uint *)(local_70 + 0x20) != 0) {
            for (p_Var5 = *(_func_void_Node_ptr **)
                           (*(long *)(local_70 + 8) +
                           ((ulong)(*(uint *)(local_70 + 0x24) ^ param_2) %
                           (ulong)*(uint *)(local_70 + 0x20)) * 8);
                (p_Var9 = local_70, p_Var5 != local_70 &&
                ((*(uint *)(p_Var5 + 8) != (*(uint *)(local_70 + 0x24) ^ param_2) ||
                 (p_Var9 = p_Var5, *(uint *)(p_Var5 + 0xc) != param_2))));
                p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
            }
          }
          if (*(int *)(local_70 + 0x10) != -1) {
            if (*(int *)(local_70 + 0x10) != 0) {
              LOCK();
              pcVar1 = local_70 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if (local_31) goto LAB_10069316c;
            }
            QHashData::free_helper(local_70);
          }
LAB_10069316c:
        } while (p_Var9 == p_Var6);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
          uVar7 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)puVar2 + 0x24);
          for (puVar10 = *(undefined8 **)
                          (puVar2[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar2 + 4)) * 8);
              puVar10 != puVar2; puVar10 = (undefined8 *)*puVar10) {
            if ((*(uint *)(puVar10 + 1) == uVar7) && (param_3 == puVar10[2])) {
              if (puVar10 != puVar2) {
                FUN_100694130(&local_78,puVar10 + 3);
                goto LAB_1006931e6;
              }
              break;
            }
          }
        }
        local_78 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_1006931e6:
        lVar8 = 0;
        if (*(int *)(local_78 + 0x14) != 0) {
          lVar8 = 0;
          if (*(uint *)(local_78 + 0x20) != 0) {
            p_Var6 = *(_func_void_Node_ptr **)
                      (*(long *)(local_78 + 8) +
                      ((ulong)(*(uint *)(local_78 + 0x24) ^ param_2) %
                      (ulong)*(uint *)(local_78 + 0x20)) * 8);
            lVar8 = 0;
            if (p_Var6 != local_78) {
              lVar8 = 0;
              do {
                if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_78 + 0x24) ^ param_2)) &&
                   (*(uint *)(p_Var6 + 0xc) == param_2)) {
                  lVar8 = 0;
                  if (p_Var6 != local_78) {
                    lVar8 = *(long *)(p_Var6 + 0x10);
                  }
                  break;
                }
                p_Var6 = *(_func_void_Node_ptr **)p_Var6;
              } while (p_Var6 != local_78);
            }
          }
        }
        if (*(int *)(local_78 + 0x10) == -1) {
          return lVar8;
        }
        p_Var6 = local_78;
        if (*(int *)(local_78 + 0x10) == 0) goto LAB_100693285;
        LOCK();
        pcVar1 = local_78 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        iVar4 = *(int *)pcVar1;
        UNLOCK();
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
          uVar7 = (uint)(param_3 >> 0x1f) ^ (uint)param_3 ^ *(uint *)((long)puVar2 + 0x24);
          for (puVar10 = *(undefined8 **)
                          (puVar2[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar2 + 4)) * 8);
              puVar10 != puVar2; puVar10 = (undefined8 *)*puVar10) {
            if ((*(uint *)(puVar10 + 1) == uVar7) && (puVar10[2] == param_3)) {
              if (puVar10 != puVar2) {
                FUN_100694130(&local_68,puVar10 + 3);
                goto LAB_100693015;
              }
              break;
            }
          }
        }
        local_68 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
LAB_100693015:
        lVar8 = 0;
        if (*(int *)(local_68 + 0x14) != 0) {
          lVar8 = 0;
          if (*(uint *)(local_68 + 0x20) != 0) {
            p_Var6 = *(_func_void_Node_ptr **)
                      (*(long *)(local_68 + 8) +
                      ((ulong)(*(uint *)(local_68 + 0x24) ^ param_2) %
                      (ulong)*(uint *)(local_68 + 0x20)) * 8);
            lVar8 = 0;
            if (p_Var6 != local_68) {
              lVar8 = 0;
              do {
                if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_68 + 0x24) ^ param_2)) &&
                   (*(uint *)(p_Var6 + 0xc) == param_2)) {
                  lVar8 = 0;
                  if (p_Var6 != local_68) {
                    lVar8 = *(long *)(p_Var6 + 0x10);
                  }
                  break;
                }
                p_Var6 = *(_func_void_Node_ptr **)p_Var6;
              } while (p_Var6 != local_68);
            }
          }
        }
        if (*(int *)(local_68 + 0x10) == -1) {
          return lVar8;
        }
        p_Var6 = local_68;
        if (*(int *)(local_68 + 0x10) == 0) goto LAB_100693285;
        LOCK();
        pcVar1 = local_68 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        iVar4 = *(int *)pcVar1;
        UNLOCK();
      }
      local_31 = iVar4 != 0;
      if (local_31) {
        return lVar8;
      }
LAB_100693285:
      QHashData::free_helper(p_Var6);
      return lVar8;
    }
    FUN_1006946e0(&local_58,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                  "(!)Error: trying to get action with an invalid context. Action type: %s",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if (local_31) goto LAB_100692fc7;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100692fc7:
    if (*(int *)local_58 == -1) {
      return 0;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_31 = false;
    }
    goto LAB_100692ff4;
  }
  FUN_1006946e0(&local_48,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                "(!)Error: trying to get action with an invalid context. Action type: %s",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if (local_31) goto LAB_100692e27;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100692e27:
  if (*(int *)local_48 == -1) {
    return 0;
  }
  local_58 = local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return 0;
    }
    local_31 = false;
  }
LAB_100692ff4:
  QArrayData::deallocate(local_58,2,8);
  return 0;
}

