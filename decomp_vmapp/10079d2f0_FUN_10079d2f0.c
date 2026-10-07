
undefined8 * FUN_10079d2f0(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  QArrayData *pQVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_1c0;
  QArrayData *local_198;
  QArrayData *local_188;
  QArrayData *local_178;
  QArrayData *local_168;
  QArrayData *local_158;
  long *local_150;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QThread::currentThread();
  QMutex::lock();
  if ((*(int *)(param_2 + 0xa0) != 1) || (*(char *)(param_2 + 0x310) == '\0')) {
    *param_1 = 0;
    goto LAB_10079d6ae;
  }
  *(undefined1 *)(param_2 + 0x310) = 0;
  lVar7 = FUN_10079e150(param_2,&local_140);
  if (lVar7 == 0) {
    FUN_1008e3970("","IOCommunication",0,"Can\'t get SSL_SESSION at detaching");
    *param_1 = 0;
    goto LAB_10079d6ae;
  }
  plVar8 = operator_new(0x20);
  *(undefined4 *)(plVar8 + 1) = 1;
  plVar8[2] = lVar7;
  *plVar8 = (long)&PTR_FUN_10116d3e0;
  plVar8[3] = (long)PTR__free_100ba2378;
  local_144 = 0;
  FUN_1007942d0(&local_150,param_2 + 0x168,&local_144);
  if ((local_150 == (long *)0x0) || (local_150[2] == 0)) {
    pQVar4 = *(QArrayData **)(param_2 + 0x18);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_139 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                  local_158 + *(long *)(local_158 + 0x10));
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_139 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_10079d77e;
      }
      QArrayData::deallocate(local_158,1,8);
    }
LAB_10079d77e:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_139 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_10079d8cb;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_10079d8cb:
    *param_1 = 0;
  }
  else {
    pvVar9 = operator_new(0x90,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar9 == (void *)0x0) {
      pQVar4 = *(QArrayData **)(param_2 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_139 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                    local_168 + *(long *)(local_168 + 0x10));
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_139 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_10079d88f;
        }
        QArrayData::deallocate(local_168,1,8);
      }
LAB_10079d88f:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_139 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_10079d8cb;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
      goto LAB_10079d8cb;
    }
    FUN_1007c6740(pvVar9);
    pvVar10 = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar11 = (void *)0x0;
    if (pvVar10 != (void *)0x0) {
      FUN_100790620(pvVar10,pvVar9);
      pvVar11 = pvVar10;
    }
    local_1c0 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (local_1c0 == (long *)0x0) {
      bVar5 = true;
      if (pvVar11 != (void *)0x0) {
        FUN_100790e80(pvVar11);
        operator_delete(pvVar11);
      }
      local_1c0 = (long *)0x0;
LAB_10079d958:
      pQVar4 = *(QArrayData **)(param_2 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_139 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                    local_178 + *(long *)(local_178 + 0x10));
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_139 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_10079d9f6;
        }
        QArrayData::deallocate(local_178,1,8);
      }
LAB_10079d9f6:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_139 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_10079da32;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_10079da32:
      *param_1 = 0;
      if (!bVar5) goto LAB_10079dc39;
    }
    else {
      *(undefined4 *)(local_1c0 + 1) = 1;
      local_1c0[2] = (long)pvVar11;
      *local_1c0 = (long)&PTR_FUN_1011a5868;
      if (pvVar11 == (void *)0x0) {
        bVar5 = false;
        goto LAB_10079d958;
      }
      iVar6 = _dup(param_3);
      if (iVar6 < 0) {
        pQVar4 = *(QArrayData **)(param_2 + 0x18);
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_139 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar7 = *(long *)(local_188 + 0x10);
        uVar13 = FUN_1007c5600(local_138,0x100);
        FUN_1008e3970("","IOCommunication",0,"%sError: duplicate socket failed: (native error: %s)",
                      local_188 + lVar7,uVar13);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_139 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_10079db08;
          }
          QArrayData::deallocate(local_188,1,8);
        }
