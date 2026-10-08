
void FUN_1005b61c0(long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *pQVar7;
  int *piVar8;
  QArrayData *local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  undefined4 local_88;
  long local_80;
  _func_void_Node_ptr *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int local_50;
  QArrayData *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar6 = FUN_1005b86c0(uVar5);
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    pQVar7 = (QArrayData *)QString::fromAscii_helper("",0);
    if (1 < *(int *)pQVar7 + 1U) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
    }
    local_40 = 3;
    local_48 = pQVar7;
    FUN_1005b3950(param_1,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b6262;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1005b6262:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b628d;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_1005b628d:
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    return;
  }
  uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005bca20(&local_78,uVar5,3);
  FUN_1002b5da0(&local_70,&local_78);
  local_68 = local_70;
  if (*local_70 != -1) {
    if (*local_70 == 0) {
      QListData::detach((int)&local_68);
      iVar2 = local_68[2];
      if (iVar2 != local_68[3]) {
        local_70 = local_70 + (long)local_70[2] * 2 + 4;
        piVar8 = local_68 + (long)iVar2 * 2 + 4;
        lVar6 = (long)local_68[3] * 8 + (long)iVar2 * -8;
        do {
          piVar4 = *(int **)local_70;
          *(int **)piVar8 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_70 = local_70 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  FUN_100039a80(&local_70);
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b63ac;
    }
    QHashData::free_helper(local_78);
  }
LAB_1005b63ac:
  if ((local_50 != 0) && (local_60 != local_58)) {
    do {
      piVar8 = local_60;
      uVar5 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      uVar5 = FUN_1005b86c0(uVar5);
      uVar5 = FUN_10015a340(uVar5);
      FUN_100122bf0(&local_80,uVar5,piVar8);
      iVar2 = *(int *)(local_80 + 8);
      iVar3 = *(int *)(local_80 + 0xc);
      FUN_100039a80(&local_80);
      if (iVar3 == iVar2) {
        pQVar7 = *(QArrayData **)piVar8;
        if (1 < *(int *)pQVar7 + 1U) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + 1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
        }
        lVar6 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        if (1 < *(int *)pQVar7 + 1U) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + 1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
        }
        local_88 = 3;
        local_90 = pQVar7;
        FUN_1005b6b10(lVar6 + 0x140,&local_90);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b649b;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1005b649b:
        if (1 < *(int *)pQVar7 + 1U) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + 1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
        }
        local_98 = 3;
        local_a0 = pQVar7;
        FUN_100840070(param_1,&local_a0);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b6502;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_1005b6502:
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b6530;
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
      }
LAB_1005b6530:
      local_60 = local_60 + 2;
      local_50 = 1;
    } while (local_60 != local_58);
  }
  FUN_100039a80(&local_68);
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}

