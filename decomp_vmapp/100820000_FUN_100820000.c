
undefined8 FUN_100820000(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_38;
  
  if (*param_3 != 0) {
    lVar5 = FUN_1008203f0();
    if (lVar5 == 0) {
      return 0;
    }
    FUN_10081d010(5,2,"ex_data.c",0x1d2);
    uVar2 = FUN_100885600(*(undefined8 *)(lVar5 + 8));
    uVar3 = FUN_100885600(*param_3);
    uVar9 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar9 = uVar3;
    }
    lVar6 = 0;
    if ((0 < (int)uVar9) && (lVar6 = FUN_10081ddd0(uVar9 * 8,"ex_data.c",0x1d8), lVar6 != 0)) {
      uVar10 = ~uVar3;
      if ((int)~uVar3 <= (int)~uVar2) {
        uVar10 = ~uVar2;
      }
      uVar8 = 0;
      do {
        uVar7 = FUN_100885620(*(undefined8 *)(lVar5 + 8),uVar8 & 0xffffffff);
        *(undefined8 *)(lVar6 + uVar8 * 8) = uVar7;
        uVar8 = uVar8 + 1;
      } while (~uVar10 != (uint)uVar8);
    }
    FUN_10081d010(6,2,"ex_data.c",0x1df);
    if ((0 < (int)uVar9) && (lVar6 == 0)) {
      FUN_100887ce0(0xf,0x6a,0x41,"ex_data.c",0x1e1);
      return 0;
    }
    if (0 < (int)uVar9) {
      uVar9 = ~uVar3;
      if ((int)~uVar3 <= (int)~uVar2) {
        uVar9 = ~uVar2;
      }
      uVar8 = 0;
      do {
        uVar7 = 0;
        if (*param_3 != 0) {
          iVar4 = FUN_100885600();
          uVar7 = 0;
          if ((long)uVar8 < (long)iVar4) {
            uVar7 = FUN_100885620(*param_3,uVar8 & 0xffffffff);
          }
        }
        puVar1 = *(undefined8 **)(lVar6 + uVar8 * 8);
        local_38 = uVar7;
        if ((puVar1 != (undefined8 *)0x0) && ((code *)puVar1[4] != (code *)0x0)) {
          (*(code *)puVar1[4])(param_2,param_3,&local_38,uVar8 & 0xffffffff,*puVar1,puVar1[1]);
        }
        FUN_10081fae0(param_2,uVar8 & 0xffffffff,local_38);
        uVar8 = uVar8 + 1;
      } while (~uVar9 != (uint)uVar8);
    }
    if (lVar6 != 0) {
      FUN_10081e1a0(lVar6);
    }
  }
  return 1;
}

