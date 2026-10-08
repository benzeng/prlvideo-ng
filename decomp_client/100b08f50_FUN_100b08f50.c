
bool FUN_100b08f50(undefined8 param_1)

{
  char cVar1;
  undefined **local_30 [2];
  undefined8 local_20;
  
  FUN_100dd8ad0(local_30);
  local_30[0] = &PTR_FUN_10223b600;
  local_20 = param_1;
  cVar1 = FUN_100dd8bd0(local_30);
  if (cVar1 != '\0') {
    FUN_100dd8be0(local_30);
  }
  FUN_100dd8b30(local_30);
  return cVar1 != '\0';
}

