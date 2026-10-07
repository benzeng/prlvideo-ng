
void FUN_1004b2230(long param_1)

{
  long in_RAX;
  bool bVar1;
  long local_28;
  
  local_28 = in_RAX;
  QMutex::lock();
  bVar1 = true;
  if ((*(int *)(*(long *)(param_1 + 0x120) + 4) != 0) && (*(int *)(param_1 + 0x88) == 3)) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "onFlickeringTimeout() enter into fullscreen Coherence mode");
    }
    local_28 = 0;
    FUN_1004b43e0(&local_28,7,0,0);
    if (local_28 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
    }
    bVar1 = false;
    QMutex::unlock();
    FUN_1004b6f50(*(undefined8 *)(param_1 + 0xf0));
  }
  if (bVar1) {
    QMutex::unlock();
  }
  return;
}

