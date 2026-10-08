
void FUN_1002b5ab0(long *param_1)

{
  char cVar1;
  undefined1 local_20 [8];
  
  CSpotlightWrapper::getFoundPaths();
  FUN_1002b50c0(param_1,local_20);
  FUN_100039a80(local_20);
  cVar1 = FUN_1002b5450(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

