
void FUN_1007f9560(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  
  piVar2 = ___error();
  *piVar2 = 0;
  lVar4 = *(long *)(param_1 + 0x80);
  if (((*(int *)(lVar4 + 0x1dc) != 0) && (*(int *)(lVar4 + 0x104) == 0)) &&
     (*(int *)(lVar4 + 0x11c) == 0)) {
    uVar3 = FUN_10080ee80(param_1);
    if ((uVar3 & 0x3000) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0x3004;
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined4 *)(lVar4 + 0x1dc) = 0;
      *(int *)(lVar4 + 0x1e4) = *(int *)(lVar4 + 0x1e4) + 1;
      *(int *)(lVar4 + 0x1e0) = *(int *)(lVar4 + 0x1e0) + 1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x80);
    }
  }
  *(undefined4 *)(lVar4 + 0x1e8) = 1;
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x17,param_2,param_3,0);
  if ((iVar1 == -1) && (*(int *)(*(long *)(param_1 + 0x80) + 0x1e8) == 2)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x17,param_2,param_3,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x1e8) = 0;
  }
  return;
}

