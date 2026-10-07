
int FUN_1002592b0(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  QMutex::lock();
  puVar3 = DAT_1011c37d0;
  do {
    iVar2 = 0;
    if (puVar3 == &DAT_1011c37d8) break;
    puVar4 = puVar3;
    puVar1 = (undefined8 *)puVar3[1];
    if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
      do {
        puVar5 = (undefined8 *)puVar4[2];
        bVar6 = (undefined8 *)*puVar5 != puVar4;
        puVar4 = puVar5;
      } while (bVar6);
    }
    else {
      do {
        puVar5 = puVar1;
        puVar1 = (undefined8 *)*puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
    iVar2 = (*param_1)(puVar3[5],param_2);
    puVar3 = puVar5;
  } while (iVar2 == 0);
  QMutex::unlock();
  return iVar2;
}

