
undefined1 FUN_100cd5b90(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar4 = 1;
    if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
      puVar3 = (undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
      do {
        iVar2 = (**(code **)(*(long *)*puVar3 + 0xf8))();
        if (iVar2 == 1) {
          (**(code **)(*(long *)*puVar3 + 0x138))();
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x20) + 0x10 +
                         (long)*(int *)(*(long *)(param_1 + 0x20) + 0xc) * 8));
    }
  }
  QMutex::unlock();
  return uVar4;
}

