
bool FUN_100661050(undefined8 param_1)

{
  char cVar1;
  undefined **local_30 [2];
  undefined8 local_20;
  
  FUN_1007884d0(local_30);
  local_30[0] = &PTR_FUN_100bc9760;
  local_20 = param_1;
  cVar1 = FUN_1007885d0(local_30);
  if (cVar1 != '\0') {
    FUN_1007885e0(local_30);
  }
  FUN_100788530(local_30);
  return cVar1 != '\0';
}

