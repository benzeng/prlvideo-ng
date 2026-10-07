
undefined8 * FUN_100503450(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  QArrayData *pQVar2;
  long lVar3;
  undefined *puVar4;
  QString QVar5;
  char cVar6;
  undefined2 uVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  _func_void_Node_ptr *p_Var13;
  undefined1 auVar14 [16];
  undefined4 local_b0 [2];
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = 0;
  local_40 = (QArrayData *)QString::fromAscii_helper(".lnk",4);
  cVar6 = QString::endsWith(param_3,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005034ca;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005034ca:
  if (cVar6 == '\0') {
    return param_1;
  }
  QFileInfo::QFileInfo((QFileInfo *)&local_48);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)FUN_1005043a0(param_2,param_3);
  p_Var9 = (_func_void_Node_ptr_void_ptr *)*param_2;
  if (1 < *(uint *)(p_Var9 + 0x10)) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var9,FUN_100504840,0x5047f0,0x28);
    p_Var13 = (_func_void_Node_ptr *)*param_2;
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var13 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100503552;
        p_Var13 = (_func_void_Node_ptr *)*param_2;
      }
      QHashData::free_helper(p_Var13);
    }
LAB_100503552:
    *param_2 = (long)p_Var9;
  }
  if (p_Var8 == p_Var9) {
    QFileInfo::setFile(&local_48);
    cVar6 = QFileInfo::exists();
    if (cVar6 == '\0') {
      QFileInfo::absolutePath();
      FUN_1006fa7b0(&local_60,&local_68,1,1,0);
      QVar5.field0_0x0 = local_58.field0_0x0;
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
      local_60 = (QArrayData *)QVar5.field0_0x0;
      if (*(int *)QVar5.field0_0x0 != -1) {
        if (*(int *)QVar5.field0_0x0 != 0) {
          LOCK();
          *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + -1;
          local_31 = *(int *)QVar5.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005035de;
        }
        QArrayData::deallocate((QArrayData *)QVar5.field0_0x0,2,8);
      }
LAB_1005035de:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10050360e;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10050360e:
      if (*(uint *)(local_58.field0_0x0 + 4) != 0) {
        uVar7 = QDir::separator();
        local_78 = (QArrayData *)local_58.field0_0x0;
        if (1 < *(uint *)local_58.field0_0x0 + 1) {
          LOCK();
          *(uint *)local_58.field0_0x0 = *(uint *)local_58.field0_0x0 + 1;
          local_31 = *(uint *)local_58.field0_0x0 != 0;
          UNLOCK();
        }
        uVar12 = *(uint *)(local_58.field0_0x0 + 4);
        if ((1 < *(uint *)local_58.field0_0x0) ||
           ((*(uint *)(local_58.field0_0x0 + 8) & 0x7fffffff) < uVar12 + 2)) {
          QString::reallocData((uint)&local_78,SUB41(uVar12 + 2,0));
          uVar12 = *(uint *)(local_78 + 4);
        }
        *(uint *)(local_78 + 4) = uVar12 + 1;
        *(undefined2 *)(local_78 + (long)(int)uVar12 * 2 + *(long *)(local_78 + 0x10)) = uVar7;
        *(undefined2 *)
         (local_78 + (long)(int)*(uint *)(local_78 + 4) * 2 + *(long *)(local_78 + 0x10)) = 0;
        QFileInfo::fileName();
        local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
        if (1 < *(uint *)local_78 + 1) {
          LOCK();
          *(uint *)local_78 = *(uint *)local_78 + 1;
          local_31 = *(uint *)local_78 != 0;
          UNLOCK();
        }
        QString::append(&local_70);
        QString::operator=(&local_50,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005036ff;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1005036ff:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10050372f;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10050372f:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10050375f;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10050375f:
        p_Var8 = (_func_void_Node_ptr_void_ptr *)FUN_1005043a0(param_2,&local_50);
        p_Var9 = (_func_void_Node_ptr_void_ptr *)*param_2;
        if (1 < *(uint *)(p_Var9 + 0x10)) {
          p_Var9 = (_func_void_Node_ptr_void_ptr *)
                   QHashData::detach_helper(p_Var9,FUN_100504840,0x5047f0,0x28);
          p_Var13 = (_func_void_Node_ptr *)*param_2;
          if (*(int *)(p_Var13 + 0x10) != -1) {
            if (*(int *)(p_Var13 + 0x10) != 0) {
              LOCK();
              pcVar1 = p_Var13 + 0x10;
              *(int *)pcVar1 = *(int *)pcVar1 + -1;
              local_31 = *(int *)pcVar1 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005037c8;
              p_Var13 = (_func_void_Node_ptr *)*param_2;
            }
            QHashData::free_helper(p_Var13);
          }
LAB_1005037c8:
          *param_2 = (long)p_Var9;
        }
        if (p_Var8 != p_Var9) goto LAB_1005039ce;
        plVar10 = operator_new(0x70);
        plVar10[1] = (long)param_2;
        puVar4 = PTR_shared_null_100ba20d0;
        auVar14._8_4_ = (int)PTR_shared_null_100ba20d0;
        auVar14._0_8_ = PTR_shared_null_100ba20d0;
        auVar14._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
        *(undefined1 (*) [16])(plVar10 + 2) = auVar14;
        plVar10[9] = (long)puVar4;
        plVar10[6] = 0;
        plVar10[5] = 0;
        plVar10[4] = 0;
        *(undefined4 *)((long)plVar10 + 0x44) = 0;
        *(undefined4 *)(plVar10 + 10) = 0x10000;
        plVar10[0xb] = (long)puVar4;
        *plVar10 = (long)&PTR_FUN_100bc4180;
        *(undefined1 (*) [16])(plVar10 + 0xc) = auVar14;
        QFileInfo::fileName();
        pQVar2 = (QArrayData *)plVar10[3];
        plVar10[3] = (long)local_88;
        local_88 = pQVar2;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100503889;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100503889:
        QString::operator=((QString *)(plVar10 + 2),&local_58);
        QString::left((int)&local_90);
        plVar11 = plVar10 + 0xc;
        pQVar2 = (QArrayData *)*plVar11;
        *plVar11 = (long)local_90;
        local_90 = pQVar2;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005038f6;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_1005038f6:
        FUN_100503d00(&local_98,plVar11,1);
        plVar11 = plVar10 + 0xd;
        pQVar2 = (QArrayData *)*plVar11;
        *plVar11 = (long)local_98;
        local_98 = pQVar2;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10050394d;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_10050394d:
        if (*(int *)(*plVar11 + 4) != 0) {
          FUN_100503e00(&local_a0,plVar11);
          pQVar2 = (QArrayData *)plVar10[0xb];
          plVar10[0xb] = (long)local_a0;
          local_a0 = pQVar2;
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_31 = *(int *)pQVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005039a7;
            }
            QArrayData::deallocate(pQVar2,1,8);
          }
LAB_1005039a7:
          local_b0[0] = 0;
          local_a8 = plVar10;
          p_Var8 = (_func_void_Node_ptr_void_ptr *)FUN_100504600(param_2,&local_50,local_b0);
          goto LAB_1005039ce;
        }
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  else {
LAB_1005039ce:
    *(int *)(p_Var8 + 0x18) = *(int *)(p_Var8 + 0x18) + 1;
    lVar3 = *(long *)(p_Var8 + 0x20);
    plVar11 = operator_new(0x20);
    *(undefined4 *)(plVar11 + 1) = 1;
    plVar11[2] = lVar3;
    *plVar11 = (long)&PTR_FUN_10111d2b0;
    plVar11[3] = (long)FUN_100502b00;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *param_1 = plVar11;
    LOCK();
    plVar10 = plVar11 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100503a5c;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100503a5c:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100503a8c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100503a8c:
  QFileInfo::~QFileInfo((QFileInfo *)&local_48);
  return param_1;
}

