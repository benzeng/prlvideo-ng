
bool FUN_100871010(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_100850af0();
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffff77 | 0x80;
  }
  lVar1 = FUN_100871080(param_1,param_2);
  *(long *)(param_1 + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffff77 | 8;
  }
  return lVar1 != 0;
}

