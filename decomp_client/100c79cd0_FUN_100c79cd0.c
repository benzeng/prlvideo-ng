
undefined8 FUN_100c79cd0(ulong param_1,ulong *param_2)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = *param_2;
  if ((uVar2 & 2) != 0) {
    bVar8 = true;
    if (param_1 < 0x80) {
      uVar7 = (uint)param_1;
      bVar8 = false;
      if (((uVar7 != 0x20) && (bVar8 = false, 9 < uVar7 - 0x30)) &&
         (0x19 < (uVar7 & 0xffffffdf) - 0x41)) {
        pvVar1 = _memchr("\'()+,-./:=?",uVar7,0xc);
        bVar8 = pvVar1 == (void *)0x0;
      }
    }
    if (bVar8) {
      uVar2 = uVar2 & 0xfffffffffffffffd;
    }
  }
  uVar5 = uVar2 & 0xffffffef;
  uVar4 = uVar2 & 0xffffffffffffffef;
  if ((uVar2 & 0x10) == 0) {
    uVar5 = uVar2 & 0xffffffff;
    uVar4 = uVar2;
  }
  if (param_1 < 0x80) {
    uVar5 = uVar2 & 0xffffffff;
    uVar4 = uVar2;
  }
  uVar6 = uVar4 & 0xfffffffffffffffb;
  uVar2 = uVar4 & 0xfffffffb;
  if ((uVar5 & 4) == 0) {
    uVar6 = uVar4;
    uVar2 = uVar5;
  }
  if (param_1 < 0x100) {
    uVar2 = uVar5;
    uVar6 = uVar4;
  }
  uVar5 = uVar6 & 0xfffffffffffff7ff;
  if ((uVar2 & 0x800) == 0) {
    uVar5 = uVar6;
  }
  if (param_1 < 0x10000) {
    uVar5 = uVar6;
  }
  uVar3 = 0xffffffff;
  if (uVar5 != 0) {
    *param_2 = uVar5;
    uVar3 = 1;
  }
  return uVar3;
}

