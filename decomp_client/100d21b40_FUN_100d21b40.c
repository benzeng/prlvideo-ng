
undefined8 FUN_100d21b40(QString *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  QArrayData *local_70;
  long *local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  undefined8 local_50;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_50 = 0;
  QFileInfo::QFileInfo(local_60,param_1);
  QFileInfo::absoluteFilePath();
  QFileInfo::~QFileInfo(local_60);
  plVar3 = (long *)FUN_100d210e0(param_2);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar4 == (long *)0x0) {
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    local_68 = (long *)0x0;
LAB_100d21c0c:
    plVar4 = local_68;
    cVar2 = FUN_100d21fc0(&local_58,&local_68,&local_50);
    uVar5 = local_50;
    if (cVar2 == '\0') {
      FUN_100df99c0("","VBoxVmModel",0,"Failed to get disk descriptor: could not load global config"
                   );
      uVar5 = 0;
    }
LAB_100d21e1d:
    if (plVar4 == (long *)0x0) goto LAB_100d21e3e;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)plVar3;
    *plVar4 = (long)&PTR_FUN_10230f530;
    local_68 = plVar4;
    if (plVar3 == (long *)0x0) goto LAB_100d21c0c;
    uVar5 = (**(code **)(*(long *)plVar4[2] + 0x10))();
    cVar2 = FUN_100d229b0(&local_58,uVar5,&local_50);
    uVar5 = local_50;
    if (cVar2 == '\0') {
      plVar3 = (long *)(**(code **)(*(long *)plVar4[2] + 0x18))();
      lVar1 = *plVar3;
      if (*(long *)(lVar1 + 0x10) != 0) {
        lVar7 = *(long *)(lVar1 + 0x20);
        while (lVar7 != lVar1 + 8) {
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            FUN_100df99c0("","VBoxVmModel",3,"Lookup for vdi \'%s\'",
                          local_40 + *(long *)(local_40 + 0x10));
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d21d00;
              }
              QArrayData::deallocate(local_40,1,8);
            }
          }
LAB_100d21d00:
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_48 = plVar4;
          plVar6 = (long *)FUN_100d21950(lVar7 + 0x20,&local_48);
          LOCK();
          plVar3 = plVar4 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
          if (plVar6 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar6 + 0x58))(plVar6);
            cVar2 = FUN_100d229b0(&local_58,uVar5,&local_50);
            (**(code **)(*plVar6 + 8))(plVar6);
            uVar5 = local_50;
            if (cVar2 != '\0') goto LAB_100d21e1d;
          }
          lVar7 = QMapNodeBase::nextNode();
        }
      }
      cVar2 = FUN_100d21fc0(&local_58,&local_68,&local_50);
      uVar5 = local_50;
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_100df99c0("","VBoxVmModel",0,
                      "Failed to get disk descriptor: image \'%s\' not registered",
                      local_70 + *(long *)(local_70 + 0x10));
        uVar5 = 0;
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            uVar5 = 0;
            if ((bool)local_31) goto LAB_100d21e1d;
          }
          QArrayData::deallocate(local_70,1,8);
          uVar5 = 0;
        }
      }
      goto LAB_100d21e1d;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  lVar1 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_100d21e3e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return uVar5;
}

