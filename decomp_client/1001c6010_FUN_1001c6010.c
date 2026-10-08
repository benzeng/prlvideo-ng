
undefined8 FUN_1001c6010(byte param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  bool bVar11;
  
  iVar3 = (**(code **)(*DAT_102312120 + 0x40))(DAT_102312120,(uint)param_1);
  if (iVar3 != 0) {
    if (iVar3 != -0x1ffffd3b) {
      FUN_100df99c0("AIRCTL","prl_client_app",0,"Failed to open \"%s\" device, ioerr=0x%x",
                    "AppleIRController",iVar3);
      return 0xffffffff;
    }
    iVar3 = (uint)param_1 * 3;
    uVar10 = 0xfffffffe;
    if ((iVar3 <= DAT_10230ffd0) || (param_1 == 0)) {
      FUN_100df99c0("AIRCTL","prl_client_app",iVar3,
                    "Failed to gain exclusive access to \"%s\" device","AppleIRController");
    }
    goto LAB_1001c63a4;
  }
  DAT_102312128 = (long *)(**(code **)(*DAT_102312120 + 0x80))();
  if (DAT_102312128 == (long *)0x0) {
    uVar10 = 0xffffffff;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,"IOHIDDeviceInterface122::allocQueue() err");
    }
    goto LAB_1001c63a4;
  }
  uVar4 = (**(code **)(*DAT_102312128 + 0x40))(DAT_102312128,0,0x10);
  if (DAT_102312128 == (long *)0x0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,"IOHIDQueueInterface::create() err %#x",uVar4);
    }
  }
  else {
    lVar7 = *DAT_102312128;
    puVar5 = DAT_1023120e0;
    if (DAT_1023120e0 != &DAT_1023120e8) {
      do {
        cVar2 = (**(code **)(lVar7 + 0x60))(DAT_102312128,*(undefined4 *)(puVar5 + 4));
        if (cVar2 == '\0') {
          (**(code **)(*DAT_102312128 + 0x50))(DAT_102312128,*(undefined4 *)(puVar5 + 4),0);
        }
        else if (1 < DAT_10230ffd0) {
          FUN_100df99c0("AIRCTL","prl_client_app",2,
                        "Element already added to queue, cookie=0x%x, page=0x%x(%i), usage=0x%x(%i)"
                        ,*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 6),
                        *(undefined4 *)(puVar5 + 6),*(undefined4 *)(puVar5 + 7),
                        *(undefined4 *)(puVar5 + 7));
        }
        puVar1 = (undefined8 *)puVar5[1];
        if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
          do {
            puVar9 = (undefined8 *)puVar5[2];
            bVar11 = (undefined8 *)*puVar9 != puVar5;
            puVar5 = puVar9;
          } while (bVar11);
        }
        else {
          do {
            puVar9 = puVar1;
            puVar1 = (undefined8 *)*puVar9;
          } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
        }
        lVar7 = *DAT_102312128;
        puVar5 = puVar9;
      } while (puVar9 != &DAT_1023120e8);
    }
    iVar3 = (**(code **)(lVar7 + 0x20))(DAT_102312128,&DAT_102312168);
    if (iVar3 == 0) {
      uVar6 = _CFRunLoopGetCurrent();
      uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950;
      _CFRunLoopAddSource(uVar6,DAT_102312168,uVar10);
      iVar3 = (**(code **)(*DAT_102312128 + 0x80))(DAT_102312128,FUN_1001c70c0,0,0);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*DAT_102312128 + 0x68))();
        if (iVar3 == 0) {
          DAT_1023120fb = 1;
          if (DAT_10230ffd0 < 3) {
            DAT_1023120fb = 1;
            return 0;
          }
          FUN_100df99c0("AIRCTL","prl_client_app",3,"AIRC opened");
          return 0;
        }
        if (0 < DAT_10230ffd0) {
          pcVar8 = "IOHIDQueueInterface::start() err %#x";
          goto LAB_1001c6352;
        }
      }
      else if (0 < DAT_10230ffd0) {
        pcVar8 = "IOHIDQueueInterface::setEventCallout() err %#x";
LAB_1001c6352:
        FUN_100df99c0("AIRCTL","prl_client_app",1,pcVar8,iVar3);
      }
      uVar6 = _CFRunLoopGetCurrent();
      _CFRunLoopRemoveSource(uVar6,DAT_102312168,uVar10);
      _CFRelease(DAT_102312168);
    }
    else if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,
                    "IOHIDQueueInterface::createAsyncEventSource() err %#x",iVar3);
    }
    (**(code **)(*DAT_102312128 + 0x48))();
  }
  (**(code **)(*DAT_102312128 + 0x18))();
  uVar10 = 0xffffffff;
LAB_1001c63a4:
  (**(code **)(*DAT_102312120 + 0x48))();
  return uVar10;
}

