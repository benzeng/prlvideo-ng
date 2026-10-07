
void * FUN_1004c7e00(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  lVar1 = QThreadStorageData::get();
  if (lVar1 == 0) {
    pvVar3 = operator_new(0x18);
    *(undefined8 *)((long)pvVar3 + 0x10) = 0;
    *(undefined8 *)((long)pvVar3 + 8) = 0;
    QThreadStorageData::set((void *)(param_1 + 8));
  }
  else {
    puVar2 = (undefined8 *)QThreadStorageData::get();
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)QThreadStorageData::set((void *)(param_1 + 8));
    }
    pvVar3 = (void *)*puVar2;
  }
  return pvVar3;
}

