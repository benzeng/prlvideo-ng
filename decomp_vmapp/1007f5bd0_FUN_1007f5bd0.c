
undefined4 FUN_1007f5bd0(int *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_30;
  long local_28;
  
  local_28 = 0;
  local_30 = 0;
  iVar3 = param_1[0x12];
  if (iVar3 != 0x1172) {
    if (iVar3 == 0x1171) {
LAB_1007f5c39:
      lVar7 = *(long *)(param_1 + 0x5c);
      lVar2 = *(long *)(lVar7 + 0x198);
      if (lVar2 == 0) {
LAB_1007f5c8d:
        if (*(code **)(lVar7 + 0xb8) != (code *)0x0) {
          iVar3 = (**(code **)(lVar7 + 0xb8))(param_1,&local_28,&local_30);
          goto LAB_1007f5ca9;
        }
        iVar3 = 0;
      }
      else {
        uVar6 = FUN_100812800(param_1);
        iVar3 = FUN_10087b7a0(lVar2,param_1,uVar6,&local_28,&local_30,0,0,0);
        if (iVar3 == 0) {
          lVar7 = *(long *)(param_1 + 0x5c);
          goto LAB_1007f5c8d;
        }
LAB_1007f5ca9:
        if (iVar3 < 0) {
          param_1[10] = 4;
          return 0xffffffff;
        }
      }
      param_1[10] = 1;
      if (((iVar3 == 1) && (local_30 != 0)) && (local_28 != 0)) {
        param_1[0x12] = 0x1171;
        iVar3 = FUN_1008174e0(param_1);
        if (iVar3 != 0) {
          iVar4 = FUN_100817cd0(param_1,local_30);
          iVar3 = 1;
          if (iVar4 != 0) goto LAB_1007f5d3d;
        }
LAB_1007f5d3a:
        iVar3 = 0;
      }
      else if (iVar3 == 1) {
        FUN_100887ce0(0x14,0x97,0x6a,"s3_clnt.c",0xcc3);
        goto LAB_1007f5d3a;
      }
LAB_1007f5d3d:
      if (local_28 != 0) {
        FUN_1008a17f0();
      }
      if (local_30 != 0) {
        FUN_1008924e0();
      }
      if (iVar3 == 0) {
        if (*param_1 == 0x300) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c8) = 0;
          FUN_1007fd650(param_1,1,0x29);
          return 1;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c8) = 2;
      }
    }
    else {
      if (iVar3 != 0x1170) goto LAB_1007f5de6;
      if (((*(long **)(param_1 + 0x40) == (long *)0x0) ||
          (plVar1 = (long *)**(long **)(param_1 + 0x40), *plVar1 == 0)) || (plVar1[1] == 0)) {
        param_1[0x12] = 0x1171;
        goto LAB_1007f5c39;
      }
    }
    param_1[0x12] = 0x1172;
  }
  param_1[0x12] = 0x1173;
  uVar6 = 0;
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x3c8) != 2) {
    uVar6 = *(undefined8 *)**(undefined8 **)(param_1 + 0x40);
  }
  lVar7 = FUN_1007fddf0(param_1,uVar6);
  if (lVar7 == 0) {
    FUN_100887ce0(0x14,0x97,0x44,"s3_clnt.c",0xcde);
    FUN_1007fd650(param_1,2,0x50);
    param_1[0x12] = 5;
    return 0;
  }
  param_1[0x18] = (int)lVar7;
  param_1[0x19] = 0;
LAB_1007f5de6:
  uVar5 = FUN_1007fd930(param_1,0x16);
  return uVar5;
}

