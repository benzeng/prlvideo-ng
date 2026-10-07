
undefined8 * FUN_1007090b0(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  QMutex::lock();
  if (DAT_1011ccb20 == 0) {
    puVar2 = &DAT_1011ccb10;
    DAT_1011ccb10._0_4_ = 0x11ccb10;
    DAT_1011ccb10._4_4_ = 1;
    DAT_1011ccb18 = &DAT_1011ccb10;
  }
  else {
    puVar2 = (undefined8 *)CONCAT44(DAT_1011ccb10._4_4_,(undefined4)DAT_1011ccb10);
  }
  for (; puVar2 != &DAT_1011ccb10; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 2) == param_1) goto LAB_10070919b;
  }
  puVar2 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    FUN_1008e3970("","AbstractFile",0,"Error allocating disk [%u] descriptor for pool.",param_1);
  }
  else {
    *(int *)(puVar2 + 2) = param_1;
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    QMutex::QMutex((QMutex *)(puVar2 + 6),0);
    puVar2[4] = puVar2 + 4;
    puVar2[5] = puVar2 + 4;
    puVar1 = DAT_1011ccb18;
    DAT_1011ccb18 = puVar2;
    *puVar2 = &DAT_1011ccb10;
    puVar2[1] = puVar1;
    *puVar1 = puVar2;
    DAT_1011ccb20 = DAT_1011ccb20 + 1;
  }
LAB_10070919b:
  QMutex::unlock();
  return puVar2;
}

