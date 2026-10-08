
undefined8 FUN_100c63660(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100c63000();
  iVar1 = *(int *)(lVar2 + 0x254);
  uVar3 = 0;
  if (iVar1 != *(int *)(lVar2 + 0x250)) {
    uVar3 = *(undefined8 *)
             (lVar2 + 0x50 +
             (long)(int)((iVar1 + 1) -
                        (iVar1 + 1 + ((uint)(iVar1 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0)) * 8);
  }
  return uVar3;
}

