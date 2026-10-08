
void FUN_1007ec7d0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  
  uVar1 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar1,param_1 + 0x18);
  if (lVar3 != 0) {
    cVar2 = FUN_1001238f0(lVar3);
    if (*(char *)(param_1 + 0x3a) != cVar2) {
      *(char *)(param_1 + 0x3a) = cVar2;
      FUN_100867eb0(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

