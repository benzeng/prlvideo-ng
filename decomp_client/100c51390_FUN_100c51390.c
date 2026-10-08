
undefined8 FUN_100c51390(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x80) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c513d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  lVar3 = FUN_100c27a20();
  if (lVar3 == 0) {
    FUN_100c62ee0(5,0x6a,3,"dh_gen.c",0xc3);
    return 0;
  }
  FUN_100c27c60(lVar3);
  lVar4 = FUN_100c27e20(lVar3);
  lVar5 = FUN_100c27e20();
  if ((lVar4 != 0) && (lVar5 != 0)) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar6 = FUN_100c26720();
      *(long *)(param_1 + 8) = lVar6;
      if (lVar6 == 0) goto LAB_100c5147c;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar6 = FUN_100c26720();
      *(long *)(param_1 + 0x10) = lVar6;
      if (lVar6 == 0) goto LAB_100c5147c;
    }
    if (param_3 < 2) {
      FUN_100c62ee0(5,0x6a,0x65,"dh_gen.c",0x91);
    }
    else if (param_3 == 5) {
      iVar1 = FUN_100c26db0(lVar4,10);
      if (iVar1 != 0) {
        iVar1 = FUN_100c26db0(lVar5,3);
        lVar6 = 5;
LAB_100c51555:
        if (iVar1 != 0) {
LAB_100c51595:
          iVar1 = FUN_100c2d9b0(*(undefined8 *)(param_1 + 8),param_2,1,lVar4,lVar5,param_4);
          if ((iVar1 != 0) && (iVar1 = FUN_100c2d960(param_4,3,0), iVar1 != 0)) {
            iVar1 = FUN_100c26db0(*(undefined8 *)(param_1 + 0x10),lVar6);
            uVar2 = 1;
            if (iVar1 != 0) goto LAB_100c514a0;
          }
        }
      }
    }
    else if (param_3 == 2) {
      iVar1 = FUN_100c26db0(lVar4,0x18);
      if (iVar1 != 0) {
        iVar1 = FUN_100c26db0(lVar5,0xb);
        lVar6 = 2;
        goto LAB_100c51555;
      }
    }
    else {
      iVar1 = FUN_100c26db0(lVar4,2);
      if ((iVar1 != 0) && (iVar1 = FUN_100c26db0(lVar5,1), iVar1 != 0)) {
        lVar6 = (long)param_3;
        goto LAB_100c51595;
      }
    }
  }
LAB_100c5147c:
  FUN_100c62ee0(5,0x6a,3,"dh_gen.c",0xc3);
  uVar2 = 0;
LAB_100c514a0:
  FUN_100c27d40(lVar3);
  FUN_100c27ab0(lVar3);
  return uVar2;
}

