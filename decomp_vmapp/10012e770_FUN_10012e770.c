
undefined1 FUN_10012e770(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  QArrayData *pQVar6;
  QString QVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("vm_guest_run_app_cmd_arguments",0x1e);
  plVar4 = (long *)CVmEvent::getEventParameter(QVar7);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012e7e5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10012e7e5:
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("vm_guest_run_app_cmd_env_vars",0x1d);
  plVar5 = (long *)CVmEvent::getEventParameter(QVar7);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012e848;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10012e848:
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = CVmEventParameter::getParamType();
      uVar2 = 0;
      if ((plVar5 != (long *)0x0) && (iVar3 == 1)) {
        cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          iVar3 = CVmEventParameter::getParamType();
          if (iVar3 == 1) {
            pQVar6 = (QArrayData *)
                     QString::fromAscii_helper("vm_guest_run_app_cmd_program_name",0x21);
            local_48 = pQVar6;
            cVar1 = FUN_10011d720(param_1,&local_48,1);
            if (cVar1 == '\0') {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_10012e390(param_1);
            }
            if (*(int *)pQVar6 != -1) {
              if (*(int *)pQVar6 != 0) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                local_29 = *(int *)pQVar6 != 0;
                UNLOCK();
                if ((bool)local_29) {
                  return uVar2;
                }
              }
              QArrayData::deallocate(pQVar6,2,8);
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

