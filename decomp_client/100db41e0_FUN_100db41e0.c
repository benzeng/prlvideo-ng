
undefined8 * FUN_100db41e0(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  QMutex::lock();
  if (DAT_1023119b0 == 0) {
    puVar2 = &DAT_1023119a0;
    DAT_1023119a0._0_4_ = 0x23119a0;
    DAT_1023119a0._4_4_ = 1;
    DAT_1023119a8 = &DAT_1023119a0;
  }
  else {
    puVar2 = (undefined8 *)CONCAT44(DAT_1023119a0._4_4_,(undefined4)DAT_1023119a0);
  }
  for (; puVar2 != &DAT_1023119a0; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 2) == param_1) goto LAB_100db42cb;
  }
  puVar2 = operator_new(0x38,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    FUN_100df99c0("","AbstractFile",0,"Error allocating disk [%u] descriptor for pool.",param_1);
  }
  else {
    *(int *)(puVar2 + 2) = param_1;
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    QMutex::QMutex((QMutex *)(puVar2 + 6),0);
    puVar2[4] = puVar2 + 4;
    puVar2[5] = puVar2 + 4;
    puVar1 = DAT_1023119a8;
    DAT_1023119a8 = puVar2;
    *puVar2 = &DAT_1023119a0;
    puVar2[1] = puVar1;
    *puVar1 = puVar2;
    DAT_1023119b0 = DAT_1023119b0 + 1;
  }
LAB_100db42cb:
  QMutex::unlock();
  return puVar2;
}

