
void FUN_1000d22e0(long *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  Node *pNVar9;
  long *plVar10;
  QArrayData *pQVar11;
  Node *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1000d9700(param_1,*(undefined8 *)param_2);
  FUN_1000fde80(param_1 + 0x23,param_2);
  iVar4 = param_2[1];
  if ((*(int *)((long)param_1 + 0x21c) == iVar4) && ((int)param_1[0x43] == *param_2)) {
joined_r0x0001000d2375:
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"Interactive stub was disconnected");
    }
    param_1[0x43] = 0;
    local_40 = (QArrayData *)param_1[2];
    lVar7 = param_1[10];
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = (QArrayData *)QString::fromAscii_helper("--fakestub",10);
    FUN_1000b0b40(lVar7,&local_40,&local_48,*(undefined8 *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d2418;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1000d2418:
    if (*(int *)local_40 != -1) {
      pQVar11 = local_40;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        iVar4 = *(int *)local_40;
        UNLOCK();
joined_r0x0001000d27ff:
        local_31 = iVar4 != 0;
        if ((bool)local_31) goto LAB_1000d2814;
      }
LAB_1000d2805:
      QArrayData::deallocate(pQVar11,2,8);
    }
  }
  else {
    if ((*(int *)((long)param_1 + 0x214) != iVar4) || ((int)param_1[0x42] != *param_2)) {
      QMutex::lock();
      QTimer::start();
      iVar4 = FUN_1000cf550(param_1,param_2);
      if (iVar4 < 0) {
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,
                        "Helper already closed gracefully psn={%u, %u} not running",*param_2,
                        param_2[1]);
        }
        goto LAB_1000d2a25;
      }
      plVar10 = param_1 + 0xb;
      puVar5 = (uint *)param_1[0xb];
      if (1 < *puVar5) {
        FUN_1000e6e10(plVar10,puVar5[1]);
        puVar5 = (uint *)*plVar10;
      }
      lVar7 = *(long *)(puVar5 + ((long)iVar4 + (long)(int)puVar5[2]) * 2 + 4);
      FUN_1000e5040(param_1 + 0xf,lVar7 + 0x10,lVar7 + 0x30);
      iVar3 = FUN_1000dfea0(param_1);
      if (iVar3 != 0) {
        if (iVar3 == -2) {
          FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                        *param_2,param_2[1]);
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2
                          ,param_2[1],0x1335);
          }
          FUN_1000c6a60(param_1,param_2);
        }
        goto LAB_1000d2a25;
      }
      local_78 = (QArrayData *)param_1[2];
      lVar1 = param_1[10];
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      local_80 = *(QArrayData **)(lVar7 + 8);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      FUN_1000b0b40(lVar1,&local_78,&local_80,*(undefined8 *)param_2);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d258e;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1000d258e:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d25be;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1000d25be:
      iVar3 = FUN_1000bd0c0(param_1);
      if (iVar3 == 0x30000006) {
        if (iVar4 < *(int *)(*plVar10 + 0xc) - *(int *)(*plVar10 + 8)) {
          FUN_1000e53a0(plVar10,iVar4);
          FUN_1000df020(param_1);
          FUN_1000df110(param_1);
        }
      }
      else {
        uStack_90 = 0;
        local_88 = 0;
        local_a8 = 0x6b;
        local_98 = 0x10;
        uStack_a0 = 0x2000000000;
        cVar2 = FUN_1000e0160(lVar7 + 8);
        uStack_a0 = CONCAT44((uint)(cVar2 == '\0') << 5,(undefined4)uStack_a0);
        local_a8 = CONCAT44(2,(undefined4)local_a8);
        FUN_1000b9340(&local_b0,lVar7);
        iVar4 = *(int *)(local_b0 + 0x20);
        if (iVar4 != 0) {
          plVar10 = *(long **)(local_b0 + 8);
LAB_1000d2730:
          pNVar9 = (Node *)*plVar10;
          if (pNVar9 == local_b0) goto code_r0x0001000d273c;
          do {
            local_98 = CONCAT44(*(undefined4 *)(pNVar9 + 0xc),(undefined4)local_98);
            uVar6 = (**(code **)(*param_1 + 0x68))(param_1);
            FUN_1000e85b0(uVar6,&local_a8);
            pNVar9 = (Node *)QHashData::nextNode(pNVar9);
          } while (pNVar9 != local_b0);
        }
LAB_1000d29f7:
        if (*(int *)(local_b0 + 0x10) != -1) {
          if (*(int *)(local_b0 + 0x10) != 0) {
            LOCK();
            pNVar9 = local_b0 + 0x10;
            *(int *)pNVar9 = *(int *)pNVar9 + -1;
            local_31 = *(int *)pNVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d2a25;
          }
          QHashData::free_helper((_func_void_Node_ptr *)local_b0);
        }
      }
LAB_1000d2a25:
      QMutex::unlock();
      return;
    }
    if ((*(int *)((long)param_1 + 0x21c) == iVar4) && ((int)param_1[0x43] == (int)param_1[0x42]))
    goto joined_r0x0001000d2375;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"Fake stub was disconnected");
    }
    param_1[0x42] = 0;
    local_50 = (QArrayData *)param_1[2];
    lVar7 = param_1[10];
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1000b0b40(lVar7,&local_50,&local_58,*(undefined8 *)param_2);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d27e4;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1000d27e4:
    if (*(int *)local_50 != -1) {
      pQVar11 = local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        iVar4 = *(int *)local_50;
        UNLOCK();
        goto joined_r0x0001000d27ff;
      }
      goto LAB_1000d2805;
    }
  }
LAB_1000d2814:
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 2);
  if (lVar7 == 0) {
    return;
  }
  iVar4 = FUN_10018a9d0(lVar7);
  if ((iVar4 + 0xcffffffeU < 0xf) && ((0x4e0fU >> (iVar4 + 0xcffffffeU & 0x1f) & 1) != 0)) {
    puVar8 = operator_new(0x10);
    *puVar8 = &PTR_FUN_1021ee320;
    puVar8[1] = param_1;
    local_60 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_60 == (long *)0x0) {
      operator_delete(puVar8);
      local_60 = (long *)0x0;
    }
    else {
      *(undefined4 *)(local_60 + 1) = 1;
      local_60[2] = (long)puVar8;
      *local_60 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(param_1 + 0x17,&local_60);
    if (local_60 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar10 = local_60 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)(*local_60 + 0x10))();
    return;
  }
  if (DAT_10230ffd0 < 2) {
    return;
  }
  EnumUtils::enumToString(&local_70,iVar4);
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",2,"Fake stub was not restarted on VM state %s (%.8X)",
                local_68 + *(long *)(local_68 + 0x10),iVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d2929;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1000d2929:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
code_r0x0001000d273c:
  iVar4 = iVar4 + -1;
  plVar10 = plVar10 + 1;
  if (iVar4 == 0) goto LAB_1000d29f7;
  goto LAB_1000d2730;
}

