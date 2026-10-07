
undefined1 FUN_1007068f0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  acl_t acl;
  int *piVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  long *local_38;
  undefined1 local_29;
  
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0xc) == *(int *)(lVar4 + 8)) {
    acl = _acl_init(0);
    if (acl == (acl_t)0x0) {
      piVar3 = ___error();
      FUN_1008e3970("","CAuth",0,"Failed to initialize an empty ACLs list. Error code: %d",*piVar3);
LAB_100706b21:
      QString::toUtf8();
      FUN_1008e3970("","CAuth",0,"Failed to apply ACLs list to file \'%s\'",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) {
            return 0;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_58,1,8);
      }
      return 0;
    }
  }
  else {
    local_38 = (long *)**(long **)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
    if (local_38 != (long *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_100702750(&local_40,&local_38);
    acl = (acl_t)0x0;
    if (local_40 != (long *)0x0) {
      acl = (acl_t)0x0;
      if (local_40[2] != 0) {
        acl = (acl_t)0x0;
        lVar4 = ___dynamic_cast(local_40[2],&PTR_vtable_100bcdbc8,&PTR_vtable_100bcdc90,0);
        if ((lVar4 != 0) &&
           (acl = _acl_dup((acl_t)**(undefined8 **)(*(long *)(lVar4 + 0x18) + 0x10)),
           acl == (acl_t)0x0)) {
          piVar3 = ___error();
          acl = (acl_t)0x0;
          FUN_1008e3970("","CAuth",0,"Failed to copy ACLs. Error code: %d",*piVar3);
        }
      }
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (acl == (acl_t)0x0) goto LAB_100706b21;
  }
  QString::toUtf8();
  iVar2 = _acl_set_file((char *)(local_48 + *(long *)(local_48 + 0x10)),ACL_TYPE_EXTENDED,acl);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100706a99;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100706a99:
  uVar5 = 1;
  if (iVar2 != -1) goto LAB_100706b12;
  piVar3 = ___error();
  iVar2 = *piVar3;
  QString::toUtf8();
  FUN_1008e3970("","CAuth",0,"Failed to apply ACLs list to file \'%s\'. Error code: %d",
                local_50 + *(long *)(local_50 + 0x10),iVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100706b10;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100706b10:
  uVar5 = 0;
LAB_100706b12:
  if (acl != (acl_t)0x0) {
    _acl_free(acl);
    return uVar5;
  }
  return uVar5;
}

