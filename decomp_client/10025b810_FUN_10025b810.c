
long FUN_10025b810(QString *param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  QHash *pQVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long unaff_R15;
  bool bVar9;
  QString local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  _func_void_Node_ptr *local_48;
  int *local_40;
  undefined1 local_31;
  
  pQVar5 = (QHash *)CTaskManager::instance();
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_40,pQVar5);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025b878;
    }
    QHashData::free_helper(local_48);
  }
LAB_10025b878:
  FUN_100033e80(&local_68,&local_40);
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (local_68[2] != local_68[3]) {
    do {
      piVar2 = (int *)**(undefined8 **)local_60;
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
      }
      iVar8 = 5;
      if (local_50 != 0) {
        lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102204cd0);
        if ((((lVar6 != 0) && (*(long *)(lVar6 + 0x48) != 0)) &&
            (*(int *)(*(long *)(lVar6 + 0x48) + 4) != 0)) && (*(long *)(lVar6 + 0x50) != 0)) {
          lVar7 = FUN_1005c11d0();
          if (((*(long *)(lVar7 + 400) != 0) && (*(int *)(*(long *)(lVar7 + 400) + 4) != 0)) &&
             (*(long *)(lVar7 + 0x198) != 0)) {
            FUN_100188480(&local_70);
            cVar3 = operator==(param_1,&local_70);
            if (*(int *)local_70.field0_0x0 != -1) {
              if (*(int *)local_70.field0_0x0 != 0) {
                LOCK();
                *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
                local_31 = *(int *)local_70.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10025b9a8;
              }
              QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
            }
LAB_10025b9a8:
            if (cVar3 != '\0') {
              iVar8 = 1;
              unaff_R15 = lVar6;
              goto LAB_10025b9c7;
            }
          }
        }
        local_50 = 0;
      }
LAB_10025b9c7:
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      if (iVar8 != 5) goto LAB_10025ba14;
      local_60 = local_60 + 2;
      uVar4 = local_50 ^ 1;
      bVar9 = local_50 != 1;
      local_50 = uVar4;
    } while ((bVar9) && (local_60 != local_58));
  }
  iVar8 = 2;
LAB_10025ba14:
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025ba3e;
    }
    FUN_100034010(&local_68,local_68);
  }
LAB_10025ba3e:
  if (iVar8 == 2) {
    unaff_R15 = 0;
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return unaff_R15;
      }
      local_31 = 0;
    }
    FUN_100034010(&local_40,local_40);
  }
  return unaff_R15;
}

