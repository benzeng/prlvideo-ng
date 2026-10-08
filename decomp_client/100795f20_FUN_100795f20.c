
long FUN_100795f20(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_RBX;
  int iVar7;
  bool bVar8;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  uint local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100797390(&local_40,param_1 + 0x10);
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      unaff_RBX = (long)*(int *)(local_40 + 8);
      if ((local_40 + unaff_RBX * 8 != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,local_40 + unaff_RBX * 8 + 0x10,lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)(local_60 + 8) == *(int *)(local_60 + 0xc)) {
    iVar7 = 2;
  }
  else {
    do {
      local_48 = 1;
      lVar5 = *(long *)local_58;
      lVar6 = FUN_100795470(param_1,lVar5,param_2);
      if (lVar6 != 0) {
        uVar3 = FUN_100152280();
        FUN_100154d10(&local_88,uVar3);
        FUN_100062ec0(&local_80,&local_88);
        local_78 = local_80 + (long)local_80[2] * 2 + 4;
        local_70 = local_80 + (long)local_80[3] * 2 + 4;
        local_68 = 1;
        if (*local_88 == -1) {
LAB_100796090:
          do {
            iVar7 = 8;
            if (local_78 == local_70) break;
            piVar1 = (int *)**(undefined8 **)local_78;
            lVar6 = (*(undefined8 **)local_78)[1];
            if (piVar1 != (int *)0x0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            if (local_68 == 0) {
LAB_1007960e3:
              iVar7 = 0xb;
              lVar2 = unaff_RBX;
              if (piVar1 != (int *)0x0) goto LAB_1007960f1;
            }
            else {
              if ((((piVar1 == (int *)0x0) || (piVar1[1] == 0)) || (lVar6 == 0)) ||
                 (iVar7 = 1, lVar2 = lVar5, lVar6 != lVar5)) {
                local_68 = 0;
                goto LAB_1007960e3;
              }
LAB_1007960f1:
              unaff_RBX = lVar2;
              LOCK();
              *piVar1 = *piVar1 + -1;
              local_31 = *piVar1 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                operator_delete(piVar1);
              }
              if (iVar7 != 0xb) break;
            }
            local_78 = local_78 + 2;
            uVar4 = local_68 ^ 1;
            bVar8 = local_68 != 1;
            iVar7 = 8;
            local_68 = uVar4;
          } while (bVar8);
        }
        else {
          if (*local_88 == 0) {
LAB_100796063:
            FUN_100063050(&local_88,local_88);
          }
          else {
            LOCK();
            *local_88 = *local_88 + -1;
            local_31 = *local_88 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_100796063;
          }
          iVar7 = 8;
          if (local_68 != 0) goto LAB_100796090;
        }
        if (*local_80 != -1) {
          if (*local_80 != 0) {
            LOCK();
            *local_80 = *local_80 + -1;
            local_31 = *local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100796165;
          }
          FUN_100063050(&local_80,local_80);
        }
LAB_100796165:
        if (iVar7 != 8) goto LAB_10079618e;
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
    iVar7 = 2;
  }
LAB_10079618e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007961b4;
    }
    QListData::dispose(local_60);
  }
LAB_1007961b4:
  if (iVar7 == 2) {
    unaff_RBX = 0;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return unaff_RBX;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return unaff_RBX;
}

