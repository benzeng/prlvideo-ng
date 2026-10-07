
undefined1 FUN_1007517b0(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 local_3c;
  long local_38;
  
  local_38 = -1;
  if ((((int)param_1[1] == 0) || (*(int *)((long)param_1 + 0xc) == 0)) || (param_1[6] != 0)) {
    pcVar4 = "CCompressionEngine::copy() invalid";
  }
  else {
    QMutex::lock();
    if ((DAT_1011ccb78 == '\0') &&
       (DAT_1011ccb78 = (**(code **)(*param_1 + 0x28))(param_1), DAT_1011ccb78 == '\0')) {
      FUN_1008e3970("","Compression",0,"CCompressionEngine::init_engine() failed");
      QMutex::unlock();
      return 0;
    }
    QMutex::unlock();
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((long)param_1 + 0xc));
    if (lVar3 != 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","Compression",2,"CCompressionEngine::copy()");
      }
      while( true ) {
        local_3c = *(undefined4 *)((long)param_1 + 0xc);
        cVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_38,&local_3c,lVar3);
        if ((cVar1 == '\0') && (local_38 != -1)) {
          pcVar4 = "CCompressionEngine::copy() failed to get source data";
          goto LAB_100751967;
        }
        if (local_38 == -1) break;
        cVar1 = (**(code **)(*param_3 + 0x18))(param_3,param_1,local_38,local_3c,lVar3);
        if (cVar1 == '\0') {
          pcVar4 = "CCompressionEngine::uncompress() failed to put uncompressed data";
LAB_100751967:
          uVar2 = 0;
          FUN_1008e3970("","Compression",0,pcVar4);
LAB_100751994:
          (**(code **)(*param_1 + 0x48))(param_1,lVar3);
          return uVar2;
        }
      }
      cVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*param_3 + 0x20))(param_3);
      }
      goto LAB_100751994;
    }
    pcVar4 = "CCompressionEngine::copy() failed to allocate buffer";
  }
  FUN_1008e3970("","Compression",0,pcVar4);
  return 0;
}

