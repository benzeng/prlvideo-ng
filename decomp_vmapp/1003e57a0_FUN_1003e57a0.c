
uint FUN_1003e57a0(long *param_1,QString *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  QString::operator=((QString *)(param_1 + 4),param_2);
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  uVar1 = FUN_1003e5830(param_1,param_2);
  *(uint *)((long)param_1 + 0x2c) = uVar1 >> 0x1f ^ 1;
  uVar2 = (**(code **)(*(long *)param_1[6] + 0xb0))();
  *(undefined4 *)((long)param_1 + 0xc4) = uVar2;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x100000002;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    *(undefined8 *)((long)param_1 + 0x84) = 0x100000000;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return uVar1;
}

