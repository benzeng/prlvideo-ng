
undefined1 FUN_1007d0940(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

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
  lVar4 = FUN_1007ebc60(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_1011a5c10;
  plVar5[3] = (long)FUN_1008a17f0;
  if (lVar4 == 0) {
    uVar8 = 0;
    goto LAB_1007d0c2f;
  }
  iVar3 = FUN_100817f80(param_2,lVar4);
  if (iVar3 == 0) {
    uVar8 = 0;
    goto LAB_1007d0c2f;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar4 = FUN_1007ebb80(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar4;
  *plVar6 = (long)&PTR_FUN_1011a5f20;
  plVar6[3] = (long)FUN_10086c430;
  if (lVar4 == 0) {
LAB_1007d0b78:
    uVar8 = 0;
  }
  else {
    iVar3 = FUN_100818220(param_2,lVar4);
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      FUN_1007b77c0(&local_50,param_3 + 0x18);
      local_48 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
      local_40 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          lVar4 = *(long *)(*local_48 + 8);
          lVar4 = FUN_1007ebc60(*(long *)(lVar4 + 0x10) + lVar4,*(undefined4 *)(lVar4 + 4));
          iVar3 = 1;
          if (lVar4 == 0) goto LAB_1007d0ab6;
          lVar4 = FUN_10080f090(param_2,0xe,0,lVar4);
          if (lVar4 != 1) goto LAB_1007d0ab6;
          local_48 = local_48 + 1;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      iVar3 = 2;
LAB_1007d0ab6:
      FUN_1007c4060(&local_50);
      if (iVar3 != 2) goto LAB_1007d0b78;
      uVar8 = 1;
      if ((param_4 & 1) != 0) {
        lVar4 = FUN_1007ebef0();
        plVar7 = operator_new(0x20);
        *(undefined4 *)(plVar7 + 1) = 1;
        plVar7[2] = lVar4;
        *plVar7 = (long)&PTR_FUN_1011a5c10;
        plVar7[3] = (long)FUN_1008a17f0;
        bVar2 = true;
        if (lVar4 != 0) {
          lVar4 = FUN_1008118c0(param_2);
          if (lVar4 != 0) {
            iVar3 = FUN_1008bdec0(lVar4,plVar7[2]);
            if (iVar3 != 0) {
              bVar2 = false;
              FUN_1008102e0(param_2,1,FUN_1007d07f0);
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
        if (bVar2) goto LAB_1007d0b78;
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
LAB_1007d0c2f:
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

