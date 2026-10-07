
int FUN_100618ad0(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char extraout_DL;
  _func_void_Node_ptr *p_Var11;
  int iVar12;
  int iVar13;
  long lVar14;
  long local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [8];
  long local_90;
  long local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar12 = 0;
  local_38 = lVar14;
  iVar7 = (**(code **)(param_1 + 0x28))(0,local_80,&local_b8);
  if (-1 < iVar7) {
    do {
      plVar10 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar10 == (long *)0x0) {
        FUN_1008e3970("","prlplg",0,"Memory allocation error at creating object info");
        iVar13 = -0x7ffffffe;
LAB_100618f92:
        lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_100618f9c;
      }
      plVar1 = plVar10 + 1;
      FUN_1007d6870(plVar1);
      plVar10[3] = (long)PTR_shared_null_100ba2180;
      plVar2 = plVar10 + 3;
      plVar8 = plVar10 + 5;
      plVar10[5] = (long)plVar8;
      plVar10[6] = (long)plVar8;
      *plVar10 = 0;
      *(undefined4 *)(plVar10 + 4) = 0;
      FUN_1007d6cd0(&local_90,local_80);
      lVar14 = local_b8;
      plVar10[2] = local_88;
      *plVar1 = local_90;
      *plVar10 = param_1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      FUN_1007d6cd0(&local_60,local_b8);
      cVar6 = FUN_1007ea210(&local_60);
      while (cVar6 == '\0') {
        lVar14 = lVar14 + 0x10;
        plVar9 = (long *)FUN_100619260(plVar2,&local_60,0);
        if (*plVar9 != *plVar2) {
          FUN_1008e3970("","prlplg",0,"Trying to provide two identical interfaces");
          FUN_1008e3970("","prlplg",0,"Impossible create interfaces list");
          iVar13 = -0x7ffbdff9;
          goto LAB_100618e03;
        }
        FUN_100619160(plVar2,&local_60,local_98);
        FUN_1007d6cd0(&local_70,lVar14);
        local_58 = local_68;
        local_60 = local_70;
        cVar6 = FUN_1007ea210(&local_60);
      }
      local_50 = *plVar1;
      local_48 = plVar10[2];
      local_40 = plVar10;
      FUN_100619470(&DAT_1011cca58,&local_50);
      if (extraout_DL == '\0') {
        FUN_1007d6a70(&local_a8,plVar1);
        QString::toUtf8();
        pQVar5 = local_a0;
        lVar14 = *(long *)(local_a0 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","prlplg",0,"Object %s already exists [Provider: %s]",pQVar5 + lVar14,
                      local_b0 + *(long *)(local_b0 + 0x10));
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            UNLOCK();
            local_60 = CONCAT71(local_60._1_7_,*(int *)local_b0 != 0);
            if (*(int *)local_b0 != 0) goto LAB_100618d4b;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_100618d4b:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            UNLOCK();
            local_60 = CONCAT71(local_60._1_7_,*(int *)local_a0 != 0);
            if (*(int *)local_a0 != 0) goto LAB_100618d81;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
LAB_100618d81:
        iVar13 = -0x7ffbdffd;
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            UNLOCK();
            local_60 = CONCAT71(local_60._1_7_,*(int *)local_a8 != 0);
            if (*(int *)local_a8 != 0) goto LAB_100618e03;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
      else {
        lVar14 = *plVar10;
        puVar4 = *(undefined8 **)(lVar14 + 0x50);
        *(long **)(lVar14 + 0x50) = plVar8;
        plVar10[5] = lVar14 + 0x48;
        plVar10[6] = (long)puVar4;
        *puVar4 = plVar8;
        iVar13 = 0;
      }
LAB_100618e03:
      if (iVar13 < 0) {
        FUN_1008e3970("","prlplg",0,"Error adding object to list");
        *(int *)(*plVar10 + 8) = *(int *)(*plVar10 + 8) + -1;
        p_Var11 = (_func_void_Node_ptr *)plVar10[3];
        if (*(int *)(p_Var11 + 0x10) == -1) {
LAB_100618f20:
          operator_delete(plVar10);
        }
        else {
          if (*(int *)(p_Var11 + 0x10) != 0) {
            LOCK();
            pcVar3 = p_Var11 + 0x10;
            *(int *)pcVar3 = *(int *)pcVar3 + -1;
            UNLOCK();
            local_60 = CONCAT71(local_60._1_7_,*(int *)pcVar3 != 0);
            if (*(int *)pcVar3 != 0) goto LAB_100618f20;
            p_Var11 = (_func_void_Node_ptr *)*plVar2;
          }
          QHashData::free_helper(p_Var11);
          operator_delete(plVar10);
        }
        goto LAB_100618f92;
      }
      iVar12 = iVar12 + 1;
      iVar7 = (**(code **)(param_1 + 0x28))(iVar12,local_80,&local_b8);
    } while (-1 < iVar7);
    if (iVar12 == 0) {
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      iVar13 = 0;
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (iVar7 == -0x7ffbe000) goto LAB_100618f9c;
    }
  }
  iVar13 = iVar7;
  FUN_1008e3970("","prlplg",0,"Error 0x%x while enumerating objects",iVar13);
LAB_100618f9c:
  plVar10 = DAT_1011cca30;
  if (iVar13 < 0) {
    FUN_1008e3970("","prlplg",0,"Error enumerating interfaces 0x%x",iVar13);
  }
  else {
    DAT_1011cca30 = (long *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = &DAT_1011cca28;
    *(long **)(param_1 + 0x40) = plVar10;
    *plVar10 = param_1 + 0x38;
    iVar13 = 0;
  }
  if (lVar14 == local_38) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

