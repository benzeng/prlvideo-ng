
bool FUN_1005b3a80(long param_1,QString *param_2,char param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  _func_void_Node_ptr *p_Var10;
  int *piVar11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  bool bVar15;
  QArrayData *local_100;
  int local_f8;
  QArrayData *local_f0;
  undefined4 local_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  int local_c0;
  int local_b8 [4];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  _func_void_Node_ptr *local_50;
  QString local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar8 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  local_48.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = *(undefined4 *)&param_2[1].field0_0x0;
  QString::operator=((QString *)(lVar8 + 0x150),&local_48);
  *(undefined4 *)(lVar8 + 0x158) = local_40;
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b3b13;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005b3b13:
  if (((*(uint *)&param_2[1].field0_0x0 | 2) == 3) && (param_3 == '\0')) {
    return false;
  }
  uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005bca20(&local_50,uVar9,*(undefined4 *)&param_2[1].field0_0x0);
  p_Var10 = local_50;
  if ((*(int *)(local_50 + 0x14) == 0) || (uVar2 = *(uint *)(local_50 + 0x20), uVar2 == 0)) {
LAB_1005b3bce:
    local_b8[0] = 0xff;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_a8._8_4_ = (int)PTR_shared_null_1021e1288;
    local_a8._0_8_ = PTR_shared_null_1021e1288;
    local_a8._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_98._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_98._0_8_ = PTR_shared_null_1021e15e8;
    local_98._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_88 = 0;
    local_80 = PTR_shared_null_1021e1288;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
  }
  else {
    uVar6 = qHash(param_2,*(uint *)(local_50 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar2;
    p_Var13 = *(_func_void_Node_ptr **)(*(long *)(p_Var10 + 8) + uVar4 * 8);
    if (p_Var13 == p_Var10) goto LAB_1005b3bce;
    p_Var12 = (_func_void_Node_ptr *)(*(long *)(p_Var10 + 8) + uVar4 * 8);
    do {
      p_Var14 = p_Var10;
      if (*(uint *)(p_Var13 + 8) == uVar6) {
        cVar5 = operator==(param_2,(QString *)(p_Var13 + 0x10));
        p_Var10 = *(_func_void_Node_ptr **)p_Var12;
        p_Var13 = p_Var10;
        p_Var14 = local_50;
        if (cVar5 != '\0') break;
      }
      p_Var10 = p_Var14;
      p_Var12 = p_Var13;
      p_Var13 = *(_func_void_Node_ptr **)p_Var12;
      p_Var14 = p_Var10;
    } while (p_Var13 != p_Var10);
    if (p_Var10 == p_Var14) goto LAB_1005b3bce;
    FUN_100260700(local_b8,p_Var10 + 0x18);
  }
  iVar7 = local_b8[0];
  FUN_10005e410(local_b8);
  bVar15 = iVar7 == 0xff;
  if (bVar15) {
    iVar7 = *(int *)&param_2[1].field0_0x0;
    if (iVar7 == 1) {
      uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      FUN_1005b4030(&local_e0,uVar9);
      local_d8 = local_e0;
      if (*local_e0 != -1) {
        if (*local_e0 == 0) {
          QListData::detach((int)&local_d8);
          iVar7 = local_d8[2];
          if (iVar7 != local_d8[3]) {
            local_e0 = local_e0 + (long)local_e0[2] * 2 + 4;
            piVar11 = local_d8 + (long)iVar7 * 2 + 4;
            lVar8 = (long)local_d8[3] * 8 + (long)iVar7 * -8;
            do {
              piVar3 = *(int **)local_e0;
              *(int **)piVar11 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar11 = piVar11 + 2;
              local_e0 = local_e0 + 2;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *local_e0 = *local_e0 + 1;
          local_31 = *local_e0 != 0;
          UNLOCK();
        }
      }
      local_d0 = local_d8 + (long)local_d8[2] * 2 + 4;
      local_c8 = local_d8 + (long)local_d8[3] * 2 + 4;
      local_c0 = 1;
      FUN_100039a80(&local_e0);
      if ((local_c0 != 0) && (local_d0 != local_c8)) {
        do {
          local_f0 = *(QArrayData **)local_d0;
          if (1 < *(int *)local_f0 + 1U) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + 1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
          }
          local_e8 = 1;
          FUN_1005b3950(param_1,&local_f0);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b3e86;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_1005b3e86:
          local_d0 = local_d0 + 2;
          local_c0 = 1;
        } while (local_d0 != local_c8);
      }
      FUN_100039a80(&local_d8);
    }
    else {
      local_100 = (QArrayData *)param_2->field0_0x0;
      if (1 < *(int *)local_100 + 1U) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        iVar7 = *(int *)&param_2[1].field0_0x0;
      }
      local_f8 = iVar7;
      FUN_1005b3950(param_1,&local_100);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b3ebb;
        }
        QArrayData::deallocate(local_100,2,8);
      }
    }
  }
LAB_1005b3ebb:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return bVar15;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_50);
  }
  return bVar15;
}

