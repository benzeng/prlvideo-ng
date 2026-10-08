
void FUN_100bf5950(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (DAT_1023160b0 != 0) {
    lVar4 = FUN_100bf5b60();
    if (lVar4 != 0) {
      FUN_100bf2780(5,2,"ex_data.c",0x1fb);
      iVar2 = FUN_100c60800(*(undefined8 *)(lVar4 + 8));
      lVar5 = 0;
      if (0 < iVar2) {
        lVar5 = FUN_100bf3540(iVar2 * 8,"ex_data.c",0x1fe);
        if (lVar5 != 0) {
          uVar7 = 0;
          do {
            uVar6 = FUN_100c60820(*(undefined8 *)(lVar4 + 8),uVar7 & 0xffffffff);
            *(undefined8 *)(lVar5 + uVar7 * 8) = uVar6;
            uVar7 = uVar7 + 1;
          } while (iVar2 != (int)uVar7);
        }
      }
      FUN_100bf2780(6,2,"ex_data.c",0x205);
      if ((0 < iVar2) && (lVar5 == 0)) {
        FUN_100c62ee0(0xf,0x6b,0x41,"ex_data.c",0x207);
        return;
      }
      if (0 < iVar2) {
        uVar7 = 0;
        do {
          lVar4 = *(long *)(lVar5 + uVar7 * 8);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
            uVar6 = 0;
            if (*param_3 != 0) {
              iVar3 = FUN_100c60800(*param_3,0);
              uVar6 = 0;
              if ((long)uVar7 < (long)iVar3) {
                uVar6 = FUN_100c60820(*param_3,uVar7 & 0xffffffff);
              }
            }
            puVar1 = *(undefined8 **)(lVar5 + uVar7 * 8);
            (*(code *)puVar1[3])(param_2,uVar6,param_3,uVar7 & 0xffffffff,*puVar1,puVar1[1]);
          }
          uVar7 = uVar7 + 1;
        } while (iVar2 != (int)uVar7);
      }
      if (lVar5 != 0) {
        FUN_100bf3910(lVar5);
      }
      if (*param_3 != 0) {
        FUN_100c5ffd0();
        *param_3 = 0;
      }
    }
  }
  return;
}

