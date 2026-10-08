
void FUN_1005d7ec0(long param_1)

{
  undefined8 in_R9;
  
  FUN_1005eca90();
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"initializePage",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,
             0,0,0,0,0,0,0);
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}

