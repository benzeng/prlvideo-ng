
bool FUN_1007fb890(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  iVar2 = FUN_1008d7b00(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(lVar1 + 0x140),0x4000,
                        *(undefined8 *)(lVar1 + 0x130),*(undefined4 *)(lVar1 + 0x124));
  if (-1 < iVar2) {
    *(int *)(lVar1 + 0x124) = iVar2;
    *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x140);
  }
  return -1 < iVar2;
}

