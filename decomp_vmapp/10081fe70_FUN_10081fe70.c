
undefined8 FUN_10081fe70(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar4 = FUN_1008203f0();
  uVar6 = 0;
  if (lVar4 != 0) {
    *param_3 = 0;
    FUN_10081d010(5,2,"ex_data.c",0x1aa);
    iVar2 = FUN_100885600(*(undefined8 *)(lVar4 + 8));
    lVar5 = 0;
    if (0 < iVar2) {
      lVar5 = FUN_10081ddd0(iVar2 * 8,"ex_data.c",0x1ad);
      if (lVar5 != 0) {
        uVar7 = 0;
        do {
          uVar6 = FUN_100885620(*(undefined8 *)(lVar4 + 8),uVar7 & 0xffffffff);
          *(undefined8 *)(lVar5 + uVar7 * 8) = uVar6;
          uVar7 = uVar7 + 1;
        } while (iVar2 != (int)uVar7);
      }
    }
    FUN_10081d010(6,2,"ex_data.c",0x1b4);
    if ((iVar2 < 1) || (lVar5 != 0)) {
      if (0 < iVar2) {
        uVar7 = 0;
        do {
          lVar4 = *(long *)(lVar5 + uVar7 * 8);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
            uVar6 = 0;
            if (*param_3 != 0) {
              iVar3 = FUN_100885600(*param_3,0);
              uVar6 = 0;
              if ((long)uVar7 < (long)iVar3) {
                uVar6 = FUN_100885620(*param_3,uVar7 & 0xffffffff);
              }
            }
            puVar1 = *(undefined8 **)(lVar5 + uVar7 * 8);
            (*(code *)puVar1[2])(param_2,uVar6,param_3,uVar7 & 0xffffffff,*puVar1,puVar1[1]);
          }
          uVar7 = uVar7 + 1;
        } while (iVar2 != (int)uVar7);
      }
      uVar6 = 1;
      if (lVar5 != 0) {
        FUN_10081e1a0(lVar5);
      }
    }
    else {
      FUN_100887ce0(0xf,0x6c,0x41,"ex_data.c",0x1b6);
      uVar6 = 0;
    }
  }
  return uVar6;
}

