
void FUN_10003e190(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  _func_void_Node_ptr_void_ptr *p_Var7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  long lVar9;
  int iVar10;
  _func_void_Node_ptr *p_Var11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_84 [4];
  long *local_80;
  undefined1 local_74 [4];
  QArrayData *local_70;
  QString local_68;
  uint local_5c;
  long *local_58;
  undefined1 local_4c [4];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*(long *)(*param_3 + 0x10) + 0x4c) == 0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("SGA_SERVER","prl_client_app",1,
                  "Invalid received packet: must be 1 buffer minimum");
    return;
  }
  plVar1 = (long *)(param_1 + 0x10);
  p_Var7 = (_func_void_Node_ptr_void_ptr *)FUN_10003ebe0(plVar1);
  p_Var8 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x10);
  if (1 < *(uint *)(p_Var8 + 0x10)) {
    p_Var8 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var8,FUN_10003f440,0x3f3a0,0x20);
    p_Var11 = (_func_void_Node_ptr *)*plVar1;
    if (*(int *)(p_Var11 + 0x10) != -1) {
      if (*(int *)(p_Var11 + 0x10) != 0) {
        LOCK();
        pcVar2 = p_Var11 + 0x10;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
        local_31 = *(int *)pcVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003e233;
        p_Var11 = (_func_void_Node_ptr *)*plVar1;
      }
      QHashData::free_helper(p_Var11);
    }
LAB_10003e233:
    *plVar1 = (long)p_Var8;
  }
  if (p_Var8 == p_Var7) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    QString::toUtf8();
    FUN_100df99c0("SGA_SERVER","prl_client_app",1,"Invalid received packet handle %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_10003e6a7;
  }
  puVar4 = *(undefined8 **)(p_Var7 + 0x18);
  lVar5 = *param_3;
  lVar12 = *(long *)(lVar5 + 0x10);
  lVar9 = 0;
  if (*(long *)(lVar12 + 0x80) != 0) {
    lVar9 = *(long *)(*(long *)(lVar12 + 0x80) + 0x10);
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  if (*(int *)(lVar9 + 8) == 0x81) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGA_SERVER","prl_client_app",2,"PxAppStubCmdPowerOff handling");
    }
    FUN_10003ee40(plVar1,param_2);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x118))(*(long **)(param_1 + 0x18),param_2);
  }
  else if (*(int *)(lVar9 + 8) == 0x65) {
    if (*(uint *)(lVar12 + 0x4c) < 2) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGA_SERVER","prl_client_app",1,
                      "Invalid received packet buffers count for PxAppStubCmdVmId");
      }
    }
    else {
      local_58 = (long *)0x0;
      if (lVar5 == 0) {
        lVar12 = 0;
      }
      FUN_100a69e60(lVar12,1,local_4c,&local_58,&local_5c);
      if (local_5c < 0x80) {
        iVar14 = 1;
        if (0 < DAT_10230ffd0) {
          iVar14 = 1;
          FUN_100df99c0("SGA_SERVER","prl_client_app",1,
                        "Invalid PxAppStubCmdVmId bufferSize (%d, must be >=%ld",local_5c,0x80);
        }
      }
      else {
        puVar13 = (undefined8 *)0x0;
        if (local_58 != (long *)0x0) {
          puVar13 = (undefined8 *)local_58[2];
        }
        _strlen((char *)(puVar13 + 1));
        QString::fromUtf8_helper((char *)&local_70,(int)(puVar13 + 1));
        QString::normalized(&local_68,&local_70,1,0);
        QString::operator=((QString *)(puVar4 + 1),&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10003e53f;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_10003e53f:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10003e56f;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10003e56f:
        *puVar4 = *puVar13;
        iVar10 = 0;
        if (local_58 != (long *)0x0) {
          iVar10 = (int)local_58[2];
        }
        iVar14 = 10;
        QByteArray::append((char *)&local_48,iVar10);
      }
      if (local_58 != (long *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      if (iVar14 == 10) goto LAB_10003e5c2;
    }
  }
  else {
    if (1 < *(uint *)(lVar12 + 0x4c)) {
      local_80 = (long *)0x0;
      if (lVar5 == 0) {
        lVar12 = 0;
      }
      FUN_100a69e60(lVar12,1,local_74,&local_80,local_84);
      iVar10 = 0;
      if (local_80 != (long *)0x0) {
        iVar10 = (int)local_80[2];
      }
      QByteArray::append((char *)&local_48,iVar10);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
    }
LAB_10003e5c2:
    uVar6 = *puVar4;
    local_90 = (QArrayData *)puVar4[1];
    uVar3 = *(undefined4 *)(lVar9 + 8);
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
    local_98 = local_48;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    FUN_1007f71c0(param_1,uVar6,uVar3,&local_90,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003e650;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_10003e650:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003e686;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10003e686:
  if (*(int *)local_48 == -1) {
    return;
  }
  local_40 = local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_10003e6a7:
  QArrayData::deallocate(local_40,1,8);
  return;
}

