
void FUN_100525680(long param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  bool bVar8;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 local_34;
  long *local_30;
  
  if (param_4 < 4) {
    return;
  }
  lVar2 = *param_3;
  puVar4 = *(undefined4 **)(lVar2 + 0x10);
  switch(*puVar4) {
  case 5:
    if (*(int *)(param_1 + 0x6c) == 0) {
      return;
    }
    uVar7 = 0x103;
    goto LAB_1005258bd;
  default:
    goto switchD_1005256c1_caseD_6;
  case 7:
    lVar2 = *(long *)(lVar2 + 0x10);
    local_58 = *(undefined8 *)(lVar2 + 4);
    uStack_50 = *(undefined8 *)(lVar2 + 0xc);
    local_48 = *(undefined8 *)(lVar2 + 0x14);
    uStack_40 = *(undefined8 *)(lVar2 + 0x1c);
    piVar6 = (int *)&local_58;
    uVar7 = 0x104;
    uVar5 = 0x20;
    goto LAB_1005258ab;
  case 8:
    QMutex::lock();
    if (*(int *)(param_1 + 0x6c) == 0) {
      plVar3 = *(long **)(param_1 + 0x98);
      if (plVar3 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        bVar8 = false;
      }
      else {
        if (plVar3[2] == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(int *)(plVar3[2] + 4) != 0;
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    else {
      lVar2 = *param_3;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar3 = *(long **)(param_1 + 0x98);
      *(long *)(param_1 + 0x98) = lVar2;
      bVar8 = true;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    QMutex::unlock();
    if (!bVar8) {
      return;
    }
    FUN_100524fb0(param_1,0x106,0,0);
    return;
  case 0xc:
    uVar7 = 0x107;
LAB_1005258bd:
    FUN_100524fb0(param_1,uVar7,0,0);
    return;
  case 0xd:
    if (lVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (param_4 < 8) {
      uVar7 = 0x108;
      goto LAB_1005258bd;
    }
    local_60 = (int)*(short *)(puVar4 + 1);
    local_5c = (int)*(short *)((long)puVar4 + 6);
    piVar6 = &local_60;
    uVar7 = 0x108;
    break;
  case 0xe:
    if (lVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (param_4 < 0x10) {
      return;
    }
    local_70 = *(undefined8 *)(puVar4 + 1);
    local_68 = puVar4[3];
    piVar6 = (int *)&local_70;
    uVar7 = 0x109;
    uVar5 = 0xc;
    goto LAB_1005258ab;
  case 0xf:
    if (param_4 < 0x30) {
      return;
    }
    FUN_1005259c0(param_1,param_3);
    return;
  case 0x10:
    FUN_100525a60(param_1);
    return;
  case 0x11:
    if (lVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (param_4 < 8) {
      return;
    }
    local_78 = (int)*(short *)(puVar4 + 1);
    local_74 = (int)*(short *)((long)puVar4 + 6);
    piVar6 = &local_78;
    uVar7 = 0x10a;
    break;
  case 0x12:
    if (param_4 < 0x30) {
      return;
    }
    FUN_100525550(&local_30,param_1,param_3);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    local_38 = *(int *)(*(long *)(*param_3 + 0x10) + 0x28);
    local_34 = *(undefined4 *)(*(long *)(*param_3 + 0x10) + 0x2c);
    piVar6 = &local_38;
    uVar7 = 0x10b;
  }
  uVar5 = 8;
LAB_1005258ab:
  FUN_100524fb0(param_1,uVar7,piVar6,uVar5);
switchD_1005256c1_caseD_6:
  return;
}

