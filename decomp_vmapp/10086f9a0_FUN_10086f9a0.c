
undefined8
FUN_10086f9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

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
  iVar1 = FUN_1008964c0(uVar7,6,0xffffffff,0x1006,0,&local_34);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_34 != 6) {
    return 2;
  }
  local_48 = 0;
  uVar2 = FUN_1008966d0(uVar7);
  uVar3 = FUN_100894720(param_1);
  uVar8 = 0;
  iVar1 = FUN_1008964c0(uVar7,6,0xf8,0x1008,0,&local_40);
  if (iVar1 < 1) goto LAB_10086fc2c;
  uVar8 = 0;
  iVar1 = FUN_1008964c0(uVar7,6,0x18,0x1007,0,&local_4c);
  if (iVar1 == 0) goto LAB_10086fc2c;
  if (local_4c == -2) {
    iVar1 = FUN_100891d80(uVar2);
    local_4c = FUN_1008946d0(uVar3);
    local_4c = (iVar1 + -2) - local_4c;
    iVar1 = FUN_100891d50(uVar2);
    if ((iVar1 + 7U & 7) == 0) {
      local_4c = local_4c + -1;
    }
  }
  else if (local_4c == -1) {
    local_4c = FUN_1008946d0(uVar3);
  }
  plVar4 = (long *)FUN_10086ed40();
  if (plVar4 == (long *)0x0) goto LAB_10086fc2c;
  if (local_4c == 0x14) {
LAB_10086faf1:
    iVar1 = FUN_1008946b0(uVar3);
    if (iVar1 != 0x40) {
      lVar5 = FUN_10089f8a0();
      *plVar4 = lVar5;
      uVar8 = 0;
      if (lVar5 == 0) goto LAB_10086fc24;
      FUN_10089fa20(lVar5,uVar3);
    }
    iVar1 = FUN_1008946b0(local_40);
    uVar8 = 0;
    lVar5 = 0;
    if (iVar1 == 0x40) {
LAB_10086fb9f:
      lVar6 = FUN_1008b1140(plVar4,&DAT_100bdd250,&local_48);
      if (lVar6 != 0) {
        if (param_5 != 0) {
          lVar6 = FUN_1008afc30(local_48);
          uVar8 = 0;
          if (lVar6 == 0) goto LAB_10086fc17;
          uVar7 = FUN_100821870(0x390);
          FUN_10089f940(param_5,uVar7,0x10,lVar6);
        }
        uVar7 = FUN_100821870(0x390);
        FUN_10089f940(param_4,uVar7,0x10,local_48);
        local_48 = 0;
        uVar8 = 3;
      }
    }
    else {
      local_58 = 0;
      lVar5 = FUN_10089f8a0();
      FUN_10089fa20(lVar5,local_40);
      lVar6 = FUN_1008b1140(lVar5,&DAT_100be0f20,&local_58);
      if (lVar6 != 0) {
        lVar6 = FUN_10089f8a0();
        plVar4[1] = lVar6;
        if (lVar6 != 0) {
          uVar7 = FUN_100821870(0x38f);
          FUN_10089f940(lVar6,uVar7,0x10,local_58);
          goto LAB_10086fb9f;
        }
      }
    }
LAB_10086fc17:
    if (lVar5 != 0) {
      FUN_10089f8c0(lVar5);
    }
  }
  else {
    lVar5 = FUN_1008a8200();
    plVar4[2] = lVar5;
    uVar8 = 0;
    if ((lVar5 != 0) && (iVar1 = FUN_10089b2a0(lVar5,(long)local_4c), iVar1 != 0))
    goto LAB_10086faf1;
  }
LAB_10086fc24:
  FUN_10086ed60(plVar4);
LAB_10086fc2c:
  if (local_48 != 0) {
    FUN_1008afd70();
  }
  return uVar8;
}

