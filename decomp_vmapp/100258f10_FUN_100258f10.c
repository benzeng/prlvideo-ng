
undefined8 * FUN_100258f10(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  QMutex::lock();
  lVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  if (DAT_1011c37d8 != (undefined8 *)0x0) {
    uVar6 = (long)(int)param_2[0xd] | lVar2 << 0x20;
    puVar4 = DAT_1011c37d8;
    puVar7 = &DAT_1011c37d8;
    do {
      while (puVar3 = puVar4, uVar6 <= (ulong)puVar3[4]) {
        puVar4 = (undefined8 *)*puVar3;
        puVar7 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_100258f90;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar7;
      puVar4 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_100258f90:
    if (((undefined8 **)puVar3 != &DAT_1011c37d8) && ((ulong)puVar3[4] <= uVar6)) {
      uVar5 = puVar3[5];
      puVar4 = operator_new(0x18);
      *puVar4 = &DAT_1011c37c8;
      puVar4[1] = uVar5;
      *(undefined4 *)(puVar4 + 2) = 0;
      QMutex::lock();
      *(undefined4 *)(puVar4 + 2) = 1;
      uVar5 = FUN_10025c710(puVar4);
      goto LAB_100259010;
    }
  }
  puVar4 = operator_new(0x18);
  *puVar4 = &DAT_1011c37c8;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  QMutex::lock();
  *(undefined4 *)(puVar4 + 2) = 1;
  uVar5 = FUN_10025c710(puVar4);
LAB_100259010:
  *param_1 = uVar5;
  QMutex::unlock();
  return param_1;
}

