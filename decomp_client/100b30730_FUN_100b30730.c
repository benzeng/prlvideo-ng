
undefined8 FUN_100b30730(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar6 = 0x80000516;
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x40)))
  {
    iVar4 = FUN_100deb2c0(param_1 + 0x28,param_2 + 3);
    uVar6 = 0x80000017;
    if ((iVar4 == 0) && (uVar6 = 0x80000018, param_4 - param_3 == *(long *)(param_1 + 0x18))) {
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 == *(long **)(param_1 + 0x40)) {
        uVar6 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x24);
        do {
          uVar1 = param_3 + (uint)(iVar4 * iVar2 * 8);
          uVar8 = param_4;
          if (uVar1 < param_4) {
            uVar8 = uVar1;
          }
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            if (lVar3 == 1) {
              iVar5 = FUN_100ddce60(*param_2,(int)(uVar8 - 1 >> (*(byte *)(param_2 + 1) & 0x3f)) + 1
                                    ,param_3 >> (*(byte *)(param_2 + 1) & 0x3f) & 0xffffffff);
              if (iVar5 != 0) {
                if (iVar5 == -0xc) {
                  return 0x80000002;
                }
                if (iVar5 == -0x16) {
                  return 0x80000003;
                }
                return 0x80000001;
              }
            }
            else {
              uVar6 = FUN_100b30aa0(param_2,lVar3,*(undefined4 *)(param_1 + 0x24),param_3);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
            }
          }
          plVar7 = plVar7 + 1;
          param_3 = uVar1;
        } while (plVar7 != *(long **)(param_1 + 0x40));
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

