
undefined4 FUN_1004af760(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  QMutex::lock();
  bVar2 = true;
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x88) != 3) {
      QMutex::unlock();
      uVar1 = FUN_1004b67c0(*(undefined8 *)(param_1 + 0xf0),param_2);
      bVar2 = false;
    }
  }
  else {
    uVar1 = 0xf0000000;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",3,
                    "Ignore SHOW_WINDOW request (%p) while not in Coherence Mode",param_2);
    }
  }
  if (bVar2) {
    QMutex::unlock();
  }
  return uVar1;
}

