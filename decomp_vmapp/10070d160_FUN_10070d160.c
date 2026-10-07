
void FUN_10070d160(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (((*(uint *)(param_2 + 8) & 0x4000) != 0) && (DAT_1011ccc18 != (code *)0x0)) {
    (*DAT_1011ccc18)(1,0x32,param_2 << 8);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    bVar4 = (*(byte *)(param_2 + 8) & 1) != 0;
    if (bVar4) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    uVar2 = (**(code **)(**(long **)(param_2 + 0x40) + 0x20))
                      (*(long **)(param_2 + 0x40),uVar3,1,!bVar4);
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (*(long *)(lVar1 + 0xb0) == 0) {
      *(long *)(lVar1 + 0xa8) = param_2;
    }
    else {
      *(long *)(*(long *)(lVar1 + 0xb0) + 0x20) = param_2;
    }
    *(long *)(lVar1 + 0xb0) = param_2;
    *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"!priv");
  FUN_10070aef0(param_2,0xe);
  return;
}

