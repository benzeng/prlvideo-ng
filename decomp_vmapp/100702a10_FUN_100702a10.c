
ulong FUN_100702a10(undefined8 param_1,int param_2,QString *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  QString local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  uint local_70;
  QString local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_100706440(&local_40,param_1);
  FUN_100706f40(&local_60,&local_40);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  uVar8 = 0;
  if (local_60[2] != local_60[3]) {
    uVar8 = 0;
    do {
      plVar1 = (long *)**(long **)local_58;
      if (plVar1 != (long *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      if (local_48 != 0) {
        if (((plVar1 != (long *)0x0) && ((long *)plVar1[2] != (long *)0x0)) &&
           (cVar4 = (**(code **)(*(long *)plVar1[2] + 0x10))(), cVar4 != '\0')) {
          plVar2 = (long *)plVar1[2];
          iVar6 = 0;
          if ((plVar2 != (long *)0x0) && (iVar6 = (int)plVar2[2], iVar6 == 0)) {
            iVar6 = (**(code **)(*plVar2 + 0x40))(plVar2);
            *(int *)(plVar2 + 2) = iVar6;
          }
          if (iVar6 == param_2) {
            if (plVar1[2] == 0) {
              local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            }
            else {
              FUN_100701f80(&local_68);
            }
            cVar4 = operator==(&local_68,param_3);
            bVar9 = true;
            cVar5 = '\x01';
            if (cVar4 == '\0') goto LAB_100702b47;
LAB_100702b96:
            if (*(int *)local_68.field0_0x0 != -1) {
              if (*(int *)local_68.field0_0x0 != 0) {
                LOCK();
                *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                local_31 = *(int *)local_68.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100702bc6;
              }
              QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
            }
          }
          else {
            bVar9 = false;
LAB_100702b47:
            cVar5 = '\0';
            if ((param_2 == 1) && (iVar6 == 2)) {
              plVar2 = (long *)plVar1[2];
              iVar6 = -1;
              if ((plVar2 != (long *)0x0) && (iVar6 = *(int *)((long)plVar2 + 0x14), iVar6 == -1)) {
                iVar6 = (**(code **)(*plVar2 + 0x38))(plVar2);
                *(int *)((long)plVar2 + 0x14) = iVar6;
              }
              cVar5 = FUN_1007032d0(param_3,iVar6);
            }
            if (bVar9) goto LAB_100702b96;
          }
LAB_100702bc6:
          if (cVar5 != '\0') {
            if ((long *)plVar1[2] == (long *)0x0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (**(code **)(*(long *)plVar1[2] + 0x18))();
              if (cVar4 != '\0') {
                uVar8 = uVar8 | 4;
              }
              if ((long *)plVar1[2] == (long *)0x0) {
                cVar4 = '\0';
              }
              else {
                cVar4 = (**(code **)(*(long *)plVar1[2] + 0x20))();
                if (cVar4 != '\0') {
                  uVar8 = uVar8 | 2;
                }
                if ((long *)plVar1[2] == (long *)0x0) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = (**(code **)(*(long *)plVar1[2] + 0x28))();
                }
              }
            }
            if (cVar4 != '\0') {
              uVar8 = uVar8 | 8;
            }
          }
        }
        local_48 = 0;
      }
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_58 = local_58 + 2;
      uVar7 = local_48 ^ 1;
      bVar9 = local_48 != 1;
      local_48 = uVar7;
    } while ((bVar9) && (local_58 != local_50));
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100702cb7;
    }
    FUN_1007070d0(&local_60,local_60);
  }
LAB_100702cb7:
  FUN_100706f40(&local_88,&local_40);
  local_80 = local_88 + (long)local_88[2] * 2 + 4;
  local_78 = local_88 + (long)local_88[3] * 2 + 4;
  local_70 = 1;
  if (local_88[2] != local_88[3]) {
    do {
      plVar1 = (long *)**(long **)local_80;
      if (plVar1 != (long *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      if (local_70 != 0) {
        iVar6 = 0;
        if ((plVar1 == (long *)0x0) || ((long *)plVar1[2] == (long *)0x0)) {
LAB_100702d70:
          if (iVar6 == param_2) {
            if ((plVar1 == (long *)0x0) || (plVar1[2] == 0)) {
              local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            }
            else {
              FUN_100701f80(&local_90);
            }
            cVar4 = operator==(&local_90,param_3);
            bVar9 = true;
            cVar5 = '\x01';
            if (cVar4 == '\0') goto LAB_100702dde;
LAB_100702e3e:
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100702e74;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
          }
          else {
            bVar9 = false;
LAB_100702dde:
            cVar5 = '\0';
            if ((param_2 == 1) && (iVar6 == 2)) {
              iVar6 = -1;
              if ((plVar1 != (long *)0x0) &&
                 ((plVar2 = (long *)plVar1[2], plVar2 != (long *)0x0 &&
                  (iVar6 = *(int *)((long)plVar2 + 0x14), iVar6 == -1)))) {
                iVar6 = (**(code **)(*plVar2 + 0x38))(plVar2);
                *(int *)((long)plVar2 + 0x14) = iVar6;
              }
              cVar5 = FUN_1007032d0(param_3,iVar6);
            }
            if (bVar9) goto LAB_100702e3e;
          }
LAB_100702e74:
          if (cVar5 != '\0') {
            if (plVar1 == (long *)0x0) {
              cVar4 = '\0';
            }
            else if ((long *)plVar1[2] == (long *)0x0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (**(code **)(*(long *)plVar1[2] + 0x18))();
              if (cVar4 != '\0') {
                uVar8 = uVar8 & 0xfffffffffffffffb;
              }
              if ((long *)plVar1[2] == (long *)0x0) {
                cVar4 = '\0';
              }
              else {
                cVar4 = (**(code **)(*(long *)plVar1[2] + 0x20))();
                if (cVar4 != '\0') {
                  uVar8 = uVar8 & 0xfffffffffffffffd;
                }
                if ((long *)plVar1[2] == (long *)0x0) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = (**(code **)(*(long *)plVar1[2] + 0x28))();
                }
              }
            }
            if (cVar4 != '\0') {
              uVar8 = uVar8 & 0xfffffffffffffff7;
            }
          }
        }
        else {
          cVar4 = (**(code **)(*(long *)plVar1[2] + 0x10))();
          if (cVar4 == '\0') {
            plVar2 = (long *)plVar1[2];
            if ((plVar2 != (long *)0x0) && (iVar6 = (int)plVar2[2], iVar6 == 0)) {
              iVar6 = (**(code **)(*plVar2 + 0x40))(plVar2);
              *(int *)(plVar2 + 2) = iVar6;
            }
            goto LAB_100702d70;
          }
        }
        local_70 = 0;
      }
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_80 = local_80 + 2;
      uVar7 = local_70 ^ 1;
      bVar9 = local_70 != 1;
      local_70 = uVar7;
    } while ((bVar9) && (local_80 != local_78));
  }
  if (*local_88 != -1) {
    if (*local_88 != 0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_31 = *local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100702f64;
    }
    FUN_1007070d0(&local_88,local_88);
  }
LAB_100702f64:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    FUN_1007070d0(&local_40,local_40);
  }
  return uVar8;
}

