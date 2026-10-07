
bool FUN_1007d1de0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  long *local_68;
  long *local_58;
  long local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar4 = FUN_1007ebc60(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_1011a5c10;
  plVar5[3] = (long)FUN_1008a17f0;
  if (lVar4 == 0) {
    bVar9 = false;
  }
  else {
    lVar4 = *param_2;
    if (*(int *)(lVar4 + 4) == 0) {
      lVar4 = FUN_1007ebef0();
      local_68 = operator_new(0x20);
      *(undefined4 *)(local_68 + 1) = 1;
      local_68[2] = lVar4;
      *local_68 = (long)&PTR_FUN_1011a5c10;
      local_68[3] = (long)FUN_1008a17f0;
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = local_68 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    else {
      lVar4 = FUN_1007ebc60(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
      local_68 = operator_new(0x20);
      *(undefined4 *)(local_68 + 1) = 1;
      local_68[2] = lVar4;
      *local_68 = (long)&PTR_FUN_1011a5c10;
      local_68[3] = (long)FUN_1008a17f0;
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = local_68 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_1007b77c0(&local_50,param_1 + 0x18);
    local_48 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
    local_40 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
    local_58 = plVar5;
    if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
      do {
        local_38 = 1;
        lVar4 = *(long *)(*local_48 + 8);
        lVar4 = FUN_1007ebc60(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
        plVar6 = operator_new(0x20);
        *(undefined4 *)(plVar6 + 1) = 1;
        plVar6[2] = lVar4;
        *plVar6 = (long)&PTR_FUN_1011a5c10;
        plVar6[3] = (long)FUN_1008a17f0;
        bVar9 = true;
        plVar2 = local_58;
        if (lVar4 != 0) {
          lVar8 = 0;
          if (local_58 != (long *)0x0) {
            lVar8 = local_58[2];
          }
          uVar7 = FUN_1008b7420(lVar4);
          iVar3 = FUN_1008bebd0(lVar8,uVar7);
          if (iVar3 == 1) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            bVar9 = false;
            plVar2 = plVar6;
            if (local_58 != (long *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)(*local_58 + 0x10))();
                bVar9 = false;
              }
            }
          }
        }
        local_58 = plVar2;
        LOCK();
        plVar2 = plVar6 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
        iVar3 = 1;
        if (bVar9) goto LAB_1007d20e1;
        local_48 = local_48 + 1;
      } while (local_48 != local_40);
    }
    local_38 = 1;
    iVar3 = 2;
LAB_1007d20e1:
    FUN_1007c4060(&local_50);
    bVar9 = false;
    if ((iVar3 == 2) && (local_68 != (long *)0x0)) {
      if (local_68[2] == 0) {
        bVar9 = false;
      }
      else {
        lVar4 = 0;
        if (local_58 != (long *)0x0) {
          lVar4 = local_58[2];
        }
        uVar7 = FUN_1008b7420();
        iVar3 = FUN_1008bebd0(lVar4,uVar7);
        bVar9 = iVar3 == 1;
      }
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  LOCK();
  plVar2 = plVar5 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))();
  }
  return bVar9;
}

