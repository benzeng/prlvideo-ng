
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100406ec0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  QMutex::lock();
  puVar2 = DAT_1011bbd28;
  while (puVar2 != &DAT_1011bbd30) {
    (**(code **)(*(long *)puVar2[5] + 0x10))();
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
  FUN_1004085c0(&DAT_1011bbd28,DAT_1011bbd30);
  _DAT_1011bbd38 = 0;
  DAT_1011bbd28 = &DAT_1011bbd30;
  DAT_1011bbd30 = 0;
  puVar2 = DAT_1011bbd40;
  while (puVar2 != &DAT_1011bbd48) {
    (**(code **)(*(long *)puVar2[5] + 0x88))();
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
  FUN_100408540(&DAT_1011bbd40,DAT_1011bbd48);
  _DAT_1011bbd50 = 0;
  DAT_1011bbd40 = &DAT_1011bbd48;
  DAT_1011bbd48 = 0;
  puVar2 = DAT_1011bbd58;
  while (puVar2 != &DAT_1011bbd60) {
    if ((long *)puVar2[5] != (long *)0x0) {
      (**(code **)(*(long *)puVar2[5] + 8))();
    }
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
  FUN_1004084c0(&DAT_1011bbd58,DAT_1011bbd60);
  _DAT_1011bbd68 = 0;
  DAT_1011bbd58 = &DAT_1011bbd60;
  DAT_1011bbd60 = 0;
  puVar2 = DAT_1011bbd70;
  while (puVar2 != &DAT_1011bbd78) {
    (**(code **)(*(long *)puVar2[5] + 0x10))();
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
  FUN_100408440(&DAT_1011bbd70,DAT_1011bbd78);
  _DAT_1011bbd80 = 0;
  DAT_1011bbd70 = &DAT_1011bbd78;
  DAT_1011bbd78 = 0;
  puVar2 = DAT_1011bbd88;
  while (puVar2 != &DAT_1011bbd90) {
    _close(*(int *)(puVar2 + 5));
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
  return 0;
}

