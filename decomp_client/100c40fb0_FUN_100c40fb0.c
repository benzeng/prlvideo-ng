
uint FUN_100c40fb0(long *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  long param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = 0;
  if ((param_7 == 0) && (lVar6 = FUN_100c27a20(), param_7 = lVar6, lVar6 == 0)) {
    return 0;
  }
  if (((param_4 < 3) && (param_3 == 0 || param_4 < 2)) &&
     ((param_4 != 0 || (iVar1 = FUN_100c37a40(), iVar1 == 0)))) {
    lVar3 = FUN_100c368e0();
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_100c368e0(param_1);
      if (lVar4 == 0) {
        FUN_100c36280(lVar3);
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_100c373f0(param_1,lVar4);
        if ((iVar1 == 0) ||
           ((param_3 != 0 &&
            ((iVar1 = FUN_100c41240(param_1,lVar3,param_3,param_1[1],param_7), iVar1 == 0 ||
             (((*(int *)(param_3 + 0x10) != 0 &&
               (iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,lVar3,param_7), iVar1 == 0)) ||
              (iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,lVar4,lVar4,lVar3,param_7), iVar1 == 0
              )))))))) {
          FUN_100c36280(lVar3);
          uVar2 = 0;
        }
        else {
          if (param_4 != 0) {
            uVar2 = 0;
            uVar5 = 0;
            do {
              iVar1 = FUN_100c41240(param_1,lVar3,*(undefined8 *)(param_6 + uVar5 * 8),
                                    *(undefined8 *)(param_5 + uVar5 * 8),param_7);
              if (((iVar1 == 0) ||
                  ((*(int *)(*(long *)(param_6 + uVar5 * 8) + 0x10) != 0 &&
                   (iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,lVar3,param_7), iVar1 == 0)))) ||
                 (iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,lVar4,lVar4,lVar3,param_7),
                 iVar1 == 0)) goto LAB_100c41205;
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_4);
          }
          iVar1 = FUN_100c369b0(param_2,lVar4);
          uVar2 = (uint)(iVar1 != 0);
LAB_100c41205:
          FUN_100c36280(lVar3);
          if (lVar4 == 0) goto LAB_100c4121e;
        }
        FUN_100c36280(lVar4);
      }
    }
  }
  else {
    uVar2 = FUN_100c3a820(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
LAB_100c4121e:
  if (lVar6 != 0) {
    FUN_100c27ab0(lVar6);
  }
  return uVar2;
}

