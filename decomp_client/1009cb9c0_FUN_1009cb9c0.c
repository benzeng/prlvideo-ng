
undefined8 FUN_1009cb9c0(long param_1)

{
  QString *this;
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if ((*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","PTProblemReporting",2,"Crashed process appName \'%s\', PID %d, simple %d",
                    local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(param_1 + 0x28),
                    *(undefined1 *)(param_1 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009cba6e;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
LAB_1009cba6e:
    this = (QString *)(param_1 + 0x18);
    if (*(undefined **)(param_1 + 0x18) != PTR_shared_null_1021e1288) {
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=(this,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009cbac6;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1009cbac6:
    uVar7 = 0;
    do {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        if (*(int *)(this->field0_0x0 + 4) != 0) goto LAB_1009cbb9c;
        break;
      }
      local_58 = *(QArrayData **)(param_1 + 0x20);
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      FUN_1009ca000(&local_50,&local_58,*(undefined4 *)(param_1 + 0x28),3);
      QString::operator=(this,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009cbb43;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1009cbb43:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009cbb73;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1009cbb73:
      if (*(int *)(this->field0_0x0 + 4) != 0) goto LAB_1009cbb9c;
      uVar7 = uVar7 + 3;
    } while (uVar7 < 0x3c);
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Failed to find Mac crash report, unable to assembly problem report.");
    return 0x8000001;
  }
LAB_1009cbb9c:
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return 0x8000005;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","PTProblemReporting",2,"Crash dump file \'%s\'",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009cbc21;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_1009cbc21:
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    plVar4 = (long *)FUN_1009cb200(*(undefined1 *)(param_1 + 0x10));
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)plVar4;
      *plVar5 = (long)&PTR_FUN_10227e2a0;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar5 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      goto LAB_1009cbd37;
    }
    bVar2 = true;
    plVar8 = (long *)0x0;
    if (plVar4 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar8 = (long *)0x0;
      (**(code **)(*plVar4 + 0x20))(plVar4);
      plVar5 = (long *)0x0;
    }
  }
  else {
    plVar4 = (long *)FUN_1009cb420(param_1 + 0x18,*(undefined1 *)(param_1 + 0x10));
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar5 == (long *)0x0) {
      bVar2 = true;
      plVar8 = (long *)0x0;
      if (plVar4 == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar8 = (long *)0x0;
        (**(code **)(*plVar4 + 0x20))(plVar4);
        plVar5 = (long *)0x0;
      }
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)plVar4;
      *plVar5 = (long)&PTR_FUN_10227e2a0;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar5 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
LAB_1009cbd37:
      plVar8 = plVar5;
      if (plVar5 == (long *)0x0) {
        bVar2 = true;
        plVar5 = (long *)0x0;
      }
      else {
        if (plVar5[2] != 0) {
          FUN_1009f8a20(plVar5[2],1);
          if (*(char *)(param_1 + 0x2c) == '\0') {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            plVar4 = *(long **)(param_1 + 0x38);
            *(long **)(param_1 + 0x38) = plVar5;
            uVar6 = 0x8000000;
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)(*plVar4 + 0x10))();
              }
            }
          }
          else {
            uVar6 = 0x8000005;
          }
          goto LAB_1009cbe24;
        }
        bVar2 = false;
      }
    }
  }
  FUN_100df99c0("","PTProblemReporting",0,"Error : Failed to assembly problem report");
  uVar6 = 0x8000001;
  if (bVar2) {
    return 0x8000001;
  }
LAB_1009cbe24:
  LOCK();
  plVar8 = plVar8 + 1;
  lVar3 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return uVar6;
}

