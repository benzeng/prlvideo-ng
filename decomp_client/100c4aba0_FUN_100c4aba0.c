
undefined8
FUN_100c4aba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  int local_4c;
  long local_48;
  undefined8 local_40;
  int local_34;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = FUN_100c71a40(uVar7,6,0xffffffff,0x1006,0,&local_34);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_34 != 6) {
    return 2;
  }
  local_48 = 0;
  uVar2 = FUN_100c71c50(uVar7);
  uVar3 = FUN_100c6fca0(param_1);
  uVar8 = 0;
  iVar1 = FUN_100c71a40(uVar7,6,0xf8,0x1008,0,&local_40);
  if (iVar1 < 1) goto LAB_100c4ae2c;
  uVar8 = 0;
  iVar1 = FUN_100c71a40(uVar7,6,0x18,0x1007,0,&local_4c);
  if (iVar1 == 0) goto LAB_100c4ae2c;
  if (local_4c == -2) {
    iVar1 = FUN_100c6d160(uVar2);
    local_4c = FUN_100c6fc50(uVar3);
    local_4c = (iVar1 + -2) - local_4c;
    iVar1 = FUN_100c6d130(uVar2);
    if ((iVar1 + 7U & 7) == 0) {
      local_4c = local_4c + -1;
    }
  }
  else if (local_4c == -1) {
    local_4c = FUN_100c6fc50(uVar3);
  }
  plVar4 = (long *)FUN_100c49f40();
  if (plVar4 == (long *)0x0) goto LAB_100c4ae2c;
  if (local_4c == 0x14) {
LAB_100c4acf1:
    iVar1 = FUN_100c6fc30(uVar3);
    if (iVar1 != 0x40) {
      lVar5 = FUN_100c7ae20();
      *plVar4 = lVar5;
      uVar8 = 0;
      if (lVar5 == 0) goto LAB_100c4ae24;
      FUN_100c7afa0(lVar5,uVar3);
    }
    iVar1 = FUN_100c6fc30(local_40);
    uVar8 = 0;
    lVar5 = 0;
    if (iVar1 == 0x40) {
LAB_100c4ad9f:
      lVar6 = FUN_100c8c6c0(plVar4,&DAT_10224d590,&local_48);
      if (lVar6 != 0) {
        if (param_5 != 0) {
          lVar6 = FUN_100c8b1b0(local_48);
          uVar8 = 0;
          if (lVar6 == 0) goto LAB_100c4ae17;
          uVar7 = FUN_100bf6fe0(0x390);
          FUN_100c7aec0(param_5,uVar7,0x10,lVar6);
        }
        uVar7 = FUN_100bf6fe0(0x390);
        FUN_100c7aec0(param_4,uVar7,0x10,local_48);
        local_48 = 0;
        uVar8 = 3;
      }
    }
    else {
      local_58 = 0;
      lVar5 = FUN_100c7ae20();
      FUN_100c7afa0(lVar5,local_40);
      lVar6 = FUN_100c8c6c0(lVar5,&DAT_102251530,&local_58);
      if (lVar6 != 0) {
        lVar6 = FUN_100c7ae20();
        plVar4[1] = lVar6;
        if (lVar6 != 0) {
          uVar7 = FUN_100bf6fe0(0x38f);
          FUN_100c7aec0(lVar6,uVar7,0x10,local_58);
          goto LAB_100c4ad9f;
        }
      }
    }
LAB_100c4ae17:
    if (lVar5 != 0) {
      FUN_100c7ae40(lVar5);
    }
  }
  else {
    lVar5 = FUN_100c83780();
    plVar4[2] = lVar5;
    uVar8 = 0;
    if ((lVar5 != 0) && (iVar1 = FUN_100c76820(lVar5,(long)local_4c), iVar1 != 0))
    goto LAB_100c4acf1;
  }
LAB_100c4ae24:
  FUN_100c49f60(plVar4);
LAB_100c4ae2c:
  if (local_48 != 0) {
    FUN_100c8b2f0();
  }
  return uVar8;
}

