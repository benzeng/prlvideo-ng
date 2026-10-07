
undefined8 FUN_10005bde0(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_40;
  uint local_3c;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CHostCEP has received a tg request which contains (%d) buffers",
                  *(undefined2 *)(param_2 + 0x16));
  }
  if (*(ushort *)(param_2 + 0x16) < 2) {
    uVar6 = 0xf0000003;
    if (DAT_1011b55f8 < 3) {
      return 0xf0000003;
    }
    pcVar3 = "CHostCEP received incorrect tg request";
    uVar4 = 3;
  }
  else {
    lVar1 = FUN_1002a6120(param_2,0,0);
    if (lVar1 == 0) {
      uVar6 = 0xf0000003;
      if (DAT_1011b55f8 < 1) {
        return 0xf0000003;
      }
      pcVar3 = "CEP tg request has empty buffer";
    }
    else {
      if (0xf < *(uint *)(lVar1 + 8)) {
        FUN_1002a5990(lVar1,0,&local_40,0x10);
        if (local_40 != 1) {
          return 0xf000001f;
        }
        uVar5 = (ulong)local_3c;
        if (0xa00000 < uVar5) {
          return 0xf0000003;
        }
        if (uVar5 + 0x10 <= (ulong)*(uint *)(lVar1 + 8)) {
          pvVar2 = _malloc(uVar5);
          if (pvVar2 == (void *)0x0) {
            return 0xf0000004;
          }
          FUN_1002a5990(lVar1,0x10,pvVar2,uVar5);
          FUN_10005bf60(*(undefined8 *)(param_1 + 0x40),pvVar2,uVar5);
          return 0;
        }
      }
      uVar6 = 0xf0000009;
      if (DAT_1011b55f8 < 1) {
        return 0xf0000009;
      }
      pcVar3 = "tg buffer is broken";
    }
    uVar4 = 1;
  }
  FUN_1008e3970("","vm",uVar4,pcVar3);
  return uVar6;
}

