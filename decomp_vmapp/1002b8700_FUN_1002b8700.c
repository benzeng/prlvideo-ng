
undefined1 FUN_1002b8700(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 local_58 [24];
  long local_40;
  uint local_38;
  undefined1 local_34;
  
  lVar5 = *(long *)(param_1 + 0x38);
  lVar3 = QThread::currentThreadId();
  if (lVar5 == lVar3) {
    if (param_2 < 0x2f) {
      if (param_2 < 0x20) {
        plVar4 = (long *)(param_1 + 0x2e8);
      }
      else {
        plVar4 = (long *)(param_1 + 0x2f0);
      }
    }
    else {
      plVar4 = (long *)(param_1 + 0x2f8);
    }
    local_34 = 0;
    if (*plVar4 != 0) {
      lVar5 = 3;
      if (param_2 < 0x2f) {
        lVar5 = (ulong)(0x1f < param_2) + 1;
      }
      if ((*(uint *)(&DAT_100b381c0 + lVar5 * 4) & *(uint *)(param_1 + 0x2a8)) == 0) {
        FUN_10051b1b0(param_1 + 0x2a0,&DAT_1011c4ab8 + (ulong)param_2 * 6);
        if (param_2 < 0x2f) {
          if (param_2 < 0x20) {
            puVar6 = (undefined8 *)(param_1 + 0x2e8);
          }
          else {
            puVar6 = (undefined8 *)(param_1 + 0x2f0);
          }
        }
        else {
          puVar6 = (undefined8 *)(param_1 + 0x2f8);
        }
        iVar2 = (**(code **)(*(long *)*puVar6 + 0x28))
                          ((long *)*puVar6,&DAT_1011c4ab8 + (ulong)param_2 * 6);
        local_34 = 0;
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + -1;
          local_34 = 1;
        }
      }
    }
  }
  else {
    local_34 = 1;
    local_40 = param_1;
    local_38 = param_2;
    cVar1 = FUN_100258250(param_1,local_58);
    if (cVar1 == '\0') {
      FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","rc","../Usb/AppUsb.cpp",0x7f7,
                    "DisconnectFromGuest");
    }
  }
  return local_34;
}

