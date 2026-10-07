
undefined8 FUN_1000b3df0(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x1938) == 0) || (*(uint *)(param_1 + 0xa4) < 0xe)) {
    uVar2 = 0x80000009;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",1,"[SendVesaTrackPagesRequest] warning: monitor not ready");
    }
  }
  else {
    QMutex::lock();
    *(undefined8 *)(*(long *)(param_1 + 0x1938) + 0x3d818) = *param_2;
    FUN_1000acd00(param_1,0x200000,0,1);
    cVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x10990),param_1 + 0x10988);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x10998) == '\0') {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","vm",1,"[SendVesaTrackPagesRequest] warning: a request is lost (%u)",
                        *(undefined4 *)(param_1 + 0xa4));
        }
        *(undefined1 *)(param_1 + 0x10998) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x10998) != '\0') {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","vm",3,"[SendVesaTrackPagesRequest]: a request is processed (%u)",
                      *(undefined4 *)(param_1 + 0xa4));
      }
      *(undefined1 *)(param_1 + 0x10998) = 0;
    }
    QMutex::unlock();
    uVar2 = 0;
  }
  return uVar2;
}

