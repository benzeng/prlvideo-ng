
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100256dc0(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  char cVar7;
  uint uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  long lVar10;
  _func_void_Node_ptr_void_ptr *p_Var11;
  int *piVar12;
  int *piVar13;
  undefined8 *puVar14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  _func_void_Node_ptr_void_ptr *p_Var16;
  int *local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  int *local_90;
  QString *local_88;
  QString *local_80;
  int local_78;
  QString local_70;
  undefined *local_68;
  int *local_60;
  undefined *local_58;
  _func_void_Node_ptr_void_ptr *local_50;
  _func_void_Node_ptr *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [7];
  undefined1 local_31;
  
  QMutex::lock();
  p_Var6 = _DAT_1011c37b0;
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
  local_50 = _DAT_1011c37b0;
  if (1 < *(int *)(_DAT_1011c37b0 + 0x10) + 1U) {
    LOCK();
    pcVar1 = _DAT_1011c37b0 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var9 = local_50;
  if ((((byte)p_Var6[0x28] & 1) == 0) && (1 < *(uint *)(p_Var6 + 0x10))) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var6,FUN_100022e20,0x22550,0x18);
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100256e78;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var6);
    }
  }
LAB_100256e78:
  local_50 = p_Var9;
  FUN_100257600(&DAT_1011c37b0);
  local_58 = PTR_shared_null_100ba2188;
  local_60 = (int *)PTR_shared_null_100ba2188;
  local_68 = PTR_shared_null_100ba2188;
  FUN_100643320(&local_58,&local_60,&local_68);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_90 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_90);
      iVar2 = local_90[2];
      if (iVar2 != local_90[3]) {
        piVar12 = local_60 + (long)local_60[2] * 2 + 4;
        piVar13 = local_90 + (long)iVar2 * 2 + 4;
        lVar10 = (long)local_90[3] * 8 + (long)iVar2 * -8;
        do {
          piVar4 = *(int **)piVar12;
          *(int **)piVar13 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar13 = piVar13 + 2;
          piVar12 = piVar12 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_88 = (QString *)(local_90 + (long)local_90[2] * 2 + 4);
  local_80 = (QString *)(local_90 + (long)local_90[3] * 2 + 4);
  if (local_90[2] != local_90[3]) {
    do {
      local_78 = 1;
      QString::operator=(&local_70,local_88);
      if (local_78 != 0) {
        FUN_100022e50(&DAT_1011c37b0,&local_70,local_40);
        p_Var6 = local_50;
        uVar3 = *(uint *)(local_50 + 0x20);
        if (uVar3 != 0) {
          uVar8 = qHash(&local_70,*(uint *)(local_50 + 0x24));
          uVar5 = (ulong)uVar8 % (ulong)uVar3;
          p_Var9 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var6 + 8) + uVar5 * 8);
          if (p_Var9 != p_Var6) {
            p_Var16 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var6 + 8) + uVar5 * 8);
            do {
              p_Var15 = p_Var9;
              if (*(uint *)(p_Var9 + 8) == uVar8) {
                cVar7 = operator==(&local_70,(QString *)(p_Var9 + 0x10));
                p_Var15 = *(_func_void_Node_ptr_void_ptr **)p_Var16;
                p_Var11 = p_Var15;
                if (cVar7 != '\0') break;
              }
              p_Var9 = *(_func_void_Node_ptr_void_ptr **)p_Var15;
              p_Var11 = p_Var6;
              p_Var16 = p_Var15;
            } while (p_Var9 != p_Var6);
            if (p_Var11 != p_Var6) {
              FUN_1000230e0(&local_50,&local_70);
              goto LAB_100257047;
            }
          }
        }
        FUN_100022e50(&local_48,&local_70,local_38);
      }
LAB_100257047:
      local_88 = local_88 + 1;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  FUN_100013180(&local_90);
  if (param_2 != 0) {
    FUN_1000221d0(local_98,&local_48);
    FUN_100257390(param_2,local_98);
    FUN_100013180(local_98);
  }
  if (param_3 != 0) {
    FUN_1000221d0(local_a0,&local_50);
    FUN_100257390(param_3,local_a0);
    FUN_100013180(local_a0);
  }
  FUN_1000221d0(&local_a8,&DAT_1011c37b0);
  *param_1 = (long)local_a8;
  if (*local_a8 != -1) {
    if (*local_a8 == 0) {
      QListData::detach((int)param_1);
      lVar10 = *param_1;
      iVar2 = *(int *)(lVar10 + 8);
      if (iVar2 != *(int *)(lVar10 + 0xc)) {
        local_a8 = local_a8 + (long)local_a8[2] * 2 + 4;
        puVar14 = (undefined8 *)(lVar10 + 0x10 + (long)iVar2 * 8);
        lVar10 = (long)*(int *)(lVar10 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar12 = *(int **)local_a8;
          *puVar14 = piVar12;
          if (1 < *piVar12 + 1U) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            local_31 = *piVar12 != 0;
            UNLOCK();
          }
          puVar14 = puVar14 + 1;
          local_a8 = local_a8 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_a8 = *local_a8 + 1;
      local_31 = *local_a8 != 0;
      UNLOCK();
    }
  }
  FUN_100013180(&local_a8);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002571bb;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002571bb:
  FUN_100013180(&local_68);
  FUN_100013180(&local_60);
  FUN_100013180(&local_58);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100257201;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_50);
  }
LAB_100257201:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025722c;
    }
    QHashData::free_helper(local_48);
  }
LAB_10025722c:
  QMutex::unlock();
  return param_1;
}

