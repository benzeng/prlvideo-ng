
undefined8 * FUN_100a688d0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  char cVar8;
  ulong uVar9;
  long *local_48;
  undefined4 local_3c;
  long *local_38;
  
  if ((*param_2 == 0) || (plVar3 = *(long **)(*param_2 + 0x10), plVar3 == (long *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  lVar4 = *plVar3;
  FUN_100a68d20(&local_38,7,5,param_3,1);
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    *param_1 = 0;
    goto LAB_100a68b05;
  }
  cVar8 = FUN_100a68f60(local_38[2],0,0,lVar4,0x6c);
  if (cVar8 == '\0') {
    FUN_100df99c0("","IOCommunication",0,"Can\'t fill buffer!");
    *param_1 = 0;
    goto LAB_100a68b58;
  }
  lVar5 = local_38[2];
  uVar9 = (ulong)*(uint *)(lVar5 + 0x4c);
  if (uVar9 < 2) {
    FUN_100df99c0("","IOCommunication",0,"Can\'t set buffer!");
    *param_1 = 0;
    goto LAB_100a68b58;
  }
  uVar2 = *(undefined4 *)(lVar4 + 0x60);
  lVar6 = *(long *)(lVar4 + 0x70);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(lVar5 + 0x88);
  *(long *)(lVar5 + 0x88) = lVar6;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined4 *)(lVar5 + 0x88 + uVar9 * 8) = 0;
  *(undefined4 *)(lVar5 + 0x8c + uVar9 * 8) = uVar2;
  lVar5 = local_38[2];
  uVar9 = (ulong)*(uint *)(lVar5 + 0x4c);
  if (uVar9 < 3) {
    FUN_100df99c0("","IOCommunication",0,"Can\'t set buffer!");
    *param_1 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar4 + 100);
    lVar6 = *(long *)(lVar4 + 0x78);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(lVar5 + 0x90);
    *(long *)(lVar5 + 0x90) = lVar6;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined4 *)(lVar5 + 0x90 + uVar9 * 8) = 0;
    *(undefined4 *)(lVar5 + 0x94 + uVar9 * 8) = uVar2;
    if ((*(long *)(lVar4 + 0x80) != 0) &&
       (lVar5 = *(long *)(*(long *)(lVar4 + 0x80) + 0x10), lVar5 != 0)) {
      local_3c = 0;
      FUN_100a691e0(&local_48,lVar5,&local_3c);
      uVar2 = local_3c;
      if ((local_48 == (long *)0x0) || (local_48[2] == 0)) {
        FUN_100df99c0("","IOCommunication",0,
                      "Can\'t convert package to buffer! Out buffer is invalid!");
        *param_1 = 0;
        bVar7 = true;
        if (local_48 == (long *)0x0) goto LAB_100a68b05;
      }
      else {
        lVar5 = local_38[2];
        uVar9 = (ulong)*(uint *)(lVar5 + 0x4c);
        if (uVar9 < 4) {
          FUN_100df99c0("","IOCommunication",0,"Can\'t set buffer!");
          *param_1 = 0;
          bVar7 = true;
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          plVar3 = *(long **)(lVar5 + 0x98);
          *(long **)(lVar5 + 0x98) = local_48;
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          *(undefined4 *)(lVar5 + 0x98 + uVar9 * 8) = 0;
          *(undefined4 *)(lVar5 + 0x9c + uVar9 * 8) = uVar2;
          bVar7 = false;
        }
      }
      LOCK();
      plVar3 = local_48 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
      if (bVar7) goto LAB_100a68b05;
    }
    lVar5 = *(long *)(lVar4 + 0x88);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      lVar6 = local_38[2];
      uVar9 = (ulong)*(uint *)(lVar6 + 0x4c);
      if (4 < uVar9) {
        uVar2 = *(undefined4 *)(lVar4 + 0x68);
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar3 = *(long **)(lVar6 + 0xa0);
        *(long *)(lVar6 + 0xa0) = lVar5;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        *(undefined4 *)(lVar6 + 0xa0 + uVar9 * 8) = 0;
        *(undefined4 *)(lVar6 + 0xa4 + uVar9 * 8) = uVar2;
      }
    }
    *param_1 = local_38;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
LAB_100a68b05:
  if (local_38 == (long *)0x0) {
    return param_1;
  }
LAB_100a68b58:
  LOCK();
  plVar3 = local_38 + 1;
  lVar4 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*local_38 + 0x10))(local_38);
  }
  return param_1;
}

