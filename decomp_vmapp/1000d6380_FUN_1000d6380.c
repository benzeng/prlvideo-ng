
bool FUN_1000d6380(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,0);
    lVar1 = QIODevice::write((char *)param_1,param_2);
    bVar2 = lVar1 == 0x40;
  }
  return bVar2;
}

