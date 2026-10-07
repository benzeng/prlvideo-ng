
uint FUN_100865db0(long *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  long param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = 0;
  if ((param_7 == 0) && (lVar6 = FUN_10084c820(), param_7 = lVar6, lVar6 == 0)) {
    return 0;
  }
  if (((param_4 < 3) && (param_3 == 0 || param_4 < 2)) &&
     ((param_4 != 0 || (iVar1 = FUN_10085c840(), iVar1 == 0)))) {
    lVar3 = FUN_10085b6e0();
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_10085b6e0(param_1);
      if (lVar4 == 0) {
        FUN_10085b080(lVar3);
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_10085c1f0(param_1,lVar4);
        if ((iVar1 == 0) ||
           ((param_3 != 0 &&
            ((iVar1 = FUN_100866040(param_1,lVar3,param_3,param_1[1],param_7), iVar1 == 0 ||
             (((*(int *)(param_3 + 0x10) != 0 &&
               (iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,lVar3,param_7), iVar1 == 0)) ||
              (iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,lVar4,lVar4,lVar3,param_7), iVar1 == 0
              )))))))) {
          FUN_10085b080(lVar3);
          uVar2 = 0;
        }
        else {
          if (param_4 != 0) {
            uVar2 = 0;
            uVar5 = 0;
            do {
              iVar1 = FUN_100866040(param_1,lVar3,*(undefined8 *)(param_6 + uVar5 * 8),
                                    *(undefined8 *)(param_5 + uVar5 * 8),param_7);
              if (((iVar1 == 0) ||
                  ((*(int *)(*(long *)(param_6 + uVar5 * 8) + 0x10) != 0 &&
                   (iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,lVar3,param_7), iVar1 == 0)))) ||
                 (iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,lVar4,lVar4,lVar3,param_7),
                 iVar1 == 0)) goto LAB_100866005;
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_4);
          }
          iVar1 = FUN_10085b7b0(param_2,lVar4);
          uVar2 = (uint)(iVar1 != 0);
LAB_100866005:
          FUN_10085b080(lVar3);
          if (lVar4 == 0) goto LAB_10086601e;
        }
        FUN_10085b080(lVar4);
      }
    }
  }
  else {
    uVar2 = FUN_10085f620(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
LAB_10086601e:
  if (lVar6 != 0) {
    FUN_10084c8b0(lVar6);
  }
  return uVar2;
}

