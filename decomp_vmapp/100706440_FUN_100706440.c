
undefined8 * FUN_100706440(undefined8 *param_1)

{
  long lVar1;
  acl_entry_t p_Var2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  acl_t obj_p;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long *local_68;
  long *local_60;
  int *local_58;
  acl_entry_t local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar5 = operator_new(8);
  QString::toUtf8();
  obj_p = _acl_get_file((char *)(local_40 + *(long *)(local_40 + 0x10)),ACL_TYPE_EXTENDED);
  *puVar5 = obj_p;
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar6 == (long *)0x0) {
    if (obj_p != (acl_t)0x0) {
      _acl_free(obj_p);
    }
    operator_delete(puVar5);
    plVar6 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = (long)puVar5;
    *plVar6 = (long)&PTR_FUN_10116d860;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100706505;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100706505:
  if ((*(acl_t *)plVar6[2] != (acl_t)0x0) && (iVar3 = _acl_valid(*(acl_t *)plVar6[2]), iVar3 == 0))
  {
    local_50 = (acl_entry_t)0x0;
    local_58 = (int *)PTR_shared_null_100ba2188;
    iVar3 = _acl_get_entry(*(acl_t *)plVar6[2],0,&local_50);
    if (iVar3 != -1) {
      iVar3 = 0;
      do {
        plVar8 = operator_new(0x38);
        p_Var2 = local_50;
        FUN_100701e10(plVar8);
        *plVar8 = (long)&PTR_FUN_100bcdc40;
        plVar8[3] = (long)plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar8[4] = (long)p_Var2;
        *(int *)(plVar8 + 5) = iVar3;
        plVar8[6] = (long)PTR_shared_null_100ba20d0;
        plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8);
          plVar9 = (long *)0x0;
        }
        else {
          *(undefined4 *)(plVar9 + 1) = 1;
          plVar9[2] = (long)plVar8;
          *plVar9 = (long)&PTR_FUN_10116d8c8;
        }
        local_68 = plVar9;
        FUN_100702170(&local_60,&local_68);
        FUN_100706cd0(&local_58,&local_60);
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          lVar1 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)(*local_60 + 0x10))();
          }
        }
        if (local_68 != (long *)0x0) {
          LOCK();
          plVar8 = local_68 + 1;
          lVar1 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        iVar4 = _acl_get_entry(*(acl_t *)plVar6[2],-1,&local_50);
        iVar3 = iVar3 + 1;
      } while (iVar4 != -1);
    }
    FUN_100706f40(param_1,&local_58);
    if (*local_58 != -1) {
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        local_31 = *local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100706598;
      }
      FUN_1007070d0(&local_58,local_58);
    }
    goto LAB_100706598;
  }
  piVar7 = ___error();
  iVar3 = *piVar7;
  QString::toUtf8();
  FUN_1008e3970("","CAuth",0,"Failed to retrieve ACL info from path \'%s\'. Error code: %d",
                local_48 + *(long *)(local_48 + 0x10),iVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070658e;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10070658e:
  *param_1 = PTR_shared_null_100ba2188;
LAB_100706598:
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar1 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}

