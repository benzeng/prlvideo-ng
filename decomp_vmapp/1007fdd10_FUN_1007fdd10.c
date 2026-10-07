
undefined8 FUN_1007fdd10(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1[0x12] == param_2) {
    **(undefined1 **)(*(long *)(param_1 + 0x14) + 8) = 1;
    param_1[0x18] = 1;
    param_1[0x19] = 0;
    param_1[0x12] = param_3;
    uVar2 = 1;
    lVar4 = 0;
  }
  else {
    uVar2 = param_1[0x18];
    lVar4 = (long)(int)param_1[0x19];
  }
  iVar1 = FUN_1007fb950(param_1,0x14,lVar4 + *(long *)(*(long *)(param_1 + 0x14) + 8),uVar2);
  uVar5 = 0xffffffff;
  if (-1 < iVar1) {
    iVar3 = param_1[0x18] - iVar1;
    if (iVar3 == 0) {
      uVar5 = 1;
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        uVar5 = 1;
        (**(code **)(param_1 + 0x26))
                  (1,*param_1,0x14,*(undefined8 *)(*(long *)(param_1 + 0x14) + 8),
                   (long)iVar1 + (long)(int)param_1[0x19],param_1,*(undefined8 *)(param_1 + 0x28));
      }
    }
    else {
      param_1[0x19] = param_1[0x19] + iVar1;
      param_1[0x18] = iVar3;
      uVar5 = 0;
    }
  }
  return uVar5;
}

