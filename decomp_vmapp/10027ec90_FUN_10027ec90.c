
undefined1 FUN_10027ec90(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint *puVar8;
  QHostAddress local_40 [8];
  uint *local_38;
  
  *param_1 = 0xffffffff;
  local_38 = (uint *)PTR_shared_null_100ba2188;
  iVar3 = FUN_1006cd760(&local_38,0);
  if (iVar3 < 0) {
    uVar7 = 0;
  }
  else {
    if (1 < *local_38) {
      FUN_10027f000(&local_38,local_38[1]);
    }
    puVar8 = local_38 + (long)(int)local_38[2] * 2 + 4;
    while( true ) {
      if (1 < *local_38) {
        FUN_10027f000(&local_38,local_38[1]);
      }
      uVar7 = 1;
      if (puVar8 == local_38 + (long)(int)local_38[3] * 2 + 4) break;
      QHostAddress::QHostAddress(local_40,(QString *)(*(long *)puVar8 + 8));
      uVar4 = QHostAddress::toIPv4Address();
      uVar6 = (uVar4 << 0x18 ^ *param_1) * 2;
      uVar1 = uVar6 ^ 0x4c11db7;
      if (-1 < (int)(uVar4 << 0x18 ^ *param_1)) {
        uVar1 = uVar6;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar5 = (uVar4 & 0xff00) << 0x10;
      uVar2 = (uVar6 ^ uVar5) * 2;
      uVar1 = uVar2 ^ 0x4c11db7;
      if (-1 < (int)(uVar5 ^ uVar6)) {
        uVar1 = uVar2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar5 = (uVar4 & 0xff0000) << 8;
      uVar2 = (uVar6 ^ uVar5) * 2;
      uVar1 = uVar2 ^ 0x4c11db7;
      if (-1 < (int)(uVar5 ^ uVar6)) {
        uVar1 = uVar2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar2 = (uVar6 ^ uVar4 & 0xff000000) * 2;
      uVar1 = uVar2 ^ 0x4c11db7;
      if (-1 < (int)(uVar4 & 0xff000000 ^ uVar6)) {
        uVar1 = uVar2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      uVar1 = uVar6 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6 * 2;
      }
      uVar6 = uVar1 * 2 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar6 = uVar1 * 2;
      }
      *param_1 = uVar6;
      QHostAddress::~QHostAddress(local_40);
      puVar8 = puVar8 + 2;
    }
  }
  FUN_10064f8a0(&local_38);
  return uVar7;
}

