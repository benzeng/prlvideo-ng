
undefined8 FUN_1008e3120(undefined8 param_1,undefined8 param_2,QVariant *param_3)

{
  uint uVar1;
  uint uVar2;
  int local_2c;
  QVariant local_28 [16];
  
  local_2c = FUN_1008e2f50();
  if (local_2c == -1) {
    return 0;
  }
  uVar2 = *(uint *)(param_3 + 8) & 0x3ffffff8;
  uVar1 = *(uint *)(param_3 + 8) & 0x40000000;
  if (uVar1 == 0) {
    if (uVar2 < 8) {
      *(undefined4 *)(param_3 + 8) = 2;
      *(int *)param_3 = local_2c;
      return 1;
    }
  }
  else if ((uVar2 < 8) && (*(int *)(*(undefined8 **)param_3 + 1) == 1)) {
    *(uint *)(param_3 + 8) = uVar1 | 2;
    *(int *)**(undefined8 **)param_3 = local_2c;
    return 1;
  }
  QVariant::QVariant(local_28,2,&local_2c,0);
  QVariant::operator=(param_3,local_28);
  QVariant::~QVariant(local_28);
  return 1;
}

