
undefined8 FUN_10072ec60(long *param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((param_2 != 0) && (lVar2 = FUN_10072d5c0(param_2,param_1 + 0xd), lVar2 == 0)) {
    return 0;
  }
  puVar4 = (undefined8 *)0x0;
  if (param_3 != 0 || param_4 != 0) {
    if (*(long *)(*param_1 + 0x120) == 0) {
      if ((param_3 != 0) && (lVar2 = FUN_10072d5c0(param_3,param_1 + 0x13), lVar2 == 0)) {
        return 0;
      }
      puVar4 = (undefined8 *)0x0;
      if (param_4 != 0) {
        lVar2 = FUN_10072d5c0(param_4,param_1 + 0x16);
        puVar4 = (undefined8 *)0x0;
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)0x0;
      if (param_5 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        *(undefined4 *)(puVar4 + 7) = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        param_5 = puVar4;
      }
      if (param_3 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_3,param_1 + 0x13,param_5);
        uVar3 = 0;
        if (iVar1 == 0) goto LAB_10072edd3;
      }
      if (param_4 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_4,param_1 + 0x16,param_5);
        uVar3 = 0;
        if (iVar1 == 0) goto LAB_10072edd3;
      }
    }
  }
  uVar3 = 1;
LAB_10072edd3:
  if (puVar4 != (undefined8 *)0x0) {
    FUN_100729fd0(puVar4);
  }
  return uVar3;
}

