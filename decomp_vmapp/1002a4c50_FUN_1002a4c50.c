
void FUN_1002a4c50(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    do {
      QMutex::lock();
      QWaitCondition::wait((QMutex *)(param_1 + 0xc30),param_1 + 0xc28);
      QMutex::unlock();
      uVar1 = *(uint *)(param_1 + 0xc20);
      uVar3 = 0;
      puVar2 = (undefined1 *)(param_1 + 0x29);
      if (uVar1 != 0) {
        do {
          if (puVar2[-1] != '\0') {
            FUN_100430ed0(*(undefined8 *)(DAT_1011c3698 + 0xf0),*(undefined4 *)(puVar2 + -9),
                          *(undefined4 *)(puVar2 + -5));
            *puVar2 = puVar2[-1];
            puVar2[-1] = 0;
            uVar1 = *(uint *)(param_1 + 0xc20);
          }
          uVar3 = uVar3 + 1;
          puVar2 = puVar2 + 0xc;
        } while (uVar3 < uVar1);
      }
    } while (*(char *)(param_1 + 0x10) == '\0');
  }
  FUN_100430ed0(*(undefined8 *)(DAT_1011c3698 + 0xf0),0xffff,0xff,0xff);
  return;
}

