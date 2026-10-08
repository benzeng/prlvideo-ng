
void FUN_100322530(long param_1)

{
  undefined8 in_R9;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) == *(int *)(*(long *)(param_1 + 0x10) + 8)) {
    QObject::deleteLater();
    return;
  }
  QMetaObject::invokeMethod
            (param_1,"invokeNext",2,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  return;
}

