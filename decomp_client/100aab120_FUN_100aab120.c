
undefined1 FUN_100aab120(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  long local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_3 + 8);
  lVar4 = FUN_100ab5620(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_102281880;
  plVar5[3] = (long)FUN_100c7cd70;
  if (lVar4 == 0) {
    uVar8 = 0;
    goto LAB_100aab40f;
  }
  iVar3 = FUN_100bed6f0(param_2,lVar4);
  if (iVar3 == 0) {
    uVar8 = 0;
    goto LAB_100aab40f;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar4 = FUN_100ab5540(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar4;
  *plVar6 = (long)&PTR_FUN_102281b90;
  plVar6[3] = (long)FUN_100c47630;
  if (lVar4 == 0) {
LAB_100aab358:
    uVar8 = 0;
  }
  else {
    iVar3 = FUN_100bed990(param_2,lVar4);
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      FUN_100a9e450(&local_50,param_3 + 0x18);
      local_48 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
      local_40 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          lVar4 = *(long *)(*local_48 + 8);
          lVar4 = FUN_100ab5620(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
          iVar3 = 1;
          if (lVar4 == 0) goto LAB_100aab296;
          lVar4 = FUN_100be4800(param_2,0xe,0,lVar4);
          if (lVar4 != 1) goto LAB_100aab296;
          local_48 = local_48 + 1;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      iVar3 = 2;
LAB_100aab296:
      FUN_100a9e660(&local_50);
      if (iVar3 != 2) goto LAB_100aab358;
      uVar8 = 1;
      if ((param_4 & 1) != 0) {
        lVar4 = FUN_100ab58b0();
        plVar7 = operator_new(0x20);
        *(undefined4 *)(plVar7 + 1) = 1;
        plVar7[2] = lVar4;
        *plVar7 = (long)&PTR_FUN_102281880;
        plVar7[3] = (long)FUN_100c7cd70;
        bVar2 = true;
        if (lVar4 != 0) {
          lVar4 = FUN_100be7030(param_2);
          if (lVar4 != 0) {
            iVar3 = FUN_100c99440(lVar4,plVar7[2]);
            if (iVar3 != 0) {
              bVar2 = false;
              FUN_100be5a50(param_2,1,FUN_100aaafd0);
            }
          }
        }
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        if (bVar2) goto LAB_100aab358;
      }
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  lVar4 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_100aab40f:
  LOCK();
  plVar6 = plVar5 + 1;
  lVar4 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return uVar8;
}

