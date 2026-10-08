
uint FUN_100a50890(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  
  lVar3 = _CFDictionaryGetValue(param_1,*(undefined8 *)PTR__kSecAttrType_1021e1b58);
  uVar2 = 0;
  if (lVar3 != 0) {
    _CFNumberGetValue(lVar3,3,&local_c);
    uVar1 = local_c & 0xff;
    uVar2 = uVar1 - 0x41;
    if (0x19 < uVar1 - 0x41) {
      if (uVar1 - 0x61 < 0x1a) {
        uVar2 = uVar1 - 0x47;
      }
      else if (uVar1 - 0x30 < 10) {
        uVar2 = uVar1 + 4;
      }
      else {
        uVar5 = 0x3f;
        if (uVar1 != 0x2f) {
          uVar5 = 0;
        }
        uVar2 = 0x3e;
        if (uVar1 != 0x2b) {
          uVar2 = uVar5;
        }
      }
    }
    uVar5 = local_c >> 8 & 0xff;
    uVar1 = uVar5 - 0x41;
    if (0x19 < uVar5 - 0x41) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar1 = uVar5 - 0x47;
      }
      else if (uVar5 - 0x30 < 10) {
        uVar1 = uVar5 + 4;
      }
      else {
        uVar4 = 0x3f;
        if (uVar5 != 0x2f) {
          uVar4 = 0;
        }
        uVar1 = 0x3e;
        if (uVar5 != 0x2b) {
          uVar1 = uVar4;
        }
      }
    }
    uVar4 = local_c >> 0x10 & 0xff;
    uVar5 = uVar4 - 0x41;
    if (0x19 < uVar4 - 0x41) {
      if (uVar4 - 0x61 < 0x1a) {
        uVar5 = uVar4 - 0x47;
      }
      else if (uVar4 - 0x30 < 10) {
        uVar5 = uVar4 + 4;
      }
      else {
        uVar6 = 0x3f;
        if (uVar4 != 0x2f) {
          uVar6 = 0;
        }
        uVar5 = 0x3e;
        if (uVar4 != 0x2b) {
          uVar5 = uVar6;
        }
      }
    }
    local_c = local_c >> 0x18;
    uVar4 = local_c - 0x41;
    if (0x19 < local_c - 0x41) {
      if (local_c - 0x61 < 0x1a) {
        uVar4 = local_c - 0x47;
      }
      else if (local_c - 0x30 < 10) {
        uVar4 = local_c + 4;
      }
      else {
        uVar6 = 0x3f;
        if (local_c != 0x2f) {
          uVar6 = 0;
        }
        uVar4 = 0x3e;
        if (local_c != 0x2b) {
          uVar4 = uVar6;
        }
      }
    }
    uVar2 = uVar1 << 6 | uVar2 | uVar5 << 0xc | uVar4 << 0x12;
  }
  return uVar2;
}

