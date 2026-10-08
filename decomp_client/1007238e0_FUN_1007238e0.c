
void FUN_1007238e0(long param_1)

{
  undefined8 in_R9;
  long local_b0 [19];
  long *local_18;
  char *local_10;
  
  local_b0[0x11] = 0;
  local_b0[0x12] = 0;
  local_b0[0xf] = 0;
  local_b0[0x10] = 0;
  local_b0[0xd] = 0;
  local_b0[0xe] = 0;
  local_b0[0xb] = 0;
  local_b0[0xc] = 0;
  local_b0[9] = 0;
  local_b0[10] = 0;
  local_b0[7] = 0;
  local_b0[8] = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_18 = local_b0;
  local_10 = "CAppShortcutData*";
  local_b0[0] = param_1;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x28),"onAppKeyActionTriggered",2,0,0,in_R9,local_18,
             "CAppShortcutData*",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  return;
}

