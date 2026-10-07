
/* WARNING: Removing unreachable block (ram,0x0001007914ea) */

undefined8 *
FUN_100791380(undefined8 *param_1,undefined8 param_2,undefined4 param_3,void *param_4,uint param_5,
             undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long *local_38;
  
  FUN_10078f4f0(&local_38,param_2,param_5 != 0,param_6,param_7);
  if (local_38 == (long *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  if ((param_5 != 0) && (local_38[2] != 0)) {
    pvVar7 = operator_new__((ulong)param_5,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar8 = operator_new(0x18);
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)pvVar7;
    *plVar8 = (long)&PTR_FUN_100bef320;
    if (pvVar7 == (void *)0x0) {
      FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory!");
      *param_1 = 0;
      bVar5 = true;
    }
    else {
      _memcpy(pvVar7,param_4,(ulong)param_5);
      lVar3 = local_38[2];
      uVar2 = *(uint *)(lVar3 + 0x4c);
      if ((ulong)uVar2 == 0) {
        FUN_1008e3970("","IOCommunication",0,"Can\'t set buffer!");
        *param_1 = 0;
        bVar5 = true;
      }
      else {
        uVar9 = 1;
        if (1 < uVar2) {
          uVar9 = (ulong)uVar2;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        plVar4 = *(long **)(lVar3 + 0x80);
        *(long **)(lVar3 + 0x80) = plVar8;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(lVar3 + 0x80 + uVar9 * 8) = param_3;
        *(uint *)(lVar3 + 0x84 + uVar9 * 8) = param_5;
        bVar5 = false;
      }
    }
    LOCK();
    plVar4 = plVar8 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar8 + 0x10))();
    }
    if (bVar5) goto LAB_100791547;
  }
  *param_1 = local_38;
  LOCK();
  *(int *)(local_38 + 1) = (int)local_38[1] + 1;
  UNLOCK();
LAB_100791547:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return param_1;
}

