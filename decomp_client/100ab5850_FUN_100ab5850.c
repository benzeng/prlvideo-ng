
bool FUN_100ab5850(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  local_20 = param_2;
  local_18 = FUN_100beeba0(&local_18,&local_20,(long)param_3);
  if (local_18 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_100be9b10(param_1,local_18);
    FUN_100be8ab0(local_18);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

