
undefined1 FUN_100cd4e80(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  QMutex::lock();
  if (DAT_102311918 == (long *)0x0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",2,"[CHIDHostHook] Grab mouse");
    }
    cVar1 = (**(code **)(*param_1 + 0x158))(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(param_1[0x68] + 0xf0) = 1;
      uVar2 = 1;
      DAT_102311918 = param_1;
    }
  }
  else {
    uVar2 = 0;
    if (DAT_102311918 != param_1) {
      FUN_100df99c0("","hid",0,"[CHIDHostHook] Bad instance for mouse grab (this: %p, owner: %p)",
                    param_1);
      uVar2 = 0;
    }
  }
  QMutex::unlock();
  return uVar2;
}

