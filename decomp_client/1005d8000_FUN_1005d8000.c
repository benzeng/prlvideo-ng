
void FUN_1005d8000(long param_1)

{
  undefined8 in_R9;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
    QMetaObject::invokeMethod
              (*(undefined8 *)(param_1 + 0x50),"initializeUserInfo",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,
               0,0,0,0,0,0,0,0,0,0);
  }
  return;
}

