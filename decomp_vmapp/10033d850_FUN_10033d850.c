
void FUN_10033d850(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  param_1[1] = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete((void *)param_1[2]);
  }
  param_1[2] = 0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  lVar2 = param_1[5];
  if (lVar2 != param_1[4]) {
    param_1[5] = (~((lVar2 + -8) - param_1[4]) & 0xfffffffffffffff8U) + lVar2;
  }
  lVar2 = param_1[8];
  if (lVar2 != param_1[7]) {
    param_1[8] = ~((ulong)((lVar2 + -0x7c) - param_1[7]) / 0x7c) * 0x7c + lVar2;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != param_1[10]) {
    param_1[0xb] = lVar2 + ~((ulong)((lVar2 + -0x14) - param_1[10]) / 0x14) * 0x14;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != param_1[0xd]) {
    param_1[0xe] = ~((ulong)((lVar2 + -0x44) - param_1[0xd]) / 0x44) * 0x44 + lVar2;
  }
  lVar2 = param_1[0x11];
  if (lVar2 != param_1[0x10]) {
    param_1[0x11] = (~((lVar2 + -8) - param_1[0x10]) & 0xfffffffffffffff8U) + lVar2;
  }
  lVar2 = param_1[0x13];
  lVar3 = param_1[0x14];
  while (lVar3 != lVar2) {
    param_1[0x14] = lVar3 + -0x10;
    puVar1 = (undefined8 *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
      lVar3 = param_1[0x14];
    }
  }
  lVar2 = param_1[0x16];
  lVar3 = param_1[0x17];
  while (lVar3 != lVar2) {
    param_1[0x17] = lVar3 + -0x10;
    puVar1 = (undefined8 *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
      lVar3 = param_1[0x17];
    }
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete((void *)param_1[0x19]);
  }
  param_1[0x19] = 0;
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete((void *)param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete((void *)param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete((void *)param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  return;
}

