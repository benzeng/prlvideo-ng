
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100410bd0(long param_1,undefined8 param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  
  if (DAT_1011bbdb8 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1011bbdb8);
    if (iVar2 != 0) {
      _DAT_1011bbda8 = 0x8000000;
      _DAT_1011bbdac = 0;
      _DAT_1011bbdb0 = 0;
      ___cxa_guard_release(&DAT_1011bbdb8);
    }
  }
  uVar1 = *(uint *)(param_1 + 6);
  uVar3 = 0xffffffff;
  if (uVar1 != 0) {
    uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  if (uVar3 <= param_4) {
    uVar1 = *(uint *)(param_1 + 6);
    param_4 = 0xffffffff;
    if (uVar1 != 0) {
      param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    }
  }
  sVar4 = 0x10;
  if (param_4 < 0x11) {
    sVar4 = (ulong)param_4;
  }
  _memcpy(param_3,&DAT_1011bbda8,sVar4);
  return param_4;
}

