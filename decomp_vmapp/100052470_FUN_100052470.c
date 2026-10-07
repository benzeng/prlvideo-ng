
int FUN_100052470(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  long *local_2b90;
  long *local_2b88;
  int *local_2b80;
  QArrayData *local_2b78;
  undefined1 local_2b70 [8];
  undefined4 local_2b68;
  long *local_2b64;
  undefined4 local_2b54;
  undefined4 local_2b50;
  undefined8 local_22d8;
  undefined8 local_22d0;
  QArrayData *local_22c8;
  undefined4 local_22c0;
  int *local_22b8;
  long *local_22b0;
  long *local_22a8;
  undefined *local_22a0;
  QArrayData *local_2298;
  uint local_2290;
  int local_228c;
  undefined1 local_19f8 [8];
  undefined4 local_19f0;
  long *local_19ec;
  undefined1 local_1160 [8];
  undefined4 local_1158;
  undefined8 local_1154;
  undefined1 local_8c8 [8];
  undefined4 local_8c0;
  undefined8 local_8bc;
  
  if (*(short *)(param_2 + 0x16) == 0) {
    return -0xfffffe4;
  }
  if (*(short *)(param_2 + 0x16) != 2) {
    return -0xffffffd;
  }
  lVar5 = FUN_1002a6120(param_2,0,0);
  if (lVar5 == 0) {
    return -0xffffffd;
  }
  lVar6 = FUN_1002a6120(param_2,1,1);
  if (lVar6 == 0) {
    return -0xffffffd;
  }
  FUN_1002a5990(lVar5,0,&local_2290,0x894);
  if (local_2290 < 0x100) {
    return -0xfffffe4;
  }
  if (local_228c != 2) {
    return -0xfffffe4;
  }
  if (local_2290 - 0x100 < 2) {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    plVar7 = operator_new(0x20);
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = param_1;
    *plVar7 = (long)&PTR_FUN_100bef448;
    *(bool *)(plVar7 + 3) = local_2290 == 0x100;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    cVar4 = FUN_100041750(uVar8,plVar7);
    if (cVar4 == '\0') {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    local_1158 = 0;
    local_1154 = 0;
    uVar8 = FUN_1002a6120(param_2,1,1);
    FUN_1002a5a50(uVar8,0,local_1160,0x894);
    return 0;
  }
  if (local_2290 != 0x114) {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    if (local_2290 != 0x103) {
      plVar7 = operator_new(0x8b8);
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = param_1;
      *plVar7 = (long)&PTR_FUN_100bef558;
      _memcpy(plVar7 + 3,&local_2290,0x894);
      plVar7[0x116] = param_2;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      cVar4 = FUN_100041750(uVar8,plVar7);
      if (cVar4 == '\0') {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      iVar12 = -1;
      LOCK();
      plVar1 = plVar7 + 1;
      iVar13 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      goto LAB_100052935;
    }
    plVar7 = operator_new(0x20);
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = param_1;
    *plVar7 = (long)&PTR_FUN_100bef448;
    *(undefined1 *)(plVar7 + 3) = 1;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    cVar4 = FUN_100041750(uVar8,plVar7);
    if (cVar4 == '\0') {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    QMutex::lock();
    local_22d8 = *(undefined8 *)(param_1 + 0x30);
    local_22d0 = *(undefined8 *)(param_1 + 0x38);
    local_22c8 = *(QArrayData **)(param_1 + 0x40);
    if (1 < *(int *)local_22c8 + 1U) {
      LOCK();
      *(int *)local_22c8 = *(int *)local_22c8 + 1;
      local_1160[0] = *(int *)local_22c8 != 0;
      UNLOCK();
    }
    local_22c0 = *(undefined4 *)(param_1 + 0x48);
    local_22b8 = *(int **)(param_1 + 0x50);
    if (*local_22b8 != -1) {
      if (*local_22b8 == 0) {
        QListData::detach((int)&local_22b8);
        iVar13 = local_22b8[2];
        if (iVar13 != local_22b8[3]) {
          puVar14 = (undefined8 *)
                    (*(long *)(param_1 + 0x50) + 0x10 +
                    (long)*(int *)(*(long *)(param_1 + 0x50) + 8) * 8);
          piVar10 = local_22b8 + (long)iVar13 * 2 + 4;
          lVar5 = (long)local_22b8[3] * 8 + (long)iVar13 * -8;
          do {
            piVar11 = (int *)*puVar14;
            *(int **)piVar10 = piVar11;
            if (1 < *piVar11 + 1U) {
              LOCK();
              *piVar11 = *piVar11 + 1;
              local_1160[0] = *piVar11 != 0;
              UNLOCK();
            }
            piVar10 = piVar10 + 2;
            puVar14 = puVar14 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_22b8 = *local_22b8 + 1;
        local_1160[0] = *local_22b8 != 0;
        UNLOCK();
      }
    }
    local_22c0 = *(undefined4 *)(param_1 + 0x48);
    lVar5 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x30) == '\0') {
      *(long *)(param_1 + 0x60) = param_2;
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    QMutex::unlock();
    if ((char)local_22d8 != '\0') {
      local_2b68 = (undefined4)((ulong)local_22d8 >> 0x20);
      local_2b54 = (undefined4)local_22d0;
      local_2b50 = (undefined4)((ulong)local_22d0 >> 0x20);
      plVar7 = operator_new(0x78);
      uVar3 = local_22c0;
      local_2b78 = local_22c8;
      if (1 < *(int *)local_22c8 + 1U) {
        LOCK();
        *(int *)local_22c8 = *(int *)local_22c8 + 1;
        local_1160[0] = *(int *)local_22c8 != 0;
        UNLOCK();
      }
      local_2b80 = local_22b8;
      if (*local_22b8 != -1) {
        if (*local_22b8 == 0) {
          QListData::detach((int)&local_2b80);
          iVar13 = local_2b80[2];
          if (iVar13 != local_2b80[3]) {
            piVar10 = local_22b8 + (long)local_22b8[2] * 2 + 4;
            piVar11 = local_2b80 + (long)iVar13 * 2 + 4;
            lVar6 = (long)local_2b80[3] * 8 + (long)iVar13 * -8;
            do {
              piVar2 = *(int **)piVar10;
              *(int **)piVar11 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_1160[0] = *piVar2 != 0;
                UNLOCK();
              }
              piVar11 = piVar11 + 2;
              piVar10 = piVar10 + 2;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *local_22b8 = *local_22b8 + 1;
          local_1160[0] = *local_22b8 != 0;
          UNLOCK();
        }
      }
      FUN_1000539a0(plVar7,param_1,&local_2b78,uVar3,&local_2b80);
      FUN_100013180(&local_2b80);
      if (*(int *)local_2b78 != -1) {
        if (*(int *)local_2b78 != 0) {
          LOCK();
          *(int *)local_2b78 = *(int *)local_2b78 + -1;
          local_1160[0] = *(int *)local_2b78 != 0;
          UNLOCK();
          if ((bool)local_1160[0]) goto LAB_100052af2;
        }
        QArrayData::deallocate(local_2b78,2,8);
      }
LAB_100052af2:
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_2b90 = plVar7;
      FUN_100050e10(&local_2b88,param_1 + 0x78,&local_2b90);
      if (local_2b88 != (long *)0x0) {
        LOCK();
        plVar1 = local_2b88 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_2b88 + 0x10))();
        }
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      local_2b64 = plVar7;
      uVar8 = FUN_1002a6120(param_2,1,1);
      FUN_1002a5a50(uVar8,0,local_2b70,0x894);
      LOCK();
      plVar1 = plVar7 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (lVar5 != 0) {
      local_8c0 = 0xcb;
      local_8bc = 0;
      uVar8 = FUN_1002a6120(lVar5,1,1);
      FUN_1002a5a50(uVar8,0,local_8c8,0x894);
      FUN_1004c07d0(param_1,lVar5,0);
    }
    iVar13 = (int)(char)local_22d8;
    FUN_100013180(&local_22b8);
    if (*(int *)local_22c8 != -1) {
      if (*(int *)local_22c8 != 0) {
        LOCK();
        *(int *)local_22c8 = *(int *)local_22c8 + -1;
        UNLOCK();
        if (*(int *)local_22c8 != 0) goto LAB_100052c4d;
        local_1160[0] = 0;
      }
      QArrayData::deallocate(local_22c8,2,8);
    }
LAB_100052c4d:
    return iVar13 + -1;
  }
  plVar7 = operator_new(0x78);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("",0);
  local_22a0 = PTR_shared_null_100ba2188;
  local_2298 = pQVar9;
  FUN_1000539a0(plVar7,param_1,&local_2298,0,&local_22a0);
  FUN_100013180(&local_22a0);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_1160[0] = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_1160[0]) goto LAB_100052696;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100052696:
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  local_22b0 = plVar7;
  FUN_100050e10(&local_22a8,param_1 + 0x78,&local_22b0);
  if (local_22a8 != (long *)0x0) {
    LOCK();
    plVar1 = local_22a8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_22a8 + 0x10))();
    }
  }
  LOCK();
  plVar1 = plVar7 + 1;
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_19f0 = 0;
  local_19ec = plVar7;
  uVar8 = FUN_1002a6120(param_2,1,1);
  iVar12 = 0;
  FUN_1002a5a50(uVar8,0,local_19f8,0x894);
  LOCK();
  plVar1 = plVar7 + 1;
  iVar13 = (int)*plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
LAB_100052935:
  if (iVar13 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return iVar12;
}

