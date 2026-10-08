
bool FUN_100cd90a0(undefined1 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  bool bVar4;
  
  if (DAT_102311940 == 0) {
    bVar4 = false;
  }
  else if (*(int *)(DAT_102311940 + 0x28) < 0) {
    bVar4 = false;
    FUN_100df99c0("","hid",0,"[CHIDThread] Socket not valid");
  }
  else {
    *param_1 = 0;
    uVar2 = FUN_100dfa590();
    *(undefined4 *)(param_1 + 6) = uVar2;
    *(int *)(DAT_102311940 + 0x2c) = *(int *)(DAT_102311940 + 0x2c) + 1;
    QMutex::lock();
    *(undefined1 **)(DAT_102311940 + 0x38) = param_1;
    sVar3 = _write(*(int *)(DAT_102311940 + 0x28),param_1,0x26);
    if ((int)sVar3 == 0x26) {
      cVar1 = QWaitCondition::wait((QMutex *)(DAT_102311940 + 0x40),DAT_102311940 + 0x48);
      if (cVar1 == '\0') {
        bVar4 = false;
        FUN_100df99c0("","hid",0,"[CHIDThread][%d] Write timeout",
                      *(undefined4 *)(DAT_102311940 + 0x2c));
      }
      else {
        bVar4 = *(int *)(param_1 + 2) == 0;
      }
    }
    else {
      bVar4 = false;
      FUN_100df99c0("","hid",0,"[CHIDThread][%d] Write error %d/%ld",
                    *(undefined4 *)(DAT_102311940 + 0x2c),sVar3,0x26);
    }
    *(undefined8 *)(DAT_102311940 + 0x38) = 0;
    QMutex::unlock();
  }
  return bVar4;
}

