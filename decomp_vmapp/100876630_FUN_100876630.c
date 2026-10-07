
undefined4 FUN_100876630(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int local_34;
  
  iVar2 = FUN_10084b410(*(undefined8 *)(param_3 + 8));
  if (10000 < iVar2) {
    FUN_100887ce0(5,0x66,0x67,"dh_key.c",0xcb);
    return 0xffffffff;
  }
  lVar4 = FUN_10084c820();
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  FUN_10084ca60(lVar4);
  uVar5 = FUN_10084cc20(lVar4);
  if (*(long *)(param_3 + 0x28) == 0) {
    uVar5 = 100;
    uVar7 = 0xd6;
  }
  else {
    lVar6 = 0;
    if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
      lVar6 = FUN_100858270(param_3 + 0x38,0x1a,*(undefined8 *)(param_3 + 8),lVar4);
      if ((*(byte *)(param_3 + 0x30) & 2) == 0) {
        puVar1 = (uint *)(*(long *)(param_3 + 0x28) + 0x14);
        *puVar1 = *puVar1 | 4;
      }
      uVar3 = 0xffffffff;
      if (lVar6 == 0) goto LAB_1008767b0;
    }
    iVar2 = FUN_100876dd0(param_3,param_2,&local_34);
    if ((iVar2 == 0) || (local_34 != 0)) {
      uVar5 = 0x66;
      uVar7 = 0xe6;
    }
    else {
      iVar2 = (**(code **)(*(long *)(param_3 + 0x80) + 0x18))
                        (param_3,uVar5,param_2,*(undefined8 *)(param_3 + 0x28),
                         *(undefined8 *)(param_3 + 8),lVar4,lVar6);
      if (iVar2 != 0) {
        uVar3 = FUN_10084bdf0(uVar5,param_1);
        goto LAB_1008767b0;
      }
      uVar5 = 3;
      uVar7 = 0xec;
    }
  }
  FUN_100887ce0(5,0x66,uVar5,"dh_key.c",uVar7);
  uVar3 = 0xffffffff;
LAB_1008767b0:
  FUN_10084cb40(lVar4);
  FUN_10084c8b0(lVar4);
  return uVar3;
}

