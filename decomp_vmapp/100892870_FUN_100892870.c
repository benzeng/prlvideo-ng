
long FUN_100892870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  iVar2 = (int)param_2;
  if (iVar2 < 0x65) {
    if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x18) == 0) {
        return 0;
      }
      iVar2 = FUN_10088a720(puVar1,*puVar1,0);
      if (iVar2 < 1) {
        return (long)iVar2;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      param_2 = 1;
      goto LAB_10089299c;
    }
    if (iVar2 == 0xc) {
      iVar2 = FUN_10088ab60(param_4[6],puVar1);
      if (iVar2 == 0) {
        return 0;
      }
LAB_10089298a:
      *(undefined4 *)(param_1 + 0x18) = 1;
      return 1;
    }
  }
  else if (iVar2 < 0x94) {
    if (iVar2 < 0x70) {
      if (iVar2 == 0x65) {
        FUN_10087d610(param_1,0xf);
        lVar3 = FUN_10087db60(*(undefined8 *)(param_1 + 0x38),0x65,param_3,param_4);
        FUN_10087e580(param_1);
        return lVar3;
      }
      if (iVar2 == 0x6f) {
        iVar2 = FUN_10088a720(puVar1,param_4,0);
        if (iVar2 < 1) {
          return (long)iVar2;
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
        return (long)iVar2;
      }
    }
    else {
      if (iVar2 == 0x70) {
        if (*(int *)(param_1 + 0x18) == 0) {
          return 0;
        }
        *param_4 = *puVar1;
        return 1;
      }
      if (iVar2 == 0x78) {
        *param_4 = puVar1;
        goto LAB_10089298a;
      }
    }
  }
  else if (iVar2 == 0x94) {
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    *(undefined8 **)(param_1 + 0x30) = param_4;
    return 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
LAB_10089299c:
  lVar3 = FUN_10087db60(uVar4,param_2,param_3,param_4);
  return lVar3;
}

