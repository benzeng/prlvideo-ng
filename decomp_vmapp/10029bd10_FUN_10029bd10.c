
void FUN_10029bd10(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 extraout_RDX;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  bVar1 = cVar2 == '\0';
  FUN_100409c60(*(undefined1 *)(param_1 + 0x18),bVar1,extraout_RDX,bVar1);
  FUN_100409820(param_1 + 8,*(undefined1 *)(param_1 + 0x18));
  return;
}

