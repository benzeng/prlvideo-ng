
undefined8 FUN_100431490(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_2[2];
  if (iVar1 < *param_2) {
    uVar2 = 0;
  }
  else if (param_2[3] < param_2[1]) {
    uVar2 = 0;
  }
  else if ((((*(int *)(param_1 + 0x28) != *param_2) || (*(int *)(param_1 + 0x30) != iVar1)) ||
           (*(int *)(param_1 + 0x2c) != param_2[1])) ||
          (uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1),
          *(int *)(param_1 + 0x34) != param_2[3])) {
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = CONCAT71((int7)((ulong)(param_1 + 0x28) >> 8),1);
  }
  return uVar2;
}

