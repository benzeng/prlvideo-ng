
void FUN_10009aa90(long param_1,int param_2,CHwPrinter *param_3)

{
  code *pcVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  int *piVar10;
  CHwPrinter *this;
  long *plVar11;
  long *plVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  undefined8 uVar14;
  QArrayData *pQVar15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  long *plVar17;
  undefined8 uVar18;
  _func_void_Node_ptr *p_Var19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 *puVar23;
  long *plVar24;
  bool bVar25;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar22 = param_2 - 4;
  pcVar21 = "UNKNOWN";
  pcVar20 = "UNKNOWN";
  if (uVar22 < 7) {
    pcVar20 = (&PTR_s_TOOLS_READY_100ba8900)[(int)uVar22];
  }
  if ((ulong)(long)*(int *)(param_1 + 0x30) < 8) {
    pcVar21 = (&PTR_s_WAIT_100ba8940)[*(int *)(param_1 + 0x30)];
  }
  FUN_1008e3970("","vm",0,"[UPRN] Start processing action %s. Current state %s",pcVar20,pcVar21);
  uVar8 = *(uint *)(param_1 + 0x30);
  if (1 < param_2 - 7U) {
    if (uVar8 == 0) {
      if (param_2 == 4) {
        *(undefined1 *)(param_1 + 0x37) = 1;
      }
      else if (param_2 == 6) {
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
      else if (param_2 == 5) {
        *(undefined1 *)(param_1 + 0x35) = 1;
      }
      if ((*(char *)(param_1 + 0x35) == '\0') || (*(char *)(param_1 + 0x37) == '\0'))
      goto LAB_10009b23d;
      if (*(char *)(param_1 + 0x36) != '\0') {
        FUN_10009daa0(param_1,1,0);
        goto LAB_10009b23d;
      }
    }
    if (param_2 == 9) {
      if (uVar8 == 6) {
        FUN_10009daa0(param_1,7,0);
        goto LAB_10009b23d;
      }
    }
    else if ((param_2 == 10) && (uVar8 == 4)) {
      FUN_10009daa0(param_1,6,0);
      goto LAB_10009b23d;
    }
    p_Var13 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x20);
    if (*(int *)(p_Var13 + 0x14) == 0) {
      if (*(char *)(param_1 + 0x34) == '\0') {
        if (uVar8 < 8) {
          pcVar20 = (&PTR_s_WAIT_100ba8940)[(int)uVar8];
        }
        else {
          pcVar20 = "UNKNOWN";
        }
        FUN_1008e3970("","vm",0,"[UPRN] Move from %s to READY state",pcVar20);
        *(undefined4 *)(param_1 + 0x30) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 0x34) = 0;
        FUN_10009daa0(param_1,2,0);
      }
      goto LAB_10009b23d;
    }
    plVar9 = (long *)(param_1 + 0x20);
    if (1 < *(uint *)(p_Var13 + 0x10)) {
      p_Var13 = (_func_void_Node_ptr_void_ptr *)
                QHashData::detach_helper(p_Var13,FUN_10009ef30,0x9eda0,0x20);
      p_Var19 = (_func_void_Node_ptr *)*plVar9;
      if (*(int *)(p_Var19 + 0x10) != -1) {
        if (*(int *)(p_Var19 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var19 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009afed;
          p_Var19 = (_func_void_Node_ptr *)*plVar9;
        }
        QHashData::free_helper(p_Var19);
      }
LAB_10009afed:
      *plVar9 = (long)p_Var13;
    }
    iVar7 = *(int *)(p_Var13 + 0x20);
    p_Var16 = p_Var13;
    if (iVar7 != 0) {
      puVar23 = *(undefined8 **)(p_Var13 + 8);
      do {
        p_Var16 = (_func_void_Node_ptr_void_ptr *)*puVar23;
        if ((_func_void_Node_ptr_void_ptr *)*puVar23 != p_Var13) break;
        iVar7 = iVar7 + -1;
        puVar23 = puVar23 + 1;
        p_Var16 = p_Var13;
      } while (iVar7 != 0);
    }
    uVar18 = 4;
    if (**(int **)(*(long *)(p_Var16 + 0x18) + 0x10) != 7) {
      uVar18 = 5;
    }
    lVar4 = *(long *)(*(int **)(*(long *)(p_Var16 + 0x18) + 0x10) + 2);
    uVar14 = 0;
    if (lVar4 != 0) {
      uVar14 = *(undefined8 *)(lVar4 + 0x10);
    }
    FUN_10009daa0(param_1,uVar18,uVar14);
    FUN_10009ebc0(plVar9,p_Var16);
    goto LAB_10009b23d;
  }
  if (uVar8 == 3) {
    FUN_10009daa0(param_1,param_2 != 7 | 4,param_3);
    goto LAB_10009b23d;
  }
  (**(code **)(*(long *)param_3 + 0xb8))(&local_48,param_3);
  FUN_10009d990(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009abaf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10009abaf:
  plVar9 = *(long **)(param_1 + 0x20);
  puVar23 = (undefined8 *)(param_1 + 0x20);
  uVar8 = *(uint *)(plVar9 + 4);
  if (uVar8 == 0) {
LAB_10009ac42:
    if (uVar22 < 7) {
      pcVar20 = (&PTR_s_TOOLS_READY_100ba8900)[(int)uVar22];
    }
    else {
      pcVar20 = "UNKNOWN";
    }
    QString::toUtf8();
    pQVar15 = local_68 + *(long *)(local_68 + 0x10);
    (**(code **)(*(long *)param_3 + 0xb8))(&local_78);
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"[UPRN] Queue action %s (tag:%s, id:%s)",pcVar20,pQVar15,
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009acfe;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_10009acfe:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009ad2e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10009ad2e:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009ad5e;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10009ad5e:
    plVar9 = (long *)FUN_10009e6e0(puVar23,&local_40);
    piVar10 = operator_new(0x10);
    this = operator_new(0xc0);
    CHwPrinter::CHwPrinter(this,param_3);
    plVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    bVar25 = plVar11 == (long *)0x0;
    if (bVar25) {
      (**(code **)(*(long *)this + 0x88))(this);
      *piVar10 = param_2;
      piVar10[2] = 0;
      piVar10[3] = 0;
      plVar11 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 1;
      plVar11[2] = (long)this;
      *plVar11 = (long)&PTR_FUN_100bef8f0;
      *piVar10 = param_2;
      *(long **)(piVar10 + 2) = plVar11;
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    plVar12 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (plVar12 == (long *)0x0) {
      plVar12 = *(long **)(piVar10 + 2);
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar17 = plVar12 + 1;
        lVar4 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      operator_delete(piVar10);
      bVar3 = true;
      plVar12 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar12 + 1) = 1;
      plVar12[2] = (long)piVar10;
      *plVar12 = (long)&PTR_FUN_100bef918;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      bVar3 = false;
    }
    plVar17 = (long *)*plVar9;
    *plVar9 = (long)plVar12;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar9 = plVar17 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    if (!bVar3) {
      LOCK();
      plVar9 = plVar12 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if (!bVar25) {
      LOCK();
      plVar9 = plVar11 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  else {
    uVar6 = qHash(&local_40,*(uint *)((long)plVar9 + 0x24));
    uVar2 = (ulong)uVar6 % (ulong)uVar8;
    plVar11 = *(long **)(plVar9[1] + uVar2 * 8);
    if (plVar11 == plVar9) goto LAB_10009ac42;
    plVar12 = (long *)(plVar9[1] + uVar2 * 8);
    do {
      plVar17 = plVar11;
      plVar24 = plVar9;
      if (*(uint *)(plVar11 + 1) == uVar6) {
        cVar5 = operator==(&local_40,(QString *)(plVar11 + 2));
        plVar9 = (long *)*plVar12;
        plVar17 = plVar9;
        plVar24 = (long *)*puVar23;
        if (cVar5 != '\0') break;
      }
      plVar9 = plVar24;
      plVar11 = (long *)*plVar17;
      plVar24 = plVar9;
      plVar12 = plVar17;
    } while (plVar11 != plVar9);
    if ((plVar9 == plVar24) ||
       (plVar9 = (long *)FUN_10009e6e0(puVar23,&local_40), **(int **)(*plVar9 + 0x10) == param_2))
    goto LAB_10009ac42;
    plVar9 = (long *)FUN_10009e6e0(puVar23,&local_40);
    uVar8 = **(int **)(*plVar9 + 0x10) - 4;
    pcVar21 = "UNKNOWN";
    pcVar20 = "UNKNOWN";
    if (uVar8 < 7) {
      pcVar20 = (&PTR_s_TOOLS_READY_100ba8900)[(int)uVar8];
    }
    if (uVar22 < 7) {
      pcVar21 = (&PTR_s_TOOLS_READY_100ba8900)[(int)uVar22];
    }
    QString::toUtf8();
    pQVar15 = local_50 + *(long *)(local_50 + 0x10);
    (**(code **)(*(long *)param_3 + 0xb8))(&local_60);
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"[UPRN] Remove queued %s action due to %s action (tag:%s, id:%s)",
                  pcVar20,pcVar21,pQVar15,local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009b160;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10009b160:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009b190;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10009b190:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009b1c0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10009b1c0:
    FUN_10009e8b0(puVar23,&local_40);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009b23d;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10009b23d:
  QMutex::unlock();
  return;
}

