
undefined8 FUN_100864430(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar5 = 0x43;
    uVar6 = 0x12e;
LAB_10086449b:
    FUN_100887ce0(0x10,0xb1,uVar5,"ec_key.c",uVar6);
    return 0;
  }
  iVar2 = FUN_10085c5d0();
  if (iVar2 != 0) {
    uVar5 = 0x6a;
    uVar6 = 0x133;
    goto LAB_10086449b;
  }
  lVar3 = FUN_10084c820();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_10085b6e0(*(undefined8 *)(param_1 + 8));
  if (lVar4 == 0) {
    FUN_10084c8b0(lVar3);
    return 0;
  }
  iVar2 = FUN_10085c630(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar3);
  if (iVar2 < 1) {
    uVar5 = 0x6b;
    uVar6 = 0x13e;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    if (*(int *)(lVar1 + 0x18) == 0) {
      uVar5 = 0x7a;
      uVar6 = 0x144;
    }
    else {
      uVar5 = 0;
      iVar2 = FUN_10085c790(lVar1,lVar4,0,*(undefined8 *)(param_1 + 0x10),lVar1 + 0x10,lVar3);
      if (iVar2 == 0) {
        FUN_100887ce0(0x10,0xb1,0x10,"ec_key.c",0x148);
        goto LAB_10086460b;
      }
      iVar2 = FUN_10085c5d0(*(undefined8 *)(param_1 + 8),lVar4);
      if (iVar2 == 0) {
        uVar5 = 0x82;
        uVar6 = 0x14c;
      }
      else {
        uVar5 = 1;
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_10086460b;
        iVar2 = FUN_10084bf60(*(long *)(param_1 + 0x18),lVar1 + 0x10);
        if (iVar2 < 0) {
          iVar2 = FUN_10085c790(*(undefined8 *)(param_1 + 8),lVar4,*(undefined8 *)(param_1 + 0x18),0
                                ,0,lVar3);
          if (iVar2 == 0) {
            uVar5 = 0x10;
            uVar6 = 0x15a;
          }
          else {
            iVar2 = FUN_10085bfc0(*(undefined8 *)(param_1 + 8),lVar4,*(undefined8 *)(param_1 + 0x10)
                                  ,lVar3);
            if (iVar2 == 0) goto LAB_10086460b;
            uVar5 = 0x7b;
            uVar6 = 0x15e;
          }
        }
        else {
          uVar5 = 0x82;
          uVar6 = 0x155;
        }
      }
    }
  }
  FUN_100887ce0(0x10,0xb1,uVar5,"ec_key.c",uVar6);
  uVar5 = 0;
LAB_10086460b:
  FUN_10084c8b0(lVar3);
  FUN_10085b080(lVar4);
  return uVar5;
}

