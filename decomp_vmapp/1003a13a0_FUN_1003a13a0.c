
void FUN_1003a13a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = (uint)((param_3 & 0xffffffff) >> 0x18);
  uVar1 = uVar2 & 0xf;
  uVar2 = uVar2 | 0xfffffff0;
  if (((param_3 & 0xffffffff) >> 0x18 & 8) == 0) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    pcVar3 = "d";
    if (0 < (int)uVar2) {
      pcVar3 = "x";
    }
    uVar2 = -uVar2;
    if ((param_3 & 0x8000000) == 0) {
      uVar2 = uVar1;
    }
    FUN_10038e8e0(param_2,"_%s%d",pcVar3,1 << ((byte)uVar2 & 0x1f));
  }
  if ((param_3 & 0x100000) != 0) {
    FUN_10038e8e0(param_2,"_sat");
  }
  if ((param_3 & 0x200000) != 0) {
    FUN_10038e8e0(param_2,"_pp");
  }
  if ((param_3 & 0x400000) == 0) {
    return;
  }
  FUN_10038e8e0(param_2,"_centroid");
  return;
}

