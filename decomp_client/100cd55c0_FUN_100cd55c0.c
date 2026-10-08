
undefined1 FUN_100cd55c0(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  
  QMutex::lock();
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
      puVar3 = (undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
      do {
        cVar2 = (**(code **)(*param_2 + 0x68))(param_2,*puVar3);
        uVar4 = 1;
        if (cVar2 != '\0') goto LAB_100cd5630;
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined8 *)
                         (*(long *)(param_1 + 0x20) + 0x10 +
                         (long)*(int *)(*(long *)(param_1 + 0x20) + 0xc) * 8));
    }
  }
  uVar4 = 0;
LAB_100cd5630:
  QMutex::unlock();
  return uVar4;
}

