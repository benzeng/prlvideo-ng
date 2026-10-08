
undefined8 FUN_100c42f10(long param_1,uint param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if ((int)param_2 < 0x1001) {
    if (param_2 < 0xc) {
      if ((0x8a4U >> (param_2 & 0x1f) & 1) != 0) {
        return 1;
      }
      if (param_2 == 1) {
        iVar2 = FUN_100c6fc30(param_4);
        if ((((iVar2 == 0x40) || (iVar2 = FUN_100c6fc30(param_4), iVar2 == 0x1a0)) ||
            (iVar2 = FUN_100c6fc30(param_4), iVar2 == 0x2a3)) ||
           (((iVar2 = FUN_100c6fc30(param_4), iVar2 == 0x2a0 ||
             (iVar2 = FUN_100c6fc30(param_4), iVar2 == 0x2a1)) ||
            (iVar2 = FUN_100c6fc30(param_4), iVar2 == 0x2a2)))) {
          plVar1[1] = param_4;
          return 1;
        }
        uVar4 = 0x8a;
        uVar5 = 0xdf;
        goto LAB_100c43003;
      }
    }
  }
  else if (param_2 == 0x1001) {
    lVar3 = FUN_100c3c2e0(param_3);
    if (lVar3 != 0) {
      if (*plVar1 != 0) {
        FUN_100c36170();
      }
      *plVar1 = lVar3;
      return 1;
    }
    uVar4 = 0x8d;
    uVar5 = 0xd0;
LAB_100c43003:
    FUN_100c62ee0(0x10,0xc5,uVar4,"ec_pmeth.c",uVar5);
    return 0;
  }
  return 0xfffffffe;
}

