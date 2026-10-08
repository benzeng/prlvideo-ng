
void FUN_100caae10(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_100c61110(lVar1,FUN_100caae70,lVar1);
    FUN_100c610a0(*(undefined8 *)(param_1 + 0x10),FUN_100caae90);
    FUN_100c60b60(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

