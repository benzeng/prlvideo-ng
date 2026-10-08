
char * FUN_10044d8b0(char *param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  bool bVar11;
  _func_void_Node_ptr *local_78;
  _func_void_Node_ptr *local_70;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  int local_38;
  undefined1 local_31;
  
  lVar7 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    goto LAB_10044db31;
  }
  if (*(int *)(*(long *)(param_2 + 0x40) + 0xc) != *(int *)(*(long *)(param_2 + 0x40) + 8)) {
    uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
    cVar3 = FUN_10018d9f0(uVar8,&local_38);
    if ((cVar3 != '\0') && (local_38 == 1)) {
      iVar4 = 0x1df50ae;
      goto LAB_10044dbcc;
    }
  }
  uVar8 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x28));
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.IsolatedVm",0x19);
  FUN_1003e1800(&local_48,uVar8,&local_50,0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044d98f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10044d98f:
  uVar8 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x28));
  local_68 = (QArrayData *)QString::fromAscii_helper("Hardware.HibernateState.ShutdownReason",0x26);
  FUN_1003e1800(&local_60,uVar8,&local_68,0);
  iVar4 = QVariant::toInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044da0d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10044da0d:
  uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
  uVar8 = FUN_10018c280(uVar8);
  uVar5 = FUN_100319ae0(uVar8);
  FUN_10044df60(&local_70,param_2);
  if (*(int *)(local_70 + 0x14) == 0) {
    bVar11 = false;
  }
  else {
    FUN_10044df60(&local_78,param_2);
    p_Var10 = local_78;
    if (*(uint *)(local_78 + 0x20) != 0) {
      for (p_Var9 = *(_func_void_Node_ptr **)
                     (*(long *)(local_78 + 8) +
                     ((ulong)(*(uint *)(local_78 + 0x24) ^ uVar5) %
                     (ulong)*(uint *)(local_78 + 0x20)) * 8);
          (p_Var10 = local_78, p_Var9 != local_78 &&
          ((*(uint *)(p_Var9 + 8) != (*(uint *)(local_78 + 0x24) ^ uVar5) ||
           (p_Var10 = p_Var9, uVar5 != *(uint *)(p_Var9 + 0xc)))));
          p_Var9 = *(_func_void_Node_ptr **)p_Var9) {
      }
    }
    bVar11 = p_Var10 != local_78;
    if (*(int *)(local_78 + 0x10) != -1) {
      if (*(int *)(local_78 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_78 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10044db42;
      }
      QHashData::free_helper(local_78);
    }
  }
LAB_10044db42:
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044db71;
    }
    QHashData::free_helper(local_70);
  }
LAB_10044db71:
  if (bVar11) {
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    uVar8 = 3;
LAB_10044db84:
    FUN_10044dd20(param_1,uVar2,uVar8,uVar5);
    return param_1;
  }
  uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
  iVar6 = FUN_10018a9d0(uVar8);
  if (iVar6 != 0x30000004) {
    uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
    iVar6 = FUN_10018a9d0(uVar8);
    if (iVar6 != 0x30000005) {
      uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
      iVar6 = FUN_10018a9d0(uVar8);
      if (iVar6 == 0x30000009) {
        iVar4 = 0x1df5017;
      }
      else {
        uVar8 = FUN_1003b0a30(*(undefined8 *)(param_2 + 0x28));
        iVar6 = FUN_10018a9d0(uVar8);
        if ((iVar4 != 1) || (iVar6 != 0x30000001)) {
          if (cVar3 == '\0') {
LAB_10044db31:
            *(undefined **)param_1 = PTR_shared_null_1021e1288;
            return param_1;
          }
          uVar2 = *(undefined4 *)(param_2 + 0x30);
          uVar8 = 1;
          uVar5 = 0;
          goto LAB_10044db84;
        }
        iVar4 = 0x1df513e;
      }
      goto LAB_10044dbcc;
    }
  }
  iVar4 = (int)PTR_s_Some_of_the_settings_on_this_pag_10226ec40;
LAB_10044dbcc:
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar4);
  return param_1;
}

