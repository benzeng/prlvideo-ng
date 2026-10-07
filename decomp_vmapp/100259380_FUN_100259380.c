
void FUN_100259380(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  QMutex::lock();
  puVar2 = DAT_1011c37d0;
  while (puVar2 != &DAT_1011c37d8) {
    FUN_10025c560(puVar2[5]);
    puVar1 = (undefined8 *)puVar2[1];
    if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
      do {
        puVar1 = (undefined8 *)puVar2[2];
        bVar3 = (undefined8 *)*puVar1 != puVar2;
        puVar2 = puVar1;
      } while (bVar3);
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined8 *)*puVar2;
      } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    }
  }
  QMutex::unlock();
  return;
}

