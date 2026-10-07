
long FUN_1008cfac0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_10081ddd0(0x20,"conf_def.c",0x85);
  if (lVar2 != 0) {
    iVar1 = (**(code **)(param_1 + 0x10))(lVar2);
    if (iVar1 == 0) {
      FUN_10081e1a0(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}

