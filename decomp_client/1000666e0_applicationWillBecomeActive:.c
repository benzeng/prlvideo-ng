
/* Function Stack Size: 0x18 bytes */

void CMacCocoaApplicationDelegate::applicationWillBecomeActive_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 in_R9;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  char *local_10;
  
  local_a9 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_18 = &local_a9;
  local_10 = "bool";
  local_28 = 0;
  uStack_20 = 0;
  cVar1 = QMetaObject::invokeMethod
                    (*(undefined8 *)PTR_self_1021e1388,"activeStateWillChange",0,0,0,in_R9,local_18,
                     "bool",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invoked",
                  "Application/CApplication_mac.mm",0x1da,
                  "-[CMacCocoaApplicationDelegate applicationWillBecomeActive:]");
  }
  return;
}

