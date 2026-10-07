
ulong FUN_1008658a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar4 = FUN_10085c5d0();
  uVar8 = 1;
  if ((iVar4 == 0) && (uVar8 = 0xffffffff, *(int *)(param_2 + 0x50) != 0)) {
    pcVar2 = *(code **)(*param_1 + 0x100);
    pcVar3 = *(code **)(*param_1 + 0x108);
    lVar5 = 0;
    if ((param_3 == 0) && (lVar5 = FUN_10084c820(), param_3 = lVar5, lVar5 == 0)) {
      return 0xffffffff;
    }
    FUN_10084ca60(param_3);
    uVar6 = FUN_10084cc20(param_3);
    lVar7 = FUN_10084cc20(param_3);
    uVar8 = 0xffffffff;
    if (lVar7 != 0) {
      lVar1 = param_2 + 8;
      iVar4 = FUN_100858bf0(lVar7,lVar1,param_1 + 0x13);
      if ((iVar4 != 0) && (iVar4 = (*pcVar2)(param_1,lVar7,lVar7,lVar1,param_3), iVar4 != 0)) {
        iVar4 = FUN_100858bf0(lVar7,lVar7,param_2 + 0x20);
        if (((iVar4 != 0) &&
            (((iVar4 = (*pcVar2)(param_1,lVar7,lVar7,lVar1,param_3), iVar4 != 0 &&
              (iVar4 = FUN_100858bf0(lVar7,lVar7,param_1 + 0x16), iVar4 != 0)) &&
             (iVar4 = (*pcVar3)(param_1,uVar6,param_2 + 0x20,param_3), iVar4 != 0)))) &&
           (iVar4 = FUN_100858bf0(lVar7,lVar7,uVar6), iVar4 != 0)) {
          uVar8 = (ulong)(*(int *)(lVar7 + 8) == 0);
        }
      }
    }
    FUN_10084cb40(param_3);
    if (lVar5 != 0) {
      FUN_10084c8b0();
    }
  }
  return uVar8;
}

