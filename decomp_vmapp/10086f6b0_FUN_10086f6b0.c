
undefined4
FUN_10086f6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 *local_38;
  
  iVar1 = FUN_100821ab0(*param_4);
  if (iVar1 != 0x390) {
    FUN_100887ce0(4,0x9c,0x9b,"rsa_ameth.c",0x1be);
    return 0xffffffff;
  }
  plVar3 = (long *)FUN_10086fff0(param_4,&local_38);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0x95;
    uVar8 = 0x1c5;
  }
  else if ((undefined8 *)plVar3[1] == (undefined8 *)0x0) {
    lVar5 = FUN_100891760();
LAB_10086f7b6:
    if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
      lVar6 = FUN_100891760();
    }
    else {
      uVar2 = FUN_100821ab0(*(undefined8 *)*plVar3);
      uVar4 = FUN_100821930(uVar2);
      lVar6 = FUN_100890b60(uVar4);
      if (lVar6 == 0) {
        uVar4 = 0x98;
        uVar8 = 0x1dd;
        goto LAB_10086f964;
      }
    }
    uVar4 = 0x14;
    if ((plVar3[2] == 0) || (uVar4 = FUN_10089b410(), -1 < (int)uVar4)) {
      if ((plVar3[3] == 0) || (lVar7 = FUN_10089b410(), lVar7 == 1)) {
        iVar1 = FUN_100897930(param_1,&local_40,lVar6,0,param_6);
        uVar2 = 0xffffffff;
        if (iVar1 != 0) {
          iVar1 = FUN_1008964c0(local_40,6,0xffffffff,0x1001,6,0);
          uVar2 = 0xffffffff;
          if ((0 < iVar1) && (iVar1 = FUN_1008964c0(local_40,6,0x18,0x1002,uVar4,0), 0 < iVar1)) {
            iVar1 = FUN_1008964c0(local_40,6,0xf8,0x1005,0,lVar5);
            uVar2 = 2;
            if (iVar1 < 1) {
              uVar2 = 0xffffffff;
            }
          }
        }
        goto LAB_10086f96e;
      }
      uVar4 = 0x8b;
      uVar8 = 0x1f6;
    }
    else {
      uVar4 = 0x96;
      uVar8 = 0x1eb;
    }
  }
  else {
    iVar1 = FUN_100821ab0(*(undefined8 *)plVar3[1]);
    if (iVar1 == 0x38f) {
      if (local_38 == (undefined8 *)0x0) {
        uVar4 = 0x9a;
        uVar8 = 0x1cf;
      }
      else {
        uVar2 = FUN_100821ab0(*local_38);
        uVar4 = FUN_100821930(uVar2);
        lVar5 = FUN_100890b60(uVar4);
        if (lVar5 != 0) goto LAB_10086f7b6;
        uVar4 = 0x97;
        uVar8 = 0x1d4;
      }
    }
    else {
      uVar4 = 0x99;
      uVar8 = 0x1cb;
    }
  }
LAB_10086f964:
  FUN_100887ce0(4,0x9c,uVar4,"rsa_ameth.c",uVar8);
  uVar2 = 0xffffffff;
LAB_10086f96e:
  FUN_10086ed60(plVar3);
  if (local_38 != (undefined8 *)0x0) {
    FUN_10089f8c0();
  }
  return uVar2;
}

