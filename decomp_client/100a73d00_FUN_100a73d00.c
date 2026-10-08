
void FUN_100a73d00(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &DAT_1022817d8;
  puVar2 = operator_new(4);
  *puVar2 = 0x14;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar3 == (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = puVar2;
    *puVar3 = &PTR_FUN_102281810;
  }
  param_1[1] = puVar3;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  param_1[3] = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar1 = *param_5;
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_100a6c780(param_1 + 6,param_2);
  if ((param_1[5] != 0) && (lVar1 = *(long *)(param_1[5] + 0x10), lVar1 != 0)) {
    QString::operator=((QString *)(param_1 + 3),(QString *)(lVar1 + 8));
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(long *)(param_1[5] + 0x10) + 0x10);
  }
  return;
}

