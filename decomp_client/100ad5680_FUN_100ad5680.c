
undefined8 FUN_100ad5680(long param_1,int *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  plVar2 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar5 = (*(int *)(lVar1 + 0x30) + *(int *)(lVar1 + 0x28)) / 2;
    iVar4 = *(int *)(lVar1 + 0x34) + *(int *)(lVar1 + 0x2c);
    *param_2 = iVar5;
    param_2[1] = iVar4 / 2;
    param_2[2] = iVar5;
    param_2[3] = iVar4 / 2;
    uVar3 = CONCAT71((uint7)(uint3)(iVar4 - (iVar4 >> 0x1f) >> 9),1);
  }
  return uVar3;
}

