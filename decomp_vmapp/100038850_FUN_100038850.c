
bool FUN_100038850(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 local_34;
  undefined1 local_30 [32];
  
  local_34 = 5;
  iVar1 = FUN_10078cca0(local_30,0x50);
  if (iVar1 == 0) {
    iVar1 = FUN_10078cd90(local_30,&local_34,4,0x200d);
    bVar2 = iVar1 == 0;
    if (bVar2) {
      FUN_100038080(param_1,local_30,0);
    }
    FUN_10078cf00(local_30);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