LAB_10079db08:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_139 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_10079dc24;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_10079dc24:
        *param_1 = 0;
      }
      else {
        *(int *)((long)pvVar9 + 0x5c) = iVar6;
        uVar2 = *(uint *)(*(long *)(param_2 + 0x388) + 4);
        *(uint *)((long)pvVar9 + 0x68) = uVar2;
        if ((ulong)uVar2 != 0) {
          pvVar11 = operator_new__((ulong)uVar2,(nothrow_t *)PTR_nothrow_100ba21c8);
          plVar12 = operator_new(0x18);
          *(undefined4 *)(plVar12 + 1) = 1;
          plVar12[2] = (long)pvVar11;
          *plVar12 = (long)&PTR_FUN_100bef320;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          plVar3 = *(long **)((long)pvVar9 + 0x88);
          *(long **)((long)pvVar9 + 0x88) = plVar12;
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          LOCK();
          plVar3 = plVar12 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          if ((*(long *)((long)pvVar9 + 0x88) == 0) ||
             (pvVar11 = *(void **)(*(long *)((long)pvVar9 + 0x88) + 0x10), pvVar11 == (void *)0x0))
          {
            pQVar4 = *(QArrayData **)(param_2 + 0x18);
            if (1 < *(int *)pQVar4 + 1U) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + 1;
              local_139 = *(int *)pQVar4 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                          local_198 + *(long *)(local_198 + 0x10));
            if (*(int *)local_198 != -1) {
              if (*(int *)local_198 != 0) {
                LOCK();
                *(int *)local_198 = *(int *)local_198 + -1;
                local_139 = *(int *)local_198 != 0;
                UNLOCK();
                if ((bool)local_139) goto LAB_10079dbe8;
              }
              QArrayData::deallocate(local_198,1,8);
            }
LAB_10079dbe8:
            if (*(int *)pQVar4 != -1) {
              if (*(int *)pQVar4 != 0) {
                LOCK();
                *(int *)pQVar4 = *(int *)pQVar4 + -1;
                local_139 = *(int *)pQVar4 != 0;
                UNLOCK();
                if ((bool)local_139) goto LAB_10079dc24;
              }
              QArrayData::deallocate(pQVar4,2,8);
            }
            goto LAB_10079dc24;
          }
          _memcpy(pvVar11,(void *)(*(long *)(param_2 + 0x388) +
                                  *(long *)(*(long *)(param_2 + 0x388) + 0x10)),
                  (ulong)*(uint *)((long)pvVar9 + 0x68));
        }
        _memcpy(pvVar9,(void *)(param_2 + 0xcc),0x48);
        *(undefined4 *)((long)pvVar9 + 0x48) = *(undefined4 *)(param_2 + 200);
        FUN_1007d6bf0(param_2 + 0xb8,(long)pvVar9 + 0x4c);
        *(undefined4 *)((long)pvVar9 + 0x60) = local_144;
        *(undefined4 *)((long)pvVar9 + 100) = local_140;
        if (local_150 != (long *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        plVar3 = *(long **)((long)pvVar9 + 0x70);
        *(long **)((long)pvVar9 + 0x70) = local_150;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar12 = plVar3 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        if (plVar8 != (long *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        plVar3 = *(long **)((long)pvVar9 + 0x78);
        *(long **)((long)pvVar9 + 0x78) = plVar8;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar12 = plVar3 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        lVar7 = *(long *)(param_2 + 0x318);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar3 = *(long **)((long)pvVar9 + 0x80);
        *(long *)((long)pvVar9 + 0x80) = lVar7;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar12 = plVar3 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        *param_1 = local_1c0;
        LOCK();
        *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
        UNLOCK();
      }
LAB_10079dc39:
      LOCK();
      plVar3 = local_1c0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_1c0 + 0x10))();
      }
    }
  }
  if (local_150 != (long *)0x0) {
    LOCK();
    plVar3 = local_150 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_10079d6ae:
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

