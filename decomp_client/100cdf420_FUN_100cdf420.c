
undefined4 FUN_100cdf420(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong in_RAX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_38;
  
  if (DAT_102318780 == '\0') {
    local_38 = in_RAX;
    QMutex::lock();
    if (DAT_102318780 == '\0') {
      puVar6 = &DAT_101dafe30;
      uVar7 = 0;
      uVar8 = 0;
      do {
        local_38 = *puVar6 | uVar7;
        FUN_100cdf610(&DAT_102318760,&local_38);
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 0x100000000;
        puVar6 = puVar6 + 1;
      } while (uVar8 < 0xc1);
    }
    DAT_102318780 = '\x01';
    QMutex::unlock();
  }
  uVar3 = 0;
  if (DAT_102318768 != (undefined8 *)0x0) {
    puVar2 = DAT_102318768;
    puVar5 = &DAT_102318768;
    do {
      while (puVar4 = puVar2, param_1 <= *(int *)((long)puVar4 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_100cdf540;
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar5;
      puVar2 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_100cdf540:
    if (((undefined8 **)puVar4 != &DAT_102318768) && (*(int *)((long)puVar4 + 0x1c) <= param_1)) {
      uVar3 = *(undefined4 *)(puVar4 + 4);
    }
  }
  return uVar3;
}

