
bool FUN_100c97ab0(long param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != 0) {
    iVar1 = FUN_100c8b0b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 2),*param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

