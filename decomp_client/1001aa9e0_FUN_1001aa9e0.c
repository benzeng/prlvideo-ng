
undefined1 FUN_1001aa9e0(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  int local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar5 = (long *)___dynamic_cast(param_2,PTR_typeinfo_1021e16d8,PTR_typeinfo_1021e1668,0);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar5 + 0xb8))(&local_40,plVar5);
  (**(code **)(*plVar5 + 0xa8))(&local_48,plVar5);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar4 = FUN_1001aecc0(&local_50,plVar5);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    local_60 = (QArrayData *)puVar1;
    cVar2 = FUN_1001b0280(&local_40,&local_48,&local_54,&local_60);
    if (cVar2 == '\0') {
      cVar2 = FUN_1001b4060(plVar5);
      if (cVar2 == '\0') {
        uVar7 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
        }
        (**(code **)(*plVar5 + 0xb8))(&local_70,plVar5);
        cVar2 = FUN_1001b4140(uVar7,&local_70);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001aab6a;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1001aab6a:
        if (cVar2 == '\0') {
          uVar3 = 1;
          if (param_3 == 2) {
            lVar6 = ___dynamic_cast(plVar5,PTR_typeinfo_1021e16d8,PTR_typeinfo_1021e1668,0);
            if ((lVar6 == 0) || (iVar4 = CHwUsbDevice::getUsbType(), iVar4 != 2)) {
LAB_1001aad66:
              FUN_1000341d0(param_1 + 0x40,&local_40);
              FUN_1001ab820(param_1);
              uVar3 = 1;
            }
            else {
              uVar7 = 0;
              if ((*(long *)(param_1 + 0x18) != 0) &&
                 (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
                uVar7 = *(undefined8 *)(param_1 + 0x20);
              }
              iVar4 = FUN_10015d3a0();
              iVar8 = 0;
              uVar3 = 0;
              if (0 < iVar4) {
                do {
                  lVar6 = FUN_10015d330(uVar7,iVar8);
                  if ((lVar6 != 0) && (cVar2 = FUN_1001aec10(lVar6,plVar5), cVar2 != '\0')) {
                    FUN_10018c2b0(lVar6);
                    CVmConfiguration::getVmSettings();
                    CVmSettings::getSharedCamera();
                    cVar2 = CVmSharedCamera::isEnabled();
                    if (cVar2 == '\0') goto LAB_1001aad66;
                  }
                  iVar8 = iVar8 + 1;
                  uVar3 = 0;
                } while (iVar8 < iVar4);
              }
            }
          }
          else if ((param_3 == 1) && (uVar3 = 1, *(int *)(local_50 + 4) != 0)) {
            uVar7 = 0;
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
              uVar7 = *(undefined8 *)(param_1 + 0x20);
            }
            lVar6 = FUN_10015cb20(uVar7,&local_50);
            if (lVar6 == 0) {
              uVar3 = 0;
            }
            else {
              cVar2 = FUN_1001aec10(lVar6,plVar5);
              if (cVar2 == '\0') {
                uVar3 = 0;
              }
              else {
                FUN_100188480(&local_78,lVar6);
                uVar3 = FUN_1001ab020(param_1,&local_40,&local_78);
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001aad8b;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
              }
            }
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else if (local_54 == 2) {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      lVar6 = FUN_10015cb20(uVar7,&local_60);
      if (lVar6 == 0) {
        uVar3 = 0;
      }
      else {
        iVar4 = FUN_10018bce0(lVar6);
        if (iVar4 == 1) {
          uVar3 = 0;
        }
        else {
          cVar2 = FUN_1001aec10(lVar6,plVar5);
          if (cVar2 == '\0') {
            uVar3 = 0;
          }
          else {
            FUN_100188480(&local_68,lVar6);
            uVar3 = FUN_1001ab020(param_1,&local_40,&local_68);
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001aad8b;
              }
              QArrayData::deallocate(local_68,2,8);
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
    }
LAB_1001aad8b:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001aadbb;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1001aadbb:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001aadeb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001aadeb:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001aae1b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001aae1b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar3;
}

